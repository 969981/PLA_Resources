/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025ace34; name: FUN_025ace34
 */


void FUN_025ace34(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0xa4);
  if (0 < iVar1 && iVar1 <= param_2) {
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = param_2 / iVar1;
    }
    param_2 = param_2 - iVar2 * iVar1;
  }
  *(int *)(param_1 + 0xa0) = param_2;
  if (iVar1 <= param_2) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0x80) <= param_2) {
    *(undefined4 *)(param_1 + 0xa8) = 1;
    iVar1 = *(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x80);
    if (iVar1 <= param_2) {
      *(undefined4 *)(param_1 + 0xa8) = 2;
      iVar1 = *(int *)(param_1 + 0x88) + iVar1;
      if (iVar1 <= param_2) {
        *(undefined4 *)(param_1 + 0xa8) = 3;
        iVar1 = *(int *)(param_1 + 0x8c) + iVar1;
        if (iVar1 <= param_2) {
          *(undefined4 *)(param_1 + 0xa8) = 4;
          iVar1 = *(int *)(param_1 + 0x90) + iVar1;
          if (iVar1 <= param_2) {
            *(undefined4 *)(param_1 + 0xa8) = 5;
            iVar1 = *(int *)(param_1 + 0x94) + iVar1;
            if (iVar1 <= param_2) {
              *(undefined4 *)(param_1 + 0xa8) = 6;
              iVar1 = *(int *)(param_1 + 0x98) + iVar1;
              if (iVar1 <= param_2) {
                uVar3 = 7;
                if (*(int *)(param_1 + 0x9c) + iVar1 <= param_2) {
                  uVar3 = 8;
                }
                *(undefined4 *)(param_1 + 0xa8) = uVar3;
              }
            }
          }
        }
      }
    }
  }
  return;
}


