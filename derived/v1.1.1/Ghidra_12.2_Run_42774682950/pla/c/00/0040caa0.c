/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040caa0; name: FUN_0040caa0
 */


int FUN_0040caa0(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  int iVar15;
  
  iVar5 = (int)param_1[1];
  if (iVar5 == 0) {
    iVar15 = 0;
    iVar1 = *(int *)((long)param_1 + 0xc);
  }
  else {
    uVar4 = *(uint *)(*param_1 + (long)(iVar5 + -1) * 4);
    uVar11 = (int)-(uVar4 >> 0x10) >> 0x1f;
    uVar7 = uVar4 >> 0x10 & uVar11 | uVar4 & (uVar11 ^ 0xffffffff);
    uVar6 = uVar7 >> 8;
    uVar3 = (int)-uVar6 >> 0x1f;
    uVar8 = uVar6 & uVar3 | uVar7 & (uVar3 ^ 0xffffffff);
    uVar7 = uVar8 >> 4;
    uVar6 = (int)-uVar7 >> 0x1f;
    uVar9 = uVar7 & uVar6 | uVar8 & (uVar6 ^ 0xffffffff);
    uVar8 = uVar9 >> 2;
    uVar7 = (int)-uVar8 >> 0x1f;
    iVar15 = ((uint)(uVar4 != 0) | (iVar5 + -1) * 0x20 | uVar11 & 0x10 | uVar3 & 8 | uVar6 & 4 |
             uVar7 & 2) - ((int)-((uVar8 & uVar7 | uVar9 & (uVar7 ^ 0xffffffff)) >> 1) >> 0x1f);
    iVar1 = iVar15 + 7;
    iVar15 = iVar15 + 0xe;
    if (-1 < iVar1) {
      iVar15 = iVar1;
    }
    iVar15 = iVar15 >> 3;
    iVar1 = *(int *)((long)param_1 + 0xc);
  }
  if (iVar1 == 0) {
    FUN_004006a0(param_2,(long)iVar15);
    return iVar15;
  }
  if (iVar15 != 0) {
    pbVar13 = (byte *)(iVar15 + param_2);
    uVar10 = 0;
    uVar12 = 0;
    do {
      pbVar13 = pbVar13 + -1;
      uVar14 = uVar12 & 0xfffffffffffffffc;
      uVar11 = (uint)uVar12;
      lVar2 = (long)iVar5 * -4 + uVar10;
      uVar12 = uVar12 - ((long)((long)iVar1 * -4 + 1 + uVar12) >> 0x3f);
      uVar10 = uVar10 + 1;
      *pbVar13 = (byte)(lVar2 >> 0x3f) & (byte)(*(uint *)(*param_1 + uVar14) >> ((uVar11 & 3) << 3))
      ;
    } while (uVar10 < (ulong)(long)iVar15);
  }
  return iVar15;
}


