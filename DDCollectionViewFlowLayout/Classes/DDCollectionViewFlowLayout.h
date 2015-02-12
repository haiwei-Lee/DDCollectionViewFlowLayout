//
//  DDCollectionViewFlowLayout.h
//  DDCollectionViewFlowLayout
//
//  Created by Diaoshu on 15-2-12.
//  Copyright (c) 2015年 DDKit. All rights reserved.
//

#import <UIKit/UIKit.h>

@class  DDCollectionViewFlowLayout;

@protocol DDCollectionViewFlowLayoutDelegate <UICollectionViewDelegateFlowLayout>

@required
/**
 *  number of column in section protocol delegate methods
 *
 *  @param collectionView collectionView
 *  @param layout         DDCollectionViewFlowLayout
 *  @param sectionIndex   section index
 *
 *  @return number of column
 */
- (NSInteger)collectionView:(UICollectionView *)collectionView
                     layout:(DDCollectionViewFlowLayout *)layout
   numberOfColumnsInSection:(NSInteger)section;

@end


@interface DDCollectionViewFlowLayout : UICollectionViewFlowLayout

@property (nonatomic, weak) id<DDCollectionViewFlowLayoutDelegate> delegate;

@end