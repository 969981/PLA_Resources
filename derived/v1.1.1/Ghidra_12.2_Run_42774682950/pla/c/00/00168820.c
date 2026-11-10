/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00168820; name: FUN_00168820
 */


void FUN_00168820(long *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  FUN_00167ad0();
  iVar4 = *param_2;
  if (2 < iVar4 - 4U && iVar4 != 2) {
    if (iVar4 == 0xb) {
      puVar2 = (uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[2] * 4);
      if (param_2[2] < 1) {
LAB_00168904:
        uVar6 = (ulong)*puVar2;
        puVar5 = puVar2;
      }
      else {
        puVar5 = puVar2 + -1;
        uVar6 = (ulong)*puVar5;
        if (-1 < (char)(&DAT_039c5e39)[uVar6 & 0x3f]) goto LAB_00168904;
      }
      *puVar5 = (uint)uVar6 & 0xffffc000 | (uint)uVar6 & 0x3f | (uint)((uVar6 & 0x3fc0) == 0) << 6;
      iVar4 = param_2[2];
    }
    else {
      iVar4 = FUN_001689f0(param_1,param_2,0);
    }
    if (iVar4 != -1) {
      if (param_2[5] == 0xffffffff) {
        param_2[5] = iVar4;
      }
      else {
        uVar8 = param_2[5];
        do {
          uVar7 = uVar8;
          uVar3 = *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar7 * 4);
          iVar1 = (uVar3 >> 0xe) - 0x1ffff;
          uVar8 = 0xffffffff;
          if (iVar1 != -1) {
            uVar8 = uVar7 + iVar1 + 1;
          }
        } while (uVar8 != 0xffffffff);
        iVar4 = iVar4 + ~uVar7;
        iVar1 = -iVar4;
        if (-1 < iVar4) {
          iVar1 = iVar4;
        }
        if (0x1ffff < iVar1) goto LAB_001689d4;
        *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar7 * 4) =
             (uVar3 & 0x3fff | iVar4 * 0x4000) + 0x7fffc000;
      }
    }
  }
  iVar4 = param_2[4];
  *(int *)((long)param_1 + 0x24) = (int)param_1[4];
  if (iVar4 != -1) {
    if (*(uint *)(param_1 + 5) == 0xffffffff) {
      *(int *)(param_1 + 5) = iVar4;
    }
    else {
      uVar8 = *(uint *)(param_1 + 5);
      do {
        uVar7 = uVar8;
        uVar3 = *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar7 * 4);
        iVar1 = (uVar3 >> 0xe) - 0x1ffff;
        uVar8 = 0xffffffff;
        if (iVar1 != -1) {
          uVar8 = uVar7 + iVar1 + 1;
        }
      } while (uVar8 != 0xffffffff);
      iVar4 = iVar4 + ~uVar7;
      iVar1 = -iVar4;
      if (-1 < iVar4) {
        iVar1 = iVar4;
      }
      if (0x1ffff < iVar1) {
LAB_001689d4:
                    /* WARNING: Subroutine does not return */
        FUN_0016a180(param_1[2],"control structure too long");
      }
      *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar7 * 4) =
           (uVar3 & 0x3fff | iVar4 * 0x4000) + 0x7fffc000;
    }
  }
  param_2[4] = -1;
  return;
}


