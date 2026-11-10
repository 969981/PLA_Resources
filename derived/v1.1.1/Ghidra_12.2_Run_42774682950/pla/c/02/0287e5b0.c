/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0287e5b0; name: FUN_0287e5b0
 */


void FUN_0287e5b0(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  code *pcVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long *local_3c0 [4];
  long *local_3a0;
  long *local_390 [4];
  long *local_370;
  undefined **local_360;
  code *local_358;
  undefined8 local_350;
  long *local_348;
  long *local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  long *local_2d8;
  char *pcStack_2d0;
  undefined8 local_2c8;
  long *local_2c0;
  undefined **local_2b8;
  long local_2b0;
  long local_2a8;
  long *local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  long *local_288;
  char acStack_27c [4];
  undefined **local_278;
  undefined **local_270;
  long local_268 [32];
  long local_168 [33];
  
  nn::audio::AcquireAudioDeviceNotificationForOutput((SystemEvent *)(param_1 + 0xd0));
  plVar14 = (long *)PTR_DAT_0437b160;
  lVar15 = *(long *)(*(long *)PTR_DAT_0437b160 + 0x48);
  uVar10 = FUN_0094cba4(lVar15 + 8);
  if ((uVar10 & 1) != 0) {
    memset(&local_278,0,0x210);
    puVar2 = PTR_DAT_04379cd0;
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    puVar4 = PTR_DAT_04379ce0;
    puVar3 = PTR_DAT_04379cd8;
    uVar11 = *(undefined8 *)PTR_DAT_04379cd8;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar11;
    FUN_02a47cd8(&local_360,uVar11,"bin/sound/NX64/wwise/bank/");
    ppuVar1 = local_278;
    ppuVar5 = local_360;
    local_278 = (undefined **)0x0;
    if (ppuVar1 != (undefined **)0x0) {
      (**(code **)(*ppuVar1 + 0x20))();
    }
    local_278 = ppuVar5;
    if (((*puVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar11 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar11;
    FUN_02a47cd8(&local_360,uVar11,"Init.bnk");
    ppuVar1 = local_270;
    ppuVar5 = local_360;
    local_270 = (undefined **)0x0;
    if (ppuVar1 != (undefined **)0x0) {
      (**(code **)(*ppuVar1 + 0x20))();
    }
    local_270 = ppuVar5;
    if (((*puVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar11 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar11;
    FUN_02a47cd8(&local_360,uVar11,"bank_names");
    ppuVar5 = local_360;
    if (((*puVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar11 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar11;
    FUN_02a47cd8(&local_360,uVar11,"package_names");
    ppuVar6 = local_360;
    uVar10 = 0;
    plVar14 = local_168;
    ppuVar1 = (undefined **)PTR_PTR_04379d00;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar1 = ppuVar5 + 0xc;
    }
    do {
      snprintf(acStack_27c,4,"%d",uVar10 & 0xffffffff);
      local_360 = (undefined **)*ppuVar1;
      FUN_02881254(&local_2d8,&local_360,acStack_27c);
      plVar8 = local_2d8;
      local_360 = (undefined **)0x56237091ed6bee53;
      local_358 = (code *)0x38cd6f8;
      local_350 = 0xc;
      local_348 = (long *)0x0;
      if (local_2d8 == (long *)0x0) {
        local_2b8 = *(undefined ***)PTR_DAT_04379c88;
LAB_0287e954:
        local_2b0 = *(long *)PTR_PTR_04379d00;
        if (local_2d8 != (long *)0x0) goto LAB_0287e784;
LAB_0287e964:
        local_2a8 = 0;
      }
      else {
        local_2b8 = (undefined **)local_2d8[0xb];
        if (local_2d8 == (long *)0x0) goto LAB_0287e954;
        local_2b0 = local_2d8[0xc];
        if (local_2d8 == (long *)0x0) goto LAB_0287e964;
LAB_0287e784:
        local_2a8 = local_2d8[0xd];
        local_2a0 = (long *)0x0;
        (**(code **)(*local_2d8 + 0x18))(local_2d8);
      }
      local_2a0 = plVar8;
      FUN_00bef9ac(&local_288,&local_360,&local_2b8);
      if (local_2a0 != (long *)0x0) {
        (**(code **)(*local_2a0 + 0x20))();
      }
      if (local_348 != (long *)0x0) {
        (**(code **)(*local_348 + 0x20))();
      }
      plVar8 = local_288;
      if (local_288 == (long *)0x0) {
LAB_0287e980:
        if (local_2d8 != (long *)0x0) {
          (**(code **)(*local_2d8 + 0x20))();
        }
        break;
      }
      if (*(char *)local_288[0xc] == '\0') {
        (**(code **)(*local_288 + 0x20))(local_288);
        goto LAB_0287e980;
      }
      (**(code **)(*local_288 + 0x18))(local_288);
      plVar12 = (long *)*plVar14;
      *plVar14 = (long)plVar8;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      if (local_288 != (long *)0x0) {
        (**(code **)(*local_288 + 0x20))();
      }
      if (local_2d8 != (long *)0x0) {
        (**(code **)(*local_2d8 + 0x20))();
      }
      uVar10 = uVar10 + 1;
      plVar14 = plVar14 + 1;
    } while (uVar10 != 0x20);
    uVar10 = 0;
    plVar14 = local_268;
    ppuVar1 = (undefined **)PTR_PTR_04379d00;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar1 = ppuVar6 + 0xc;
    }
    do {
      snprintf(acStack_27c,4,"%d",uVar10 & 0xffffffff);
      local_360 = (undefined **)*ppuVar1;
      FUN_02881254(&local_2d8,&local_360,acStack_27c);
      plVar8 = local_2d8;
      local_360 = (undefined **)0x56237091ed6bee53;
      local_358 = (code *)0x38cd6f8;
      local_350 = 0xc;
      local_348 = (long *)0x0;
      if (local_2d8 == (long *)0x0) {
        local_2b8 = *(undefined ***)PTR_DAT_04379c88;
LAB_0287eaf8:
        local_2b0 = *(long *)PTR_PTR_04379d00;
        if (local_2d8 != (long *)0x0) goto LAB_0287ea18;
LAB_0287eb08:
        local_2a8 = 0;
      }
      else {
        local_2b8 = (undefined **)local_2d8[0xb];
        if (local_2d8 == (long *)0x0) goto LAB_0287eaf8;
        local_2b0 = local_2d8[0xc];
        if (local_2d8 == (long *)0x0) goto LAB_0287eb08;
LAB_0287ea18:
        local_2a8 = local_2d8[0xd];
        local_2a0 = (long *)0x0;
        (**(code **)(*local_2d8 + 0x18))(local_2d8);
      }
      local_2a0 = plVar8;
      FUN_00bef9ac(&local_288,&local_360,&local_2b8);
      if (local_2a0 != (long *)0x0) {
        (**(code **)(*local_2a0 + 0x20))();
      }
      if (local_348 != (long *)0x0) {
        (**(code **)(*local_348 + 0x20))();
      }
      plVar8 = local_288;
      if (local_288 == (long *)0x0) {
LAB_0287eb24:
        if (local_2d8 != (long *)0x0) {
          (**(code **)(*local_2d8 + 0x20))();
        }
        break;
      }
      if (*(char *)local_288[0xc] == '\0') {
        (**(code **)(*local_288 + 0x20))(local_288);
        goto LAB_0287eb24;
      }
      (**(code **)(*local_288 + 0x18))(local_288);
      plVar12 = (long *)*plVar14;
      *plVar14 = (long)plVar8;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      if (local_288 != (long *)0x0) {
        (**(code **)(*local_288 + 0x20))();
      }
      if (local_2d8 != (long *)0x0) {
        (**(code **)(*local_2d8 + 0x20))();
      }
      uVar10 = uVar10 + 1;
      plVar14 = plVar14 + 1;
    } while (uVar10 != 0x20);
    puVar2 = PTR_DAT_04379c28;
    local_2b8 = &PTR_LAB_042714f0;
    local_2b0 = CONCAT71(local_2b0._1_7_,1);
    local_2a8 = 6;
    local_2a0 = (long *)0x6;
    local_298 = 0x200000002;
    uStack_290 = 0x100000000;
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    puVar4 = PTR_DAT_04379c38;
    puVar3 = PTR_DAT_04379c30;
    uVar11 = *(undefined8 *)PTR_DAT_04379c30;
    *(undefined8 *)PTR_DAT_04379c38 = uVar11;
    FUN_029104e8(uVar11,lVar15,&local_278,&local_2b8);
    if (((*puVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    uVar11 = *(undefined8 *)puVar3;
    local_2c8 = 0x14;
    local_2c0 = (long *)0x0;
    *(undefined8 *)puVar4 = uVar11;
    local_2d8 = (long *)0xc47a72b7b544cdb4;
    pcStack_2d0 = "SET_STATE_GAME_AWAKE";
    local_2f0 = 0;
    uStack_2e8 = 0;
    local_300 = 0;
    uStack_2f8 = 0;
    local_310 = 0;
    uStack_308 = 0;
    local_320 = 0;
    uStack_318 = 0;
    local_330 = 0;
    uStack_328 = 0;
    local_340 = (long *)0x0;
    uStack_338 = 0;
    local_350 = 0;
    local_348 = (long *)0x0;
    local_360 = (undefined **)0x0;
    local_358 = (code *)0x0;
    FUN_02913338(uVar11,&local_2d8,&local_360,0,0,0);
    pcVar7 = local_358;
    if (local_358 == (code *)0x0) {
      local_358 = (code *)0x0;
    }
    else {
      local_350 = 0;
      local_348 = (long *)0x0;
      local_360 = (undefined **)0x0;
      local_358 = (code *)0x0;
      (*pcVar7)(&local_340);
    }
    if (local_2c0 != (long *)0x0) {
      (**(code **)(*local_2c0 + 0x20))();
    }
    if (((*puVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    uVar11 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar11;
    local_360 = (undefined **)&DAT_b14c4e1fe4b002c0;
    local_358 = (code *)0x39bf75d;
    local_350 = 0xc;
    local_348 = (long *)0x0;
    if (((*puVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    *(undefined8 *)puVar4 = *(undefined8 *)puVar3;
    uVar13 = FUN_02911ed0();
    FUN_02913898(0x3f800000,uVar11,&local_360,uVar13,0);
    if (local_348 != (long *)0x0) {
      (**(code **)(*local_348 + 0x20))();
    }
    if (ppuVar6 != (undefined **)0x0) {
      (**(code **)(*ppuVar6 + 0x20))(ppuVar6);
    }
    if (ppuVar5 != (undefined **)0x0) {
      (**(code **)(*ppuVar5 + 0x20))(ppuVar5);
    }
    FUN_00b1a454(local_168);
    FUN_00b1a454(local_268);
    if (local_270 != (undefined **)0x0) {
      (**(code **)(*local_270 + 0x20))();
    }
    plVar14 = (long *)PTR_DAT_0437b160;
    if (local_278 != (undefined **)0x0) {
      (**(code **)(*local_278 + 0x20))();
    }
  }
  uVar11 = *(undefined8 *)(*plVar14 + 0x48);
  if (((*PTR_DAT_04379e40 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379e40);
  }
  uVar13 = *(undefined8 *)PTR_DAT_04379e48;
  *(undefined8 *)PTR_DAT_04379e50 = uVar13;
  FUN_02926f8c(uVar13,uVar11);
  local_278 = &PTR_LAB_04271518;
  local_270 = (undefined **)0x0;
  local_2b8 = (undefined **)0x38c5e9c;
  local_268[2] = 0;
  local_268[3] = 0;
  local_268[0] = 0;
  local_268[1] = 0;
  FUN_009f1b84(&local_360,&local_2b8);
  FUN_00938764(&local_278,0,&local_360,0,uVar11,0);
  if (local_340 != (long *)0x0) {
    (**(code **)(*local_340 + 0x20))();
  }
  if (local_360 != (undefined **)0x0) {
    (**(code **)(*local_360 + 0x20))();
  }
  if ((local_270 != (undefined **)0x0) &&
     (lVar15 = (long)*(uint **)((long)local_270 + 0x250) +
               (ulong)**(uint **)((long)local_270 + 0x250), lVar15 != 0)) {
    FUN_02927ab4(uVar13,lVar15);
    local_360 = (undefined **)0x393539f;
    FUN_009f1b84(local_390,&local_360);
    local_360 = (undefined **)0x3995044;
    FUN_009f1b84(local_3c0,&local_360);
    FUN_029282e0(uVar13,local_390,local_3c0);
    if (local_3a0 != (long *)0x0) {
      (**(code **)(*local_3a0 + 0x20))();
    }
    if (local_3c0[0] != (long *)0x0) {
      (**(code **)(*local_3c0[0] + 0x20))();
    }
    if (local_370 != (long *)0x0) {
      (**(code **)(*local_370 + 0x20))();
    }
    if (local_390[0] != (long *)0x0) {
      (**(code **)(*local_390[0] + 0x20))();
    }
  }
  FUN_00936104(&local_278);
  return;
}


