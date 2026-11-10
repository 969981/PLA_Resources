/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01120960; name: FUN_01120960
 */


int FUN_01120960(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                long *param_5)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  iVar2 = FUN_01120830();
  lVar4 = *param_5;
  uVar3 = FUN_0111ea04(*(undefined2 *)param_4,*(undefined2 *)param_3);
  if ((uVar3 & 1) == 0) {
    *(undefined1 *)(lVar4 + 0x53a) = 1;
  }
  else {
    uVar1 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar1;
    lVar4 = *param_5;
    uVar3 = FUN_0111ea04(*(undefined2 *)param_3,*(undefined2 *)param_2);
    if ((uVar3 & 1) == 0) {
      iVar2 = iVar2 + 1;
      *(undefined1 *)(lVar4 + 0x53a) = 1;
    }
    else {
      uVar1 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar1;
      lVar4 = *param_5;
      uVar3 = FUN_0111ea04(*(undefined2 *)param_2,*(undefined2 *)param_1);
      if ((uVar3 & 1) == 0) {
        iVar2 = iVar2 + 2;
        *(undefined1 *)(lVar4 + 0x53a) = 1;
      }
      else {
        uVar1 = *param_1;
        iVar2 = iVar2 + 3;
        *param_1 = *param_2;
        *param_2 = uVar1;
      }
    }
  }
  return iVar2;
}


