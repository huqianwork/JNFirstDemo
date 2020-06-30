//
//  AppDelegate.h
//  JNFirstDemoExample
//
//  Created by huqian on 2020/6/30.
//  Copyright © 2020 XZTecCom. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

