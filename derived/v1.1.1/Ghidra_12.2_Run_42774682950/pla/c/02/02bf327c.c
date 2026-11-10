/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf327c; name: FUN_02bf327c
 */


uint FUN_02bf327c(long param_1,undefined1 (*param_2) [12],undefined8 *param_3,ulong param_4,
                 undefined8 param_5,undefined4 param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  long lVar8;
  undefined4 uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  int iVar24;
  int iVar28;
  int iVar29;
  undefined1 auVar25 [16];
  int iVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 local_310;
  undefined ***local_308;
  undefined2 local_300;
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined2 local_2f0;
  undefined1 local_2ee;
  undefined8 local_2e0;
  ulong uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 local_2b0;
  undefined **local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288;
  undefined4 local_280;
  ulong local_278 [67];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x128));
  local_298 = 0xffffffff;
  uStack_290 = 1;
  local_280 = 0;
  memset(local_278,0xff,0x200);
  local_2a0 = &PTR_LAB_04287208;
  local_288 = 2;
  uVar9 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  local_2e0 = *(undefined8 *)*param_2;
  auVar25._12_4_ = uVar9;
  auVar25._0_12_ = *param_2;
  auVar33._12_4_ = uVar9;
  auVar33._0_12_ = *param_2;
  auVar25 = NEON_ext(auVar25,auVar33,8,1);
  uStack_2d8 = (ulong)(uint)auVar25._0_4_;
  auVar33 = ZEXT816(0x3f800000);
  fVar4 = (float)*param_3 - (float)local_2e0;
  fVar5 = (float)((ulong)*param_3 >> 0x20) - (float)((ulong)local_2e0 >> 0x20);
  fVar6 = (float)param_3[1] - auVar25._0_4_;
  local_300 = 0xffff;
  local_310 = 0;
  local_308 = (undefined ***)0x0;
  iVar24 = -(uint)(fVar4 == 0.0);
  iVar28 = -(uint)(fVar5 == 0.0);
  iVar29 = -(uint)(fVar6 == 0.0);
  iVar30 = -(uint)(auVar33._0_4_ == 0.0);
  bVar10 = SUB41(fVar4,0) & ~(byte)iVar24;
  bVar11 = (byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar24 >> 8);
  bVar12 = (byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
  bVar13 = (byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
  bVar14 = SUB41(fVar5,0) & ~(byte)iVar28;
  bVar15 = (byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar28 >> 8);
  bVar16 = (byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
  bVar17 = (byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
  bVar18 = SUB41(fVar6,0) & ~(byte)iVar29;
  bVar19 = (byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar29 >> 8);
  bVar20 = (byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
  bVar21 = (byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
  bVar22 = auVar33[2] & ~(byte)((uint)iVar30 >> 0x10);
  bVar23 = auVar33[3] & ~(byte)((uint)iVar30 >> 0x18);
  auVar1[1] = bVar11;
  auVar1[0] = bVar10;
  auVar1[2] = bVar12;
  auVar1[3] = bVar13;
  auVar1[4] = bVar14;
  auVar1[5] = bVar15;
  auVar1[6] = bVar16;
  auVar1[7] = bVar17;
  auVar1[8] = bVar18;
  auVar1[9] = bVar19;
  auVar1[10] = bVar20;
  auVar1[0xb] = bVar21;
  auVar1._12_2_ = 0;
  auVar1[0xe] = bVar22;
  auVar1[0xf] = bVar23;
  auVar25 = NEON_frecpe(auVar1,4);
  local_2fc = 0;
  iVar24 = -(uint)((float)CONCAT13(bVar13,CONCAT12(bVar12,CONCAT11(bVar11,bVar10))) == 0.0);
  iVar28 = -(uint)((float)CONCAT13(bVar17,CONCAT12(bVar16,CONCAT11(bVar15,bVar14))) == 0.0);
  iVar29 = -(uint)((float)CONCAT13(bVar21,CONCAT12(bVar20,CONCAT11(bVar19,bVar18))) == 0.0);
  iVar30 = -(uint)((float)((uint)CONCAT11(bVar23,bVar22) << 0x10) == 0.0);
  auVar26[0] = ~(byte)iVar24;
  auVar26[1] = ~(byte)((uint)iVar24 >> 8);
  auVar26[2] = ~(byte)((uint)iVar24 >> 0x10);
  auVar26[3] = ~(byte)((uint)iVar24 >> 0x18);
  auVar26[4] = ~(byte)iVar28;
  auVar26[5] = ~(byte)((uint)iVar28 >> 8);
  auVar26[6] = ~(byte)((uint)iVar28 >> 0x10);
  auVar26[7] = ~(byte)((uint)iVar28 >> 0x18);
  auVar26[8] = ~(byte)iVar29;
  auVar26[9] = ~(byte)((uint)iVar29 >> 8);
  auVar26[10] = ~(byte)((uint)iVar29 >> 0x10);
  auVar26[0xb] = ~(byte)((uint)iVar29 >> 0x18);
  auVar26[0xc] = ~(byte)iVar30;
  auVar26[0xd] = ~(byte)((uint)iVar30 >> 8);
  auVar26[0xe] = ~(byte)((uint)iVar30 >> 0x10);
  auVar26[0xf] = ~(byte)((uint)iVar30 >> 0x18);
  auVar2[1] = bVar11;
  auVar2[0] = bVar10;
  auVar2[2] = bVar12;
  auVar2[3] = bVar13;
  auVar2[4] = bVar14;
  auVar2[5] = bVar15;
  auVar2[6] = bVar16;
  auVar2[7] = bVar17;
  auVar2[8] = bVar18;
  auVar2[9] = bVar19;
  auVar2[10] = bVar20;
  auVar2[0xb] = bVar21;
  auVar2._12_2_ = 0;
  auVar2[0xe] = bVar22;
  auVar2[0xf] = bVar23;
  auVar33 = NEON_frecps(auVar2,auVar25,4);
  local_2f8 = 0;
  auVar31._0_4_ = auVar25._0_4_ * auVar33._0_4_;
  auVar31._4_4_ = auVar25._4_4_ * auVar33._4_4_;
  auVar31._8_4_ = auVar25._8_4_ * auVar33._8_4_;
  auVar31._12_4_ = auVar25._12_4_ * auVar33._12_4_;
  local_2f0 = 1;
  auVar3[1] = bVar11;
  auVar3[0] = bVar10;
  auVar3[2] = bVar12;
  auVar3[3] = bVar13;
  auVar3[4] = bVar14;
  auVar3[5] = bVar15;
  auVar3[6] = bVar16;
  auVar3[7] = bVar17;
  auVar3[8] = bVar18;
  auVar3[9] = bVar19;
  auVar3[10] = bVar20;
  auVar3[0xb] = bVar21;
  auVar3._12_2_ = 0;
  auVar3[0xe] = bVar22;
  auVar3[0xf] = bVar23;
  auVar25 = NEON_frecps(auVar3,auVar31,4);
  local_2b0 = 0;
  auVar32._0_4_ = auVar31._0_4_ * auVar25._0_4_;
  auVar32._4_4_ = auVar31._4_4_ * auVar25._4_4_;
  auVar32._8_4_ = auVar31._8_4_ * auVar25._8_4_;
  auVar32._12_4_ = auVar31._12_4_ * auVar25._12_4_;
  auVar27._8_4_ = 0x7f7fffee;
  auVar27._0_8_ = 0x7f7fffee7f7fffee;
  auVar27._12_4_ = 0x7f7fffee;
  local_2ee = 0xfb;
  auVar27 = auVar27 ^ (auVar27 ^ auVar32) & auVar26;
  uStack_2c8 = CONCAT17(bVar23,CONCAT16(bVar22,(uint6)CONCAT13(bVar21,CONCAT12(bVar20,CONCAT11(
                                                  bVar19,bVar18)))));
  local_2d0 = CONCAT17(bVar17,CONCAT16(bVar16,CONCAT15(bVar15,CONCAT14(bVar14,CONCAT13(bVar13,
                                                  CONCAT12(bVar12,CONCAT11(bVar11,bVar10)))))));
  uStack_2b8 = auVar27._8_8_;
  uStack_2c0 = auVar27._0_8_;
  local_310 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
  iVar24 = (int)param_4;
  if (-1 < iVar24) {
    lVar8 = 0;
    while (lVar8 = lVar8 + 8, lVar8 != 0x200) {
      if (lVar8 != 0) {
        *(ulong *)((long)local_278 + lVar8) = *(ulong *)((long)local_278 + lVar8) & 1;
      }
    }
    local_278[1] = local_278[1] | 1L << (param_4 & 0x3f);
    local_278[iVar24] = local_278[iVar24] | 2;
    local_310 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
    local_2fc = 1;
  }
  local_308 = &local_2a0;
  uVar7 = FUN_02bf3448(param_1,&local_310,param_5,param_6);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
  return uVar7 & 1;
}


