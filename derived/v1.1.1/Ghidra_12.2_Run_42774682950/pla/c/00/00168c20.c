/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00168c20; name: FUN_00168c20
 */


void FUN_00168c20(long *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_00167ad0();
  iVar3 = *param_2;
  if (iVar3 != 1 && iVar3 != 3) {
    if (iVar3 == 0xb) {
      iVar3 = param_2[2];
    }
    else {
      iVar3 = FUN_001689f0(param_1,param_2,1);
    }
    if (iVar3 != -1) {
      if (param_2[4] == 0xffffffff) {
        param_2[4] = iVar3;
      }
      else {
        uVar5 = param_2[4];
        do {
          uVar4 = uVar5;
          uVar2 = *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar4 * 4);
          iVar1 = (uVar2 >> 0xe) - 0x1ffff;
          uVar5 = 0xffffffff;
          if (iVar1 != -1) {
            uVar5 = uVar4 + iVar1 + 1;
          }
        } while (uVar5 != 0xffffffff);
        iVar3 = iVar3 + ~uVar4;
        iVar1 = -iVar3;
        if (-1 < iVar3) {
          iVar1 = iVar3;
        }
        if (0x1ffff < iVar1) goto LAB_00168d78;
        *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar4 * 4) =
             (uVar2 & 0x3fff | iVar3 * 0x4000) + 0x7fffc000;
      }
    }
  }
  iVar3 = param_2[5];
  *(int *)((long)param_1 + 0x24) = (int)param_1[4];
  if (iVar3 != -1) {
    if (*(uint *)(param_1 + 5) == 0xffffffff) {
      *(int *)(param_1 + 5) = iVar3;
    }
    else {
      uVar5 = *(uint *)(param_1 + 5);
      do {
        uVar4 = uVar5;
        uVar2 = *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar4 * 4);
        iVar1 = (uVar2 >> 0xe) - 0x1ffff;
        uVar5 = 0xffffffff;
        if (iVar1 != -1) {
          uVar5 = uVar4 + iVar1 + 1;
        }
      } while (uVar5 != 0xffffffff);
      iVar3 = iVar3 + ~uVar4;
      iVar1 = -iVar3;
      if (-1 < iVar3) {
        iVar1 = iVar3;
      }
      if (0x1ffff < iVar1) {
LAB_00168d78:
                    /* WARNING: Subroutine does not return */
        FUN_0016a180(param_1[2],"control structure too long");
      }
      *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar4 * 4) =
           (uVar2 & 0x3fff | iVar3 * 0x4000) + 0x7fffc000;
    }
  }
  param_2[5] = -1;
  return;
}


