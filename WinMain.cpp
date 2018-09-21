//
// WinMain.cpp
//

#include "DxLib.h"
#include "Game\GameMain.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	// ウインドウモードで起動
	ChangeWindowMode(TRUE);

	// 画面サイズの設定
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32);

	if (DxLib_Init() == -1)		// ＤＸライブラリ初期化処理
	{
		return -1;			// エラーが起きたら直ちに終了
	}

	// 描画先画面を裏画面にセット
	SetDrawScreen(DX_SCREEN_BACK);

	// 初期化処理
	Initialize();

	// メインループ
	while (!ProcessMessage() && !CheckHitKey(KEY_INPUT_ESCAPE))
	{
		Update();			// 更新処理
		Render();			// 描画処理

		ScreenFlip();		// 裏画面の内容を表画面に反映させる

		ClearDrawScreen();	// 画面を初期化する
	}
	
	Finalize();			// 終了処理

	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;				// ソフトの終了 
}