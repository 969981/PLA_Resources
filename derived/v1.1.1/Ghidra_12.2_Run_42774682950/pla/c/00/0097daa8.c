/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0097daa8; name: FUN_0097daa8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0097daa8(long param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long *plVar18;
  long *unaff_x27;
  long *local_5d0;
  undefined4 local_5c8;
  undefined3 uStack_5c4;
  undefined8 local_5c0;
  undefined1 local_5b8;
  undefined2 local_5b6;
  undefined1 local_5b4;
  undefined2 local_5b2;
  undefined1 local_5b0;
  undefined4 local_5ac;
  undefined1 local_5a8;
  undefined4 local_5a4;
  undefined7 local_5a0;
  undefined4 uStack_599;
  undefined8 local_594;
  undefined1 local_58c;
  undefined2 local_58a;
  undefined1 local_588;
  undefined2 local_586;
  undefined1 local_584;
  undefined4 local_580;
  undefined1 local_57c;
  undefined4 local_578;
  undefined7 local_574;
  undefined4 uStack_56d;
  undefined8 local_568;
  undefined1 local_560;
  undefined2 local_55e;
  undefined1 local_55c;
  undefined2 local_55a;
  undefined1 local_558;
  undefined4 local_554;
  undefined1 local_550;
  undefined4 local_54c;
  undefined7 local_548;
  undefined4 uStack_541;
  undefined8 local_53c;
  undefined1 local_534;
  undefined2 local_532;
  undefined1 local_530;
  undefined2 local_52e;
  undefined1 local_52c;
  undefined4 local_528;
  undefined1 local_524;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined2 local_510;
  undefined1 local_50e;
  undefined8 local_508;
  undefined2 local_500;
  undefined1 local_4fe;
  undefined8 local_4f8;
  undefined2 local_4f0;
  undefined1 local_4ee;
  undefined8 local_4e8;
  undefined2 local_4e0;
  undefined1 local_4de;
  undefined8 local_4d8;
  undefined2 local_4d0;
  undefined1 local_4ce;
  undefined8 local_4c8;
  undefined2 local_4c0;
  undefined1 local_4be;
  undefined8 local_4b8;
  undefined2 local_4b0;
  undefined1 local_4ae;
  undefined8 local_4a8;
  undefined2 local_4a0;
  undefined1 local_49e;
  undefined8 local_498;
  undefined2 local_490;
  undefined1 local_48e;
  undefined8 local_488;
  undefined2 local_480;
  undefined1 local_47e;
  undefined8 local_478;
  undefined2 local_470;
  undefined1 local_46e;
  undefined8 local_468;
  undefined2 local_460;
  undefined1 local_45e;
  undefined8 local_458;
  undefined2 local_450;
  undefined1 local_44e;
  undefined8 local_448;
  undefined2 local_440;
  undefined1 local_43e;
  undefined8 local_438;
  undefined2 local_430;
  undefined1 local_42e;
  undefined8 local_428;
  undefined2 local_420;
  undefined1 local_41e;
  undefined8 local_418;
  undefined2 local_410;
  undefined1 local_40e;
  undefined8 local_408;
  undefined2 local_400;
  undefined1 local_3fe;
  undefined8 local_3f8;
  undefined2 local_3f0;
  undefined1 local_3ee;
  undefined8 local_3e8;
  undefined2 local_3e0;
  undefined1 local_3de;
  undefined8 local_3d8;
  undefined2 local_3d0;
  undefined1 local_3ce;
  undefined8 local_3c8;
  undefined2 local_3c0;
  undefined1 local_3be;
  undefined8 local_3b8;
  undefined2 local_3b0;
  undefined1 local_3ae;
  undefined8 local_3a8;
  undefined2 local_3a0;
  undefined1 local_39e;
  undefined8 local_398;
  undefined2 local_390;
  undefined1 local_38e;
  undefined8 local_388;
  undefined2 local_380;
  undefined1 local_37e;
  undefined8 local_378;
  undefined2 local_370;
  undefined1 local_36e;
  undefined8 local_368;
  undefined2 local_360;
  undefined1 local_35e;
  undefined8 local_358;
  undefined2 local_350;
  undefined1 local_34e;
  undefined8 local_348;
  undefined2 local_340;
  undefined1 local_33e;
  undefined8 local_338;
  undefined2 local_330;
  undefined1 local_32e;
  undefined8 local_328;
  undefined2 local_320;
  undefined1 local_31e;
  undefined8 local_318;
  undefined2 local_310;
  undefined1 local_30e;
  undefined8 local_308;
  undefined2 local_300;
  undefined1 local_2fe;
  undefined8 local_2f8;
  undefined2 local_2f0;
  undefined1 local_2ee;
  undefined8 local_2e8;
  undefined2 local_2e0;
  undefined1 local_2de;
  undefined8 local_2d8;
  undefined2 local_2d0;
  undefined1 local_2ce;
  undefined8 local_2c8;
  undefined2 local_2c0;
  undefined1 local_2be;
  undefined8 local_2b8;
  undefined2 local_2b0;
  undefined1 local_2ae;
  undefined8 local_2a8;
  undefined2 local_2a0;
  undefined1 local_29e;
  undefined8 local_298;
  undefined2 local_290;
  undefined1 local_28e;
  undefined8 local_288;
  undefined2 local_280;
  undefined1 local_27e;
  undefined8 local_278;
  undefined2 local_270;
  undefined1 local_26e;
  undefined8 local_268;
  undefined2 local_260;
  undefined1 local_25e;
  undefined8 local_258;
  undefined2 local_250;
  undefined1 local_24e;
  undefined8 local_248;
  undefined2 local_240;
  undefined1 local_23e;
  undefined8 local_238;
  undefined2 local_230;
  undefined1 local_22e;
  undefined8 local_228;
  undefined2 local_220;
  undefined1 local_21e;
  undefined8 local_218;
  undefined2 local_210;
  undefined1 local_20e;
  undefined8 local_208;
  undefined2 local_200;
  undefined1 local_1fe;
  undefined8 local_1f8;
  undefined2 local_1f0;
  undefined1 local_1ee;
  undefined8 local_1e8;
  undefined2 local_1e0;
  undefined1 local_1de;
  undefined8 local_1d8;
  undefined2 local_1d0;
  undefined1 local_1ce;
  undefined8 local_1c8;
  undefined2 local_1c0;
  undefined1 local_1be;
  undefined8 local_1b8;
  undefined2 local_1b0;
  undefined1 local_1ae;
  undefined8 local_1a8;
  undefined2 local_1a0;
  undefined1 local_19e;
  undefined8 local_198;
  undefined2 local_190;
  undefined1 local_18e;
  undefined8 local_188;
  undefined2 local_180;
  undefined1 local_17e;
  undefined8 local_178;
  undefined2 local_170;
  undefined1 local_16e;
  undefined8 local_168;
  undefined2 local_160;
  undefined1 local_15e;
  undefined8 local_158;
  undefined2 local_150;
  undefined1 local_14e;
  undefined8 local_148;
  undefined2 local_140;
  undefined1 local_13e;
  undefined8 local_138;
  undefined2 local_130;
  undefined1 local_12e;
  undefined8 local_128;
  undefined2 local_120;
  undefined1 local_11e;
  undefined8 local_118;
  undefined2 local_110;
  undefined1 local_10e;
  undefined8 local_108;
  undefined2 local_100;
  undefined1 local_fe;
  undefined8 local_f8;
  undefined2 local_f0;
  undefined1 local_ee;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined1 local_de;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined1 local_be;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_98;
  long *local_90;
  undefined8 local_88;
  long *local_80 [2];
  long *local_70 [2];
  
  puVar16 = (undefined8 *)(param_1 + 0x78);
  *puVar16 = 0;
  *(undefined8 *)(param_1 + 0x7e) = 0;
  *(char *)(param_1 + 0x88) = (char)param_2;
  local_5ac = 0;
  local_5a8 = 0;
  local_5c8 = 0;
  uStack_5c4 = 0;
  local_5a4 = 9;
  local_5b6 = 0;
  local_5b4 = 0;
  local_5b2 = 0;
  local_5b0 = 0;
  local_5c0 = 0;
  local_5b8 = 0;
  local_580 = 0;
  local_57c = 0;
  local_5a0 = 0;
  uStack_599 = 0;
  local_578 = 9;
  local_58a = 0;
  local_588 = 0;
  local_586 = 0;
  local_584 = 0;
  local_58c = 0;
  local_594 = 0;
  local_554 = 0;
  local_550 = 0;
  local_574 = 0;
  uStack_56d = 0;
  local_528 = 0;
  local_54c = 9;
  local_55e = 0;
  local_55c = 0;
  local_55a = 0;
  local_558 = 0;
  local_568 = 0;
  local_560 = 0;
  local_524 = 0;
  local_548 = 0;
  uStack_541 = 0;
  local_532 = 0;
  local_530 = 0;
  local_52e = 0;
  local_52c = 0;
  local_534 = 0;
  local_520 = 9;
  uStack_518 = 0;
  local_53c = 0;
  local_510 = 0xff01;
  local_50e = 0;
  local_508 = 0;
  local_500 = 0xff01;
  local_4fe = 0;
  local_4f8 = 0;
  local_4f0 = 0xff01;
  local_4ee = 0;
  local_4e8 = 0;
  local_4e0 = 0xff01;
  local_4de = 0;
  local_4d8 = 0;
  local_4d0 = 0xff01;
  local_4ce = 0;
  local_4c8 = 0;
  local_4c0 = 0xff01;
  local_4be = 0;
  local_4b8 = 0;
  local_4b0 = 0xff01;
  local_4ae = 0;
  local_4a8 = 0;
  local_4a0 = 0xff01;
  local_49e = 0;
  local_498 = 0;
  local_490 = 0xff01;
  local_48e = 0;
  local_488 = 0;
  local_480 = 0xff01;
  local_47e = 0;
  local_478 = 0;
  local_470 = 0xff01;
  local_46e = 0;
  local_468 = 0;
  local_460 = 0xff01;
  local_45e = 0;
  local_458 = 0;
  local_450 = 0xff01;
  local_44e = 0;
  local_448 = 0;
  local_440 = 0xff01;
  local_43e = 0;
  local_438 = 0;
  local_430 = 0xff01;
  local_42e = 0;
  local_428 = 0;
  local_420 = 0xff01;
  local_41e = 0;
  local_418 = 0;
  local_410 = 0xff01;
  local_40e = 0;
  local_408 = 0;
  local_400 = 0xff01;
  local_3fe = 0;
  local_3f8 = 0;
  local_3f0 = 0xff01;
  local_3ee = 0;
  local_3e8 = 0;
  local_3e0 = 0xff01;
  local_3de = 0;
  local_3d8 = 0;
  local_3d0 = 0xff01;
  local_3ce = 0;
  local_3c8 = 0;
  local_3c0 = 0xff01;
  local_3be = 0;
  local_3b8 = 0;
  local_3b0 = 0xff01;
  local_3ae = 0;
  local_3a8 = 0;
  local_3a0 = 0xff01;
  local_39e = 0;
  local_398 = 0;
  local_390 = 0xff01;
  local_38e = 0;
  local_388 = 0;
  local_380 = 0xff01;
  local_37e = 0;
  local_378 = 0;
  local_370 = 0xff01;
  local_36e = 0;
  local_368 = 0;
  local_360 = 0xff01;
  local_35e = 0;
  local_358 = 0;
  local_350 = 0xff01;
  local_34e = 0;
  local_348 = 0;
  local_340 = 0xff01;
  local_33e = 0;
  local_338 = 0;
  local_330 = 0xff01;
  local_32e = 0;
  local_328 = 0;
  local_320 = 0xff01;
  local_31e = 0;
  local_318 = 0;
  local_310 = 0xff01;
  local_30e = 0;
  local_308 = 0;
  local_300 = 0xff01;
  local_2fe = 0;
  local_2f8 = 0;
  local_2f0 = 0xff01;
  local_2ee = 0;
  local_2e8 = 0;
  local_2e0 = 0xff01;
  local_2de = 0;
  local_2d8 = 0;
  local_2d0 = 0xff01;
  local_2ce = 0;
  local_2c8 = 0;
  local_2c0 = 0xff01;
  local_2be = 0;
  local_2b8 = 0;
  local_2b0 = 0xff01;
  local_2ae = 0;
  local_2a8 = 0;
  local_2a0 = 0xff01;
  local_29e = 0;
  local_298 = 0;
  local_290 = 0xff01;
  local_28e = 0;
  local_288 = 0;
  local_280 = 0xff01;
  local_27e = 0;
  local_278 = 0;
  local_270 = 0xff01;
  local_26e = 0;
  local_268 = 0;
  local_260 = 0xff01;
  local_25e = 0;
  local_258 = 0;
  local_250 = 0xff01;
  local_24e = 0;
  local_248 = 0;
  local_240 = 0xff01;
  local_23e = 0;
  local_238 = 0;
  local_230 = 0xff01;
  local_22e = 0;
  local_228 = 0;
  local_220 = 0xff01;
  local_21e = 0;
  local_218 = 0;
  local_210 = 0xff01;
  local_20e = 0;
  local_208 = 0;
  local_200 = 0xff01;
  local_1fe = 0;
  local_1f8 = 0;
  local_1f0 = 0xff01;
  local_1ee = 0;
  local_1e8 = 0;
  local_1e0 = 0xff01;
  local_1de = 0;
  local_1d8 = 0;
  local_1d0 = 0xff01;
  local_1ce = 0;
  local_1c8 = 0;
  local_1c0 = 0xff01;
  local_1be = 0;
  local_1b8 = 0;
  local_1b0 = 0xff01;
  local_1ae = 0;
  local_1a8 = 0;
  local_1a0 = 0xff01;
  local_19e = 0;
  local_198 = 0;
  local_190 = 0xff01;
  local_18e = 0;
  local_188 = 0;
  local_180 = 0xff01;
  local_17e = 0;
  local_178 = 0;
  local_170 = 0xff01;
  local_16e = 0;
  local_168 = 0;
  local_160 = 0xff01;
  local_15e = 0;
  local_158 = 0;
  local_150 = 0xff01;
  local_14e = 0;
  local_148 = 0;
  local_140 = 0xff01;
  local_13e = 0;
  local_138 = 0;
  local_130 = 0xff01;
  local_12e = 0;
  local_128 = 0;
  local_120 = 0xff01;
  local_11e = 0;
  local_118 = 0;
  local_110 = 0xff01;
  local_10e = 0;
  local_108 = 0;
  local_100 = 0xff01;
  local_fe = 0;
  local_f8 = 0;
  local_f0 = 0xff01;
  local_ee = 0;
  local_e8 = 0;
  local_e0 = 0xff01;
  local_de = 0;
  local_d8 = 0;
  local_d0 = 0xff01;
  local_ce = 0;
  local_c8 = 0;
  local_c0 = 0xff01;
  local_be = 0;
  local_b8 = 0;
  local_b0 = 0xff01;
  local_ae = 0;
  local_a8 = 0;
  local_a0 = 0xff01;
  local_9e = 0;
  local_98 = 0;
  FUN_0097e8e8(param_1,&local_5c8,param_2,param_3);
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379690), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  uVar17 = *(ulong *)PTR_DAT_04379698;
  *(ulong *)PTR_DAT_043796a0 = uVar17;
  if ((*(int *)(*(long *)(uVar17 + 0x50) + 0x2bc0) != 0) &&
     (plVar13 = *(long **)(*(long *)(uVar17 + 0x50) + 0x2bc8), plVar13 != (long *)0x0)) {
    lVar14 = plVar13[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      (**(code **)(*plVar13 + 0x10))(local_80,plVar13);
      local_90 = (long *)0x0;
      local_88 = 0;
      FUN_009636f0(&local_90,local_80);
      plVar10 = local_80[0];
      puVar6 = PTR_DAT_043794a8;
      plVar18 = (long *)PTR_DAT_043794a0;
      puVar5 = PTR_DAT_04379498;
      if (local_80[0] != (long *)0x0) {
        plVar11 = local_80[0] + 1;
        do {
          iVar8 = (int)*plVar11 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *(int *)plVar11 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          local_80[0][2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *plVar18;
          *(long *)puVar6 = lVar14;
          local_70[0] = (long *)*plVar10;
          FUN_02a44274(lVar14 + 0xd8,local_70);
        }
      }
      if ((local_90 != (long *)0x0) &&
         (puVar15 = (undefined8 *)local_90[3], puVar15 != (undefined8 *)0x0)) {
        plVar10 = (long *)(**(code **)*puVar15)(puVar15);
        plVar11 = (long *)PTR_DAT_0437a050;
        if (((*PTR_DAT_0437a048 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a048), plVar11 = (long *)PTR_DAT_0437a050,
           local_5d0 = plVar10, iVar8 != 0)) {
          unaff_x27 = (long *)PTR_DAT_04379c98;
          if ((*PTR_DAT_04379ca8 & 1) == 0) goto LAB_0097e8c0;
          goto LAB_0097e660;
        }
        for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          while (plVar7 = local_90, plVar10 == plVar11) {
            if (local_90 != (long *)0x0) {
              plVar10 = local_90 + 1;
              do {
                iVar8 = (int)*plVar10 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar4) {
                  *(int *)plVar10 = iVar8;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 == 0) {
                local_90[2] = 0;
                if (((*puVar5 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), unaff_x27 = plVar7, iVar8 != 0))
                {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *plVar18;
                *(long *)puVar6 = lVar14;
                local_80[0] = (long *)*plVar7;
                FUN_02a44274(lVar14 + 0xd8,local_80);
              }
            }
            lVar14 = plVar13[0xb];
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar13 + 0x20))(plVar13);
            }
            (**(code **)(puVar15[-10] + 0x10))(local_80,puVar15 + -10);
            local_90 = (long *)0x0;
            local_88 = 0;
            FUN_0098115c(&local_90,local_80);
            plVar13 = local_80[0];
            if (local_80[0] != (long *)0x0) {
              plVar10 = local_80[0] + 1;
              do {
                iVar8 = (int)*plVar10 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar4) {
                  *(int *)plVar10 = iVar8;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 == 0) {
                local_80[0][2] = 0;
                if (((*puVar5 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *plVar18;
                *(long *)puVar6 = lVar14;
                local_70[0] = (long *)*plVar13;
                FUN_02a44274(lVar14 + 0xd8,local_70);
              }
            }
            do {
              uVar9 = local_88;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(&local_88,0x10);
              if (bVar4) {
                local_88 = 0;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0))
            {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *plVar18;
            *(long *)puVar6 = lVar14;
            FUN_02a44e0c(local_70,lVar14,uVar9);
            plVar13 = local_90;
            local_90 = (long *)0x0;
            if (plVar13 != (long *)0x0) {
              plVar10 = plVar13 + 1;
              do {
                iVar8 = (int)*plVar10 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar4) {
                  *(int *)plVar10 = iVar8;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 == 0) {
                plVar13[2] = 0;
                if (((*puVar5 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *plVar18;
                *(long *)puVar6 = lVar14;
                local_80[0] = (long *)*plVar13;
                FUN_02a44274(lVar14 + 0xd8,local_80);
              }
            }
            puVar15 = *(undefined8 **)(param_1 + 0x68);
            *(undefined8 *)(param_1 + 0x68) = 0;
            if (local_70[0] == (long *)0x0) {
              if (puVar15 != (undefined8 *)0x0) {
                piVar1 = (int *)(puVar15 + 1);
                do {
                  iVar8 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar8 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar8 == 1) {
                  puVar15[2] = 0;
                  if (((*puVar5 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar14 = *plVar18;
                  *(long *)puVar6 = lVar14;
                  local_80[0] = (long *)*puVar15;
                  FUN_02a44274(lVar14 + 0xd8,local_80);
                }
              }
              uVar9 = 0;
            }
            else {
              plVar13 = local_70[0];
              if (puVar15 != (undefined8 *)0x0) {
                piVar1 = (int *)(puVar15 + 1);
                do {
                  iVar8 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar8 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar8 + -1 == 0) {
                  puVar15[2] = 0;
                  if (((*puVar5 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar14 = *plVar18;
                  *(long *)puVar6 = lVar14;
                  local_80[0] = (long *)*puVar15;
                  FUN_02a44274(lVar14 + 0xd8,local_80);
                }
                plVar13 = local_70[0];
              }
              local_70[0] = (long *)0x0;
              *(long **)(param_1 + 0x68) = plVar13;
            }
            plVar13 = local_70[0];
            *(undefined8 *)(param_1 + 0x70) = uVar9;
            if (local_70[0] != (long *)0x0) {
              plVar10 = local_70[0] + 1;
              do {
                iVar8 = (int)*plVar10 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar4) {
                  *(int *)plVar10 = iVar8;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 == 0) {
                local_70[0][2] = 0;
                if (((*puVar5 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *plVar18;
                *(long *)puVar6 = lVar14;
                local_80[0] = (long *)*plVar13;
                FUN_02a44274(lVar14 + 0xd8,local_80);
              }
            }
            plVar13 = local_90;
            if (local_90 != (long *)0x0) {
              plVar10 = local_90 + 1;
              do {
                iVar8 = (int)*plVar10 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar4) {
                  *(int *)plVar10 = iVar8;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 == 0) {
                local_90[2] = 0;
                if (((*puVar5 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *plVar18;
                *(long *)puVar6 = lVar14;
                local_80[0] = (long *)*plVar13;
                FUN_02a44274(lVar14 + 0xd8,local_80);
              }
            }
            puVar15 = *(undefined8 **)(uVar17 + 0x50);
            plVar13 = (long *)puVar15[0x579];
            if (plVar13 == (long *)0x0) {
LAB_0097e348:
              if (*(long *)(param_1 + 0x68) == 0) goto LAB_0097e350;
LAB_0097e4c8:
              FUN_0098145c(local_80);
              plVar13 = local_80[0];
              memcpy(local_80[0] + 0xd2,&local_5c8,0x531);
              if (plVar13 == (long *)0x0) goto LAB_0097e364;
              lVar14 = plVar13[0xb];
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                iVar8 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 + -1 != 0) goto LAB_0097e364;
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar13 + 0x20))(plVar13);
              if (*(long *)(param_1 + 0x68) == 0) goto LAB_0097e36c;
LAB_0097e520:
              FUN_0098145c(local_80);
              local_80[0][0x179] = (long)puVar16;
              if (local_80[0] == (long *)0x0) goto LAB_0097e378;
              lVar14 = local_80[0][0xb];
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                iVar8 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 + -1 != 0) goto LAB_0097e378;
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*local_80[0] + 0x20))();
              if (*(long *)(param_1 + 0x68) != 0) goto LAB_0097e568;
LAB_0097e380:
              local_80[0] = (long *)0x0;
            }
            else {
              plVar18 = (long *)plVar13[0xb];
              if ((undefined8 *)plVar18[3] == (undefined8 *)0x0) goto LAB_0097e5d4;
              uVar2 = *(uint *)(puVar15 + 0x578);
              uVar17 = (ulong)uVar2;
              if (plVar18[2] == 0) {
                lVar14 = (*(code *)**(undefined8 **)plVar18[3])();
                plVar18[2] = lVar14;
              }
              piVar1 = (int *)((long)plVar18 + 0xc);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar2 == 3) {
                *(undefined4 *)(puVar15 + 0x578) = 4;
                lVar14 = puVar15[0x579];
                if (*(int *)(lVar14 + 0x4c0) == 5) {
                  *(undefined4 *)(lVar14 + 0x4c0) = 3;
                  *(undefined4 *)(lVar14 + 0x4d4) = 0;
                }
              }
              lVar14 = plVar13[0xb];
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                iVar8 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 + -1 != 0) goto LAB_0097e348;
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar13 + 0x20))(plVar13);
              if (*(long *)(param_1 + 0x68) != 0) goto LAB_0097e4c8;
LAB_0097e350:
              local_80[0] = (long *)0x0;
              memcpy(&DAT_00000690,&local_5c8,0x531);
LAB_0097e364:
              if (*(long *)(param_1 + 0x68) != 0) goto LAB_0097e520;
LAB_0097e36c:
              local_80[0] = (long *)0x0;
              _DAT_00000bc8 = puVar16;
LAB_0097e378:
              if (*(long *)(param_1 + 0x68) == 0) goto LAB_0097e380;
LAB_0097e568:
              FUN_0098145c(local_80);
            }
            plVar13 = local_80[0];
            if (*(long *)(param_1 + 0x58) != 0) {
              FUN_00931034(&local_90);
              lVar12 = local_90[0xd1];
              FUN_00931034(local_70,*(undefined8 *)(param_1 + 0x58));
              lVar14 = local_70[0][0xd4];
              plVar13[0x17a] = lVar12;
              plVar13[0x17b] = lVar14;
              if (local_70[0] != (long *)0x0) {
                lVar14 = local_70[0][0xb];
                piVar1 = (int *)(lVar14 + 0xc);
                do {
                  iVar8 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar8 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar8 + -1 == 0) {
                  *(undefined8 *)(lVar14 + 0x18) = 0;
                  (**(code **)(*local_70[0] + 0x20))();
                }
              }
              if (local_90 != (long *)0x0) {
                lVar14 = local_90[0xb];
                piVar1 = (int *)(lVar14 + 0xc);
                do {
                  iVar8 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar8 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar8 + -1 == 0) {
                  *(undefined8 *)(lVar14 + 0x18) = 0;
                  (**(code **)(*local_90 + 0x20))();
                }
              }
              if (local_80[0] != (long *)0x0) {
                lVar14 = local_80[0][0xb];
                piVar1 = (int *)(lVar14 + 0xc);
                do {
                  iVar8 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar8 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar8 + -1 == 0) {
                  *(undefined8 *)(lVar14 + 0x18) = 0;
                  (**(code **)(*local_80[0] + 0x20))();
                }
              }
              return;
            }
LAB_0097e8c0:
            iVar8 = __cxa_guard_acquire(PTR_DAT_04379ca8);
            if (iVar8 != 0) {
              lVar14 = FUN_009311a8();
              *unaff_x27 = lVar14;
              __cxa_guard_release(PTR_DAT_04379ca8);
            }
LAB_0097e660:
            plVar11 = (long *)PTR_DAT_0437a050;
            *(long **)PTR_DAT_0437a050 = unaff_x27;
            __cxa_guard_release(PTR_DAT_0437a048);
            plVar10 = local_5d0;
            if (local_5d0 == (long *)0x0) goto LAB_0097e5d4;
          }
        }
      }
    }
  }
LAB_0097e5d4:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


