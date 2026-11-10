/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03048d9c; name: FUN_03048d9c
 */


void FUN_03048d9c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ushort uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar1 = *param_2 + 0x20;
  uVar15 = (ulong)*(byte *)(param_2[5] + 0x89);
  uVar12 = (ulong)*(ushort *)(param_2[5] + 0x8a);
  lVar10 = *(long *)(param_2[1] + 0x48);
  uVar16 = (ulong)*(byte *)(param_2[6] + 0x89);
  uVar11 = (ulong)*(ushort *)(param_2[6] + 0x8a);
  param_1[2] = 0x4100000000;
  param_1[3] = 0x7f7f7f;
  *param_1 = 0;
  param_1[1] = 0x800000000000202;
  *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(param_2[5] + 0x50);
  *(undefined4 *)param_1 = *(undefined4 *)(param_2[6] + 0x50);
  *(char *)((long)param_1 + 0xe) = (char)param_2[7];
  lVar13 = param_2[3];
  lVar3 = param_2[5];
  lVar4 = param_2[6];
  if (*(int *)(lVar1 + uVar15 * 0x40 + 0x18) < *(int *)(lVar1 + uVar16 * 0x40 + 0x18)) {
    uVar9 = uVar15;
  }
  else {
    uVar9 = uVar16;
    uVar16 = uVar15;
  }
  uVar2 = *(uint *)(lVar1 + uVar16 * 0x40 + 0x20) & *(uint *)(lVar1 + uVar9 * 0x40 + 0x1c);
  uVar14 = (ushort)uVar2;
  if (((*(uint *)(lVar10 + uVar11 * 0x50 + 0x14) | *(uint *)(lVar10 + uVar12 * 0x50 + 0x14)) >> 0x11
      & 1) == 0) {
    uVar14 = (*(ushort *)(param_2[9] + 0x1a) | *(ushort *)(param_2[8] + 0x1a)) >> 2 & 4 | uVar14;
    uVar2 = uVar2 >> 4 & 1;
  }
  else if (((*(uint *)(lVar4 + 0x54) | *(uint *)(lVar3 + 0x54)) >> 8 & 1) == 0) {
    uVar14 = uVar14 | 4;
    uVar2 = uVar2 >> 4 & 1;
  }
  else {
    uVar14 = uVar14 | 0x8004;
    uVar2 = uVar2 & 0x10;
  }
  if (uVar2 != 0) {
    uVar14 = uVar14 & 0xfc7f;
  }
  *(ushort *)((long)param_1 + 10) = uVar14;
  if (((*(ushort *)(lVar3 + 0x58) & *(ushort *)(lVar4 + 0x58)) >> 1 & 1) != 0) {
    uVar14 = *(ushort *)(lVar10 + uVar12 * 0x50 + 0x3a);
    uVar5 = *(ushort *)(lVar10 + uVar11 * 0x50 + 0x3a);
    uVar8 = NEON_scvtf((ulong)CONCAT24(*(ushort *)(lVar3 + 0x90),(uint)*(ushort *)(lVar3 + 0x90)),4)
    ;
    uVar19 = NEON_fmax((ulong)CONCAT42((uint)uVar14 << 0x10,uVar14) << 0x10,
                       (ulong)CONCAT42((uint)uVar5 << 0x10,uVar5) << 0x10,4);
    uVar18 = NEON_scvtf((ulong)CONCAT24(*(ushort *)(lVar4 + 0x90),(uint)*(ushort *)(lVar4 + 0x90)),4
                       );
    iVar7 = (int)((float)uVar19 * (float)*(undefined8 *)(lVar13 + 0x48) +
                 (float)uVar8 + (float)uVar18);
    iVar17 = (int)((float)((ulong)uVar19 >> 0x20) *
                   (float)((ulong)*(undefined8 *)(lVar13 + 0x48) >> 0x20) +
                  (float)((ulong)uVar8 >> 0x20) + (float)((ulong)uVar18 >> 0x20));
    auVar6._12_4_ = iVar17;
    auVar6._8_4_ = iVar7;
    auVar6._4_4_ = iVar17;
    auVar6._0_4_ = iVar7;
    uVar8 = NEON_sqxtun(CONCAT44(iVar17,iVar7),auVar6,4);
    *(short *)((long)param_1 + 0xc) = (short)uVar8;
  }
  if ((*(char *)(lVar10 + uVar12 * 0x50 + 0x18) == '\0') &&
     (*(char *)(lVar10 + uVar11 * 0x50 + 0x18) == '\0')) {
    *(undefined1 *)((long)param_1 + 0xf) = 10;
    return;
  }
  *(undefined1 *)((long)param_1 + 0xf) = 8;
  return;
}


