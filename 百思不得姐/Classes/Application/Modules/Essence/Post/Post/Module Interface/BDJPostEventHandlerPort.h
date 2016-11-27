//
//  BDJPostEventHandlerPort.h
//  百思不得姐
//
//  Created by 付星 on 2016/11/18.
//    Copyright © 2016年 yizzuide. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XFEventHandlerPort.h"

@class BDJPostPictureView;
@protocol BDJPostEventHandlerPort <XFEventHandlerPort>

- (void)didHeaderRefreshAction;
- (RACSignal *)didFooterRefreshAction;

- (void)didPictureViewClickAction:(BDJPostPictureView *)PictureView;
@end
