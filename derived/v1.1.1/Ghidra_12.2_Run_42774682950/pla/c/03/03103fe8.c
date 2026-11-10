/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03103fe8; name: FUN_03103fe8
 */


void FUN_03103fe8(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  
  if (*(int *)(param_1 + 5) == 0) {
    return;
  }
  fVar14 = (float)((ulong)param_3[1] >> 0x20);
  fVar7 = (float)*param_3;
  fVar15 = (float)param_3[2];
  bVar2 = fVar7 < fVar15;
  fVar10 = (float)((ulong)*param_3 >> 0x20);
  fVar17 = (float)((ulong)param_3[2] >> 0x20);
  bVar3 = fVar10 < fVar17;
  fVar12 = (float)param_3[1];
  bVar4 = fVar12 < fVar14;
  if (((bVar2 || bVar3) || bVar4) &&
     (((float)*param_4 < (float)param_4[2] ||
      (float)((ulong)*param_4 >> 0x20) < (float)((ulong)param_4[2] >> 0x20)) ||
      (float)param_4[1] < (float)((ulong)param_4[1] >> 0x20))) {
    return;
  }
  if ((*(uint *)(param_2 + 0x54) >> 4 & 1) != 0) {
    return;
  }
  fVar21 = (float)((ulong)param_4[1] >> 0x20);
  fVar20 = (float)*param_4;
  iVar8 = -(uint)(fVar20 == fVar7);
  fVar7 = (float)((ulong)*param_4 >> 0x20);
  iVar11 = -(uint)(fVar7 == fVar10);
  fVar10 = (float)param_4[1];
  iVar13 = -(uint)(fVar10 == fVar12);
  uVar6 = (*(uint *)(param_2 + 0x54) << 2 ^ 0xffffffff) & 4;
  uVar1 = *(uint *)(param_2 + 0x50);
  fVar12 = (float)param_4[2];
  iVar16 = -(uint)(fVar12 == fVar15);
  fVar15 = (float)((ulong)param_4[2] >> 0x20);
  iVar18 = -(uint)(fVar15 == fVar17);
  iVar19 = -(uint)(fVar21 == fVar14);
  uVar9 = CONCAT13((byte)((uint)iVar16 >> 0x18) & (byte)((uint)iVar8 >> 0x18),
                   CONCAT12((byte)((uint)iVar16 >> 0x10) & (byte)((uint)iVar8 >> 0x10),
                            CONCAT11((byte)((uint)iVar16 >> 8) & (byte)((uint)iVar8 >> 8),
                                     (byte)iVar16 & (byte)iVar8)));
  if ((uVar9 & (uint)(CONCAT17((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar11 >> 0x18),
                               CONCAT16((byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar11 >> 0x10),
                                        CONCAT15((byte)((uint)iVar18 >> 8) &
                                                 (byte)((uint)iVar11 >> 8),
                                                 CONCAT14((byte)iVar18 & (byte)iVar11,uVar9)))) >>
                     0x20) &
      CONCAT13((byte)((uint)iVar19 >> 0x18) & (byte)((uint)iVar13 >> 0x18),
               CONCAT12((byte)((uint)iVar19 >> 0x10) & (byte)((uint)iVar13 >> 0x10),
                        CONCAT11((byte)((uint)iVar19 >> 8) & (byte)((uint)iVar13 >> 8),
                                 (byte)iVar19 & (byte)iVar13)))) == 0) {
    if ((!bVar2 && !bVar3) && !bVar4) {
      uVar6 = uVar6 | 2;
      FUN_03104190(*param_1,param_1,uVar1,param_3,uVar6);
    }
    if ((fVar20 < fVar12 || fVar7 < fVar15) || fVar10 < fVar21) goto LAB_03104104;
    uVar6 = uVar6 & 4 | 1;
  }
  else {
    uVar6 = uVar6 | 3;
  }
  FUN_03104190(*param_1,param_1,uVar1,param_4,uVar6);
LAB_03104104:
  uVar5 = FUN_03104380(*(undefined8 *)(param_2 + 0x78));
  if ((uVar5 & 1) != 0) {
    if (uVar6 == 2) {
      if (uVar1 >> 0x18 < 0xff) {
        return;
      }
    }
    else if ((bVar2 || bVar3) || bVar4) {
      return;
    }
    *(undefined4 *)((long)param_1 + 100) = 1;
  }
  return;
}


