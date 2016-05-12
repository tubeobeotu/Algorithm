//
//  ViewController.swift
//  tieuhoc5
//
//  Created by Nguyễn Văn Tú on 5/12/16.
//  Copyright © 2016 Nguyễn Văn Tú. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    var myStrings = [String]()
    var currentCountTest = 0
    
    var n = Int()
    var k = Int()
    var s = Array(count: 111, repeatedValue: 0)
    
    override func viewDidLoad() {
        super.viewDidLoad()
        guard let fileURL = NSBundle.mainBundle().URLForResource("tieuhoc5", withExtension: "txt")
            else
        {
            return
        }
        if let content = try? String(contentsOfURL: fileURL, encoding: NSUTF8StringEncoding)
        {
            myStrings = content.componentsSeparatedByCharactersInSet(NSCharacterSet.whitespaceAndNewlineCharacterSet())
            currentCountTest = 0
            let nTest = Int(myStrings[currentCountTest])
            
            for (var i = 0; i < nTest; i++)
            {
                currentCountTest++;
                input()
                let kq = solve()
                print("Test \(i + 1): \(kq)")
            }
        }
    }

    func input()
    {
        n = Int(myStrings[currentCountTest])!
        currentCountTest++
        k = Int(myStrings[currentCountTest])!
        for (var i = 0; i < n; i++)
        {
            currentCountTest++
            s[i] = Int(myStrings[currentCountTest])!
        }
    }
    
    //dem number < bao nhieu phan tu
    func doCount(num: Int) -> Int
    {
        var dem = 0
        for (var i = 0; i < n; i++)
        {
            if (num < s[i])
            {
                dem++
            }
        }
        return dem
    }
    func solve() -> Int
    {
        for (var i = 0; i < n; i++)
        {
            let dem = doCount(s[i])
            if (dem == k-1)
            {
                return s[i]
            }
        }
        return -1
    }

}

