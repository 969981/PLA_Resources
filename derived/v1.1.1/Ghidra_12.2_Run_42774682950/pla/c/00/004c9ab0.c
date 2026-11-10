/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c9ab0; name: FUN_004c9ab0
 */


void FUN_004c9ab0(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == -1) {
    if ((*(uint *)(param_1 + 0x5c) & 0xfffffffe) != 0x2e) {
      return;
    }
    *(undefined4 *)(param_1 + 100) = 1;
    iVar1 = *(int *)(param_1 + 0x84);
joined_r0x004c9af4:
    if (iVar1 == 3) {
      *(undefined4 *)(param_1 + 0x84) = 7;
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x38) == 0) {
      uVar2 = *(uint *)(param_1 + 0x5c);
      if (param_2 != 0) {
        if ((uVar2 & 0xfffffffe) != 0x2e) {
          return;
        }
        iVar1 = *(int *)(param_1 + 0x84);
        if (iVar1 == 4) {
          return;
        }
        *(undefined4 *)(param_1 + 100) = 1;
        goto joined_r0x004c9af4;
      }
    }
    else {
      if (*(int *)(param_1 + 0x84) != 0xc) {
        return;
      }
      uVar2 = *(uint *)(param_1 + 0x5c);
    }
    if (uVar2 == 0x2e) {
      *(undefined4 *)(param_1 + 100) = 1;
    }
  }
  return;
}


