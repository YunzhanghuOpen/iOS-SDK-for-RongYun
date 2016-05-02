//
//  RedpacketTakenMessageTipCell.h
//  RCloudMessage
//
//  Created by YANG HONGBO on 2016-4-27.
//  Copyright © 2016年 RongCloud. All rights reserved.
//

#import <RongIMKit/RongIMKit.h>
#define REDPACKET_TAKEN_MESSAGE_TOP_BOTTOM_PADDING 10

@interface RedpacketTakenMessageTipCell : RCMessageBaseCell
@property(strong, nonatomic) RCTipLabel *tipMessageLabel;
@property(strong, nonatomic) UIImageView *iconView;

+ (CGSize)sizeForModel:(RCMessageModel*)model;
@end