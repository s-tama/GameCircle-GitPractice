//
// GameMain.h
//
#pragma once


// 定数の定義 ====================================================

#define SCREEN_WIDTH		(800)						// 画面幅
#define SCREEN_HEIGHT		(600)						// 画面高さ

#define SCREEN_TOP			(0)							// 画面上端
#define SCREEN_LEFT			(0)							// 画面左端
#define SCREEN_BOTTOM		(SCREEN_HEIGHT)				// 画面下端
#define SCREEN_RIGHT		(SCREEN_WIDTH)				// 画面右端

#define SCREEN_CENTER_X		(SCREEN_WIDTH / 2)			// 画面中央 X
#define SCREEN_CENTER_Y		(SCREEN_HEIGHT / 2)			// 画面中央 Y


// 関数の宣言 ====================================================

void Initialize(void);		// 初期化処理
void Update(void);			// 更新処理
void Render(void);			// 描画処理
void Finalize(void);		// 終了処理
