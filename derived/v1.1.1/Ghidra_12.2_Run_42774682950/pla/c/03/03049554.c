/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03049554; name: FUN_03049554
 */


void FUN_03049554(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ushort uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (*(int *)(param_2 + 0x18) < 0xe91) {
    puVar9 = (undefined8 *)(*(long *)(param_2 + 0x10) + (long)*(int *)(param_2 + 0x18) + 0x20);
  }
  else {
    puVar9 = (undefined8 *)FUN_032bf82c(param_2);
  }
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[7] = 0x7f7fffee7f7fffee;
  puVar9[6] = 0x7f7fffee7f7fffee;
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined4 *)(puVar9 + 1) = 0x504;
  puVar9[8] = 0;
  puVar9[9] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  *(undefined2 *)((long)puVar9 + 0xc) = 0;
  *(undefined1 *)((long)puVar9 + 0xf) = 8;
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[9] = 0xff7fffeeff7fffee;
  puVar9[8] = 0xff7fffeeff7fffee;
  *(undefined4 *)((long)puVar9 + 4) = *(undefined4 *)(param_1[5] + 0x50);
  *(undefined4 *)puVar9 = *(undefined4 *)(param_1[6] + 0x50);
  *(char *)((long)puVar9 + 0xe) = (char)param_1[7];
  lVar15 = param_1[3];
  lVar3 = param_1[5];
  lVar4 = param_1[6];
  uVar17 = (ulong)*(byte *)(lVar3 + 0x89);
  uVar18 = (ulong)*(byte *)(lVar4 + 0x89);
  lVar1 = *param_1 + 0x20;
  uVar14 = (ulong)*(ushort *)(lVar3 + 0x8a);
  lVar12 = *(long *)(param_1[1] + 0x48);
  uVar13 = (ulong)*(ushort *)(lVar4 + 0x8a);
  if (*(int *)(lVar1 + uVar17 * 0x40 + 0x18) < *(int *)(lVar1 + uVar18 * 0x40 + 0x18)) {
    uVar10 = uVar17;
  }
  else {
    uVar10 = uVar18;
    uVar18 = uVar17;
  }
  uVar2 = *(uint *)(lVar1 + uVar18 * 0x40 + 0x20) & *(uint *)(lVar1 + uVar10 * 0x40 + 0x1c);
  uVar16 = (ushort)uVar2;
  if (((*(uint *)(lVar12 + uVar13 * 0x50 + 0x14) | *(uint *)(lVar12 + uVar14 * 0x50 + 0x14)) >> 0x11
      & 1) == 0) {
    uVar16 = (*(ushort *)(param_1[9] + 0x1a) | *(ushort *)(param_1[8] + 0x1a)) >> 2 & 4 | uVar16;
    uVar2 = uVar2 >> 4 & 1;
  }
  else if (((*(uint *)(lVar4 + 0x54) | *(uint *)(lVar3 + 0x54)) >> 8 & 1) == 0) {
    uVar16 = uVar16 | 4;
    uVar2 = uVar2 >> 4 & 1;
  }
  else {
    uVar16 = uVar16 | 0x8004;
    uVar2 = uVar2 & 0x10;
  }
  if (uVar2 != 0) {
    uVar16 = uVar16 & 0xfc7f;
  }
  *(ushort *)((long)puVar9 + 10) = uVar16;
  if (((*(ushort *)(lVar3 + 0x58) & *(ushort *)(lVar4 + 0x58)) >> 1 & 1) != 0) {
    uVar8 = NEON_scvtf((ulong)CONCAT24(*(ushort *)(lVar3 + 0x90),(uint)*(ushort *)(lVar3 + 0x90)),4)
    ;
    uVar16 = *(ushort *)(lVar12 + uVar14 * 0x50 + 0x3a);
    uVar5 = *(ushort *)(lVar12 + uVar13 * 0x50 + 0x3a);
    uVar20 = NEON_scvtf((ulong)CONCAT24(*(ushort *)(lVar4 + 0x90),(uint)*(ushort *)(lVar4 + 0x90)),4
                       );
    uVar21 = NEON_fmax((ulong)CONCAT42((uint)uVar16 << 0x10,uVar16) << 0x10,
                       (ulong)CONCAT42((uint)uVar5 << 0x10,uVar5) << 0x10,4);
    iVar7 = (int)((float)uVar21 * (float)*(undefined8 *)(lVar15 + 0x48) +
                 (float)uVar8 + (float)uVar20);
    iVar19 = (int)((float)((ulong)uVar21 >> 0x20) *
                   (float)((ulong)*(undefined8 *)(lVar15 + 0x48) >> 0x20) +
                  (float)((ulong)uVar8 >> 0x20) + (float)((ulong)uVar20 >> 0x20));
    auVar6._4_4_ = iVar19;
    auVar6._0_4_ = iVar7;
    auVar6._8_4_ = iVar7;
    auVar6._12_4_ = iVar19;
    uVar8 = NEON_sqxtun(CONCAT44(iVar19,iVar7),auVar6,4);
    *(short *)((long)puVar9 + 0xc) = (short)uVar8;
  }
  if ((*(char *)(lVar12 + uVar14 * 0x50 + 0x18) == '\0') &&
     (*(char *)(lVar12 + uVar13 * 0x50 + 0x18) == '\0')) {
    uVar11 = 10;
  }
  else {
    uVar11 = 8;
  }
  *(undefined1 *)((long)puVar9 + 0xf) = uVar11;
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 0x50;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  return;
}


