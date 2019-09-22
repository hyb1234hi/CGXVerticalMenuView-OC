//
//  CGXVerticalMenuContainerView.h
//  CGXVerticalMenuView-OC
//
//  Created by MacMini-1 on 2019/9/20.
//  Copyright © 2019 CGX. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CGXVerticalMenuContainerCollectionView.h"
NS_ASSUME_NONNULL_BEGIN

@class CGXVerticalMenuContainerView;

@protocol CGXVerticalMenuContainerViewDataSouce<NSObject>

@optional

- (NSInteger)numberOfRowsInListContainerView:(CGXVerticalMenuContainerView *)listContainerView;

- (UIView *)verticalListContainerView:(CGXVerticalMenuContainerView *)listContainerView listViewInRow:(NSInteger)row;

@end

@protocol CGXVerticalMenuContainerViewDelegate<NSObject>

@optional

- (void)verticalListContainerView:(CGXVerticalMenuContainerView *)listContainerView willDisplayCellAtRow:(NSInteger)row;

- (void)verticalListContainerView:(CGXVerticalMenuContainerView *)listContainerView didEndDisplayingCellAtRow:(NSInteger)row;

@end


@interface CGXVerticalMenuContainerView : UIView


@property (nonatomic, weak) id<CGXVerticalMenuContainerViewDataSouce> dataSouce;

@property (nonatomic, weak) id<CGXVerticalMenuContainerViewDelegate> delegate;

// 滚动动画 默认NO
@property (nonatomic, assign) BOOL animated;
// 是否是点击滚动翻页的，为YES时 和 animated无效，无滚动动画
@property (nonatomic, assign) BOOL isClickScroll;

- (void)reloadDataToItemAtIndex:(NSInteger)integer;

@end

NS_ASSUME_NONNULL_END