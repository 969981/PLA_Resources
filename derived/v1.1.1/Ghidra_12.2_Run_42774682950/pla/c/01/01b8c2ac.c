/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b8c2ac; name: FUN_01b8c2ac
 */


void FUN_01b8c2ac(long param_1)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined5 uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  char cVar13;
  byte bVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  long **pplVar18;
  int *piVar19;
  undefined8 uVar20;
  long *plVar21;
  undefined8 *local_450;
  undefined8 uStack_448;
  undefined8 *local_440;
  undefined8 uStack_438;
  long *local_430;
  undefined8 uStack_428;
  long *local_420;
  undefined8 uStack_418;
  long *local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined4 local_3f8;
  undefined8 local_3f4;
  undefined8 local_3ec;
  undefined8 local_3e4;
  undefined8 local_3dc;
  undefined8 local_3d4;
  undefined8 local_3cc;
  undefined8 local_3c4;
  undefined8 local_3bc;
  undefined8 local_3b4;
  undefined1 *local_3a8;
  undefined1 *puStack_3a0;
  undefined8 local_398;
  long *local_390;
  undefined1 *local_388;
  undefined1 *puStack_380;
  undefined8 local_378;
  long *local_370;
  undefined1 *local_368;
  undefined1 *puStack_360;
  undefined8 local_358;
  long *local_350;
  undefined1 *local_348;
  undefined1 *puStack_340;
  undefined8 local_338;
  long *local_330;
  undefined1 *local_328;
  undefined1 *puStack_320;
  undefined8 local_318;
  long *local_310;
  undefined1 *local_308;
  undefined1 *puStack_300;
  undefined8 local_2f8;
  long *local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  long *local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined1 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 local_224;
  undefined4 uStack_220;
  undefined8 local_21c;
  undefined8 local_214;
  undefined8 local_20c;
  undefined8 local_204;
  undefined8 local_1fc;
  undefined8 local_1f4;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined8 local_1d8;
  long *local_1d0;
  undefined1 *local_1c8;
  undefined1 *local_1c0;
  undefined8 local_1b8;
  long *local_1b0;
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  undefined8 local_198;
  long *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined8 local_178;
  long *local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined8 local_158;
  long *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined8 local_138;
  long *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long *local_80;
  long *local_78 [3];
  
  if (*(char *)(param_1 + 0x710) == '\0') {
    return;
  }
  iVar11 = *(int *)(param_1 + 0x714);
  if (((*PTR_DAT_04379690 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379690), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar15 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar15;
  if ((lVar15 != 0) &&
     (plVar21 = *(long **)(*(long *)(lVar15 + 0x50) + 0x30), plVar21 != (long *)0x0)) {
    lVar15 = plVar21[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_01b8d42c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar20 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar20;
    }
    piVar19 = (int *)(lVar15 + 0xc);
    do {
      cVar13 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar9) {
        *piVar19 = *piVar19 + 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    lVar15 = FUN_01467f18(plVar21[0x99],"ItemChangeView");
    if (lVar15 == 0) goto LAB_01b8d42c;
    FUN_0257cf08(&local_250);
    *(uint *)(param_1 + 0x714) = (uint)local_250;
    if (*(char *)(param_1 + 0x718) == '\0') {
      if (local_250._4_1_ != '\0') {
        *(char **)(param_1 + 0x71c) = local_248;
        *(undefined1 *)(param_1 + 0x718) = 1;
      }
    }
    else if (local_250._4_1_ == '\0') {
      *(undefined1 *)(param_1 + 0x718) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x720) = local_248._4_1_;
      *(undefined4 *)(param_1 + 0x71c) = (undefined4)local_248;
    }
    puVar17 = &local_240;
    if (*(char *)(param_1 + 0x724) == '\0') {
      if ((char)local_240 != '\0') {
        *(ulong *)(param_1 + 0x728) = CONCAT44(local_238,uStack_23c);
        *(undefined1 *)(param_1 + 0x724) = 1;
        goto LAB_01b8ca88;
      }
    }
    else {
      if ((char)local_240 == '\0') {
        puVar17 = (undefined4 *)(param_1 + 0x724);
      }
      else {
        *(undefined1 *)(param_1 + 0x72c) = (undefined1)local_238;
        *(undefined4 *)(param_1 + 0x728) = uStack_23c;
      }
LAB_01b8ca88:
      *(undefined1 *)puVar17 = 0;
    }
    if (local_250._4_1_ != '\0') {
      local_250._0_5_ = (uint5)(uint)local_250;
    }
    lVar15 = plVar21[0xb];
    piVar19 = (int *)(lVar15 + 0xc);
    do {
      iVar10 = *piVar19;
      cVar13 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar9) {
        *piVar19 = iVar10 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  if (iVar11 != *(int *)(param_1 + 0x714)) {
    if (*(int *)(param_1 + 0x2f0) == 2) {
      *(undefined4 *)(param_1 + 0x4ec) = 5;
      *(undefined4 *)(param_1 + 0x2f0) = 3;
    }
    if (*(int *)(param_1 + 0x500) == 2) {
      *(undefined4 *)(param_1 + 0x6fc) = 5;
      *(undefined4 *)(param_1 + 0x500) = 3;
    }
  }
  local_90 = 0;
  local_88 = 0;
  uVar20 = *(undefined8 *)(param_1 + 8);
  local_240 = 0;
  uStack_23c = 0;
  local_248 = (char *)0x0;
  local_238 = 10;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_22c = 0;
  uStack_228 = 0;
  local_224 = 0;
  uStack_220 = 0;
  local_21c = 0;
  local_214 = 0;
  local_20c = 0;
  local_204 = 0;
  local_1fc = 0;
  local_1f4 = 0x3f80000000000001;
  local_1e0 = &DAT_03996322;
  local_1e8 = &DAT_cbf29ce484222645;
  local_1d0 = (long *)0x0;
  local_1d8 = 0;
  local_1c0 = &DAT_03996322;
  local_1c8 = &DAT_cbf29ce484222645;
  local_1b0 = (long *)0x0;
  local_1b8 = 0;
  local_1a0 = &DAT_03996322;
  local_1a8 = &DAT_cbf29ce484222645;
  local_190 = (long *)0x0;
  local_198 = 0;
  local_180 = &DAT_03996322;
  local_188 = &DAT_cbf29ce484222645;
  local_170 = (long *)0x0;
  local_178 = 0;
  local_160 = &DAT_03996322;
  local_168 = &DAT_cbf29ce484222645;
  local_150 = (long *)0x0;
  local_158 = 0;
  local_140 = &DAT_03996322;
  local_148 = &DAT_cbf29ce484222645;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = (long *)0x0;
  local_138 = 0;
  local_d4 = 0x3f800000;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = (undefined8 *)0x0;
  local_98 = 1;
  local_3f8 = 10;
  local_3f4 = 0;
  local_3ec = 0;
  local_3e4 = 0;
  local_3dc = 0;
  local_3d4 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_3cc = 0;
  local_3c4 = 0;
  local_3bc = 0;
  local_3b4 = 0x3f80000000000001;
  local_2b0 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_2b8 = 0;
  local_294 = 0x3f800000;
  local_270 = 0;
  local_258 = 1;
  local_3a8 = &DAT_cbf29ce484222645;
  puStack_3a0 = &DAT_03996322;
  local_398 = 0;
  local_390 = (long *)0x0;
  local_388 = &DAT_cbf29ce484222645;
  puStack_380 = &DAT_03996322;
  local_378 = 0;
  local_370 = (long *)0x0;
  local_368 = &DAT_cbf29ce484222645;
  puStack_360 = &DAT_03996322;
  local_358 = 0;
  local_350 = (long *)0x0;
  local_348 = &DAT_cbf29ce484222645;
  puStack_340 = &DAT_03996322;
  local_338 = 0;
  local_330 = (long *)0x0;
  local_328 = &DAT_cbf29ce484222645;
  puStack_320 = &DAT_03996322;
  local_318 = 0;
  local_310 = (long *)0x0;
  local_308 = &DAT_cbf29ce484222645;
  puStack_300 = &DAT_03996322;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2f8 = 0;
  local_2f0 = (long *)0x0;
  local_268 = 0;
  uStack_260 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_290 = (long *)0x0;
  uStack_288 = 0;
  uVar12 = FUN_01b8d454(param_1,&local_250,&local_90,1);
  piVar19 = (int *)(param_1 + 0x2f0);
  if ((uVar12 & 1) == 0) {
    FUN_01b8e7d0(piVar19);
  }
  else {
    local_420 = (long *)0x0;
    uStack_418 = 0;
    FUN_00b64344(&local_420,param_1 + 0x230);
    FUN_01b8dc64(piVar19,uVar20,&local_420,&local_250,1);
    plVar21 = local_420;
    if (local_420 != (long *)0x0) {
      plVar1 = local_420 + 1;
      do {
        iVar11 = (int)*plVar1 + -1;
        cVar13 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *(int *)plVar1 = iVar11;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (iVar11 == 0) {
        local_420[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_78[0] = (long *)*plVar21;
        FUN_02a44274(lVar15 + 0xd8,local_78);
      }
    }
  }
  uVar12 = FUN_01b8d454(param_1,&local_410,&local_90,0x100000001);
  if ((uVar12 & 1) == 0) {
    FUN_01b8e7d0(param_1 + 0x500);
    plVar21 = local_290;
  }
  else {
    if (*(long *)(param_1 + 0x1f0) == 0) {
      local_80 = (long *)0x0;
LAB_01b8c598:
      bVar9 = true;
    }
    else {
      FUN_0168ac38(&local_80);
      if (local_80 == (long *)0x0) goto LAB_01b8c598;
      bVar9 = (char)local_80[0xd] == '\0';
    }
    local_430 = (long *)0x0;
    uStack_428 = 0;
    FUN_00b64344(&local_430,param_1 + 0x230);
    uVar12 = FUN_01b8dc64(param_1 + 0x500,uVar20,&local_430,&local_410,bVar9);
    plVar21 = local_430;
    if (local_430 != (long *)0x0) {
      plVar1 = local_430 + 1;
      do {
        iVar11 = (int)*plVar1 + -1;
        cVar13 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *(int *)plVar1 = iVar11;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (iVar11 == 0) {
        local_430[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_78[0] = (long *)*plVar21;
        FUN_02a44274(lVar15 + 0xd8,local_78);
      }
    }
    plVar21 = local_290;
    if ((uVar12 & 1) == 0) {
      if (local_80 != (long *)0x0) {
LAB_01b8c638:
        lVar15 = local_80[0xb];
        piVar2 = (int *)(lVar15 + 0xc);
        do {
          iVar11 = *piVar2;
          cVar13 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = iVar11 + -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_80 + 0x20))();
          plVar21 = local_290;
        }
      }
    }
    else if (local_80 != (long *)0x0) {
      *(undefined1 *)(local_80 + 0xd) = 0;
      goto LAB_01b8c638;
    }
  }
  local_290 = plVar21;
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 1;
    do {
      iVar11 = (int)*plVar1 + -1;
      cVar13 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = iVar11;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (iVar11 == 0) {
      plVar21[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_78[0] = (long *)*plVar21;
      FUN_02a44274(lVar15 + 0xd8,local_78);
    }
  }
  if (local_2f0 != (long *)0x0) {
    (**(code **)(*local_2f0 + 0x20))();
  }
  if (local_310 != (long *)0x0) {
    (**(code **)(*local_310 + 0x20))();
  }
  if (local_330 != (long *)0x0) {
    (**(code **)(*local_330 + 0x20))();
  }
  if (local_350 != (long *)0x0) {
    (**(code **)(*local_350 + 0x20))();
  }
  if (local_370 != (long *)0x0) {
    (**(code **)(*local_370 + 0x20))();
  }
  if (local_390 != (long *)0x0) {
    (**(code **)(*local_390 + 0x20))();
  }
  puVar5 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_d0 + 1);
    do {
      iVar11 = *piVar2;
      cVar13 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar9) {
        *piVar2 = iVar11 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (iVar11 + -1 == 0) {
      local_d0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_410 = (long *)*puVar5;
      FUN_02a44274(lVar15 + 0xd8,&local_410);
    }
  }
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x20))();
  }
  if (local_170 != (long *)0x0) {
    (**(code **)(*local_170 + 0x20))();
  }
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))();
  }
  if (local_1b0 != (long *)0x0) {
    (**(code **)(*local_1b0 + 0x20))();
  }
  if (local_1d0 != (long *)0x0) {
    (**(code **)(*local_1d0 + 0x20))();
  }
  if (*(long *)(param_1 + 0x200) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x200) + 0xc) == 0) {
    return;
  }
  FUN_019a9c30(&local_410,*(undefined8 *)(param_1 + 0x200));
  local_248 = "View_Top";
  local_250 = (undefined8 *)&DAT_753f74378b49da9c;
  local_238 = 0;
  uStack_234 = 0;
  local_240 = 8;
  uStack_23c = 0;
  lVar15 = FUN_02575a78(local_410[0x99],&local_250);
  if ((long *)CONCAT44(uStack_234,local_238) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT44(uStack_234,local_238) + 0x20))();
  }
  if (local_410 != (long *)0x0) {
    lVar16 = local_410[0xb];
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      iVar11 = *piVar2;
      cVar13 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar9) {
        *piVar2 = iVar11 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_410 + 0x20))();
    }
  }
  if (lVar15 == 0) {
    return;
  }
  local_90 = CONCAT71((int7)(local_90 >> 8),*(char *)(param_1 + 0x730)) & 0xffffff00000000ff;
  uVar6 = CONCAT14(*(int *)(param_1 + 0x714) == 1,(undefined4)local_88);
  local_88 = CONCAT71((uint7)(uint)((uint5)uVar6 >> 8),1);
  if (*(char *)(param_1 + 0x730) == '\0') goto LAB_01b8c8f0;
  if (*(int *)(param_1 + 0x714) == 1) {
    piVar19 = (int *)(param_1 + 0x500);
  }
  if (*piVar19 != 2) {
    local_248 = (char *)0x0;
    local_250 = (undefined8 *)0x0;
    goto LAB_01b8c8f0;
  }
  piVar2 = piVar19 + 0x78;
  local_248 = (char *)0x0;
  local_250 = (undefined8 *)0x0;
  FUN_01b6a890(&local_250,piVar2);
  puVar5 = local_250;
  if (local_250 == (undefined8 *)0x0) goto LAB_01b8c8f0;
  if (*(int *)((long)local_250 + 0xc) != 0) {
    piVar3 = (int *)((long)local_250 + 0xc);
    iVar11 = *(int *)((long)local_250 + 0xc);
    do {
      plVar21 = (long *)puVar5[2];
      lVar16 = FUN_01b925ec();
      while( true ) {
        if (plVar21 == (long *)0x0) goto LAB_01b8cc70;
        if (plVar21 == (long *)lVar16) break;
        plVar21 = (long *)*plVar21;
      }
      iVar10 = *piVar3;
      if (iVar10 == iVar11) {
        cVar13 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar9) {
          *piVar3 = iVar11 + 1;
          cVar13 = ExclusiveMonitorsStatus();
        }
        if (cVar13 == '\0') {
          lVar16 = puVar5[3];
          plVar21 = (long *)0x0;
          puVar5 = local_250;
          if (lVar16 != 0) {
            plVar21 = (long *)(lVar16 + -0x50);
          }
          goto joined_r0x01b8cc68;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar10;
    } while (iVar10 != 0);
  }
LAB_01b8cc70:
  plVar21 = (long *)0x0;
  puVar5 = local_250;
joined_r0x01b8cc68:
  local_250 = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar5 + 1);
    do {
      iVar11 = *piVar3;
      cVar13 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar9) {
        *piVar3 = iVar11 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (iVar11 + -1 == 0) {
      puVar5[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_410 = (long *)*puVar5;
      FUN_02a44274(lVar16 + 0xd8,&local_410);
    }
  }
  if (plVar21 == (long *)0x0) goto LAB_01b8c8f0;
  iVar11 = FUN_01b75988(plVar21);
  if (*(long *)(param_1 + 0x250) == 0) {
    local_78[0] = (long *)0x0;
    if (*(long *)(param_1 + 0x220) == 0) goto LAB_01b8ccf8;
LAB_01b8d404:
    FUN_0191cb34(&local_80);
    if (local_78[0] != (long *)0x0) goto LAB_01b8cd04;
LAB_01b8ce28:
    bVar9 = true;
  }
  else {
    FUN_009b8830(local_78);
    if (*(long *)(param_1 + 0x220) != 0) goto LAB_01b8d404;
LAB_01b8ccf8:
    local_80 = (long *)0x0;
    if (local_78[0] == (long *)0x0) goto LAB_01b8ce28;
LAB_01b8cd04:
    plVar1 = local_78[0];
    if (local_80 == (long *)0x0) goto LAB_01b8ce28;
    local_248 = (char *)local_78[0][0x2f];
    local_238 = (undefined4)local_78[0][0x31];
    uStack_234 = (undefined4)((ulong)local_78[0][0x31] >> 0x20);
    local_250 = (undefined8 *)local_78[0][0x2e];
    local_240 = (undefined4)local_78[0][0x30];
    uStack_23c = (undefined4)((ulong)local_78[0][0x30] >> 0x20);
    uStack_228 = 0;
    local_224 = 0;
    uStack_230 = 0;
    uStack_22c = 0;
    FUN_00b63974(&uStack_230,local_78[0] + 0x32);
    puVar5 = local_250;
    uStack_220 = CONCAT31(uStack_220._1_3_,(char)plVar1[0x34]);
    uVar7 = local_250._4_4_;
    *(ulong *)(param_1 + 0x2c0) = CONCAT44(uStack_23c,local_240);
    *(undefined8 **)(param_1 + 0x2b0) = local_250;
    *(ulong *)(param_1 + 0x2c8) = CONCAT44(uStack_234,local_238);
    *(char **)(param_1 + 0x2b8) = local_248;
    FUN_00b63974(param_1 + 0x2d0,&uStack_230);
    *(undefined1 *)(param_1 + 0x2e0) = (undefined1)uStack_220;
    FUN_01923a98(&local_410,local_80,(ulong)(iVar11 == 4) | (long)puVar5 << 0x20,uVar7);
    cVar13 = (char)local_410;
    if (*(char *)(param_1 + 0x2a0) == '\0') {
      if ((char)local_410 != '\0') {
        *(undefined8 *)(param_1 + 0x2a8) = local_408;
        *(undefined1 *)(param_1 + 0x2a0) = 1;
        pplVar18 = &local_410;
        cVar13 = '\x01';
        goto LAB_01b8d134;
      }
      puVar5 = (undefined8 *)CONCAT44(uStack_22c,uStack_230);
    }
    else {
      if ((char)local_410 == '\0') {
        pplVar18 = (long **)(param_1 + 0x2a0);
      }
      else {
        *(undefined8 *)(param_1 + 0x2a8) = local_408;
        pplVar18 = &local_410;
        cVar13 = '\x01';
      }
LAB_01b8d134:
      *(undefined1 *)pplVar18 = 0;
      puVar5 = (undefined8 *)CONCAT44(uStack_22c,uStack_230);
    }
    if (puVar5 != (undefined8 *)0x0) {
      piVar3 = (int *)(puVar5 + 1);
      do {
        iVar11 = *piVar3;
        cVar13 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar9) {
          *piVar3 = iVar11 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (iVar11 + -1 == 0) {
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar16;
        local_410 = (long *)*puVar5;
        FUN_02a44274(lVar16 + 0xd8,&local_410);
      }
      cVar13 = *(char *)(param_1 + 0x2a0);
    }
    if (cVar13 == '\0') goto LAB_01b8ce28;
    bVar9 = *(long *)(param_1 + 0x2a8) == -0x5098ffb379f8bd48;
  }
  if (local_80 != (long *)0x0) {
    lVar16 = local_80[0xb];
    piVar3 = (int *)(lVar16 + 0xc);
    do {
      iVar11 = *piVar3;
      cVar13 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar8) {
        *piVar3 = iVar11 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  if (local_78[0] != (long *)0x0) {
    lVar16 = local_78[0][0xb];
    piVar3 = (int *)(lVar16 + 0xc);
    do {
      iVar11 = *piVar3;
      cVar13 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar8) {
        *piVar3 = iVar11 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_78[0] + 0x20))();
    }
  }
  uVar12 = local_90;
  bVar8 = false;
  if (*(char *)(param_1 + 0x2a0) != '\0') {
    bVar8 = *(long *)(param_1 + 0x2a8) == -0x5098ffb379f8bd48;
  }
  local_90._0_2_ = CONCAT11(bVar8,(undefined1)local_90);
  local_90._3_5_ = SUB85(uVar12,3);
  local_90 = CONCAT53(local_90._3_5_,CONCAT12(bVar9,(undefined2)local_90)) ^ 0x10000;
  if (*piVar19 == 2) {
    local_248 = (char *)0x0;
    local_250 = (undefined8 *)0x0;
    FUN_01b6a890(&local_250,piVar2);
  }
  else {
    local_248 = (char *)0x0;
    local_250 = (undefined8 *)0x0;
  }
  local_440 = (undefined8 *)0x0;
  uStack_438 = 0;
  FUN_01b932d0(&local_440,&local_250);
  if ((local_440 == (undefined8 *)0x0) ||
     (FUN_01b9246c(&local_410), plVar1 = local_410, local_410 == (long *)0x0)) {
    bVar9 = false;
  }
  else {
    iVar11 = FUN_01ad2e18(local_410,param_1 + 0x2b0);
    lVar16 = plVar1[0xb];
    bVar9 = iVar11 != 0;
    piVar3 = (int *)(lVar16 + 0xc);
    do {
      iVar11 = *piVar3;
      cVar13 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar8) {
        *piVar3 = iVar11 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
  puVar5 = local_440;
  local_90._0_4_ = CONCAT13(bVar9,(undefined3)local_90);
  if (local_440 != (undefined8 *)0x0) {
    piVar3 = (int *)(local_440 + 1);
    do {
      iVar11 = *piVar3;
      cVar13 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar9) {
        *piVar3 = iVar11 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (iVar11 + -1 == 0) {
      local_440[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_410 = (long *)*puVar5;
      FUN_02a44274(lVar16 + 0xd8,&local_410);
    }
  }
  puVar5 = local_250;
  if (local_250 != (undefined8 *)0x0) {
    piVar3 = (int *)(local_250 + 1);
    do {
      iVar11 = *piVar3;
      cVar13 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar9) {
        *piVar3 = iVar11 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (iVar11 + -1 == 0) {
      local_250[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_410 = (long *)*puVar5;
      FUN_02a44274(lVar16 + 0xd8,&local_410);
    }
  }
  if (*piVar19 == 2) {
    local_248 = (char *)0x0;
    local_250 = (undefined8 *)0x0;
    FUN_01b6a890(&local_250,piVar2);
  }
  else {
    local_248 = (char *)0x0;
    local_250 = (undefined8 *)0x0;
  }
  local_450 = (undefined8 *)0x0;
  uStack_448 = 0;
  FUN_01b932d0(&local_450,&local_250);
  if (local_450 == (undefined8 *)0x0) {
LAB_01b8cfa8:
    bVar14 = 0;
  }
  else {
    iVar11 = *(int *)(param_1 + 0x2b0);
    iVar10 = *(int *)(param_1 + 0x2b4);
    FUN_01b9246c(&local_410);
    plVar1 = local_410;
    if (local_410 != (long *)0x0) {
      lVar16 = local_410[0xb];
      piVar19 = (int *)(lVar16 + 0xc);
      do {
        iVar4 = *piVar19;
        cVar13 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar19,0x10);
        if (bVar9) {
          *piVar19 = iVar4 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_410 + 0x20))(local_410);
      }
    }
    bVar14 = 0;
    if ((iVar11 == 5) && (plVar1 != (long *)0x0)) {
      if ((iVar10 != 6) && (iVar10 != 3)) goto LAB_01b8cfa8;
      bVar14 = *(byte *)(param_1 + 0x2e0) ^ 1;
    }
  }
  puVar5 = local_450;
  local_90._0_5_ = CONCAT14(bVar14,(undefined4)local_90);
  if (local_450 != (undefined8 *)0x0) {
    piVar19 = (int *)(local_450 + 1);
    do {
      iVar11 = *piVar19;
      cVar13 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar9) {
        *piVar19 = iVar11 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (iVar11 + -1 == 0) {
      local_450[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_410 = (long *)*puVar5;
      FUN_02a44274(lVar16 + 0xd8,&local_410);
    }
  }
  puVar5 = local_250;
  if (local_250 != (undefined8 *)0x0) {
    piVar19 = (int *)(local_250 + 1);
    do {
      iVar11 = *piVar19;
      cVar13 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar9) {
        *piVar19 = iVar11 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (iVar11 + -1 == 0) {
      local_250[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_410 = (long *)*puVar5;
      FUN_02a44274(lVar16 + 0xd8,&local_410);
    }
  }
  lVar16 = plVar21[0xb];
  piVar19 = (int *)(lVar16 + 0xc);
  do {
    iVar11 = *piVar19;
    cVar13 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar19,0x10);
    if (bVar9) {
      *piVar19 = iVar11 + -1;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*plVar21 + 0x20))(plVar21);
  }
LAB_01b8c8f0:
  FUN_02580530(*(undefined8 *)(lVar15 + 0x5f0),&local_90);
  return;
}


