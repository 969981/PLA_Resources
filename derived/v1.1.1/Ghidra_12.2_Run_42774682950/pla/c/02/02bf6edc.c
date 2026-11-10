/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf6edc; name: FUN_02bf6edc
 */


undefined4
FUN_02bf6edc(long param_1,undefined8 param_2,undefined1 (*param_3) [12],undefined8 *param_4,
            ulong param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  long lVar11;
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
  undefined8 local_350;
  undefined ***local_348;
  undefined2 local_340;
  undefined4 local_33c;
  undefined8 local_338;
  undefined2 local_330;
  undefined1 local_32e;
  long *local_328;
  undefined8 local_320;
  ulong uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  long *local_2a8;
  undefined **ppuStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288;
  undefined4 local_280;
  ulong local_278 [67];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x128));
  local_280 = 0;
  local_298 = 0xffffffff;
  uStack_290 = 1;
  memset(local_278,0xff,0x200);
  local_2a8 = (long *)0x0;
  ppuStack_2a0 = &PTR_LAB_04287208;
  local_288 = 2;
  FUN_02c06260(param_2,&local_2a8);
  uVar10 = (undefined4)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  local_320 = *(undefined8 *)*param_3;
  auVar27._12_4_ = uVar10;
  auVar27._0_12_ = *param_3;
  auVar35._12_4_ = uVar10;
  auVar35._0_12_ = *param_3;
  auVar27 = NEON_ext(auVar27,auVar35,8,1);
  uStack_318 = (ulong)(uint)auVar27._0_4_;
  auVar35 = ZEXT816(0x3f800000);
  fVar7 = (float)*param_4 - (float)local_320;
  fVar8 = (float)((ulong)*param_4 >> 0x20) - (float)((ulong)local_320 >> 0x20);
  fVar9 = (float)param_4[1] - auVar27._0_4_;
  local_350 = 0;
  local_348 = (undefined ***)0x0;
  local_328 = local_2a8;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2f0 = 0x3a83126f;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_340 = 0xffff;
  local_2e8 = 0x10000000000;
  uStack_2e0 = 0;
  iVar26 = -(uint)(fVar7 == 0.0);
  iVar30 = -(uint)(fVar8 == 0.0);
  iVar31 = -(uint)(fVar9 == 0.0);
  iVar32 = -(uint)(auVar35._0_4_ == 0.0);
  bVar12 = SUB41(fVar7,0) & ~(byte)iVar26;
  bVar13 = (byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar26 >> 8);
  bVar14 = (byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
  bVar15 = (byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
  bVar16 = SUB41(fVar8,0) & ~(byte)iVar30;
  bVar17 = (byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar30 >> 8);
  bVar18 = (byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
  bVar19 = (byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
  bVar20 = SUB41(fVar9,0) & ~(byte)iVar31;
  bVar21 = (byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar31 >> 8);
  bVar22 = (byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
  bVar23 = (byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
  bVar24 = auVar35[2] & ~(byte)((uint)iVar32 >> 0x10);
  bVar25 = auVar35[3] & ~(byte)((uint)iVar32 >> 0x18);
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
  auVar27 = NEON_frecpe(auVar4,4);
  auVar5[1] = bVar13;
  auVar5[0] = bVar12;
  auVar5[2] = bVar14;
  auVar5[3] = bVar15;
  auVar5[4] = bVar16;
  auVar5[5] = bVar17;
  auVar5[6] = bVar18;
  auVar5[7] = bVar19;
  auVar5[8] = bVar20;
  auVar5[9] = bVar21;
  auVar5[10] = bVar22;
  auVar5[0xb] = bVar23;
  auVar5._12_2_ = 0;
  auVar5[0xe] = bVar24;
  auVar5[0xf] = bVar25;
  auVar35 = NEON_frecps(auVar5,auVar27,4);
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
  auVar33._0_4_ = auVar27._0_4_ * auVar35._0_4_;
  auVar33._4_4_ = auVar27._4_4_ * auVar35._4_4_;
  auVar33._8_4_ = auVar27._8_4_ * auVar35._8_4_;
  auVar33._12_4_ = auVar27._12_4_ * auVar35._12_4_;
  local_33c = 0;
  auVar6[1] = bVar13;
  auVar6[0] = bVar12;
  auVar6[2] = bVar14;
  auVar6[3] = bVar15;
  auVar6[4] = bVar16;
  auVar6[5] = bVar17;
  auVar6[6] = bVar18;
  auVar6[7] = bVar19;
  auVar6[8] = bVar20;
  auVar6[9] = bVar21;
  auVar6[10] = bVar22;
  auVar6[0xb] = bVar23;
  auVar6._12_2_ = 0;
  auVar6[0xe] = bVar24;
  auVar6[0xf] = bVar25;
  auVar27 = NEON_frecps(auVar6,auVar33,4);
  local_338 = 0;
  auVar34._0_4_ = auVar33._0_4_ * auVar27._0_4_;
  auVar34._4_4_ = auVar33._4_4_ * auVar27._4_4_;
  auVar34._8_4_ = auVar33._8_4_ * auVar27._8_4_;
  auVar34._12_4_ = auVar33._12_4_ * auVar27._12_4_;
  local_330 = 1;
  auVar29._8_4_ = 0x7f7fffee;
  auVar29._0_8_ = 0x7f7fffee7f7fffee;
  auVar29._12_4_ = 0x7f7fffee;
  local_32e = 0xfb;
  auVar29 = auVar29 ^ (auVar29 ^ auVar34) & auVar28;
  local_2d8 = 0x7f7fffee;
  uStack_308 = CONCAT17(bVar25,CONCAT16(bVar24,(uint6)CONCAT13(bVar23,CONCAT12(bVar22,CONCAT11(
                                                  bVar21,bVar20)))));
  local_310 = CONCAT17(bVar19,CONCAT16(bVar18,CONCAT15(bVar17,CONCAT14(bVar16,CONCAT13(bVar15,
                                                  CONCAT12(bVar14,CONCAT11(bVar13,bVar12)))))));
  uStack_2f8 = auVar29._8_8_;
  uStack_300 = auVar29._0_8_;
  local_350 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
  iVar26 = (int)param_5;
  if (-1 < iVar26) {
    lVar11 = 0;
    while (lVar11 = lVar11 + 8, lVar11 != 0x200) {
      if (lVar11 != 0) {
        *(ulong *)((long)local_278 + lVar11) = *(ulong *)((long)local_278 + lVar11) & 1;
      }
    }
    local_278[1] = local_278[1] | 1L << (param_5 & 0x3f);
    local_278[iVar26] = local_278[iVar26] | 2;
    local_350 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
    local_33c = 1;
  }
  local_348 = &ppuStack_2a0;
  uVar10 = FUN_02bf54dc(param_1,&local_350,param_6,param_7,param_8);
  if ((local_2a8 != (long *)0x0) && (local_2a8[1] != 0)) {
    plVar1 = local_2a8 + 2;
    do {
      lVar11 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)(*local_2a8 + 0x18))();
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
  return uVar10;
}


