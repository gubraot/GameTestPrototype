#include "CharacterNameInput.h"
#include "resource1.h"

extern HINSTANCE hInst;
char   copystring[50];

//キャラ名設定ダイアログプロシージャ
BOOL CALLBACK NameEdit(HWND hDlg, UINT Msg, WPARAM wParam, LPARAM lParam){

	char string[14];

    switch(Msg)
    {
    case WM_COMMAND:
        switch(LOWORD(wParam))
        {
        case IDOK:
			GetDlgItemText(hDlg, IDC_EDIT1, string, 14);
            EndDialog(hDlg, 0);
			strcpy_s( copystring, string );
            return TRUE;
        }
        break;

    case WM_CLOSE:
        EndDialog(hDlg, 0);
        return TRUE;
    }

    return FALSE;
}

CharacterNameInput::CharacterNameInput(void) : InputWindow( 0, 0, 0, 0, 0 ){

}

CharacterNameInput::~CharacterNameInput(void){

}

void CharacterNameInput::calc(void){
	
}

void CharacterNameInput::draw(void){
	//二重の選択防止
	if( getInputResult() >= 0 ) return;

	SetMouseDispFlag( TRUE );
	SetUseIMEFlag( TRUE );
INPUT_RETRY:
	DialogBox(hInst, MAKEINTRESOURCE(IDD_DIALOG1), NULL, NameEdit);
	if(strcmp(copystring,"") == 0 ) goto INPUT_RETRY;
	this->returnstring = copystring;
	SetMouseDispFlag( FALSE );
	SetUseIMEFlag( FALSE );
	this->setInputResult();
}