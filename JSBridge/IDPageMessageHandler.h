//
//  IDPageMessageHandler.h
//  IDWebViewJavaScriptBridge
//
//  Created by 王祥 on 2020/3/13.
//  Copyright © 2020 idaddy. All rights reserved.
//

#import "IDBaseMessageHandler.h"

NS_ASSUME_NONNULL_BEGIN

@protocol IDPageMessageHandlerProtocol <NSObject>

- (void)pageMessageHandler:(NSDictionary *)args;

@end

@interface IDPageMessageHandler : IDBaseMessageHandler
@property (nonatomic,weak) id <IDPageMessageHandlerProtocol> delegate;
@end

NS_ASSUME_NONNULL_END
