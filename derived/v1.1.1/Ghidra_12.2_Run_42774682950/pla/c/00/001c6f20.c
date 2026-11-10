/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001c6f20; name: FUN_001c6f20
 */


void FUN_001c6f20(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 local_90 [8];
  
  local_90[7] = 0;
  local_90[5] = 0;
  local_90[6] = 0;
  local_90[0] = 0;
  local_90[3] = 0;
  local_90[4] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  puVar13 = (uint *)((long)param_2 + 0xc);
  uVar6 = *puVar13;
  iVar9 = (int)param_2[1];
  uVar1 = iVar9 + ((int)param_1[1] + 3 >> 2);
  if ((int)(uVar6 & 0x3fffffff) < (int)uVar1) {
    uVar14 = *(undefined8 *)PTR_PTR_04372408;
    lVar15 = *param_2;
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar6 = *puVar13;
    }
    uVar6 = (uVar6 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar6) {
      uVar6 = 0x3fffffff;
    }
    uVar2 = uVar1;
    if ((int)uVar1 <= (int)uVar6) {
      uVar2 = uVar6;
    }
    lVar15 = FUN_032bd1d4(uVar14,uVar2,0x30,lVar15,iVar9,puVar13);
    *param_2 = lVar15;
    *(uint *)(param_2 + 1) = uVar1;
    uVar1 = *(uint *)(param_1 + 1);
  }
  else {
    lVar15 = *param_2;
    *(uint *)(param_2 + 1) = uVar1;
    uVar1 = *(uint *)(param_1 + 1);
  }
  if (0 < (int)uVar1) {
    puVar7 = (undefined8 *)(lVar15 + (long)iVar9 * 0x30);
    uVar12 = 0;
    iVar9 = 0;
    do {
      puVar11 = (undefined8 *)(*param_1 + uVar12 * 0x10);
      uVar14 = *puVar11;
      local_90[(long)iVar9 * 2 + 1] = puVar11[1];
      local_90[(long)iVar9 * 2] = uVar14;
      iVar9 = iVar9 + 1;
      if (iVar9 == 4) {
        auVar16._8_8_ = local_90[1];
        auVar16._0_8_ = local_90[0];
        auVar18._8_8_ = local_90[3];
        auVar18._0_8_ = local_90[2];
        auVar17 = NEON_ext(auVar16,auVar16,8,1);
        auVar19._8_8_ = local_90[5];
        auVar19._0_8_ = local_90[4];
        auVar20._8_8_ = local_90[7];
        auVar20._0_8_ = local_90[6];
        auVar16 = NEON_ext(auVar18,auVar18,8,1);
        auVar19 = NEON_ext(auVar19,auVar19,8,1);
        auVar18 = NEON_ext(auVar20,auVar20,8,1);
        iVar9 = 0;
        puVar7[1] = CONCAT44((int)local_90[6],(int)local_90[4]);
        *puVar7 = CONCAT44((int)local_90[2],(int)local_90[0]);
        puVar7[3] = CONCAT44((int)((ulong)local_90[6] >> 0x20),(int)((ulong)local_90[4] >> 0x20));
        puVar7[2] = CONCAT44((int)((ulong)local_90[2] >> 0x20),(int)((ulong)local_90[0] >> 0x20));
        puVar7[5] = CONCAT44(auVar18._0_4_,auVar19._0_4_);
        puVar7[4] = CONCAT44(auVar16._0_4_,auVar17._0_4_);
        puVar7 = puVar7 + 6;
      }
      uVar12 = uVar12 + 1;
    } while (uVar1 != uVar12);
    if (iVar9 != 0) {
      if (iVar9 < 4) {
        lVar8 = (long)iVar9;
        uVar10 = 3 - lVar8;
        uVar12 = (ulong)(uint)-iVar9 & 3;
        lVar15 = lVar8;
        if ((-iVar9 & 3U) != 0) {
          do {
            lVar15 = lVar8 + 1;
            uVar12 = uVar12 - 1;
            local_90[lVar8 * 2 + 1] = local_90[1];
            local_90[lVar8 * 2] = local_90[0];
            lVar8 = lVar15;
          } while (uVar12 != 0);
        }
        if (2 < uVar10) {
          lVar8 = lVar15 + -4;
          puVar11 = local_90 + lVar15 * 2 + 4;
          do {
            puVar11[-3] = local_90[1];
            puVar11[-4] = local_90[0];
            puVar11[-1] = local_90[1];
            puVar11[-2] = local_90[0];
            lVar8 = lVar8 + 4;
            puVar11[1] = local_90[1];
            *puVar11 = local_90[0];
            puVar11[3] = local_90[1];
            puVar11[2] = local_90[0];
            puVar11 = puVar11 + 8;
          } while (lVar8 != 0);
        }
      }
      auVar17._8_8_ = local_90[1];
      auVar17._0_8_ = local_90[0];
      auVar3._8_8_ = local_90[3];
      auVar3._0_8_ = local_90[2];
      auVar18 = NEON_ext(auVar17,auVar17,8,1);
      auVar4._8_8_ = local_90[5];
      auVar4._0_8_ = local_90[4];
      auVar5._8_8_ = local_90[7];
      auVar5._0_8_ = local_90[6];
      auVar16 = NEON_ext(auVar3,auVar3,8,1);
      auVar20 = NEON_ext(auVar4,auVar4,8,1);
      auVar19 = NEON_ext(auVar5,auVar5,8,1);
      puVar7[1] = CONCAT44((int)local_90[6],(int)local_90[4]);
      *puVar7 = CONCAT44((int)local_90[2],(int)local_90[0]);
      puVar7[3] = CONCAT44((int)((ulong)local_90[6] >> 0x20),(int)((ulong)local_90[4] >> 0x20));
      puVar7[2] = CONCAT44((int)((ulong)local_90[2] >> 0x20),(int)((ulong)local_90[0] >> 0x20));
      puVar7[5] = CONCAT44(auVar19._0_4_,auVar20._0_4_);
      puVar7[4] = CONCAT44(auVar16._0_4_,auVar18._0_4_);
    }
  }
  return;
}


