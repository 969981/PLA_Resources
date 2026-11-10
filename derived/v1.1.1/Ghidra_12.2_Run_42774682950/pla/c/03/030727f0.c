/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030727f0; name: FUN_030727f0
 */


void FUN_030727f0(long param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined1 *param_6)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined1 (*pauVar3) [12];
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong uVar17;
  undefined1 uVar18;
  byte *pbVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  byte local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_58 = *(undefined8 *)(param_1 + 0x78);
  local_68 = *(undefined8 *)(param_1 + 0x68);
  local_78 = *(undefined8 *)(param_1 + 0x58);
  local_80 = *(undefined8 *)(param_1 + 0x50);
  local_70 = *(undefined8 *)(param_1 + 0x60);
  local_60 = *(undefined8 *)(param_1 + 0x70);
  pauVar1 = (undefined1 (*) [12])(param_1 + 0xf80);
  uVar20 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xf88) >> 0x20);
  pauVar2 = (undefined1 (*) [12])(param_1 + 0xf90);
  uVar24 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xf98) >> 0x20);
  pauVar3 = (undefined1 (*) [12])(param_1 + 4000);
  uVar26 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xfa8) >> 0x20);
  fVar25 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
  auVar27._12_4_ = uVar20;
  auVar27._0_12_ = *pauVar1;
  auVar28._12_4_ = uVar20;
  auVar28._0_12_ = *pauVar1;
  auVar27 = NEON_ext(auVar27,auVar28,8,1);
  auVar30._12_4_ = uVar24;
  auVar30._0_12_ = *pauVar2;
  auVar31._12_4_ = uVar24;
  auVar31._0_12_ = *pauVar2;
  auVar28 = NEON_ext(auVar30,auVar31,8,1);
  auVar13._12_4_ = uVar26;
  auVar13._0_12_ = *pauVar3;
  auVar14._12_4_ = uVar26;
  auVar14._0_12_ = *pauVar3;
  auVar29 = NEON_ext(auVar13,auVar14,8,1);
  fVar23 = (float)param_2[1];
  fVar21 = (float)*param_2;
  fVar22 = (float)((ulong)*param_2 >> 0x20);
  uStack_48 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) -
                       (auVar29._4_4_ * fVar23 + fVar25 * fVar21 + auVar29._4_4_ * fVar22),
                       (float)*(undefined8 *)(param_1 + 0x88) -
                       (auVar29._0_4_ * fVar23 +
                       (float)*(undefined8 *)*pauVar3 * fVar21 + fVar25 * fVar22));
  local_50 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20) -
                      (auVar28._0_4_ * fVar23 +
                      (float)*(undefined8 *)*pauVar2 * fVar21 +
                      (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20) * fVar22),
                      (float)*(undefined8 *)(param_1 + 0x80) -
                      (auVar27._0_4_ * fVar23 +
                      (float)*(undefined8 *)*pauVar1 * fVar21 +
                      (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20) * fVar22));
  local_a8 = *param_3;
  local_a4 = *(byte *)(param_3 + 1);
  auVar27 = *(undefined1 (*) [16])(param_1 + 0x390);
  auVar31 = NEON_ext(auVar27,auVar27,8,1);
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x370);
  uVar20 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x378) >> 0x20);
  pauVar2 = (undefined1 (*) [12])(param_1 + 0x380);
  uVar24 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x388) >> 0x20);
  auVar15._12_4_ = uVar24;
  auVar15._0_12_ = *pauVar2;
  auVar16._12_4_ = uVar24;
  auVar16._0_12_ = *pauVar2;
  auVar30 = NEON_ext(auVar15,auVar16,8,1);
  auVar29._12_4_ = uVar20;
  auVar29._0_12_ = *pauVar1;
  auVar12._12_4_ = uVar20;
  auVar12._0_12_ = *pauVar1;
  auVar28 = NEON_ext(auVar29,auVar12,8,1);
  uStack_b8 = CONCAT44(auVar31._4_4_ * fVar23 + auVar27._4_4_ * fVar21 + auVar31._4_4_ * fVar22,
                       auVar31._0_4_ * fVar23 + auVar27._0_4_ * fVar21 + auVar27._4_4_ * fVar22);
  local_c0 = CONCAT44(auVar30._0_4_ * fVar23 +
                      (float)*(undefined8 *)*pauVar2 * fVar21 +
                      (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20) * fVar22,
                      auVar28._0_4_ * fVar23 +
                      (float)*(undefined8 *)*pauVar1 * fVar21 +
                      (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20) * fVar22);
  local_c8 = NEON_fmov(0x3f800000,4);
  uVar17 = FUN_03072400(param_1 + 0x1ba0,param_1 + 0x27b0,&local_80,&local_c0,&local_c8,0,&local_a8,
                        &local_a0,&local_b0);
  if ((uVar17 & 1) == 0) {
    uVar18 = 0;
    *param_5 = 0x3f8000003f800000;
    goto LAB_0307297c;
  }
  bVar8 = *(byte *)(param_3 + 1);
  if ((bVar8 & 3) == 3) {
LAB_03072964:
    uVar18 = 0;
  }
  else {
    bVar6 = local_a4 & 3;
    if (bVar6 != 3) {
      pbVar5 = (byte *)((long)param_3 + (ulong)(bVar8 >> 6));
      pbVar19 = (byte *)((ulong)&local_a8 | (ulong)(local_a4 >> 6));
      if ((bVar8 & 3) == 2) {
        if ((*pbVar19 == *pbVar5) || (*pbVar19 == pbVar5[1])) {
          if (bVar6 != 2) goto LAB_03072964;
          if ((pbVar19[1] == *pbVar5) || (pbVar19[1] == pbVar5[1])) goto LAB_03072a2c;
        }
LAB_03072ae0:
        FUN_03072af0(param_1,&local_a0,&local_a8);
      }
      else {
        bVar9 = *pbVar5;
        bVar10 = *pbVar19;
        if (bVar6 == 2) {
          if ((bVar9 != bVar10) && (bVar9 != pbVar19[1])) goto LAB_03072ae0;
        }
        else if ((uint)bVar9 != (uint)bVar10) {
          if (*(int *)(*(long *)(param_1 + 0x360) + 0x44) == 4) {
            iVar11 = (uint)bVar10 - (uint)bVar9;
            uVar4 = iVar11 + 4;
            uVar7 = iVar11 + 7;
            if (-1 < (int)uVar4) {
              uVar7 = uVar4;
            }
            if (uVar4 - (uVar7 & 0xfffffffc) == 2) goto LAB_03072ae0;
          }
          goto LAB_03072964;
        }
LAB_03072a2c:
        if ((local_a4 >> 6 <= bVar8 >> 6) &&
           ((uVar18 = 0, local_a4 >> 6 != bVar8 >> 6 || ((float)local_b0 == 0.0))))
        goto LAB_03072968;
      }
    }
    *(byte *)(param_3 + 1) = local_a4;
    *param_3 = local_a8;
    *param_4 = local_a0;
    uVar18 = 1;
    *(undefined4 *)(param_4 + 3) = local_88;
    param_4[1] = uStack_98;
    param_4[2] = local_90;
  }
LAB_03072968:
  *param_5 = local_b0;
LAB_0307297c:
  *param_6 = uVar18;
  return;
}


