/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030499bc; name: FUN_030499bc
 */


void FUN_030499bc(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ushort uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  byte bVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  lVar2 = param_1[5];
  lVar21 = param_1[6];
  lVar10 = param_1[8];
  lVar20 = param_1[9];
  bVar22 = *(byte *)(param_1 + 7);
  if (((char)param_1[4] == '\0') || ((*(byte *)(lVar21 + 0x54) >> 1 & 1) == 0)) {
LAB_03049a44:
    lVar18 = lVar20;
    lVar19 = lVar21;
    lVar20 = lVar10;
    lVar21 = lVar2;
  }
  else {
    if ((*(byte *)(lVar2 + 0x54) & 1) == 0) {
      iVar6 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar10 + 0x18) * 0x200 + 0xc0))(lVar10);
      iVar7 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar20 + 0x18) * 0x200 + 0xc0))(lVar20);
      if (iVar6 <= iVar7) goto LAB_03049a44;
    }
    bVar22 = bVar22 >> 3 & 0x1c | bVar22 & 3 | (bVar22 >> 2) << 5;
    lVar18 = lVar10;
    lVar19 = lVar2;
  }
  if (*(int *)(param_2 + 0x18) < 0xe91) {
    puVar8 = (undefined8 *)(*(long *)(param_2 + 0x10) + (long)*(int *)(param_2 + 0x18) + 0x20);
  }
  else {
    puVar8 = (undefined8 *)FUN_032bf82c(param_2);
  }
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined4 *)(puVar8 + 1) = 0x505;
  puVar8[6] = 0;
  puVar8[7] = 0;
  *(undefined2 *)((long)puVar8 + 0xc) = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[7] = 0x7f7fffee7f7fffee;
  puVar8[6] = 0x7f7fffee7f7fffee;
  puVar8[2] = 0;
  puVar8[3] = 0;
  *(undefined1 *)((long)puVar8 + 0xf) = 8;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[9] = 0xff7fffeeff7fffee;
  puVar8[8] = 0xff7fffeeff7fffee;
  *(undefined4 *)((long)puVar8 + 4) = *(undefined4 *)(lVar21 + 0x50);
  *(undefined4 *)puVar8 = *(undefined4 *)(lVar19 + 0x50);
  *(byte *)((long)puVar8 + 0xe) = bVar22;
  uVar15 = (ulong)*(byte *)(lVar21 + 0x89);
  uVar17 = (ulong)*(byte *)(lVar19 + 0x89);
  lVar2 = *param_1 + 0x20;
  uVar12 = (ulong)*(ushort *)(lVar21 + 0x8a);
  lVar10 = *(long *)(param_1[1] + 0x48);
  uVar11 = (ulong)*(ushort *)(lVar19 + 0x8a);
  lVar13 = param_1[3];
  if (*(int *)(lVar2 + uVar15 * 0x40 + 0x18) < *(int *)(lVar2 + uVar17 * 0x40 + 0x18)) {
    uVar16 = uVar17;
  }
  else {
    uVar16 = uVar15;
    uVar15 = uVar17;
  }
  uVar1 = *(uint *)(lVar2 + uVar16 * 0x40 + 0x20) & *(uint *)(lVar2 + uVar15 * 0x40 + 0x1c);
  uVar14 = (ushort)uVar1;
  if (((*(uint *)(lVar10 + uVar11 * 0x50 + 0x14) | *(uint *)(lVar10 + uVar12 * 0x50 + 0x14)) >> 0x11
      & 1) == 0) {
    uVar14 = (*(ushort *)(lVar18 + 0x1a) | *(ushort *)(lVar20 + 0x1a)) >> 2 & 4 | uVar14;
    uVar1 = uVar1 >> 4 & 1;
  }
  else if (((*(uint *)(lVar19 + 0x54) | *(uint *)(lVar21 + 0x54)) >> 8 & 1) == 0) {
    uVar14 = uVar14 | 4;
    uVar1 = uVar1 >> 4 & 1;
  }
  else {
    uVar14 = uVar14 | 0x8004;
    uVar1 = uVar1 & 0x10;
  }
  if (uVar1 != 0) {
    uVar14 = uVar14 & 0xfc7f;
  }
  *(ushort *)((long)puVar8 + 10) = uVar14;
  if (((*(ushort *)(lVar21 + 0x58) & *(ushort *)(lVar19 + 0x58)) >> 1 & 1) != 0) {
    uVar5 = NEON_scvtf((ulong)CONCAT24(*(ushort *)(lVar21 + 0x90),(uint)*(ushort *)(lVar21 + 0x90)),
                       4);
    uVar14 = *(ushort *)(lVar10 + uVar12 * 0x50 + 0x3a);
    uVar3 = *(ushort *)(lVar10 + uVar11 * 0x50 + 0x3a);
    uVar23 = NEON_scvtf((ulong)CONCAT24(*(ushort *)(lVar19 + 0x90),(uint)*(ushort *)(lVar19 + 0x90))
                        ,4);
    uVar24 = NEON_fmax((ulong)CONCAT42((uint)uVar14 << 0x10,uVar14) << 0x10,
                       (ulong)CONCAT42((uint)uVar3 << 0x10,uVar3) << 0x10,4);
    iVar6 = (int)((float)uVar24 * (float)*(undefined8 *)(lVar13 + 0x48) +
                 (float)uVar5 + (float)uVar23);
    iVar7 = (int)((float)((ulong)uVar24 >> 0x20) *
                  (float)((ulong)*(undefined8 *)(lVar13 + 0x48) >> 0x20) +
                 (float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar23 >> 0x20));
    auVar4._4_4_ = iVar7;
    auVar4._0_4_ = iVar6;
    auVar4._8_4_ = iVar6;
    auVar4._12_4_ = iVar7;
    uVar5 = NEON_sqxtun(CONCAT44(iVar7,iVar6),auVar4,4);
    *(short *)((long)puVar8 + 0xc) = (short)uVar5;
  }
  if ((*(char *)(lVar10 + uVar12 * 0x50 + 0x18) == '\0') &&
     (*(char *)(lVar10 + uVar11 * 0x50 + 0x18) == '\0')) {
    uVar9 = 10;
  }
  else {
    uVar9 = 8;
  }
  *(undefined1 *)((long)puVar8 + 0xf) = uVar9;
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 0x50;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  return;
}


