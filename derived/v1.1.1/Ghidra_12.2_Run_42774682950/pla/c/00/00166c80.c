/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00166c80; name: FUN_00166c80
 */


void FUN_00166c80(long param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x30);
  iVar3 = param_2 - param_3;
  if (*param_4 - 0xdU < 2) {
    iVar1 = iVar3;
    if (iVar3 < 0) {
      iVar1 = -1;
    }
    FUN_001679a0(lVar4,param_4,iVar1 + 1);
    if (0 < iVar1) {
      FUN_00167750(lVar4,iVar1);
    }
  }
  else {
    if (*param_4 != 0) {
      FUN_00167c00(lVar4,param_4);
    }
    if (0 < iVar3) {
      uVar2 = *(undefined1 *)(lVar4 + 0x3c);
      FUN_00167750(lVar4,iVar3);
      FUN_00166fb0(lVar4,uVar2,iVar3);
    }
  }
  if (param_2 < param_3) {
    *(char *)(*(long *)(param_1 + 0x30) + 0x3c) =
         *(char *)(*(long *)(param_1 + 0x30) + 0x3c) + (char)iVar3;
  }
  return;
}


