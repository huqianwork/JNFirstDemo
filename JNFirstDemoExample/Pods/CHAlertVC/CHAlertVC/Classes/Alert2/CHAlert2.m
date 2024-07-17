//
//  CHAlert2.m
//  CHAlertVC
//
//  Created by Shannon on 2024/7/17.
//

#import "CHAlert2.h"

@implementation CHAlert2

+ (void)test {
    NSString *text = [NSString stringWithFormat:@"我是%u", arc4random() % 100];
    NSLog(@"%@", text);
}

@end
