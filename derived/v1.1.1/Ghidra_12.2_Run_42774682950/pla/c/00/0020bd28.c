/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020bd28; name: FUN_0020bd28
 */


undefined4 FUN_0020bd28(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    uVar2 = 0xfffffe02;
  }
  else {
    iVar1 = FUN_00206f14();
    if (iVar1 == 0) {
      if ((*(byte *)(param_2 + 0xe5) >> 1 & 1) == 0) {
        if (*(uint *)(param_2 + 0xb8) == 0) {
          iVar1 = *(int *)(param_2 + 0xdc);
        }
        else {
          iVar1 = *(int *)(param_2 + 0xdc);
          if ((*(uint *)(param_2 + 0xb8) & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
            uVar2 = 0xfffffdfe;
            if (iVar1 != 4) {
              uVar2 = 0;
            }
            uVar3 = 0xfffffe01;
            if (iVar1 != 3) {
              uVar3 = uVar2;
            }
            return uVar3;
          }
        }
        uVar3 = 0xfffffe01;
        if (iVar1 != 3) {
          uVar3 = 0xfffffdfe;
        }
        uVar2 = 0;
        if (iVar1 != 2) {
          uVar2 = uVar3;
        }
      }
      else {
        uVar2 = 0xfffffe00;
      }
    }
    else {
      uVar2 = 0xfffffdee;
    }
  }
  return uVar2;
}


