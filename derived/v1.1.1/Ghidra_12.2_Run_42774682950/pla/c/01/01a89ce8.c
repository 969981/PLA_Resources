/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a89ce8; name: FUN_01a89ce8
 */


uint FUN_01a89ce8(float param_1,float param_2,long param_3,long param_4,undefined8 *param_5,
                 int param_6,undefined8 *param_7,uint param_8,uint param_9,uint *param_10)

{
  int *piVar1;
  char *__s;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  size_t sVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_c54;
  undefined8 *local_c50;
  int local_c40;
  long *local_c30;
  long *local_c18;
  undefined8 local_c10;
  undefined8 local_c08;
  undefined8 local_c00;
  undefined8 local_bf8;
  undefined8 local_bf0;
  undefined8 local_be8;
  undefined8 local_be0 [6];
  undefined8 local_bb0;
  undefined8 local_ba0;
  undefined8 uStack_b98;
  undefined8 local_b90;
  undefined8 uStack_b88;
  undefined4 local_b80;
  undefined8 local_b78;
  undefined4 local_b70;
  undefined4 local_b68;
  undefined1 local_b64;
  undefined2 local_b60;
  undefined4 local_b5c;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined4 local_b48;
  undefined4 local_b40;
  undefined1 local_b3c;
  undefined2 local_b38;
  undefined4 local_b34;
  undefined8 local_b30;
  undefined8 local_b28;
  undefined8 auStack_b20 [6];
  undefined8 local_af0;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined8 local_ad0;
  undefined8 uStack_ac8;
  undefined4 local_ac0;
  undefined8 local_ab8;
  undefined4 local_ab0;
  undefined4 local_aa8;
  undefined1 local_aa4;
  undefined2 local_aa0;
  undefined4 local_a9c;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined4 local_a88;
  undefined4 local_a80;
  undefined1 local_a7c;
  undefined2 local_a78;
  undefined4 local_a74;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a30;
  undefined8 local_a20;
  undefined8 local_a18;
  undefined8 local_a10;
  undefined8 local_a08;
  undefined4 local_a00;
  undefined8 local_9f8;
  undefined4 local_9f0;
  undefined4 local_9e8;
  undefined1 local_9e4;
  undefined2 local_9e0;
  undefined4 local_9dc;
  undefined8 local_9d8;
  undefined8 local_9d0;
  undefined4 local_9c8;
  undefined4 local_9c0;
  undefined1 local_9bc;
  undefined2 local_9b8;
  undefined4 local_9b4;
  undefined8 local_9b0;
  undefined8 local_9a8;
  undefined8 local_970;
  undefined8 local_960;
  undefined8 local_958;
  undefined8 local_950;
  undefined8 local_948;
  undefined4 local_940;
  undefined8 local_938;
  undefined4 local_930;
  undefined4 local_928;
  undefined1 local_924;
  undefined2 local_920;
  undefined4 local_91c;
  undefined8 local_918;
  undefined8 local_910;
  undefined4 local_908;
  undefined4 local_900;
  undefined1 local_8fc;
  undefined2 local_8f8;
  undefined4 local_8f4;
  undefined8 local_8f0;
  undefined8 local_8e8;
  undefined8 local_8b0;
  undefined8 local_8a0;
  undefined8 local_898;
  undefined8 local_890;
  undefined8 local_888;
  undefined4 local_880;
  undefined8 local_878;
  undefined4 local_870;
  undefined4 local_868;
  undefined1 local_864;
  undefined2 local_860;
  undefined4 local_85c;
  undefined8 local_858;
  undefined8 local_850;
  undefined4 local_848;
  undefined4 local_840;
  undefined1 local_83c;
  undefined2 local_838;
  undefined4 local_834;
  undefined8 local_830;
  undefined8 local_828;
  undefined8 local_7f0;
  undefined8 local_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined8 local_7c8;
  undefined4 local_7c0;
  undefined8 local_7b8;
  undefined4 local_7b0;
  undefined4 local_7a8;
  undefined1 local_7a4;
  undefined2 local_7a0;
  undefined4 local_79c;
  undefined8 local_798;
  undefined8 local_790;
  undefined4 local_788;
  undefined4 local_780;
  undefined1 local_77c;
  undefined2 local_778;
  undefined4 local_774;
  undefined8 local_770;
  undefined8 local_768;
  undefined8 local_730;
  undefined8 local_720;
  undefined8 local_718;
  undefined8 local_710;
  undefined8 local_708;
  undefined4 local_700;
  undefined8 local_6f8;
  undefined4 local_6f0;
  undefined4 local_6e8;
  undefined1 local_6e4;
  undefined2 local_6e0;
  undefined4 local_6dc;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined4 local_6c8;
  undefined4 local_6c0;
  undefined1 local_6bc;
  undefined2 local_6b8;
  undefined4 local_6b4;
  undefined8 local_6b0;
  undefined8 local_6a8;
  undefined8 local_670;
  undefined8 local_660;
  undefined8 local_658;
  undefined8 local_650;
  undefined8 local_648;
  undefined4 local_640;
  undefined8 local_638;
  undefined4 local_630;
  undefined4 local_628;
  undefined1 local_624;
  undefined2 local_620;
  undefined4 local_61c;
  undefined8 local_618;
  undefined8 local_610;
  undefined4 local_608;
  undefined4 local_600;
  undefined1 local_5fc;
  undefined2 local_5f8;
  undefined4 local_5f4;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined8 local_5b0;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined4 local_580;
  undefined8 local_578;
  undefined4 local_570;
  undefined4 local_568;
  undefined1 local_564;
  undefined2 local_560;
  undefined4 local_55c;
  undefined8 local_558;
  undefined8 local_550;
  undefined4 local_548;
  undefined4 local_540;
  undefined1 local_53c;
  undefined2 local_538;
  undefined4 local_534;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_4f0;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined8 local_4b8;
  undefined4 local_4b0;
  undefined4 local_4a8;
  undefined1 local_4a4;
  undefined2 local_4a0;
  undefined4 local_49c;
  undefined8 local_498;
  undefined8 local_490;
  undefined4 local_488;
  undefined4 local_480;
  undefined1 local_47c;
  undefined2 local_478;
  undefined4 local_474;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_430;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined4 local_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined4 local_3e8;
  undefined1 local_3e4;
  undefined2 local_3e0;
  undefined4 local_3dc;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined4 local_3c0;
  undefined1 local_3bc;
  undefined2 local_3b8;
  undefined4 local_3b4;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_370;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_338;
  undefined4 local_330;
  undefined4 local_328;
  undefined1 local_324;
  undefined2 local_320;
  undefined4 local_31c;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 local_300;
  undefined1 local_2fc;
  undefined2 local_2f8;
  undefined4 local_2f4;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2b0;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_268;
  undefined1 local_264;
  undefined2 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 local_240;
  undefined1 local_23c;
  undefined2 local_238;
  undefined4 local_234;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_1f0;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined2 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_180;
  undefined1 local_17c;
  undefined2 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined2 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined2 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_78 [3];
  
  lVar18 = *(long *)(param_3 + 0x260);
  if ((lVar18 == 0) || (*(int *)(lVar18 + 0xc) == 0)) {
LAB_01a89d3c:
    plVar16 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar18 + 0xc);
    local_c54 = *(int *)(lVar18 + 0xc);
    do {
      local_c50 = *(undefined8 **)(lVar18 + 0x10);
      if (((*PTR_DAT_0437a668 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a668), iVar6 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
          uVar7 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar7;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)PTR_DAT_0437a660 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_0437a668);
      }
      if (local_c50 == (undefined8 *)0x0) goto LAB_01a89d3c;
      while (local_c50 != (undefined8 *)PTR_DAT_0437a660) {
        plVar16 = (long *)0x0;
        local_c50 = (undefined8 *)*local_c50;
        if (local_c50 == (undefined8 *)0x0) goto LAB_01a89d40;
      }
      iVar6 = *piVar1;
      if (iVar6 == local_c54) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = local_c54 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar16 = (long *)0x0;
          if (*(long *)(lVar18 + 0x18) != 0) {
            plVar16 = (long *)(*(long *)(lVar18 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar16 = (long *)0x0;
      local_c54 = iVar6;
    } while (iVar6 != 0);
  }
LAB_01a89d40:
  FUN_01839c8c(local_78,param_3 + 0xad0);
  fVar20 = (float)((ulong)DAT_0388a140 >> 0x20);
  fVar21 = (float)((ulong)DAT_0388a148 >> 0x20);
  fVar22 = (float)*param_5;
  fVar19 = (float)DAT_0388a140 * param_1 + fVar22;
  fVar23 = (float)((ulong)*param_5 >> 0x20);
  fVar24 = (float)param_5[1];
  fVar25 = (float)((ulong)param_5[1] >> 0x20);
  uStack_88 = CONCAT44(fVar21 * param_1 + fVar25,(float)DAT_0388a148 * param_1 + fVar24);
  uStack_98 = CONCAT44(fVar25 - fVar21 * param_2,fVar24 - (float)DAT_0388a148 * param_2);
  local_a0 = CONCAT44(fVar23 - fVar20 * param_2,fVar22 - (float)DAT_0388a140 * param_2);
  local_90 = CONCAT44(fVar20 * param_1 + fVar23,fVar19);
  if (1.4 < *(float *)(param_4 + 4) - fVar23) {
    local_90 = CONCAT44(*(float *)(param_4 + 4) + param_1,fVar19);
  }
  if ((plVar16 == (long *)0x0) || (local_78[0] == (long *)0x0)) {
    uVar12 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(local_78[0] + 0x16);
    if (((*PTR_DAT_0437a648 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar18 = *(long *)PTR_DAT_0437a650;
    *(long *)PTR_DAT_0437a658 = lVar18;
    if (uVar5 < 0x20) {
      uVar12 = *(uint *)(*(long *)(*(long *)(lVar18 + 0x230) + 0x110) + (long)(int)uVar5 * 8 + 0x28)
      ;
    }
    else {
      uVar12 = 0;
    }
    uVar5 = uVar12 >> 0x18 & 1;
    uVar12 = uVar12 >> 0xc & 1;
  }
  local_bb0 = 0;
  local_af0 = 0;
  local_b28 = 0;
  local_b80 = 0x7f7fffee;
  local_ba0 = 0;
  uStack_b98 = 0;
  local_b78 = 0xffffffffffffffff;
  local_b68 = 0xffffffff;
  local_b70 = 0xffffff;
  local_b64 = 0xf;
  local_b60 = 0xffff;
  local_b5c = 0;
  local_b40 = 0xffffffff;
  local_b48 = 0xffffff;
  local_b38 = 0xffff;
  local_b34 = 0;
  local_b30 = 0;
  local_a30 = 0;
  local_ac0 = 0x7f7fffee;
  local_ab8 = 0xffffffffffffffff;
  local_ab0 = 0xffffff;
  local_aa8 = 0xffffffff;
  local_aa0 = 0xffff;
  local_a9c = 0;
  local_a88 = 0xffffff;
  local_a80 = 0xffffffff;
  local_a78 = 0xffff;
  local_a74 = 0;
  local_a08 = 0;
  local_a10 = 0;
  local_a18 = 0;
  local_a20 = 0;
  local_9a8 = 0;
  local_a00 = 0x7f7fffee;
  local_b3c = 0xf;
  local_9f8 = 0xffffffffffffffff;
  local_9f0 = 0xffffff;
  local_aa4 = 0xf;
  local_a7c = 0xf;
  local_9e8 = 0xffffffff;
  local_9e4 = 0xf;
  local_9e0 = 0xffff;
  local_9dc = 0;
  local_9d8 = 0;
  local_9d0 = 0xffffffffffffffff;
  local_9c8 = 0xffffff;
  local_9c0 = 0xffffffff;
  local_9bc = 0xf;
  local_9b8 = 0xffff;
  local_9b4 = 0;
  local_9b0 = 0;
  local_970 = 0;
  local_948 = 0;
  local_950 = 0;
  local_958 = 0;
  local_960 = 0;
  local_8e8 = 0;
  local_940 = 0x7f7fffee;
  local_938 = 0xffffffffffffffff;
  local_930 = 0xffffff;
  local_928 = 0xffffffff;
  local_924 = 0xf;
  local_920 = 0xffff;
  local_91c = 0;
  local_918 = 0;
  local_910 = 0xffffffffffffffff;
  local_908 = 0xffffff;
  local_900 = 0xffffffff;
  local_8fc = 0xf;
  local_8f8 = 0xffff;
  local_8f4 = 0;
  local_8f0 = 0;
  local_8b0 = 0;
  local_888 = 0;
  local_890 = 0;
  local_898 = 0;
  local_8a0 = 0;
  local_828 = 0;
  local_880 = 0x7f7fffee;
  local_878 = 0xffffffffffffffff;
  local_870 = 0xffffff;
  local_868 = 0xffffffff;
  local_864 = 0xf;
  local_860 = 0xffff;
  local_85c = 0;
  local_858 = 0;
  local_850 = 0xffffffffffffffff;
  local_848 = 0xffffff;
  local_840 = 0xffffffff;
  local_83c = 0xf;
  local_838 = 0xffff;
  local_834 = 0;
  local_830 = 0;
  local_7f0 = 0;
  local_7c8 = 0;
  local_7d0 = 0;
  local_7d8 = 0;
  local_7e0 = 0;
  local_768 = 0;
  local_7c0 = 0x7f7fffee;
  local_7b8 = 0xffffffffffffffff;
  local_7b0 = 0xffffff;
  local_7a8 = 0xffffffff;
  local_7a4 = 0xf;
  local_7a0 = 0xffff;
  local_79c = 0;
  local_798 = 0;
  local_790 = 0xffffffffffffffff;
  local_788 = 0xffffff;
  local_780 = 0xffffffff;
  local_77c = 0xf;
  local_778 = 0xffff;
  local_774 = 0;
  local_770 = 0;
  local_730 = 0;
  local_708 = 0;
  local_710 = 0;
  local_718 = 0;
  local_720 = 0;
  local_6a8 = 0;
  local_700 = 0x7f7fffee;
  local_6f8 = 0xffffffffffffffff;
  local_6f0 = 0xffffff;
  local_6e8 = 0xffffffff;
  local_6e4 = 0xf;
  local_6e0 = 0xffff;
  local_6dc = 0;
  local_6d8 = 0;
  local_6d0 = 0xffffffffffffffff;
  local_6c8 = 0xffffff;
  local_6c0 = 0xffffffff;
  local_6bc = 0xf;
  local_6b8 = 0xffff;
  local_6b4 = 0;
  local_6b0 = 0;
  local_670 = 0;
  local_648 = 0;
  local_650 = 0;
  local_658 = 0;
  local_660 = 0;
  local_5e8 = 0;
  local_640 = 0x7f7fffee;
  local_638 = 0xffffffffffffffff;
  local_630 = 0xffffff;
  local_628 = 0xffffffff;
  local_624 = 0xf;
  local_620 = 0xffff;
  local_61c = 0;
  local_618 = 0;
  local_610 = 0xffffffffffffffff;
  local_608 = 0xffffff;
  local_600 = 0xffffffff;
  local_5fc = 0xf;
  local_5f8 = 0xffff;
  local_5f4 = 0;
  local_5f0 = 0;
  local_5b0 = 0;
  local_588 = 0;
  local_590 = 0;
  local_598 = 0;
  local_5a0 = 0;
  local_528 = 0;
  local_580 = 0x7f7fffee;
  local_578 = 0xffffffffffffffff;
  local_570 = 0xffffff;
  local_568 = 0xffffffff;
  local_564 = 0xf;
  local_560 = 0xffff;
  local_55c = 0;
  local_558 = 0;
  local_550 = 0xffffffffffffffff;
  local_548 = 0xffffff;
  local_540 = 0xffffffff;
  local_53c = 0xf;
  local_538 = 0xffff;
  local_534 = 0;
  local_530 = 0;
  local_4f0 = 0;
  local_4c8 = 0;
  local_4d0 = 0;
  local_4d8 = 0;
  local_4e0 = 0;
  local_468 = 0;
  local_4c0 = 0x7f7fffee;
  local_4b8 = 0xffffffffffffffff;
  local_4b0 = 0xffffff;
  local_4a8 = 0xffffffff;
  local_4a4 = 0xf;
  local_4a0 = 0xffff;
  local_49c = 0;
  local_498 = 0;
  local_490 = 0xffffffffffffffff;
  local_488 = 0xffffff;
  local_480 = 0xffffffff;
  local_47c = 0xf;
  local_478 = 0xffff;
  local_474 = 0;
  local_470 = 0;
  local_430 = 0;
  local_408 = 0;
  local_410 = 0;
  local_418 = 0;
  local_420 = 0;
  local_3a8 = 0;
  local_400 = 0x7f7fffee;
  local_3f8 = 0xffffffffffffffff;
  local_3f0 = 0xffffff;
  local_3e8 = 0xffffffff;
  local_3e4 = 0xf;
  local_3e0 = 0xffff;
  local_3dc = 0;
  local_3d8 = 0;
  local_3d0 = 0xffffffffffffffff;
  local_3c8 = 0xffffff;
  local_3c0 = 0xffffffff;
  local_3bc = 0xf;
  local_3b8 = 0xffff;
  local_3b4 = 0;
  local_3b0 = 0;
  local_370 = 0;
  local_348 = 0;
  local_350 = 0;
  local_358 = 0;
  local_360 = 0;
  local_2e8 = 0;
  local_340 = 0x7f7fffee;
  local_338 = 0xffffffffffffffff;
  local_330 = 0xffffff;
  local_328 = 0xffffffff;
  local_324 = 0xf;
  local_320 = 0xffff;
  local_31c = 0;
  local_318 = 0;
  local_310 = 0xffffffffffffffff;
  local_308 = 0xffffff;
  local_300 = 0xffffffff;
  local_2fc = 0xf;
  local_2f8 = 0xffff;
  local_2f4 = 0;
  local_2f0 = 0;
  local_2b0 = 0;
  local_288 = 0;
  local_290 = 0;
  local_298 = 0;
  local_2a0 = 0;
  local_228 = 0;
  local_280 = 0x7f7fffee;
  local_278 = 0xffffffffffffffff;
  local_270 = 0xffffff;
  local_268 = 0xffffffff;
  local_264 = 0xf;
  local_260 = 0xffff;
  local_25c = 0;
  local_258 = 0;
  local_250 = 0xffffffffffffffff;
  local_248 = 0xffffff;
  local_240 = 0xffffffff;
  local_23c = 0xf;
  local_238 = 0xffff;
  local_234 = 0;
  local_230 = 0;
  local_1f0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_168 = 0;
  local_1c0 = 0x7f7fffee;
  local_1b8 = 0xffffffffffffffff;
  local_1b0 = 0xffffff;
  local_1a8 = 0xffffffff;
  local_1a4 = 0xf;
  local_1a0 = 0xffff;
  local_19c = 0;
  local_198 = 0;
  local_190 = 0xffffffffffffffff;
  local_188 = 0xffffff;
  local_180 = 0xffffffff;
  local_17c = 0xf;
  local_178 = 0xffff;
  local_174 = 0;
  local_170 = 0;
  local_130 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_a8 = 0;
  local_100 = 0x7f7fffee;
  local_f8 = 0xffffffffffffffff;
  local_f0 = 0xffffff;
  local_e8 = 0xffffffff;
  local_e4 = 0xf;
  local_e0 = 0xffff;
  local_dc = 0;
  local_d8 = 0;
  local_d0 = 0xffffffffffffffff;
  local_c8 = 0xffffff;
  local_c0 = 0xffffffff;
  local_bc = 0xf;
  local_b8 = 0xffff;
  local_b4 = 0;
  local_b0 = 0;
  local_b90 = 0;
  uStack_b88 = 0;
  local_b58 = 0;
  uStack_b50 = 0xffffffffffffffff;
  local_ad0 = 0;
  uStack_ac8 = 0;
  local_ae0 = 0;
  uStack_ad8 = 0;
  local_a70 = 0;
  uStack_a68 = 0;
  local_a98 = 0;
  uStack_a90 = 0xffffffffffffffff;
  if (param_6 == 2) {
    if (((*PTR_DAT_0437a648 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar18 = *(long *)PTR_DAT_0437a650;
    *(long *)PTR_DAT_0437a658 = lVar18;
    uVar7 = *(undefined8 *)(lVar18 + 0x230);
    uVar11 = 0x1000;
  }
  else {
    if (param_6 != 1) {
      if ((uVar12 & uVar5) == 1) {
        lVar18 = *(long *)(param_3 + 0x260);
        if ((lVar18 != 0) && (*(int *)(lVar18 + 0xc) != 0)) {
          piVar1 = (int *)(lVar18 + 0xc);
          local_c40 = *(int *)(lVar18 + 0xc);
          do {
            local_c30 = *(long **)(lVar18 + 0x10);
            if (((*PTR_DAT_0437a668 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a668), iVar6 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
                uVar7 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar7;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_0437a660 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_0437a668);
            }
            if (local_c30 == (undefined8 *)0x0) goto LAB_01a8a4dc;
            while (local_c30 != (long *)PTR_DAT_0437a660) {
              uVar5 = 0;
              local_c30 = (long *)*local_c30;
              if (local_c30 == (undefined8 *)0x0) goto joined_r0x01a8ac18;
            }
            iVar6 = *piVar1;
            if (iVar6 == local_c40) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = local_c40 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 != '\0') goto LAB_01a8aa50;
              lVar18 = *(long *)(lVar18 + 0x18);
              if (lVar18 != 0) {
                local_c30 = (long *)(lVar18 + -0x50);
                uVar5 = FUN_01e44abc(local_c30,&local_90,&local_a0,local_be0,0xf);
                lVar18 = *(long *)(lVar18 + 8);
                piVar1 = (int *)(lVar18 + 0xc);
                do {
                  iVar6 = *piVar1 + -1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar6;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                goto LAB_01a8ac00;
              }
              goto LAB_01a8a4dc;
            }
            ClearExclusiveLocal();
LAB_01a8aa50:
            uVar5 = 0;
            local_c40 = iVar6;
          } while (iVar6 != 0);
          goto joined_r0x01a8ac18;
        }
      }
      else {
        if (uVar5 != 0) {
          if (((*PTR_DAT_0437a648 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_0437a648);
          }
          uVar11 = 0x102e000;
          goto LAB_01a8a330;
        }
        if (uVar12 != 0) {
          if (((*PTR_DAT_0437a648 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_0437a648);
          }
          lVar18 = *(long *)PTR_DAT_0437a650;
          *(long *)PTR_DAT_0437a658 = lVar18;
          uVar7 = *(undefined8 *)(lVar18 + 0x230);
          uVar11 = 0x2f000;
          goto LAB_01a8a388;
        }
        lVar18 = *(long *)(param_3 + 0x260);
        if ((lVar18 != 0) && (*(int *)(lVar18 + 0xc) != 0)) {
          piVar1 = (int *)(lVar18 + 0xc);
          local_c40 = *(int *)(lVar18 + 0xc);
          do {
            local_c30 = *(long **)(lVar18 + 0x10);
            if (((*PTR_DAT_0437a668 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a668), iVar6 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
                uVar7 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar7;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_0437a660 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_0437a668);
            }
            if (local_c30 == (undefined8 *)0x0) goto LAB_01a8a4dc;
            while (local_c30 != (long *)PTR_DAT_0437a660) {
              uVar5 = 0;
              local_c30 = (long *)*local_c30;
              if (local_c30 == (undefined8 *)0x0) goto joined_r0x01a8ac18;
            }
            iVar6 = *piVar1;
            if (iVar6 == local_c40) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = local_c40 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar18 = *(long *)(lVar18 + 0x18);
                if (lVar18 != 0) {
                  local_c30 = (long *)(lVar18 + -0x50);
                  uVar5 = FUN_01e448b4(local_c30,&local_90,&local_a0,local_be0,0xf);
                  lVar18 = *(long *)(lVar18 + 8);
                  piVar1 = (int *)(lVar18 + 0xc);
                  do {
                    iVar6 = *piVar1 + -1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar6;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
LAB_01a8ac00:
                  if (iVar6 == 0) {
                    *(undefined8 *)(lVar18 + 0x18) = 0;
                    (**(code **)(*local_c30 + 0x20))();
                  }
                  break;
                }
                goto LAB_01a8a4dc;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            uVar5 = 0;
            local_c40 = iVar6;
          } while (iVar6 != 0);
          goto joined_r0x01a8ac18;
        }
      }
LAB_01a8a4dc:
      uVar5 = 0;
      goto joined_r0x01a8ac18;
    }
    if (((*PTR_DAT_0437a648 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    uVar11 = 0x2e000;
LAB_01a8a330:
    lVar18 = *(long *)PTR_DAT_0437a650;
    *(long *)PTR_DAT_0437a658 = lVar18;
    uVar7 = *(undefined8 *)(lVar18 + 0x230);
  }
LAB_01a8a388:
  uVar5 = FUN_02bf48bc(uVar7,&local_90,&local_a0,uVar11,local_be0,0xf,1);
joined_r0x01a8ac18:
  if (param_10 != (uint *)0x0) {
    *param_10 = uVar5;
  }
  puVar4 = PTR_PTR_0434a080;
  if (uVar5 == 0) {
    if ((param_9 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_01a89ce8(0x40e00000,0x40e00000,param_3,param_4,param_4,param_6,param_7,param_8 & 1
                           ,0,0);
    }
  }
  else {
    if (0xe < uVar5) {
      uVar5 = 0xf;
    }
    puVar9 = local_be0;
    if (1 < uVar5) {
      lVar18 = (ulong)uVar5 * 0xc0 + -0xc0;
      puVar13 = puVar9;
      puVar15 = auStack_b20;
      do {
        puVar9 = puVar15;
        if ((float)((ulong)*puVar15 >> 0x20) <= *(float *)((long)puVar13 + 4)) {
          puVar9 = puVar13;
        }
        lVar18 = lVar18 + -0xc0;
        puVar13 = puVar9;
        puVar15 = puVar15 + 0x18;
      } while (lVar18 != 0);
    }
    local_bf0 = puVar9[4];
    local_be8 = puVar9[5];
    local_c00 = puVar9[2];
    local_bf8 = puVar9[3];
    local_c10 = *puVar9;
    local_c08 = puVar9[1];
    __s = (char *)(puVar9[6] & 0xfffffffffffffffe);
    uVar17 = 0;
    if (__s != (char *)0x0) {
      sVar8 = strlen(__s);
      uVar5 = (int)sVar8 + 1;
      puVar9 = (undefined8 *)
               (**(code **)(*(long *)puVar4 + 0x10))
                         (puVar4,(long)((sVar8 << 0x20) + 0x1100000000) >> 0x20,0);
      *puVar9 = puVar4;
      *(uint *)(puVar9 + 1) = uVar5;
      memcpy(puVar9 + 2,__s,(ulong)uVar5);
      uVar17 = (ulong)(puVar9 + 2) | 1;
    }
    param_7[1] = local_c08;
    *param_7 = local_c10;
    if (((param_8 & 1) != 0) && (FUN_01839c8c(&local_c18,param_3 + 0xad0), local_c18 != (long *)0x0)
       ) {
      fVar19 = (float)FUN_00ae6464();
      param_7[1] = CONCAT44((float)((ulong)param_7[1] >> 0x20) + 0.0,(float)param_7[1] + 0.0);
      *param_7 = CONCAT44((float)((ulong)*param_7 >> 0x20) + fVar19,(float)*param_7 + 0.0);
      if (local_c18 != (long *)0x0) {
        lVar18 = local_c18[0xb];
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*local_c18 + 0x20))();
        }
      }
    }
    if ((uVar17 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar14 = *(long *)(lVar18 + 0x38d490);
      if (lVar14 == 0) {
        lVar14 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar14;
      }
      plVar10 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
      *(undefined8 *)(uVar17 - 0x11) = 0;
      (**(code **)(*plVar10 + 0x18))
                (plVar10,(undefined8 *)(uVar17 - 0x11),(long)*(int *)(uVar17 - 9) + 0x10);
    }
    uVar5 = 1;
  }
  FUN_01a9388c(local_be0);
  if (local_78[0] != (long *)0x0) {
    lVar18 = local_78[0][0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_78[0] + 0x20))();
    }
  }
  if (plVar16 != (long *)0x0) {
    lVar18 = plVar16[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  return uVar5 & 1;
}


