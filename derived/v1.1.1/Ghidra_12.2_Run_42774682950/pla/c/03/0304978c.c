/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0304978c; name: FUN_0304978c
 */


void FUN_0304978c(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  ushort uVar6;
  undefined1 auVar7 [16];
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined1 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ushort uVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  if (*(int *)(param_2 + 0x18) < 0xe71) {
    puVar10 = (undefined8 *)(*(long *)(param_2 + 0x10) + (long)*(int *)(param_2 + 0x18) + 0x20);
  }
  else {
    puVar10 = (undefined8 *)FUN_032bf82c(param_2);
  }
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined4 *)(puVar10 + 1) = 0x706;
  *(undefined2 *)((long)puVar10 + 0xc) = 0;
  *(undefined1 *)((long)puVar10 + 0xf) = 8;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)(param_1[5] + 0x50);
  *(undefined4 *)puVar10 = *(undefined4 *)(param_1[6] + 0x50);
  puVar10[4] = 0;
  *(undefined4 *)((long)puVar10 + 0x2c) = 0;
  *(char *)((long)puVar10 + 0xe) = (char)param_1[7];
  lVar3 = param_1[5];
  lVar4 = param_1[6];
  uVar18 = (ulong)*(byte *)(lVar3 + 0x89);
  uVar19 = (ulong)*(byte *)(lVar4 + 0x89);
  lVar1 = *param_1 + 0x20;
  uVar15 = (ulong)*(ushort *)(lVar3 + 0x8a);
  lVar13 = *(long *)(param_1[1] + 0x48);
  uVar14 = (ulong)*(ushort *)(lVar4 + 0x8a);
  lVar16 = param_1[3];
  if (*(int *)(lVar1 + uVar18 * 0x40 + 0x18) < *(int *)(lVar1 + uVar19 * 0x40 + 0x18)) {
    uVar11 = uVar18;
  }
  else {
    uVar11 = uVar19;
    uVar19 = uVar18;
  }
  uVar2 = *(uint *)(lVar1 + uVar19 * 0x40 + 0x20) & *(uint *)(lVar1 + uVar11 * 0x40 + 0x1c);
  uVar17 = (ushort)uVar2;
  if (((*(uint *)(lVar13 + uVar14 * 0x50 + 0x14) | *(uint *)(lVar13 + uVar15 * 0x50 + 0x14)) >> 0x11
      & 1) == 0) {
    uVar17 = (*(ushort *)(param_1[9] + 0x1a) | *(ushort *)(param_1[8] + 0x1a)) >> 2 & 4 | uVar17;
    uVar2 = uVar2 >> 4 & 1;
  }
  else if (((*(uint *)(lVar4 + 0x54) | *(uint *)(lVar3 + 0x54)) >> 8 & 1) == 0) {
    uVar17 = uVar17 | 4;
    uVar2 = uVar2 >> 4 & 1;
  }
  else {
    uVar17 = uVar17 | 0x8004;
    uVar2 = uVar2 & 0x10;
  }
  if (uVar2 != 0) {
    uVar17 = uVar17 & 0xfc7f;
  }
  *(ushort *)((long)puVar10 + 10) = uVar17;
  if (((*(ushort *)(lVar3 + 0x58) & *(ushort *)(lVar4 + 0x58)) >> 1 & 1) != 0) {
    uVar9 = NEON_scvtf((ulong)CONCAT24(*(ushort *)(lVar3 + 0x90),(uint)*(ushort *)(lVar3 + 0x90)),4)
    ;
    uVar5 = *(ushort *)(lVar13 + uVar15 * 0x50 + 0x3a);
    uVar6 = *(ushort *)(lVar13 + uVar14 * 0x50 + 0x3a);
    uVar21 = NEON_scvtf((ulong)CONCAT24(*(ushort *)(lVar4 + 0x90),(uint)*(ushort *)(lVar4 + 0x90)),4
                       );
    uVar22 = NEON_fmax((ulong)CONCAT42((uint)uVar5 << 0x10,uVar5) << 0x10,
                       (ulong)CONCAT42((uint)uVar6 << 0x10,uVar6) << 0x10,4);
    iVar8 = (int)((float)uVar22 * (float)*(undefined8 *)(lVar16 + 0x48) +
                 (float)uVar9 + (float)uVar21);
    iVar20 = (int)((float)((ulong)uVar22 >> 0x20) *
                   (float)((ulong)*(undefined8 *)(lVar16 + 0x48) >> 0x20) +
                  (float)((ulong)uVar9 >> 0x20) + (float)((ulong)uVar21 >> 0x20));
    auVar7._12_4_ = iVar20;
    auVar7._8_4_ = iVar8;
    auVar7._4_4_ = iVar20;
    auVar7._0_4_ = iVar8;
    uVar9 = NEON_sqxtun(CONCAT44(iVar20,iVar8),auVar7,4);
    *(short *)((long)puVar10 + 0xc) = (short)uVar9;
  }
  *(ushort *)((long)puVar10 + 10) = uVar17 & 0xffcf;
  if ((*(char *)(lVar13 + uVar15 * 0x50 + 0x18) == '\0') &&
     (*(char *)(lVar13 + uVar14 * 0x50 + 0x18) == '\0')) {
    uVar12 = 10;
  }
  else {
    uVar12 = 8;
  }
  *(undefined1 *)((long)puVar10 + 0xf) = uVar12;
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 0x70;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  return;
}


