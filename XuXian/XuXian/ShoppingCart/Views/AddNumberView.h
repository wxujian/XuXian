//
//  AddNumberView.h
//  XuXian
//
//  Created by 吴旭健 on 16/8/21.
//  Copyright © 2016年 Fxxx. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol AddNumberViewDelegate;


@interface AddNumberView : UIView



@property (strong, nonatomic) UIButton *jianBtn;
@property (strong, nonatomic) UIButton *addBtn;
@property (strong, nonatomic) UILabel *numberLab;

@property (nonatomic,copy) NSString *numberString;

@property (nonatomic,assign) id<AddNumberViewDelegate> delegate;

@end


@protocol AddNumberViewDelegate <NSObject>

@optional


- (void)deleteBtnAction:(UIButton *)sender addNumberView:(AddNumberView *)view;

- (void)addBtnAction:(UIButton *)sender addNumberView:(AddNumberView *)view;



@end
