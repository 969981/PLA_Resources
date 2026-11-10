/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0182efb8; name: FUN_0182efb8
 */


/* WARNING: Removing unreachable block (ram,0x0182f70c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0182efb8(undefined1 *param_1,long param_2,undefined1 (*param_3) [16])

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long *plVar18;
  undefined4 uVar19;
  long lVar20;
  long lVar21;
  undefined1 *puVar22;
  long lVar23;
  undefined8 *puVar24;
  float fVar25;
  int iVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 local_8f8;
  undefined1 auStack_8f0 [48];
  ulong local_8c0;
  undefined4 local_890;
  undefined8 local_888;
  undefined4 local_880;
  undefined4 local_878;
  undefined1 local_874;
  undefined2 local_870;
  undefined4 local_86c;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined4 local_858;
  undefined4 local_850;
  undefined1 local_84c;
  undefined2 local_848;
  undefined4 local_844;
  undefined8 local_840;
  undefined8 uStack_838;
  ulong local_800;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined4 local_7d0;
  undefined8 local_7c8;
  undefined4 local_7c0;
  undefined4 local_7b8;
  undefined1 local_7b4;
  undefined2 local_7b0;
  undefined4 local_7ac;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined4 local_798;
  undefined4 local_790;
  undefined1 local_78c;
  undefined2 local_788;
  undefined4 local_784;
  undefined8 local_780;
  undefined8 uStack_778;
  ulong local_740;
  undefined8 local_730;
  undefined8 local_728;
  undefined8 local_720;
  undefined8 local_718;
  undefined4 local_710;
  undefined8 local_708;
  undefined4 local_700;
  undefined4 local_6f8;
  undefined1 local_6f4;
  undefined2 local_6f0;
  undefined4 local_6ec;
  undefined8 local_6e8;
  undefined8 local_6e0;
  undefined4 local_6d8;
  undefined4 local_6d0;
  undefined1 local_6cc;
  undefined2 local_6c8;
  undefined4 local_6c4;
  undefined8 local_6c0;
  undefined8 local_6b8;
  ulong local_680;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 local_660;
  undefined8 local_658;
  undefined4 local_650;
  undefined8 local_648;
  undefined4 local_640;
  undefined4 local_638;
  undefined1 local_634;
  undefined2 local_630;
  undefined4 local_62c;
  undefined8 local_628;
  undefined8 local_620;
  undefined4 local_618;
  undefined4 local_610;
  undefined1 local_60c;
  undefined2 local_608;
  undefined4 local_604;
  undefined8 local_600;
  undefined8 local_5f8;
  ulong local_5c0;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined4 local_590;
  undefined8 local_588;
  undefined4 local_580;
  undefined4 local_578;
  undefined1 local_574;
  undefined2 local_570;
  undefined4 local_56c;
  undefined8 local_568;
  undefined8 local_560;
  undefined4 local_558;
  undefined4 local_550;
  undefined1 local_54c;
  undefined2 local_548;
  undefined4 local_544;
  undefined8 local_540;
  undefined8 local_538;
  ulong local_500;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined4 local_4b8;
  undefined1 local_4b4;
  undefined2 local_4b0;
  undefined4 local_4ac;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined4 local_490;
  undefined1 local_48c;
  undefined2 local_488;
  undefined4 local_484;
  undefined8 local_480;
  undefined8 local_478;
  ulong local_440;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined4 local_410;
  undefined8 local_408;
  undefined4 local_400;
  undefined4 local_3f8;
  undefined1 local_3f4;
  undefined2 local_3f0;
  undefined4 local_3ec;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined4 local_3d0;
  undefined1 local_3cc;
  undefined2 local_3c8;
  undefined4 local_3c4;
  undefined8 local_3c0;
  undefined8 local_3b8;
  ulong local_380;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 local_338;
  undefined1 local_334;
  undefined2 local_330;
  undefined4 local_32c;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined4 local_310;
  undefined1 local_30c;
  undefined2 local_308;
  undefined4 local_304;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined1 auStack_2f0 [32];
  undefined4 local_2d0;
  undefined8 local_2c8;
  ulong local_2c0;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_278;
  undefined1 local_274;
  undefined2 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined4 local_250;
  undefined1 local_24c;
  undefined2 local_248;
  undefined4 local_244;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_210;
  undefined8 local_208;
  ulong local_200;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4;
  undefined2 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined1 local_18c;
  undefined2 local_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 auStack_170 [4];
  float local_16c;
  undefined4 local_150;
  undefined8 local_148;
  ulong local_140;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined2 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined2 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  
  puVar11 = PTR_DAT_0437a668;
  puVar10 = PTR_DAT_0437a660;
  puVar9 = PTR_DAT_043794d8;
  puVar8 = PTR_DAT_043794d0;
  lVar23 = *(long *)(param_2 + 0x1f0);
  if ((lVar23 != 0) && (*(int *)(lVar23 + 0xc) != 0)) {
    piVar1 = (int *)(lVar23 + 0xc);
    iVar26 = *(int *)(lVar23 + 0xc);
    do {
      puVar24 = *(undefined8 **)(lVar23 + 0x10);
      if (((*puVar11 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar11), iVar13 != 0)) {
        if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
          uVar16 = FUN_0087f8f0();
          *(undefined8 *)puVar9 = uVar16;
          __cxa_guard_release(puVar8);
        }
        *(undefined **)puVar10 = puVar9;
        __cxa_guard_release(puVar11);
      }
      while( true ) {
        if (puVar24 == (undefined8 *)0x0) goto LAB_0182efe8;
        if (puVar24 == (undefined8 *)puVar10) break;
        puVar24 = (undefined8 *)*puVar24;
      }
      iVar13 = *piVar1;
      if (iVar13 == iVar26) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar26 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar23 = *(long *)(lVar23 + 0x18);
          if (lVar23 != 0) {
            fVar25 = (float)FUN_00ae6464();
            fVar25 = fVar25 + 0.5;
            auVar32 = *param_3;
            fVar27 = (float)DAT_0388a140;
            fVar29 = (float)((ulong)DAT_0388a140 >> 0x20);
            fVar30 = (float)DAT_0388a148;
            fVar31 = (float)((ulong)DAT_0388a148 >> 0x20);
            local_a0 = auVar32._0_4_ + fVar27 * fVar25;
            fStack_9c = auVar32._4_4_ + fVar29 * fVar25;
            fStack_98 = auVar32._8_4_ + fVar30 * fVar25;
            fStack_94 = auVar32._12_4_ + fVar31 * fVar25;
            local_b0 = CONCAT44(fStack_9c + (float)((ulong)_DAT_03889a40 >> 0x20),
                                local_a0 + (float)_DAT_03889a40);
            uStack_a8 = CONCAT44(fStack_94 + (float)((ulong)_UNK_03889a48 >> 0x20),
                                 fStack_98 + (float)_UNK_03889a48);
            local_150 = 0;
            local_128 = 0;
            local_130 = 0;
            local_118 = 0;
            local_120 = 0;
            local_140 = 0;
            local_148 = 0;
            local_110 = 0x7f7fffee;
            local_108 = 0xffffffffffffffff;
            local_f8 = 0xffffffff;
            local_100 = 0xffffff;
            local_f4 = 0xf;
            local_f0 = 0xffff;
            local_ec = 0;
            local_e0 = 0xffffffffffffffff;
            local_e8 = 0;
            local_d0 = 0xffffffff;
            local_d8 = 0xffffff;
            local_cc = 0xf;
            local_c8 = 0xffff;
            local_c4 = 0;
            local_b8 = 0;
            local_c0 = 0;
            if (((*PTR_DAT_0437a648 & 1) == 0) &&
               (iVar26 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar26 != 0)) {
              FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_0437a648);
            }
            lVar20 = *(long *)PTR_DAT_0437a650;
            *(long *)PTR_DAT_0437a658 = lVar20;
            uVar17 = FUN_02bf3d70(*(undefined8 *)(lVar20 + 0x230),&local_a0,&local_b0,0x2e000,
                                  auStack_170,1);
            if ((uVar17 & 1) == 0) {
              *param_1 = 0;
            }
            else {
              local_210 = 0;
              local_1e8 = 0;
              local_1f0 = 0;
              local_1d8 = 0;
              local_1e0 = 0;
              local_200 = 0;
              local_208 = 0;
              local_1d0 = 0x7f7fffee;
              local_1c8 = 0xffffffffffffffff;
              local_1b8 = 0xffffffff;
              local_1c0 = 0xffffff;
              local_1b4 = 0xf;
              local_1b0 = 0xffff;
              local_1ac = 0;
              local_1a0 = 0xffffffffffffffff;
              local_1a8 = 0;
              local_190 = 0xffffffff;
              local_198 = 0xffffff;
              local_18c = 0xf;
              local_188 = 0xffff;
              local_184 = 0;
              local_178 = 0;
              local_180 = 0;
              uStack_a8 = CONCAT44(fStack_94 + (float)((ulong)_UNK_0388a4d8 >> 0x20),
                                   fStack_98 + (float)_UNK_0388a4d8);
              local_b0 = CONCAT44(fStack_9c + (float)((ulong)_DAT_0388a4d0 >> 0x20),
                                  local_a0 + (float)_DAT_0388a4d0);
              if (((*PTR_DAT_0437a648 & 1) == 0) &&
                 (iVar26 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar26 != 0)) {
                FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_0437a648);
              }
              lVar20 = *(long *)PTR_DAT_0437a650;
              *(long *)PTR_DAT_0437a658 = lVar20;
              uVar14 = FUN_02bf3d70(*(undefined8 *)(lVar20 + 0x230),&local_a0,&local_b0,0x2e000,
                                    &local_230,1);
              local_2d0 = 0;
              local_2a8 = 0;
              local_2b0 = 0;
              local_298 = 0;
              local_2a0 = 0;
              local_2c0 = 0;
              local_2c8 = 0;
              local_290 = 0x7f7fffee;
              local_288 = 0xffffffffffffffff;
              local_278 = 0xffffffff;
              local_280 = 0xffffff;
              local_274 = 0xf;
              local_270 = 0xffff;
              local_26c = 0;
              local_260 = 0xffffffffffffffff;
              local_268 = 0;
              local_250 = 0xffffffff;
              local_258 = 0xffffff;
              local_24c = 0xf;
              local_248 = 0xffff;
              local_244 = 0;
              local_238 = 0;
              local_240 = 0;
              if (((*PTR_DAT_0437a648 & 1) == 0) &&
                 (iVar26 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar26 != 0)) {
                FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_0437a648);
              }
              lVar20 = *(long *)PTR_DAT_0437a650;
              *(long *)PTR_DAT_0437a658 = lVar20;
              uVar15 = FUN_02bf3d70(*(undefined8 *)(lVar20 + 0x230),&local_a0,auStack_170,0x1001000,
                                    auStack_2f0,1);
              memset(auStack_8f0,0,0x600);
              local_874 = 0xf;
              local_84c = 0xf;
              local_7b4 = 0xf;
              local_78c = 0xf;
              local_6f4 = 0xf;
              local_6cc = 0xf;
              local_634 = 0xf;
              local_60c = 0xf;
              local_574 = 0xf;
              local_54c = 0xf;
              local_4b4 = 0xf;
              local_48c = 0xf;
              local_3f4 = 0xf;
              local_3cc = 0xf;
              local_334 = 0xf;
              local_30c = 0xf;
              local_800 = 0;
              local_890 = 0x7f7fffee;
              local_888 = 0xffffffffffffffff;
              local_878 = 0xffffffff;
              local_880 = 0xffffff;
              local_870 = 0xffff;
              local_86c = 0;
              local_850 = 0xffffffff;
              local_858 = 0xffffff;
              local_848 = 0xffff;
              local_844 = 0;
              local_740 = 0;
              local_7d0 = 0x7f7fffee;
              local_7c8 = 0xffffffffffffffff;
              local_7c0 = 0xffffff;
              local_7b8 = 0xffffffff;
              local_7b0 = 0xffff;
              local_7ac = 0;
              local_798 = 0xffffff;
              local_790 = 0xffffffff;
              local_788 = 0xffff;
              local_784 = 0;
              local_718 = 0;
              local_720 = 0;
              local_728 = 0;
              local_730 = 0;
              local_6b8 = 0;
              local_710 = 0x7f7fffee;
              local_708 = 0xffffffffffffffff;
              local_700 = 0xffffff;
              local_6f8 = 0xffffffff;
              local_6f0 = 0xffff;
              local_6ec = 0;
              local_6e8 = 0;
              local_6e0 = 0xffffffffffffffff;
              local_6d8 = 0xffffff;
              local_6d0 = 0xffffffff;
              local_6c8 = 0xffff;
              local_6c4 = 0;
              local_6c0 = 0;
              local_680 = 0;
              local_658 = 0;
              local_660 = 0;
              local_668 = 0;
              local_670 = 0;
              local_5f8 = 0;
              local_650 = 0x7f7fffee;
              local_648 = 0xffffffffffffffff;
              local_640 = 0xffffff;
              local_638 = 0xffffffff;
              local_630 = 0xffff;
              local_62c = 0;
              local_628 = 0;
              local_620 = 0xffffffffffffffff;
              local_618 = 0xffffff;
              local_610 = 0xffffffff;
              local_608 = 0xffff;
              local_604 = 0;
              local_600 = 0;
              local_5c0 = 0;
              local_598 = 0;
              local_5a0 = 0;
              local_5a8 = 0;
              local_5b0 = 0;
              local_538 = 0;
              local_590 = 0x7f7fffee;
              local_588 = 0xffffffffffffffff;
              local_580 = 0xffffff;
              local_578 = 0xffffffff;
              local_570 = 0xffff;
              local_56c = 0;
              local_568 = 0;
              local_560 = 0xffffffffffffffff;
              local_558 = 0xffffff;
              local_550 = 0xffffffff;
              local_548 = 0xffff;
              local_544 = 0;
              local_540 = 0;
              local_500 = 0;
              local_4d8 = 0;
              local_4e0 = 0;
              local_4e8 = 0;
              local_4f0 = 0;
              local_478 = 0;
              local_4d0 = 0x7f7fffee;
              local_4c8 = 0xffffffffffffffff;
              local_4c0 = 0xffffff;
              local_4b8 = 0xffffffff;
              local_4b0 = 0xffff;
              local_4ac = 0;
              local_4a8 = 0;
              local_4a0 = 0xffffffffffffffff;
              local_498 = 0xffffff;
              local_490 = 0xffffffff;
              local_488 = 0xffff;
              local_484 = 0;
              local_480 = 0;
              local_440 = 0;
              local_418 = 0;
              local_420 = 0;
              local_428 = 0;
              local_430 = 0;
              local_3b8 = 0;
              local_410 = 0x7f7fffee;
              local_408 = 0xffffffffffffffff;
              local_400 = 0xffffff;
              local_3f8 = 0xffffffff;
              local_3f0 = 0xffff;
              local_3ec = 0;
              local_3e8 = 0;
              local_3e0 = 0xffffffffffffffff;
              local_3d8 = 0xffffff;
              local_3d0 = 0xffffffff;
              local_3c8 = 0xffff;
              local_3c4 = 0;
              local_3c0 = 0;
              local_380 = 0;
              local_358 = 0;
              local_360 = 0;
              local_368 = 0;
              local_370 = 0;
              local_2f8 = 0;
              local_350 = 0x7f7fffee;
              local_348 = 0xffffffffffffffff;
              local_340 = 0xffffff;
              local_338 = 0xffffffff;
              local_330 = 0xffff;
              local_32c = 0;
              local_328 = 0;
              local_320 = 0xffffffffffffffff;
              local_318 = 0xffffff;
              local_310 = 0xffffffff;
              local_308 = 0xffff;
              local_304 = 0;
              local_300 = 0;
              local_840 = 0;
              uStack_838 = 0;
              local_868 = 0;
              uStack_860 = 0xffffffffffffffff;
              local_7e0 = 0;
              uStack_7d8 = 0;
              local_7f0 = 0;
              uStack_7e8 = 0;
              local_780 = 0;
              uStack_778 = 0;
              local_7a8 = 0;
              uStack_7a0 = 0xffffffffffffffff;
              if ((uVar14 & 1) != 0) {
                local_b0 = local_230;
                uStack_a8 = local_228;
              }
              if (((*PTR_DAT_0437a648 & 1) == 0) &&
                 (iVar26 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar26 != 0)) {
                FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_0437a648);
              }
              lVar20 = *(long *)PTR_DAT_0437a650;
              *(long *)PTR_DAT_0437a658 = lVar20;
              uVar14 = FUN_02bf48bc(*(undefined8 *)(lVar20 + 0x230),&local_a0,&local_b0,0x1001000,
                                    auStack_8f0,8,1);
              if ((uVar15 & 1) == 0 && uVar14 == 0) {
                *param_1 = 0;
                uVar17 = local_380;
              }
              else {
                if (uVar14 == 0) {
                  puVar22 = auStack_2f0;
                }
                else {
                  uVar15 = uVar14;
                  if (7 < uVar14) {
                    uVar15 = 8;
                  }
                  puVar22 = auStack_8f0 + (ulong)(uVar15 - 1) * 0xc0;
                }
                fVar25 = *(float *)(puVar22 + 4);
                if ((local_16c < *(float *)(*param_3 + 4)) ||
                   (fVar6 = local_16c, fStack_9c < local_16c)) {
                  fVar6 = *(float *)(*param_3 + 4);
                }
                iVar26 = -(uint)(uVar14 == 0);
                auVar32 = *(undefined1 (*) [16])(puVar22 + 0x10);
                auVar37._4_4_ = iVar26;
                auVar37._0_4_ = iVar26;
                auVar37._8_4_ = iVar26;
                auVar37._12_4_ = iVar26;
                fVar33 = 0.0 - auVar32._0_4_;
                fVar34 = 0.0 - auVar32._4_4_;
                fVar35 = 0.0 - auVar32._8_4_;
                fVar36 = 0.0 - auVar32._12_4_;
                auVar5._4_4_ = fVar34;
                auVar5._0_4_ = fVar33;
                auVar5._8_4_ = fVar35;
                auVar5._12_4_ = fVar36;
                auVar38._4_4_ = fVar34;
                auVar38._0_4_ = fVar33;
                auVar38._8_4_ = fVar35;
                auVar38._12_4_ = fVar36;
                auVar38 = auVar38 ^ (auVar5 ^ auVar32) & auVar37;
                fVar27 = auVar38._0_4_ * fVar27;
                fVar29 = auVar38._4_4_ * fVar29;
                fVar30 = auVar38._8_4_ * fVar30;
                fVar31 = auVar38._12_4_ * fVar31;
                auVar32._4_4_ = fVar29;
                auVar32._0_4_ = fVar27;
                auVar32._8_4_ = fVar30;
                auVar32._12_4_ = fVar31;
                auVar4._4_4_ = fVar29;
                auVar4._0_4_ = fVar27;
                auVar4._8_4_ = fVar30;
                auVar4._12_4_ = fVar31;
                auVar32 = NEON_ext(auVar32,auVar4,8,1);
                fVar29 = auVar32._0_4_ + fVar27 + auVar32._4_4_ + fVar29;
                fVar27 = -1.0;
                if (-1.0 <= fVar29) {
                  fVar27 = fVar29;
                }
                uVar28 = FUN_0095d8f0(fVar27);
                if (*(long *)(param_2 + 0x250) == 0) {
                  bVar12 = 0;
                  local_8f8 = (long *)0x0;
                }
                else {
                  FUN_00b91400(&local_8f8);
                  if (local_8f8 == (long *)0x0) {
                    bVar12 = 0;
                  }
                  else {
                    bVar12 = FUN_01c3c17c(local_8f8,puVar22);
                    bVar12 = bVar12 & 1;
                    if (local_8f8 != (long *)0x0) {
                      lVar20 = local_8f8[0xb];
                      piVar1 = (int *)(lVar20 + 0xc);
                      do {
                        iVar26 = *piVar1;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                          *piVar1 = iVar26 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (iVar26 + -1 == 0) {
                        *(undefined8 *)(lVar20 + 0x18) = 0;
                        (**(code **)(*local_8f8 + 0x20))();
                      }
                    }
                  }
                }
                uVar17 = FUN_01830730(param_2,param_3,*(undefined8 *)(puVar22 + 0x28));
                uVar19 = 0;
                if ((uVar17 & 0xff) != 0) {
                  uVar19 = (undefined4)(uVar17 >> 0x20);
                }
                *(undefined4 *)(param_1 + 0x3c) = uVar19;
                *(float *)(param_1 + 0x10) = local_16c;
                *(float *)(param_1 + 0x14) = fVar25;
                *(undefined4 *)(param_1 + 0x30) = uVar28;
                *(float *)(param_1 + 0x34) = fVar25 - fVar6;
                param_1[0x38] = bVar12;
                *(undefined2 *)(param_1 + 0x39) = (undefined2)local_8f8;
                param_1[0x3b] = local_8f8._2_1_;
                *param_1 = 1;
                *(long *)(param_1 + 0x28) = auVar38._8_8_;
                *(long *)(param_1 + 0x20) = auVar38._0_8_;
                uVar17 = local_380;
              }
              uVar7 = local_440;
              local_380 = uVar17;
              if ((uVar17 & 1) != 0) {
                lVar20 = tpidr_el0;
                lVar21 = *(long *)(lVar20 + 0x38d490);
                if (lVar21 == 0) {
                  lVar21 = FUN_0333d16c(0,1);
                  *(long *)(lVar20 + 0x38d490) = lVar21;
                }
                plVar18 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
                *(undefined8 *)(uVar17 - 0x11) = 0;
                (**(code **)(*plVar18 + 0x18))
                          (plVar18,(undefined8 *)(uVar17 - 0x11),(long)*(int *)(uVar17 - 9) + 0x10);
                uVar7 = local_440;
              }
              uVar17 = local_500;
              local_440 = uVar7;
              if ((uVar7 & 1) != 0) {
                lVar20 = tpidr_el0;
                lVar21 = *(long *)(lVar20 + 0x38d490);
                if (lVar21 == 0) {
                  lVar21 = FUN_0333d16c(0,1);
                  *(long *)(lVar20 + 0x38d490) = lVar21;
                }
                plVar18 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
                *(undefined8 *)(uVar7 - 0x11) = 0;
                (**(code **)(*plVar18 + 0x18))
                          (plVar18,(undefined8 *)(uVar7 - 0x11),(long)*(int *)(uVar7 - 9) + 0x10);
                uVar17 = local_500;
              }
              uVar7 = local_5c0;
              local_500 = uVar17;
              if ((uVar17 & 1) != 0) {
                lVar20 = tpidr_el0;
                lVar21 = *(long *)(lVar20 + 0x38d490);
                if (lVar21 == 0) {
                  lVar21 = FUN_0333d16c(0,1);
                  *(long *)(lVar20 + 0x38d490) = lVar21;
                }
                plVar18 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
                *(undefined8 *)(uVar17 - 0x11) = 0;
                (**(code **)(*plVar18 + 0x18))
                          (plVar18,(undefined8 *)(uVar17 - 0x11),(long)*(int *)(uVar17 - 9) + 0x10);
                uVar7 = local_5c0;
              }
              uVar17 = local_680;
              local_5c0 = uVar7;
              if ((uVar7 & 1) != 0) {
                lVar20 = tpidr_el0;
                lVar21 = *(long *)(lVar20 + 0x38d490);
                if (lVar21 == 0) {
                  lVar21 = FUN_0333d16c(0,1);
                  *(long *)(lVar20 + 0x38d490) = lVar21;
                }
                plVar18 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
                *(undefined8 *)(uVar7 - 0x11) = 0;
                (**(code **)(*plVar18 + 0x18))
                          (plVar18,(undefined8 *)(uVar7 - 0x11),(long)*(int *)(uVar7 - 9) + 0x10);
                uVar17 = local_680;
              }
              uVar7 = local_740;
              local_680 = uVar17;
              if ((uVar17 & 1) != 0) {
                lVar20 = tpidr_el0;
                lVar21 = *(long *)(lVar20 + 0x38d490);
                if (lVar21 == 0) {
                  lVar21 = FUN_0333d16c(0,1);
                  *(long *)(lVar20 + 0x38d490) = lVar21;
                }
                plVar18 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
                *(undefined8 *)(uVar17 - 0x11) = 0;
                (**(code **)(*plVar18 + 0x18))
                          (plVar18,(undefined8 *)(uVar17 - 0x11),(long)*(int *)(uVar17 - 9) + 0x10);
                uVar7 = local_740;
              }
              uVar17 = local_800;
              local_740 = uVar7;
              if ((uVar7 & 1) != 0) {
                lVar20 = tpidr_el0;
                lVar21 = *(long *)(lVar20 + 0x38d490);
                if (lVar21 == 0) {
                  lVar21 = FUN_0333d16c(0,1);
                  *(long *)(lVar20 + 0x38d490) = lVar21;
                }
                plVar18 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
                *(undefined8 *)(uVar7 - 0x11) = 0;
                (**(code **)(*plVar18 + 0x18))
                          (plVar18,(undefined8 *)(uVar7 - 0x11),(long)*(int *)(uVar7 - 9) + 0x10);
                uVar17 = local_800;
              }
              local_800 = uVar17;
              if ((uVar17 & 1) != 0) {
                lVar20 = tpidr_el0;
                lVar21 = *(long *)(lVar20 + 0x38d490);
                if (lVar21 == 0) {
                  lVar21 = FUN_0333d16c(0,1);
                  *(long *)(lVar20 + 0x38d490) = lVar21;
                }
                plVar18 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
                *(undefined8 *)(uVar17 - 0x11) = 0;
                (**(code **)(*plVar18 + 0x18))
                          (plVar18,(undefined8 *)(uVar17 - 0x11),(long)*(int *)(uVar17 - 9) + 0x10);
              }
              uVar17 = local_2c0;
              if ((local_8c0 & 1) != 0) {
                lVar20 = tpidr_el0;
                lVar21 = *(long *)(lVar20 + 0x38d490);
                if (lVar21 == 0) {
                  lVar21 = FUN_0333d16c(0,1);
                  *(long *)(lVar20 + 0x38d490) = lVar21;
                }
                plVar18 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
                *(undefined8 *)(local_8c0 - 0x11) = 0;
                (**(code **)(*plVar18 + 0x18))
                          (plVar18,(undefined8 *)(local_8c0 - 0x11),
                           (long)*(int *)(local_8c0 - 9) + 0x10);
                uVar17 = local_2c0;
              }
              local_2c0 = uVar17;
              uVar7 = local_200;
              if ((uVar17 & 1) != 0) {
                lVar20 = tpidr_el0;
                lVar21 = *(long *)(lVar20 + 0x38d490);
                if (lVar21 == 0) {
                  lVar21 = FUN_0333d16c(0,1);
                  *(long *)(lVar20 + 0x38d490) = lVar21;
                }
                plVar18 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
                *(undefined8 *)(uVar17 - 0x11) = 0;
                (**(code **)(*plVar18 + 0x18))
                          (plVar18,(undefined8 *)(uVar17 - 0x11),(long)*(int *)(uVar17 - 9) + 0x10);
                uVar7 = local_200;
              }
              local_200 = uVar7;
              if ((uVar7 & 1) != 0) {
                lVar20 = tpidr_el0;
                lVar21 = *(long *)(lVar20 + 0x38d490);
                if (lVar21 == 0) {
                  lVar21 = FUN_0333d16c(0,1);
                  *(long *)(lVar20 + 0x38d490) = lVar21;
                }
                plVar18 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
                *(undefined8 *)(uVar7 - 0x11) = 0;
                (**(code **)(*plVar18 + 0x18))
                          (plVar18,(undefined8 *)(uVar7 - 0x11),(long)*(int *)(uVar7 - 9) + 0x10);
              }
            }
            uVar17 = local_140;
            if ((local_140 & 1) != 0) {
              lVar20 = tpidr_el0;
              lVar21 = *(long *)(lVar20 + 0x38d490);
              if (lVar21 == 0) {
                lVar21 = FUN_0333d16c(0,1);
                *(long *)(lVar20 + 0x38d490) = lVar21;
              }
              plVar18 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
              puVar24 = (undefined8 *)(uVar17 - 0x11);
              *puVar24 = 0;
              (**(code **)(*plVar18 + 0x18))(plVar18,puVar24,(long)*(int *)(uVar17 - 9) + 0x10);
            }
            lVar20 = *(long *)(lVar23 + 8);
            piVar1 = (int *)(lVar20 + 0xc);
            do {
              iVar26 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar26 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar26 + -1 == 0) {
              *(undefined8 *)(lVar20 + 0x18) = 0;
              (**(code **)(*(long *)(lVar23 + -0x50) + 0x20))((long *)(lVar23 + -0x50));
              return;
            }
            return;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar26 = iVar13;
    } while (iVar13 != 0);
  }
LAB_0182efe8:
  *param_1 = 0;
  return;
}


