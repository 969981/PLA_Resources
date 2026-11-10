/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf5edc; name: FUN_02bf5edc
 */


uint FUN_02bf5edc(long param_1,undefined8 param_2,undefined1 (*param_3) [12],undefined8 *param_4,
                 uint param_5,undefined8 param_6,undefined4 param_7)

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
  long *plVar10;
  uint uVar11;
  long lVar12;
  undefined4 uVar13;
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
  byte bVar26;
  byte bVar27;
  int iVar28;
  int iVar32;
  int iVar33;
  undefined1 auVar29 [16];
  int iVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
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
  FUN_02c05e04(param_2,&local_2a8);
  plVar10 = local_2a8;
  uVar13 = (undefined4)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  local_320 = *(undefined8 *)*param_3;
  auVar29._12_4_ = uVar13;
  auVar29._0_12_ = *param_3;
  auVar37._12_4_ = uVar13;
  auVar37._0_12_ = *param_3;
  auVar29 = NEON_ext(auVar29,auVar37,8,1);
  uStack_318 = (ulong)(uint)auVar29._0_4_;
  auVar37 = ZEXT816(0x3f800000);
  fVar7 = (float)*param_4 - (float)local_320;
  fVar8 = (float)((ulong)*param_4 >> 0x20) - (float)((ulong)local_320 >> 0x20);
  fVar9 = (float)param_4[1] - auVar29._0_4_;
  local_350 = 0;
  local_348 = (undefined ***)0x0;
  local_340 = 0xffff;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_32e = 0xfb;
  local_2f0 = 0x3a83126f;
  iVar28 = -(uint)(fVar7 == 0.0);
  iVar32 = -(uint)(fVar8 == 0.0);
  iVar33 = -(uint)(fVar9 == 0.0);
  iVar34 = -(uint)(auVar37._0_4_ == 0.0);
  bVar14 = SUB41(fVar7,0) & ~(byte)iVar28;
  bVar15 = (byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar28 >> 8);
  bVar16 = (byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
  bVar17 = (byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
  bVar18 = SUB41(fVar8,0) & ~(byte)iVar32;
  bVar19 = (byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar32 >> 8);
  bVar20 = (byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10);
  bVar21 = (byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18);
  bVar22 = SUB41(fVar9,0) & ~(byte)iVar33;
  bVar23 = (byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar33 >> 8);
  bVar24 = (byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10);
  bVar25 = (byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18);
  bVar26 = auVar37[2] & ~(byte)((uint)iVar34 >> 0x10);
  bVar27 = auVar37[3] & ~(byte)((uint)iVar34 >> 0x18);
  local_2e8 = 0x10000000000;
  uStack_2e0 = 0;
  local_2d8 = 0x7f7fffee;
  auVar4[1] = bVar15;
  auVar4[0] = bVar14;
  auVar4[2] = bVar16;
  auVar4[3] = bVar17;
  auVar4[4] = bVar18;
  auVar4[5] = bVar19;
  auVar4[6] = bVar20;
  auVar4[7] = bVar21;
  auVar4[8] = bVar22;
  auVar4[9] = bVar23;
  auVar4[10] = bVar24;
  auVar4[0xb] = bVar25;
  auVar4._12_2_ = 0;
  auVar4[0xe] = bVar26;
  auVar4[0xf] = bVar27;
  auVar29 = NEON_frecpe(auVar4,4);
  local_33c = 0;
  iVar28 = -(uint)((float)CONCAT13(bVar17,CONCAT12(bVar16,CONCAT11(bVar15,bVar14))) == 0.0);
  iVar32 = -(uint)((float)CONCAT13(bVar21,CONCAT12(bVar20,CONCAT11(bVar19,bVar18))) == 0.0);
  iVar33 = -(uint)((float)CONCAT13(bVar25,CONCAT12(bVar24,CONCAT11(bVar23,bVar22))) == 0.0);
  iVar34 = -(uint)((float)((uint)CONCAT11(bVar27,bVar26) << 0x10) == 0.0);
  auVar30[0] = ~(byte)iVar28;
  auVar30[1] = ~(byte)((uint)iVar28 >> 8);
  auVar30[2] = ~(byte)((uint)iVar28 >> 0x10);
  auVar30[3] = ~(byte)((uint)iVar28 >> 0x18);
  auVar30[4] = ~(byte)iVar32;
  auVar30[5] = ~(byte)((uint)iVar32 >> 8);
  auVar30[6] = ~(byte)((uint)iVar32 >> 0x10);
  auVar30[7] = ~(byte)((uint)iVar32 >> 0x18);
  auVar30[8] = ~(byte)iVar33;
  auVar30[9] = ~(byte)((uint)iVar33 >> 8);
  auVar30[10] = ~(byte)((uint)iVar33 >> 0x10);
  auVar30[0xb] = ~(byte)((uint)iVar33 >> 0x18);
  auVar30[0xc] = ~(byte)iVar34;
  auVar30[0xd] = ~(byte)((uint)iVar34 >> 8);
  auVar30[0xe] = ~(byte)((uint)iVar34 >> 0x10);
  auVar30[0xf] = ~(byte)((uint)iVar34 >> 0x18);
  auVar5[1] = bVar15;
  auVar5[0] = bVar14;
  auVar5[2] = bVar16;
  auVar5[3] = bVar17;
  auVar5[4] = bVar18;
  auVar5[5] = bVar19;
  auVar5[6] = bVar20;
  auVar5[7] = bVar21;
  auVar5[8] = bVar22;
  auVar5[9] = bVar23;
  auVar5[10] = bVar24;
  auVar5[0xb] = bVar25;
  auVar5._12_2_ = 0;
  auVar5[0xe] = bVar26;
  auVar5[0xf] = bVar27;
  auVar37 = NEON_frecps(auVar5,auVar29,4);
  local_338 = 0;
  auVar35._0_4_ = auVar29._0_4_ * auVar37._0_4_;
  auVar35._4_4_ = auVar29._4_4_ * auVar37._4_4_;
  auVar35._8_4_ = auVar29._8_4_ * auVar37._8_4_;
  auVar35._12_4_ = auVar29._12_4_ * auVar37._12_4_;
  local_330 = 1;
  auVar6[1] = bVar15;
  auVar6[0] = bVar14;
  auVar6[2] = bVar16;
  auVar6[3] = bVar17;
  auVar6[4] = bVar18;
  auVar6[5] = bVar19;
  auVar6[6] = bVar20;
  auVar6[7] = bVar21;
  auVar6[8] = bVar22;
  auVar6[9] = bVar23;
  auVar6[10] = bVar24;
  auVar6[0xb] = bVar25;
  auVar6._12_2_ = 0;
  auVar6[0xe] = bVar26;
  auVar6[0xf] = bVar27;
  auVar29 = NEON_frecps(auVar6,auVar35,4);
  local_328 = local_2a8;
  auVar36._0_4_ = auVar35._0_4_ * auVar29._0_4_;
  auVar36._4_4_ = auVar35._4_4_ * auVar29._4_4_;
  auVar36._8_4_ = auVar35._8_4_ * auVar29._8_4_;
  auVar36._12_4_ = auVar35._12_4_ * auVar29._12_4_;
  auVar31._8_4_ = 0x7f7fffee;
  auVar31._0_8_ = 0x7f7fffee7f7fffee;
  auVar31._12_4_ = 0x7f7fffee;
  auVar31 = auVar31 ^ (auVar31 ^ auVar36) & auVar30;
  uStack_308 = CONCAT17(bVar27,CONCAT16(bVar26,(uint6)CONCAT13(bVar25,CONCAT12(bVar24,CONCAT11(
                                                  bVar23,bVar22)))));
  local_310 = CONCAT17(bVar21,CONCAT16(bVar20,CONCAT15(bVar19,CONCAT14(bVar18,CONCAT13(bVar17,
                                                  CONCAT12(bVar16,CONCAT11(bVar15,bVar14)))))));
  uStack_2f8 = auVar31._8_8_;
  uStack_300 = auVar31._0_8_;
  local_350 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
  if (-1 < (int)param_5) {
    lVar12 = 0;
    while (lVar12 = lVar12 + 8, lVar12 != 0x200) {
      if (lVar12 != 0) {
        *(ulong *)((long)local_278 + lVar12) = *(ulong *)((long)local_278 + lVar12) & 1;
      }
    }
    local_278[1] = local_278[1] | 1L << ((ulong)param_5 & 0x3f);
    local_278[(int)param_5] = local_278[(int)param_5] | 2;
    local_350 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
    local_33c = 1;
  }
  local_348 = &ppuStack_2a0;
  uVar11 = FUN_02bf4ac4(param_1,&local_350,param_6,param_7);
  if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
    plVar1 = plVar10 + 2;
    do {
      lVar12 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
  return uVar11 & 1;
}


