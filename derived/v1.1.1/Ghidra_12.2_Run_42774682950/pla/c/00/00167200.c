/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00167200; name: FUN_00167200
 */


void FUN_00167200(long *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *(int *)((long)param_1 + 0x24) = (int)param_1[4];
  if (param_2 != -1) {
    if (*(uint *)(param_1 + 5) == 0xffffffff) {
      *(int *)(param_1 + 5) = param_2;
      return;
    }
    uVar4 = *(uint *)(param_1 + 5);
    do {
      uVar3 = uVar4;
      uVar2 = *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar3 * 4);
      iVar1 = (uVar2 >> 0xe) - 0x1ffff;
      uVar4 = 0xffffffff;
      if (iVar1 != -1) {
        uVar4 = uVar3 + iVar1 + 1;
      }
    } while (uVar4 != 0xffffffff);
    param_2 = ~uVar3 + param_2;
    iVar1 = -param_2;
    if (-1 < param_2) {
      iVar1 = param_2;
    }
    if (0x1ffff < iVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_0016a180(param_1[2],"control structure too long");
    }
    *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar3 * 4) =
         (uVar2 & 0x3fff | param_2 * 0x4000) + 0x7fffc000;
  }
  return;
}


