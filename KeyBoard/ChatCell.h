//
//  ChatCell.h
//  KeyBoard
//
//  Created by Shiwei on 16/5/6.
//  Copyright © 2016年 Shiwei. All rights reserved.
//  http://www.jianshu.com/u/be350860b931

#import <UIKit/UIKit.h>
#import "YYText.h"
#import "YYLabel.h"

@interface ChatCell : UITableViewCell
@property (strong, nonatomic) YYLabel *chatLabel;
- (void)setTheTextWithData:(NSMutableAttributedString *)attr;
@end
