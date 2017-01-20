//
//  ConsoleCommands.h
//  BridgePattern
//
//  Created by 415 on 17/1/18.
//  Copyright © 2017年 415. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ConsoleCommands : NSObject

//将emulator的命令定义成一组command
typedef enum{

    kConsoleCommandUp,
    kConsoleCommandDown,
    kConsoleCommandLeft，
    kConsoleCommandRight,
    kConsoleCommandSelect,
    kConsoleCommandStart,
    kConsoleCommandAction1,
    kConsoleCommandAction2

} ConsoleCommand;
@end
