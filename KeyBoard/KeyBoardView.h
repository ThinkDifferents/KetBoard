//
//  KeyBoardView.h
//  KeyBoard
//
//  Created by Shiwei on 16/5/5.
//  Copyright © 2016年 Shiwei. All rights reserved.
//  http://www.jianshu.com/u/be350860b931

#import <UIKit/UIKit.h>
#import "FaceBoard.h"
#define SCREENWIDTH [UIScreen mainScreen].bounds.size.width
#define SCREENHEIGHT [UIScreen mainScreen].bounds.size.height
@interface KeyBoardView : UIView<UITextViewDelegate>
@property (nonatomic, strong) FaceBoard *faceBoard;//表情view
@property (nonatomic, strong) UIView *toolBar;
@property (nonatomic, strong) UITextView *textView;
@property (nonatomic, strong) UIButton *keyboardButton;
@property (nonatomic, strong) UIButton *sendButton;
@property (nonatomic, strong) UIImageView *keyboardImage;
@property (nonatomic, assign) id delegate;
@property (nonatomic, assign) BOOL isKeyBoardShow;
- (instancetype)initWithTheBGView:(UIView *)bgview;
//结束编辑 调用这个方法
- (void)keyboardResignFirstResponder;

@end


@protocol sendMessageDelegate <NSObject>

- (void)getTheMessage:(NSString *)text;

@optional
/**
 *  键盘将要弹出
 *
 *  @param boardHeight 键盘的高度
 */
- (void)theKeyBoardWillShowWithKeyBoardHeight:(CGFloat)boardHeight;
/**
 *  键盘将要影藏
 */
- (void)theKeyBoardDidHiden;

@end
