/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2ac2c; name: FUN_02f2ac2c
 */


void FUN_02f2ac2c(float param_1,long param_2,ulong *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_b0 [8];
  uint auStack_a8 [2];
  long local_a0;
  undefined1 *local_98;
  long local_90;
  long local_88;
  
  uVar6 = (uint)param_3[1];
  if ((uVar6 & 0xf00) == 0x200) {
    uVar6 = 0x201;
  }
  else if (((uVar6 & 0xf00) == 0x100) && ((uVar6 & 0xfffff000) != 0x8000)) {
    uVar5 = uVar6 >> 0xc & 7;
    uVar15 = uVar6 >> 0xc & 0x637;
    uVar3 = uVar6 >> 0xc & 0x630;
    uVar5 = uVar5 - (uVar5 >> 1 & 1);
    uVar3 = uVar3 - (uVar3 >> 1 & 0x1f0);
    uVar15 = uVar15 - (uVar15 >> 1 & 0xf1f1f1f1);
    uVar5 = (uVar5 & 0x33333333) + (uVar5 >> 2 & 0x33333333);
    uVar6 = (uVar15 & 0x33333333) + (uVar15 >> 2 & 0x33333333);
    uVar15 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    goto LAB_02f2ac84;
  }
  uVar15 = 0;
  uVar5 = uVar6;
LAB_02f2ac84:
  lVar9 = *(long *)(param_2 + 0x38);
  lVar10 = *(long *)(param_2 + 0x40);
  puVar17 = (undefined4 *)*param_3;
  uVar4 = (ushort)param_3[2];
  uVar20 = (ulong)uVar4;
  uVar6 = uVar6 & 0xff;
  uVar16 = (ulong)uVar6;
  lVar2 = -(ulong)(uVar6 << 4);
  puVar11 = auStack_b0 + lVar2;
  lVar7 = (long)puVar11 - (ulong)(uVar6 << 4);
  if (uVar6 != 0) {
    puVar8 = (undefined4 *)((long)auStack_a8 + lVar2);
    puVar12 = (undefined4 *)(lVar9 + 8);
    puVar13 = (undefined4 *)(lVar10 + 8);
    puVar14 = (undefined4 *)(lVar7 + 8);
    uVar18 = uVar16;
    do {
      puVar8[-2] = puVar12[-2];
      puVar8[-1] = puVar12[-1];
      *puVar8 = *puVar12;
      puVar8[1] = puVar12[1];
      puVar14[-2] = puVar13[-2];
      puVar14[-1] = puVar13[-1];
      *puVar14 = *puVar13;
      puVar1 = puVar13 + 1;
      uVar18 = uVar18 - 1;
      puVar8 = puVar8 + 4;
      puVar12 = puVar12 + 9;
      puVar13 = puVar13 + 9;
      puVar14[1] = *puVar1;
      puVar14 = puVar14 + 4;
    } while (uVar18 != 0);
  }
  fVar22 = 0.0;
  uVar18 = (ulong)(uVar5 & 0xff);
  auStack_a8[1] = uVar15;
  local_a0 = param_2;
  local_98 = puVar11;
  local_90 = lVar7;
  local_88 = lVar9;
  if ((uVar5 & 0xff) == 0) {
    fVar23 = 0.0;
  }
  else {
    fVar23 = 0.0;
    uVar19 = 0;
    do {
      if (uVar4 != 0) {
        puVar11 = local_98 + uVar19 * 0x10;
        lVar2 = local_88 + uVar19 * 0x24;
        puVar8 = puVar17 + uVar20;
        lVar7 = local_90 + uVar19 * 0x10;
        puVar12 = puVar17;
        do {
          puVar17 = puVar12 + 1;
          FUN_02f2b438(*puVar12,lVar2,puVar11);
          fVar21 = (float)FUN_02f2b438(lVar10 + uVar19 * 0x24,lVar7);
          fVar23 = fVar23 + fVar21 * fVar21;
          puVar12 = puVar17;
        } while (puVar17 < puVar8);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar18);
  }
  if (auStack_a8[1] != 0) {
    fVar22 = 0.0;
    uVar5 = (uVar5 & 0xff) + auStack_a8[1];
    do {
      if (uVar4 != 0) {
        puVar11 = local_98 + uVar18 * 0x10;
        lVar2 = local_88 + uVar18 * 0x24;
        puVar8 = puVar17 + uVar20;
        lVar7 = local_90 + uVar18 * 0x10;
        puVar12 = puVar17;
        do {
          puVar17 = puVar12 + 1;
          FUN_02f2b438(*puVar12,lVar2,puVar11);
          fVar21 = (float)FUN_02f2b438(lVar10 + uVar18 * 0x24,lVar7);
          fVar22 = fVar22 + fVar21 * fVar21;
          puVar12 = puVar17;
        } while (puVar17 < puVar8);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar5);
  }
  *(float *)(local_a0 + 0x48) =
       (param_1 * 1.0009619 * param_1 * 1.0009619 * (fVar23 + fVar22 * 1.4125375)) / (float)uVar20;
  if (uVar6 != 0) {
    puVar17 = (undefined4 *)(local_98 + 8);
    puVar8 = (undefined4 *)(local_88 + 8);
    puVar12 = (undefined4 *)(lVar10 + 8);
    puVar13 = (undefined4 *)(local_90 + 8);
    do {
      puVar8[-2] = puVar17[-2];
      puVar8[-1] = puVar17[-1];
      *puVar8 = *puVar17;
      puVar8[1] = puVar17[1];
      puVar12[-2] = puVar13[-2];
      puVar12[-1] = puVar13[-1];
      *puVar12 = *puVar13;
      puVar14 = puVar13 + 1;
      uVar16 = uVar16 - 1;
      puVar17 = puVar17 + 4;
      puVar8 = puVar8 + 9;
      puVar13 = puVar13 + 4;
      puVar12[1] = *puVar14;
      puVar12 = puVar12 + 9;
    } while (uVar16 != 0);
  }
  return;
}


