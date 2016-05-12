//
//  ViewController.swift
//  trunghoc11
//
//  Created by Nguyễn Văn Tú on 5/12/16.
//  Copyright © 2016 Nguyễn Văn Tú. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    var s = Array(count: 111, repeatedValue: Array(count: 111, repeatedValue: 0))
    var n = 0
    
    var currentCountTest = Int()
    var myStrings = [String]()
    override func viewDidLoad() {
        super.viewDidLoad()
        guard let fileURL = NSBundle.mainBundle().URLForResource("trunghoc11", withExtension: "txt")
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
//                output()
            }
        }
    }
    func input()
    {
        currentCountTest++
        n = Int(myStrings[currentCountTest])!
        for (var i = 0; i < n; i++)
        {
            for (var j = 0; j < n; j++)
            {
                currentCountTest++
                s[i][j] = Int(myStrings[currentCountTest])!
            }
        }
    }
    func checkDoiXungDoc() -> Bool
    {
        for (var i = 0; i < n; i++)
        {
            for (var j = 0; j < n/2; j++)
            {
                if (s[i][j] != s[i][n-j-1])
                {
                    return false
                }
            }
        }
        return true
    }
    func solve()
    {
        print("\(checkDoiXungDoc())")
    }

    


}

