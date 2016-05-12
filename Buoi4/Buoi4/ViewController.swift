//
//  ViewController.swift
//  Buoi4
//
//  Created by Techmaster on 5/12/16.
//  Copyright © 2016 Techmaster. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    var currentCountTest = Int()
    var myStrings = [String]()
    override func viewDidLoad() {
        super.viewDidLoad()
        guard let fileURL = NSBundle.mainBundle().URLForResource("", withExtension: "txt")
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
//                input()
//                solve()
                //                output()
            }
        }
    }


}

