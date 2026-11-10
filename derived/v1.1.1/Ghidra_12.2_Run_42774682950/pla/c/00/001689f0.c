/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001689f0; name: FUN_001689f0
 */


ulong FUN_001689f0(long *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  
  if (*param_2 == 7) {
LAB_00168b1c:
    if ((((uint)param_2[2] >> 8 & 1) == 0) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= param_2[2])) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
    }
  }
  else {
    if ((*param_2 == 0xc) &&
       (uVar10 = *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[2] * 4),
       (uVar10 & 0x3f) == 0x1b)) {
      *(int *)(param_1 + 4) = (int)param_1[4] + -1;
      FUN_001674a0(param_1,uVar10 >> 0x11 & 0x7fc0 | (uint)(param_3 == 0) << 0xe | 0x22);
      uVar10 = *(uint *)(param_1 + 5);
      *(undefined4 *)(param_1 + 5) = 0xffffffff;
      uVar4 = FUN_001674a0(param_1,0x7fff801e);
      if (uVar10 == 0xffffffff) {
        return uVar4;
      }
      if ((int)uVar4 == -1) goto LAB_00168bec;
      uVar9 = uVar4 & 0xffffffff;
      lVar6 = *(long *)(*param_1 + 0x38);
      do {
        uVar8 = (uint)uVar9;
        uVar7 = *(uint *)(lVar6 + (long)(int)uVar8 * 4);
        iVar1 = (uVar7 >> 0xe) - 0x1ffff;
        uVar11 = 0xffffffff;
        if (iVar1 != -1) {
          uVar11 = uVar8 + iVar1 + 1;
        }
        uVar9 = (ulong)uVar11;
      } while (uVar11 != 0xffffffff);
      goto LAB_00168bb4;
    }
    bVar3 = *(byte *)((long)param_1 + 0x3c);
    bVar5 = bVar3 + 1;
    if (*(byte *)(*param_1 + 0xc) <= bVar3) {
      if (0xfd < bVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0016a180(param_1[2],"function or expression needs too many registers");
      }
      *(byte *)(*param_1 + 0xc) = bVar5;
      bVar5 = *(char *)((long)param_1 + 0x3c) + 1;
    }
    *(byte *)((long)param_1 + 0x3c) = bVar5;
    FUN_00169ba0(param_1,param_2,bVar5 - 1);
    if (*param_2 == 7) goto LAB_00168b1c;
  }
  FUN_001674a0(param_1,param_3 << 0xe | param_2[2] << 0x17 | 0x3fe3);
  uVar10 = *(uint *)(param_1 + 5);
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  uVar4 = FUN_001674a0(param_1,0x7fff801e);
  if (uVar10 == 0xffffffff) {
    return uVar4;
  }
  if ((int)uVar4 == -1) {
LAB_00168bec:
    return (ulong)uVar10;
  }
  uVar9 = uVar4 & 0xffffffff;
  lVar6 = *(long *)(*param_1 + 0x38);
  do {
    uVar8 = (uint)uVar9;
    uVar7 = *(uint *)(lVar6 + (long)(int)uVar8 * 4);
    iVar1 = (uVar7 >> 0xe) - 0x1ffff;
    uVar11 = 0xffffffff;
    if (iVar1 != -1) {
      uVar11 = uVar8 + iVar1 + 1;
    }
    uVar9 = (ulong)uVar11;
  } while (uVar11 != 0xffffffff);
LAB_00168bb4:
  iVar1 = uVar10 + ~uVar8;
  iVar2 = -iVar1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (0x1ffff < iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_0016a180(param_1[2],"control structure too long");
  }
  *(uint *)(lVar6 + (long)(int)uVar8 * 4) = (uVar7 & 0x3fff | iVar1 * 0x4000) + 0x7fffc000;
  return uVar4;
}


