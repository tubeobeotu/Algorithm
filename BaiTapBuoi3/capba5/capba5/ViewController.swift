//
//  ViewController.swift
//  capba5
//
//  Created by Nguyễn Văn Tú on 5/12/16.
//  Copyright © 2016 Nguyễn Văn Tú. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    var stringA = NSString()
    var stringB = NSString()
    
    var currentCountTest = Int()
    var myStrings = [String]()
    override func viewDidLoad() {
        super.viewDidLoad()
        guard let fileURL = NSBundle.mainBundle().URLForResource("capba5", withExtension: "txt")
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
        stringA = myStrings[currentCountTest]
        currentCountTest++
        stringB = myStrings[currentCountTest]
    }
    func solve()
    {
        var dem = 0
        for (var i = 0; i < stringB.length; i++)
        {
            if (i + stringA.length > stringB.length)
            {
                break
            }
            let c = stringB.substringWithRange(NSRange(location: i, length: stringA.length))
            if (stringA == c)
            {
                dem++
            }
        }
        print(dem)
    }

}

