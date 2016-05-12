//
//  ViewController.swift
//  trunghoc4
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
        guard let fileURL = NSBundle.mainBundle().URLForResource("trunghoc4", withExtension: "txt")
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
        currentCountTest++;
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
    func solve()
    {
        var sum0 = 0
        var sum1 = 0
        var min0 = 0
        var min1 = 0
        for (var i = 0; i < n; i++)
        {
            for (var j = 0; j < n; j++)
            {
                if (i == j)
                {
                    sum0 = sum0+s[i][j]
                    if (i == 0)
                    {
                        min0 = s[i][j]
                    }
                    else
                    {
                        min0 = min(min0, s[i][j])
                    }
                }
                
                if ( i+j == n-1 )
                {
                    sum1 = sum1 + s[i][j]
                    if (i == 0)
                    {
                        min1 = s[i][j]
                    }
                    else
                    
                    {
                        min1 = min(min1, s[i][j])
                    }
                }
            }
        }
        print("\(sum0) \(min0) \(sum1) \(min1)")
    }


}

