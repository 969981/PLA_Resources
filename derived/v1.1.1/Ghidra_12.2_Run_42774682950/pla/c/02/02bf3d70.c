/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf3d70; name: FUN_02bf3d70
 */


uint FUN_02bf3d70(long param_1,undefined1 (*param_2) [12],undefined8 *param_3,uint param_4,
                 undefined8 param_5,undefined4 param_6)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
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
  byte bVar24;
  byte bVar25;
  int iVar26;
  int iVar30;
  int iVar31;
  undefined1 auVar27 [16];
  int iVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
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
  ulong local_298 [2];
  undefined1 local_288;
  undefined4 local_280;
  ulong local_278 [67];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x128));
  local_280 = 0;
  local_298[0] = 0xffffffff;
  local_298[1] = 1;
  memset(local_278,0xff,0x200);
  local_2a0 = &PTR_LAB_04287208;
  local_288 = 2;
  uVar11 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  local_2e0 = *(undefined8 *)*param_2;
  auVar27._12_4_ = uVar11;
  auVar27._0_12_ = *param_2;
  auVar35._12_4_ = uVar11;
  auVar35._0_12_ = *param_2;
  auVar27 = NEON_ext(auVar27,auVar35,8,1);
  uStack_2d8 = (ulong)(uint)auVar27._0_4_;
  auVar35 = ZEXT816(0x3f800000);
  fVar5 = (float)*param_3 - (float)local_2e0;
  fVar6 = (float)((ulong)*param_3 >> 0x20) - (float)((ulong)local_2e0 >> 0x20);
  fVar7 = (float)param_3[1] - auVar27._0_4_;
  local_300 = 0xffff;
  local_310 = 0;
  local_308 = (undefined ***)0x0;
  iVar26 = -(uint)(fVar5 == 0.0);
  iVar30 = -(uint)(fVar6 == 0.0);
  iVar31 = -(uint)(fVar7 == 0.0);
  iVar32 = -(uint)(auVar35._0_4_ == 0.0);
  bVar12 = SUB41(fVar5,0) & ~(byte)iVar26;
  bVar13 = (byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar26 >> 8);
  bVar14 = (byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
  bVar15 = (byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
  bVar16 = SUB41(fVar6,0) & ~(byte)iVar30;
  bVar17 = (byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar30 >> 8);
  bVar18 = (byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
  bVar19 = (byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
  bVar20 = SUB41(fVar7,0) & ~(byte)iVar31;
  bVar21 = (byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar31 >> 8);
  bVar22 = (byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
  bVar23 = (byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
  bVar24 = auVar35[2] & ~(byte)((uint)iVar32 >> 0x10);
  bVar25 = auVar35[3] & ~(byte)((uint)iVar32 >> 0x18);
  auVar2[1] = bVar13;
  auVar2[0] = bVar12;
  auVar2[2] = bVar14;
  auVar2[3] = bVar15;
  auVar2[4] = bVar16;
  auVar2[5] = bVar17;
  auVar2[6] = bVar18;
  auVar2[7] = bVar19;
  auVar2[8] = bVar20;
  auVar2[9] = bVar21;
  auVar2[10] = bVar22;
  auVar2[0xb] = bVar23;
  auVar2._12_2_ = 0;
  auVar2[0xe] = bVar24;
  auVar2[0xf] = bVar25;
  auVar27 = NEON_frecpe(auVar2,4);
  local_2fc = 0;
  iVar26 = -(uint)((float)CONCAT13(bVar15,CONCAT12(bVar14,CONCAT11(bVar13,bVar12))) == 0.0);
  iVar30 = -(uint)((float)CONCAT13(bVar19,CONCAT12(bVar18,CONCAT11(bVar17,bVar16))) == 0.0);
  iVar31 = -(uint)((float)CONCAT13(bVar23,CONCAT12(bVar22,CONCAT11(bVar21,bVar20))) == 0.0);
  iVar32 = -(uint)((float)((uint)CONCAT11(bVar25,bVar24) << 0x10) == 0.0);
  auVar28[0] = ~(byte)iVar26;
  auVar28[1] = ~(byte)((uint)iVar26 >> 8);
  auVar28[2] = ~(byte)((uint)iVar26 >> 0x10);
  auVar28[3] = ~(byte)((uint)iVar26 >> 0x18);
  auVar28[4] = ~(byte)iVar30;
  auVar28[5] = ~(byte)((uint)iVar30 >> 8);
  auVar28[6] = ~(byte)((uint)iVar30 >> 0x10);
  auVar28[7] = ~(byte)((uint)iVar30 >> 0x18);
  auVar28[8] = ~(byte)iVar31;
  auVar28[9] = ~(byte)((uint)iVar31 >> 8);
  auVar28[10] = ~(byte)((uint)iVar31 >> 0x10);
  auVar28[0xb] = ~(byte)((uint)iVar31 >> 0x18);
  auVar28[0xc] = ~(byte)iVar32;
  auVar28[0xd] = ~(byte)((uint)iVar32 >> 8);
  auVar28[0xe] = ~(byte)((uint)iVar32 >> 0x10);
  auVar28[0xf] = ~(byte)((uint)iVar32 >> 0x18);
  auVar3[1] = bVar13;
  auVar3[0] = bVar12;
  auVar3[2] = bVar14;
  auVar3[3] = bVar15;
  auVar3[4] = bVar16;
  auVar3[5] = bVar17;
  auVar3[6] = bVar18;
  auVar3[7] = bVar19;
  auVar3[8] = bVar20;
  auVar3[9] = bVar21;
  auVar3[10] = bVar22;
  auVar3[0xb] = bVar23;
  auVar3._12_2_ = 0;
  auVar3[0xe] = bVar24;
  auVar3[0xf] = bVar25;
  auVar35 = NEON_frecps(auVar3,auVar27,4);
  local_2f8 = 0;
  auVar33._0_4_ = auVar27._0_4_ * auVar35._0_4_;
  auVar33._4_4_ = auVar27._4_4_ * auVar35._4_4_;
  auVar33._8_4_ = auVar27._8_4_ * auVar35._8_4_;
  auVar33._12_4_ = auVar27._12_4_ * auVar35._12_4_;
  local_2f0 = 1;
  auVar4[1] = bVar13;
  auVar4[0] = bVar12;
  auVar4[2] = bVar14;
  auVar4[3] = bVar15;
  auVar4[4] = bVar16;
  auVar4[5] = bVar17;
  auVar4[6] = bVar18;
  auVar4[7] = bVar19;
  auVar4[8] = bVar20;
  auVar4[9] = bVar21;
  auVar4[10] = bVar22;
  auVar4[0xb] = bVar23;
  auVar4._12_2_ = 0;
  auVar4[0xe] = bVar24;
  auVar4[0xf] = bVar25;
  auVar27 = NEON_frecps(auVar4,auVar33,4);
  local_2b0 = 0;
  auVar34._0_4_ = auVar33._0_4_ * auVar27._0_4_;
  auVar34._4_4_ = auVar33._4_4_ * auVar27._4_4_;
  auVar34._8_4_ = auVar33._8_4_ * auVar27._8_4_;
  auVar34._12_4_ = auVar33._12_4_ * auVar27._12_4_;
  auVar29._8_4_ = 0x7f7fffee;
  auVar29._0_8_ = 0x7f7fffee7f7fffee;
  auVar29._12_4_ = 0x7f7fffee;
  local_2ee = 0xfb;
  auVar29 = auVar29 ^ (auVar29 ^ auVar34) & auVar28;
  uStack_2c8 = CONCAT17(bVar25,CONCAT16(bVar24,(uint6)CONCAT13(bVar23,CONCAT12(bVar22,CONCAT11(
                                                  bVar21,bVar20)))));
  local_2d0 = CONCAT17(bVar19,CONCAT16(bVar18,CONCAT15(bVar17,CONCAT14(bVar16,CONCAT13(bVar15,
                                                  CONCAT12(bVar14,CONCAT11(bVar13,bVar12)))))));
  uStack_2b8 = auVar29._8_8_;
  uStack_2c0 = auVar29._0_8_;
  local_310 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
  lVar1 = 0x28;
  while (lVar9 = lVar1, lVar1 = lVar9 + 8, lVar1 != 0x228) {
    if (lVar1 != 0x28) {
      *(ulong *)((long)local_298 + lVar9) = *(ulong *)((long)local_298 + lVar9) & 1;
    }
  }
  uVar10 = 0;
  do {
    if (uVar10 == 1) {
      local_278[1] = local_278[1] | param_4;
    }
    if ((1L << (uVar10 & 0x3f) & (ulong)param_4) != 0) {
      local_278[uVar10] = local_278[uVar10] | 2;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 != 0x40);
  local_308 = &local_2a0;
  local_310 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
  local_2fc = 1;
  uVar8 = FUN_02bf3448(param_1,&local_310,param_5,param_6);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
  return uVar8 & 1;
}


