/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffd988; name: FUN_02ffd988
 */


undefined8
FUN_02ffd988(undefined8 param_1,long param_2,uint param_3,int param_4,undefined8 *param_5,
            undefined8 *param_6,undefined8 param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  undefined8 uVar21;
  undefined8 uVar23;
  undefined8 uVar24;
  long local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [56];
  undefined1 auStack_a8 [48];
  long local_78;
  undefined8 local_70;
  
  lVar13 = DAT_04434b38;
  puVar5 = PTR_PTR_0434a090;
  fVar17 = (float)param_1;
  local_78 = 0;
  local_70._0_4_ = 0;
  local_70._4_4_ = 0x80000000;
  lVar10 = (long)&local_70 + 4;
  if ((fVar17 <= 0.0) || (param_4 != 2)) {
    if ((int)param_3 < 1) {
      local_70._4_4_ = 0x80000000;
      local_70._0_4_ = param_3;
    }
    else {
      if (0x3fffffff < (int)param_3) {
        FUN_032bd0a8(param_3);
      }
      local_78 = FUN_032bd1d4(puVar5,param_3,0x10,0,0,lVar10);
      lVar10 = 0;
      puVar12 = (undefined4 *)(param_2 + 8);
      while( true ) {
        lVar13 = lVar10 * 0x10;
        uVar23 = *(undefined8 *)(puVar12 + -2);
        ((undefined8 *)(local_78 + lVar13))[1] = CONCAT44(*puVar12,*puVar12);
        *(undefined8 *)(local_78 + lVar13) = uVar23;
        uVar21 = ((undefined8 *)(local_78 + lVar13))[1];
        uVar23 = *(undefined8 *)(local_78 + lVar13);
        uVar24 = *param_5;
        ((undefined8 *)(local_78 + lVar13))[1] =
             CONCAT44((float)((ulong)uVar21 >> 0x20) * (float)((ulong)param_5[1] >> 0x20),
                      (float)uVar21 * (float)param_5[1]);
        *(undefined8 *)(local_78 + lVar13) =
             CONCAT44((float)((ulong)uVar23 >> 0x20) * (float)((ulong)uVar24 >> 0x20),
                      (float)uVar23 * (float)uVar24);
        uVar21 = ((undefined8 *)(local_78 + lVar13))[1];
        uVar23 = *(undefined8 *)(local_78 + lVar13);
        uVar24 = *param_6;
        ((undefined8 *)(local_78 + lVar13))[1] =
             CONCAT44((float)((ulong)uVar21 >> 0x20) + (float)((ulong)param_6[1] >> 0x20),
                      (float)uVar21 + (float)param_6[1]);
        *(undefined8 *)(local_78 + lVar13) =
             CONCAT44((float)((ulong)uVar23 >> 0x20) + (float)((ulong)uVar24 >> 0x20),
                      (float)uVar23 + (float)uVar24);
        local_70._0_4_ = param_3;
        if ((ulong)param_3 - 1 == lVar10) break;
        lVar10 = lVar10 + 1;
        puVar12 = puVar12 + 3;
      }
    }
  }
  else {
    uVar3 = *(uint *)(DAT_04434b38 + 0x9b8);
    iVar7 = uVar3 * param_3;
    lVar8 = local_78;
    if (0 < iVar7) {
      if (0x3fffffff < iVar7) {
        FUN_032bd0a8(iVar7);
      }
      lVar8 = FUN_032bd1d4(puVar5,iVar7,0x10,0,0,lVar10);
    }
    local_78 = lVar8;
    if (0 < (int)param_3) {
      if ((int)uVar3 < 1) {
        do {
          uVar6 = (uint)local_70;
          uVar1 = (uint)local_70 + uVar3;
          if ((int)(local_70._4_4_ & 0x3fffffff) < (int)uVar1) {
            if (0x3fffffff < (int)uVar1) {
              FUN_032bd0a8(uVar1);
            }
            uVar15 = (local_70._4_4_ & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar15) {
              uVar15 = 0x3fffffff;
            }
            uVar2 = uVar1;
            if ((int)uVar1 <= (int)uVar15) {
              uVar2 = uVar15;
            }
            lVar8 = FUN_032bd1d4(puVar5,uVar2,0x10,lVar8,uVar6,lVar10);
            local_78 = lVar8;
          }
          param_3 = param_3 - 1;
          local_70._0_4_ = uVar1;
        } while (param_3 != 0);
      }
      else {
        uVar14 = 0;
        do {
          uVar6 = (uint)local_70;
          lVar8 = local_78;
          lVar16 = (long)(int)(uint)local_70;
          uVar1 = (uint)local_70 + uVar3;
          if ((int)(local_70._4_4_ & 0x3fffffff) < (int)uVar1) {
            if (0x3fffffff < (int)uVar1) {
              FUN_032bd0a8(uVar1);
            }
            uVar15 = (local_70._4_4_ & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar15) {
              uVar15 = 0x3fffffff;
            }
            uVar2 = uVar1;
            if ((int)uVar1 <= (int)uVar15) {
              uVar2 = uVar15;
            }
            local_78 = FUN_032bd1d4(puVar5,uVar2,0x10,lVar8,uVar6,lVar10);
          }
          puVar11 = (undefined8 *)(param_2 + uVar14 * 0xc);
          uVar9 = 0;
          lVar8 = local_78 + lVar16 * 0x10;
          do {
            fVar22 = *(float *)(puVar11 + 1);
            uVar23 = *puVar11;
            lVar16 = uVar9 * 0x10;
            uVar9 = uVar9 + 1;
            fVar18 = (float)*param_5 * (float)uVar23;
            fVar19 = (float)((ulong)*param_5 >> 0x20) * (float)((ulong)uVar23 >> 0x20);
            fVar20 = (float)param_5[1] * fVar22;
            fVar22 = (float)((ulong)param_5[1] >> 0x20) * fVar22;
            ((undefined8 *)(lVar8 + lVar16))[1] = CONCAT44(fVar22,fVar20);
            *(undefined8 *)(lVar8 + lVar16) = CONCAT44(fVar19,fVar18);
            fVar18 = (float)*param_6 + fVar18;
            fVar19 = (float)((ulong)*param_6 >> 0x20) + fVar19;
            fVar20 = (float)param_6[1] + fVar20;
            fVar22 = (float)((ulong)param_6[1] >> 0x20) + fVar22;
            ((undefined8 *)(lVar8 + lVar16))[1] = CONCAT44(fVar22,fVar20);
            *(undefined8 *)(lVar8 + lVar16) = CONCAT44(fVar19,fVar18);
            puVar4 = (undefined8 *)(*(long *)(lVar13 + 0x9b0) + lVar16);
            uVar21 = puVar4[1];
            uVar23 = *puVar4;
            ((undefined8 *)(lVar8 + lVar16))[1] =
                 CONCAT44(fVar22 + fVar17 * (float)((ulong)uVar21 >> 0x20),
                          fVar20 + fVar17 * (float)uVar21);
            *(undefined8 *)(lVar8 + lVar16) =
                 CONCAT44(fVar19 + fVar17 * (float)((ulong)uVar23 >> 0x20),
                          fVar18 + fVar17 * (float)uVar23);
          } while (uVar3 != uVar9);
          uVar14 = uVar14 + 1;
          local_70._0_4_ = uVar1;
        } while (uVar14 != param_3);
      }
    }
  }
  FUN_001b1d70(auStack_a8);
  FUN_001b1d20(auStack_e0);
  local_f0 = local_78;
  local_e8 = (uint)local_70;
  uStack_e4 = 0x10;
  iVar7 = FUN_001b2c70(auStack_a8,&local_f0,auStack_e0);
  if (iVar7 == -1) {
    uVar23 = 0x80040200;
  }
  else {
    if ((0.0 < fVar17) && (param_4 == 1)) {
      FUN_001b9e50(param_1,auStack_a8);
    }
    FUN_001c09f4(auStack_a8,0,param_7,param_8,1);
    uVar23 = 0;
  }
  FUN_001b1ed4(auStack_a8);
  uVar3 = local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < (int)uVar3) && (local_78 != 0)) {
    FUN_032cf244(puVar5,local_78,0x10,uVar3 & 0x3fffffff);
  }
  return uVar23;
}


