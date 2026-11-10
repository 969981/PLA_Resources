/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03047478; name: FUN_03047478
 */


void FUN_03047478(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 local_290 [65];
  byte *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  
  puVar8 = PTR_PTR_0434a080;
  lVar21 = *(long *)(param_2 + 0x150);
  local_78 = (undefined8 *)0x0;
  local_70 = 0x8000000000000000;
  local_88 = (byte *)0x0;
  local_80 = 0x8000000000000000;
  auVar30._8_4_ = 0x7f7fffee;
  auVar30._0_8_ = 0x7f7fffee7f7fffee;
  auVar30._12_4_ = 0x7f7fffee;
  auVar28._8_4_ = 0xff7fffee;
  auVar28._0_8_ = 0xff7fffeeff7fffee;
  auVar28._12_4_ = 0xff7fffee;
  uVar4 = *(uint *)(param_2 + 0x174);
  uVar13 = 0;
  do {
    uVar15 = local_70;
    puVar10 = local_78;
    lVar2 = lVar21 + (ulong)uVar13 * 0x80;
    if (*(int *)(lVar2 + 0x4c) != 0 && *(int *)(lVar2 + 0x4c) != 0x7fffffff) {
      fVar22 = (float)*(double *)(lVar2 + 0x10);
      fVar25 = (float)*(double *)(lVar2 + 0x18);
      fVar23 = (float)*(double *)(lVar2 + 0x20);
      uVar14 = local_70._4_4_;
      uVar1 = (int)local_70 + 1;
      if ((int)(local_70._4_4_ & 0x3fffffff) <= (int)local_70) {
        if (0x3ffffffe < (int)local_70) {
          FUN_032bd0a8(uVar1);
        }
        uVar14 = (uVar14 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar14) {
          uVar14 = 0x3fffffff;
        }
        uVar3 = uVar1;
        if ((int)uVar1 <= (int)uVar14) {
          uVar3 = uVar14;
        }
        local_78 = (undefined8 *)
                   FUN_032bd1d4(puVar8,uVar3,0x10,puVar10,uVar15 & 0xffffffff,(long)&local_70 + 4);
      }
      uVar15 = local_80;
      pbVar9 = local_88;
      (local_78 + (long)(int)local_70 * 2)[1] = (ulong)(uint)fVar23;
      local_78[(long)(int)local_70 * 2] = CONCAT44(fVar25,fVar22);
      uVar14 = local_80._4_4_;
      local_70 = CONCAT44(local_70._4_4_,uVar1);
      uVar1 = (int)local_80 + 1;
      if ((int)(local_80._4_4_ & 0x3fffffff) <= (int)local_80) {
        if (0x3ffffffe < (int)local_80) {
          FUN_032bd0a8(uVar1);
        }
        uVar14 = (uVar14 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar14) {
          uVar14 = 0x3fffffff;
        }
        uVar3 = uVar1;
        if ((int)uVar1 <= (int)uVar14) {
          uVar3 = uVar14;
        }
        local_88 = (byte *)FUN_032bd1d4(puVar8,uVar3,1,pbVar9,uVar15 & 0xffffffff,
                                        (long)&local_80 + 4);
      }
      auVar6._4_4_ = fVar25;
      auVar6._0_4_ = fVar22;
      auVar6._8_4_ = fVar23;
      auVar6._12_4_ = 0;
      auVar30 = NEON_fmin(auVar30,auVar6,4);
      auVar7._4_4_ = fVar25;
      auVar7._0_4_ = fVar22;
      auVar7._8_4_ = fVar23;
      auVar7._12_4_ = 0;
      auVar28 = NEON_fmax(auVar28,auVar7,4);
      local_88[(int)local_80] = *(byte *)(lVar2 + 0x5f);
      local_80 = CONCAT44(local_80._4_4_,uVar1);
    }
    puVar10 = local_78;
    pbVar9 = local_88;
    uVar13 = uVar13 + 1;
  } while (uVar13 <= uVar4);
  uVar13 = *(uint *)((long)param_1 + 0x1c);
  if (0 < (int)uVar13) {
    uVar15 = 0;
    do {
      fVar22 = (float)((uint)(uVar15 >> 2) & 0x3fffffff) * 0.25;
      auVar29._0_8_ =
           CONCAT44(auVar30._4_4_ + (auVar28._4_4_ - auVar30._4_4_) * fVar22,
                    auVar30._0_4_ +
                    (auVar28._0_4_ - auVar30._0_4_) * (float)((uint)uVar15 & 3) * 0.25);
      auVar29._8_4_ = auVar30._8_4_ + (auVar28._8_4_ - auVar30._8_4_) * fVar22;
      auVar29._12_4_ = auVar30._12_4_ + (auVar28._12_4_ - auVar30._12_4_) * 0.0;
      (param_1 + uVar15 * 2 + 0x16)[1] = auVar29._8_8_;
      param_1[uVar15 * 2 + 0x16] = auVar29._0_8_;
      uVar15 = uVar15 + 1;
    } while ((long)(int)uVar13 != uVar15);
  }
  iVar11 = (int)local_70;
  uVar15 = local_70 & 0xffffffff;
  *(int *)((long)param_1 + 0x24) = (int)local_70;
  iVar18 = 0;
  while( true ) {
    if (0 < (int)uVar13) {
      memset(local_290,0,(ulong)uVar13 << 4);
      memset(param_1 + 5,0,(ulong)uVar13 << 2);
    }
    pbVar19 = pbVar9;
    puVar20 = puVar10;
    uVar17 = uVar15;
    if (0 < iVar11) {
      do {
        uVar12 = (**(code **)(*param_1 + 0x20))(param_1,puVar20);
        uVar16 = -(uVar12 >> 0x1f & 1) & 0xfffffff000000000 | (uVar12 & 0xffffffff) << 4;
        uVar24 = *(undefined8 *)((long)local_290 + uVar16 + 8);
        uVar26 = *puVar20;
        uVar17 = uVar17 - 1;
        *(ulong *)((long)local_290 + uVar16 + 8) =
             CONCAT44((float)((ulong)uVar24 >> 0x20) + (float)((ulong)puVar20[1] >> 0x20),
                      (float)uVar24 + (float)puVar20[1]);
        *(ulong *)((long)local_290 + uVar16) =
             CONCAT44((float)((ulong)*(undefined8 *)((long)local_290 + uVar16) >> 0x20) +
                      (float)((ulong)uVar26 >> 0x20),
                      (float)*(undefined8 *)((long)local_290 + uVar16) + (float)uVar26);
        *(uint *)((long)param_1 + (long)(int)uVar12 * 4 + 0x28) =
             *(int *)((long)param_1 + (long)(int)uVar12 * 4 + 0x28) + (uint)*pbVar19;
        pbVar19 = pbVar19 + 1;
        puVar20 = puVar20 + 2;
      } while (uVar17 != 0);
      uVar13 = *(uint *)((long)param_1 + 0x1c);
    }
    if (0 < (int)uVar13) {
      lVar21 = 0;
      do {
        uVar5 = *(undefined4 *)((long)param_1 + lVar21 * 4 + 0x28);
        uVar24 = NEON_scvtf(CONCAT44(uVar5,uVar5),4);
        uVar26 = NEON_frecpe(uVar24,4);
        uVar27 = NEON_frecps(uVar24,uVar26,4);
        fVar22 = (float)uVar26 * (float)uVar27;
        fVar23 = (float)((ulong)uVar26 >> 0x20) * (float)((ulong)uVar27 >> 0x20);
        uVar24 = NEON_frecps(uVar24,CONCAT44(fVar23,fVar22),4);
        fVar22 = fVar22 * (float)uVar24;
        fVar23 = fVar23 * (float)((ulong)uVar24 >> 0x20);
        uVar24 = local_290[lVar21 * 2];
        lVar2 = lVar21 + 1;
        (param_1 + lVar21 * 2 + 0x16)[1] =
             CONCAT44((float)((ulong)local_290[lVar21 * 2 + 1] >> 0x20) * fVar23,
                      (float)local_290[lVar21 * 2 + 1] * fVar22);
        param_1[lVar21 * 2 + 0x16] =
             CONCAT44((float)((ulong)uVar24 >> 0x20) * fVar23,(float)uVar24 * fVar22);
        lVar21 = lVar2;
      } while ((int)uVar13 != lVar2);
    }
    FUN_03047890(param_1,uVar13);
    uVar17 = local_80;
    iVar18 = iVar18 + 1;
    if (iVar18 == 0x14) break;
    uVar13 = *(uint *)((long)param_1 + 0x1c);
  }
  uVar13 = local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < (long)uVar17) && (pbVar9 != (byte *)0x0)) {
    (**(code **)(*(long *)puVar8 + 0x18))(puVar8,pbVar9,uVar13 & 0x3fffffff);
  }
  uVar15 = local_70;
  uVar17 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < (long)uVar15) && (puVar10 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar8 + 0x18))(puVar8,puVar10,(uVar17 & 0x3fffffff) << 4);
  }
  return;
}


