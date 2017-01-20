//
//  ConsoleEmulator.h
//  BridgePattern
//
//  Created by 415 on 17/1/18.
//  Copyright © 2017年 415. All rights reserved.
//
#import "ConsoleCommands.h"
#import <Foundation/Foundation.h>

@interface ConsoleEmulator : NSObject
{

}

-(void)loadInstructionsForCommand:(ConsoleCommand)command;
-(void)executeInstructions;

@end
