//
//  TouchConsoleController.m
//  BridgePattern
//
//  Created by 415 on 17/1/20.
//  Copyright © 2017年 415. All rights reserved.
//

#import "TouchConsoleController.h"
#import "ConsoleEmulator.h"

@implementation TouchConsoleController


-(void) up{

    [super setCommand:kConsoleCommandUp];

}


-(void) down{

    [super setCommand:kConsoleCommandDown];

}
-(void) left{
    
    [super setCommand:kConsoleCommandLeft];
    
}
-(void) right{
    
    [super setCommand:kConsoleCommandRight];
    
}
-(void) select{
    
    [super setCommand:kConsoleCommandSelect];
    
}
-(void) start{
    
    [super setCommand:kConsoleCommandStart];
    
}
-(void) action1{
    
    [super setCommand:kConsoleCommandAction1];
    
}
-(void) action2{
    
    [super setCommand:kConsoleCommandAction2];
    
}
@end
