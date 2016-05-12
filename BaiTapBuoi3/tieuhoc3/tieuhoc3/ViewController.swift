//
//  ViewController.swift
//  tieuhoc3
//
//  Created by Nguyễn Văn Tú on 5/12/16.
//  Copyright © 2016 Nguyễn Văn Tú. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    var s = Array(count: 6, repeatedValue: 0)
    var x = Int()
    var kq = Array(count: 6, repeatedValue: 0)
    
    var myStrings = [String]()
    var currentCountTest = 0
    override func viewDidLoad() {
        super.viewDidLoad()
        guard let fileURL = NSBundle.mainBundle().URLForResource("tieuhoc3", withExtension: "txt")
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
                solve()
                output()
            }
        }
        
        
        
    }
    func input()
    {
        s[0] = 1
        s[1] = 5
        s[2] = 10
        s[3] = 20
        s[4] = 50
        if (currentCountTest == myStrings.count)
        {
            return
        }
        x = Int(myStrings[currentCountTest])!
        
    }
    func solve()
    {
        kq = Array(count: 6, repeatedValue: 0)
        for (var i = 4; i >= 0; i--)
        {
            kq[i] = x/s[i]
            x = x - kq[i]*s[i]
        }
    }
    func output()
    {
        for (var i = 0; i < 5; i++)
        {
            print("(\(s[i]))\(kq[i]) ", terminator:"")
        }
        print("")
    }


}

