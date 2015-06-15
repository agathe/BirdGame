//
//  BouncingScene.h
//  Bouncing
//
//  Created by Seung Kyun Nam on 13. 7. 24..
//  Copyright (c) 2013년 Seung Kyun Nam. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>


@protocol SceneDelegate <NSObject>
- (void) eventStart;
- (void) eventPlay;
- (void) eventWasted;
@end


@interface GameScene : SKScene

@property (unsafe_unretained,nonatomic) id<SceneDelegate> delegate;

@property (nonatomic) NSInteger score;

- (void) startGame;


@end
