//
//  GameGearEmulator.h
//  
//
//  Created by 415 on 17/1/20.
//
//

#import <UIKit/UIKit.h>
#import "ConsoleEmulator.h"
@interface GameGearEmulator : ConsoleEmulator
//重载父类中的方法
-(void) loadInstructionsForCommand:(ConsoleCommand) command;
-(void) executeInstructions;
@end
