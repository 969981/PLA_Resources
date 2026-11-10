/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf48bc; name: FUN_02bf48bc
 */


undefined4
FUN_02bf48bc(long param_1,undefined1 (*param_2) [12],undefined8 *param_3,uint param_4,
            undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
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
  byte bVar24;
  int iVar25;
  int iVar29;
  int iVar30;
  undefined1 auVar26 [16];
  int iVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
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
  uVar8 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  local_2e0 = *(undefined8 *)*param_2;
  auVar26._12_4_ = uVar8;
  auVar26._0_12_ = *param_2;
  auVar34._12_4_ = uVar8;
  auVar34._0_12_ = *param_2;
  auVar26 = NEON_ext(auVar26,auVar34,8,1);
  uStack_2d8 = (ulong)(uint)auVar26._0_4_;
  auVar34 = ZEXT816(0x3f800000);
  fVar5 = (float)*param_3 - (float)local_2e0;
  fVar6 = (float)((ulong)*param_3 >> 0x20) - (float)((ulong)local_2e0 >> 0x20);
  fVar7 = (float)param_3[1] - auVar26._0_4_;
  local_300 = 0xffff;
  local_310 = 0;
  local_308 = (undefined ***)0x0;
  iVar25 = -(uint)(fVar5 == 0.0);
  iVar29 = -(uint)(fVar6 == 0.0);
  iVar30 = -(uint)(fVar7 == 0.0);
  iVar31 = -(uint)(auVar34._0_4_ == 0.0);
  bVar11 = SUB41(fVar5,0) & ~(byte)iVar25;
  bVar12 = (byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar25 >> 8);
  bVar13 = (byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
  bVar14 = (byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
  bVar15 = SUB41(fVar6,0) & ~(byte)iVar29;
  bVar16 = (byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar29 >> 8);
  bVar17 = (byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
  bVar18 = (byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
  bVar19 = SUB41(fVar7,0) & ~(byte)iVar30;
  bVar20 = (byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar30 >> 8);
  bVar21 = (byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
  bVar22 = (byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
  bVar23 = auVar34[2] & ~(byte)((uint)iVar31 >> 0x10);
  bVar24 = auVar34[3] & ~(byte)((uint)iVar31 >> 0x18);
  auVar2[1] = bVar12;
  auVar2[0] = bVar11;
  auVar2[2] = bVar13;
  auVar2[3] = bVar14;
  auVar2[4] = bVar15;
  auVar2[5] = bVar16;
  auVar2[6] = bVar17;
  auVar2[7] = bVar18;
  auVar2[8] = bVar19;
  auVar2[9] = bVar20;
  auVar2[10] = bVar21;
  auVar2[0xb] = bVar22;
  auVar2._12_2_ = 0;
  auVar2[0xe] = bVar23;
  auVar2[0xf] = bVar24;
  auVar26 = NEON_frecpe(auVar2,4);
  local_2fc = 0;
  iVar25 = -(uint)((float)CONCAT13(bVar14,CONCAT12(bVar13,CONCAT11(bVar12,bVar11))) == 0.0);
  iVar29 = -(uint)((float)CONCAT13(bVar18,CONCAT12(bVar17,CONCAT11(bVar16,bVar15))) == 0.0);
  iVar30 = -(uint)((float)CONCAT13(bVar22,CONCAT12(bVar21,CONCAT11(bVar20,bVar19))) == 0.0);
  iVar31 = -(uint)((float)((uint)CONCAT11(bVar24,bVar23) << 0x10) == 0.0);
  auVar27[0] = ~(byte)iVar25;
  auVar27[1] = ~(byte)((uint)iVar25 >> 8);
  auVar27[2] = ~(byte)((uint)iVar25 >> 0x10);
  auVar27[3] = ~(byte)((uint)iVar25 >> 0x18);
  auVar27[4] = ~(byte)iVar29;
  auVar27[5] = ~(byte)((uint)iVar29 >> 8);
  auVar27[6] = ~(byte)((uint)iVar29 >> 0x10);
  auVar27[7] = ~(byte)((uint)iVar29 >> 0x18);
  auVar27[8] = ~(byte)iVar30;
  auVar27[9] = ~(byte)((uint)iVar30 >> 8);
  auVar27[10] = ~(byte)((uint)iVar30 >> 0x10);
  auVar27[0xb] = ~(byte)((uint)iVar30 >> 0x18);
  auVar27[0xc] = ~(byte)iVar31;
  auVar27[0xd] = ~(byte)((uint)iVar31 >> 8);
  auVar27[0xe] = ~(byte)((uint)iVar31 >> 0x10);
  auVar27[0xf] = ~(byte)((uint)iVar31 >> 0x18);
  auVar3[1] = bVar12;
  auVar3[0] = bVar11;
  auVar3[2] = bVar13;
  auVar3[3] = bVar14;
  auVar3[4] = bVar15;
  auVar3[5] = bVar16;
  auVar3[6] = bVar17;
  auVar3[7] = bVar18;
  auVar3[8] = bVar19;
  auVar3[9] = bVar20;
  auVar3[10] = bVar21;
  auVar3[0xb] = bVar22;
  auVar3._12_2_ = 0;
  auVar3[0xe] = bVar23;
  auVar3[0xf] = bVar24;
  auVar34 = NEON_frecps(auVar3,auVar26,4);
  local_2f8 = 0;
  auVar32._0_4_ = auVar26._0_4_ * auVar34._0_4_;
  auVar32._4_4_ = auVar26._4_4_ * auVar34._4_4_;
  auVar32._8_4_ = auVar26._8_4_ * auVar34._8_4_;
  auVar32._12_4_ = auVar26._12_4_ * auVar34._12_4_;
  local_2f0 = 1;
  auVar4[1] = bVar12;
  auVar4[0] = bVar11;
  auVar4[2] = bVar13;
  auVar4[3] = bVar14;
  auVar4[4] = bVar15;
  auVar4[5] = bVar16;
  auVar4[6] = bVar17;
  auVar4[7] = bVar18;
  auVar4[8] = bVar19;
  auVar4[9] = bVar20;
  auVar4[10] = bVar21;
  auVar4[0xb] = bVar22;
  auVar4._12_2_ = 0;
  auVar4[0xe] = bVar23;
  auVar4[0xf] = bVar24;
  auVar26 = NEON_frecps(auVar4,auVar32,4);
  local_2b0 = 0;
  auVar33._0_4_ = auVar32._0_4_ * auVar26._0_4_;
  auVar33._4_4_ = auVar32._4_4_ * auVar26._4_4_;
  auVar33._8_4_ = auVar32._8_4_ * auVar26._8_4_;
  auVar33._12_4_ = auVar32._12_4_ * auVar26._12_4_;
  auVar28._8_4_ = 0x7f7fffee;
  auVar28._0_8_ = 0x7f7fffee7f7fffee;
  auVar28._12_4_ = 0x7f7fffee;
  local_2ee = 0xfb;
  auVar28 = auVar28 ^ (auVar28 ^ auVar33) & auVar27;
  uStack_2c8 = CONCAT17(bVar24,CONCAT16(bVar23,(uint6)CONCAT13(bVar22,CONCAT12(bVar21,CONCAT11(
                                                  bVar20,bVar19)))));
  local_2d0 = CONCAT17(bVar18,CONCAT16(bVar17,CONCAT15(bVar16,CONCAT14(bVar15,CONCAT13(bVar14,
                                                  CONCAT12(bVar13,CONCAT11(bVar12,bVar11)))))));
  uStack_2b8 = auVar28._8_8_;
  uStack_2c0 = auVar28._0_8_;
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
  uVar8 = FUN_02bf3f70(param_1,&local_310,param_5,param_6,param_7);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
  return uVar8;
}


