//
//  ConsoleController.h
//  
//
//  Created by 415 on 17/1/20.
//
//

#import <Foundation/Foundation.h>
#import "ConsoleEmulator.h"
#import "ConsoleCommand.h"


@interface ConsoleController : NSObject
{
@private
    ConsoleEmulator *emulator_;
}

@property (nonatomic,retain) ConsoleEmulator *emulator;

//用于向emulator_发送loadInstructionForCommand：command消息和executeInstructions消息
-(void)setCommand:(ConsoleCommand)command;
@end
