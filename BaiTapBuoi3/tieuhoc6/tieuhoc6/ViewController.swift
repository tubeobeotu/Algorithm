//
//  ViewController.swift
//  tieuhoc6
//
//  Created by Nguyễn Văn Tú on 5/12/16.
//  Copyright © 2016 Nguyễn Văn Tú. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    var n = 0
    var s = Array(count: 111, repeatedValue: 0)
    
    var myStrings = [String]()
    var currentCountTest = 0
    override func viewDidLoad() {
        super.viewDidLoad()
        guard let fileURL = NSBundle.mainBundle().URLForResource("tieuhoc6", withExtension: "txt")
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
                input()
                solve()
            }
        }
    }

    func input()
    {
        currentCountTest++
        n = Int(myStrings[currentCountTest])!
        for (var i = 0; i < n; i++)
        {
            currentCountTest++
            s[i] = Int(myStrings[currentCountTest])!
            
        }
    }
    func doCount(num: Int) -> Int
    {
        var dem = 0
        for (var i = 0; i < n; i++)
        {
            if(num == s[i])
            {
                dem++
            }
        }
        return dem
    }
    func solve()
    {
        var maxDem = 0
        var maxVal = 0
        
        for (var i = 0; i < n; i++)
        {
            let dem = doCount(s[i])
            if (dem > maxDem)
            {
                maxDem = dem
            }
            else if (dem == maxDem && s[i] >  maxVal)
            {
                maxVal = s[i]
            }
        }
        print("\(maxVal) \(maxDem)")
    }

}

