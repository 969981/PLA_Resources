/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00167050; name: FUN_00167050
 */


void FUN_00167050(long *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 != 0xffffffff) {
    if (*param_2 == 0xffffffff) {
      *param_2 = param_3;
      return;
    }
    uVar5 = *param_2;
    do {
      uVar4 = uVar5;
      uVar3 = *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar4 * 4);
      iVar1 = (uVar3 >> 0xe) - 0x1ffff;
      uVar5 = 0xffffffff;
      if (iVar1 != -1) {
        uVar5 = uVar4 + iVar1 + 1;
      }
    } while (uVar5 != 0xffffffff);
    iVar1 = ~uVar4 + param_3;
    iVar2 = -iVar1;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (0x1ffff < iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_0016a180(param_1[2],"control structure too long");
    }
    *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar4 * 4) =
         (uVar3 & 0x3fff | iVar1 * 0x4000) + 0x7fffc000;
  }
  return;
}


