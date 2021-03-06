//
//  PlayerController.h
//  WtyMusicPlayer
//
//  Created by cassiopeia on 16/1/12.
//  Copyright © 2016年 cassiopeia. All rights reserved.
//

#import "BaseViewController.h"
#import "MusicModel.h"


@interface PlayerController : BaseViewController
@property (nonatomic, strong) MusicModel *musicModel;
@property (nonatomic, strong) NSMutableArray *musicAry;
@property (nonatomic, assign) NSInteger row;
+ (PlayerController *)sharedManager;

@end
