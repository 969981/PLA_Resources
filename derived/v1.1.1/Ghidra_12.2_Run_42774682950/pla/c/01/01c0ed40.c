/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c0ed40; name: FUN_01c0ed40
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01c0ed40(long param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int *piVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined1 *local_570;
  code *local_568;
  undefined1 *local_560;
  undefined1 *puStack_558;
  long local_550;
  int local_548;
  long *local_4e8;
  long *local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  long *local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  long *local_4a8;
  undefined1 local_4a0;
  long local_498;
  long *local_490;
  undefined8 local_488;
  undefined8 local_480;
  long *local_478;
  long *local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  long *local_450;
  undefined8 local_448;
  undefined8 local_440;
  code *local_438;
  long *local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  long *local_410;
  undefined8 *local_408 [3];
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined2 local_3e0;
  undefined8 *local_3d8 [2];
  undefined4 local_3c8;
  undefined8 local_3c0;
  code *local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [96];
  char local_340;
  char local_330;
  char local_310;
  char local_290;
  char local_250;
  char local_1c0;
  char local_180;
  char local_f0;
  char local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  long *local_58;
  int local_44;
  
  iVar7 = *(int *)(param_1 + 0x400);
  if (iVar7 != param_2) {
    local_44 = param_2;
    if (param_2 == 1) {
      if (((*PTR_DAT_0437a708 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a708);
      }
      uVar8 = *(undefined8 *)PTR_DAT_0437a710;
      *(undefined8 *)PTR_DAT_0437a718 = uVar8;
      piVar9 = (int *)FUN_010aa4a0(uVar8,*(undefined4 *)(param_1 + 0x338),
                                   *(undefined2 *)(param_1 + 0x33c),*(undefined4 *)(param_1 + 0x340)
                                  );
      if (*(ushort *)((long)piVar9 - (long)*piVar9) < 0x29) {
        return;
      }
      uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[0x14];
      if (uVar11 == 0) {
        return;
      }
      if (*(char *)((long)piVar9 + uVar11) == '\0') {
        return;
      }
      iVar7 = *(int *)(param_1 + 0x400);
    }
    iVar6 = local_44;
    if ((iVar7 != local_44) && (FUN_00956dac(&local_490,param_1 + 0x488), local_490 != (long *)0x0))
    {
      lVar12 = FUN_009aff90(local_490 + 0x1e,&local_4e0);
      if (lVar12 != 0) {
        FUN_01836814(lVar12,0);
      }
      if (local_490 != (long *)0x0) {
        lVar12 = local_490[0xb];
        piVar9 = (int *)(lVar12 + 0xc);
        do {
          iVar7 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_490 + 0x20))();
        }
      }
    }
    FUN_01c0f6e4(&local_490,param_1,&local_44);
    *(long **)(param_1 + 0x400) = local_490;
    *(undefined8 *)(param_1 + 0x408) = local_488;
    *(undefined8 *)(param_1 + 0x410) = local_480;
    plVar10 = *(long **)(param_1 + 0x420);
    *(undefined8 *)(param_1 + 0x420) = 0;
    *(long **)(param_1 + 0x418) = local_478;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
    plVar10 = local_470;
    local_470 = (long *)0x0;
    *(long **)(param_1 + 0x420) = plVar10;
    *(undefined8 *)(param_1 + 0x428) = local_468;
    *(undefined8 *)(param_1 + 0x430) = local_460;
    plVar10 = *(long **)(param_1 + 0x440);
    *(undefined8 *)(param_1 + 0x440) = 0;
    *(undefined8 *)(param_1 + 0x438) = local_458;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
    plVar10 = local_450;
    local_450 = (long *)0x0;
    *(long **)(param_1 + 0x440) = plVar10;
    *(undefined8 *)(param_1 + 0x448) = local_448;
    *(undefined8 *)(param_1 + 0x450) = local_440;
    plVar10 = *(long **)(param_1 + 0x460);
    *(undefined8 *)(param_1 + 0x460) = 0;
    *(code **)(param_1 + 0x458) = local_438;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
    plVar10 = local_430;
    local_430 = (long *)0x0;
    *(long **)(param_1 + 0x460) = plVar10;
    *(undefined8 *)(param_1 + 0x468) = local_428;
    *(undefined8 *)(param_1 + 0x470) = local_420;
    plVar10 = *(long **)(param_1 + 0x480);
    *(undefined8 *)(param_1 + 0x480) = 0;
    *(undefined8 *)(param_1 + 0x478) = local_418;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
    plVar10 = local_410;
    local_410 = (long *)0x0;
    *(long **)(param_1 + 0x480) = plVar10;
    FUN_0087fcf0(param_1 + 0x488,local_408);
    *(undefined8 *)(param_1 + 0x4a8) = local_3e8;
    *(undefined8 *)(param_1 + 0x4a0) = local_3f0;
    *(undefined2 *)(param_1 + 0x4b0) = local_3e0;
    FUN_00ab196c(param_1 + 0x4b8,local_3d8);
    *(undefined4 *)(param_1 + 0x4c8) = local_3c8;
    if (local_3d8[0] != (undefined8 *)0x0) {
      piVar9 = (int *)(local_3d8[0] + 1);
      do {
        iVar7 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar7 + -1 == 0) {
        local_3d8[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_4e0 = (long *)*local_3d8[0];
        FUN_02a44274(lVar12 + 0xd8,&local_4e0);
      }
    }
    if (local_408[0] != (undefined8 *)0x0) {
      piVar9 = (int *)(local_408[0] + 1);
      do {
        iVar7 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar7 + -1 == 0) {
        local_408[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_4e0 = (long *)*local_408[0];
        FUN_02a44274(lVar12 + 0xd8,&local_4e0);
      }
    }
    if (local_410 != (long *)0x0) {
      (**(code **)(*local_410 + 0x20))();
    }
    if (local_430 != (long *)0x0) {
      (**(code **)(*local_430 + 0x20))();
    }
    if (local_450 != (long *)0x0) {
      (**(code **)(*local_450 + 0x20))();
    }
    if (local_470 != (long *)0x0) {
      (**(code **)(*local_470 + 0x20))();
    }
    if (((iVar6 != 0) && (*(long *)(param_1 + 0x328) != 0)) &&
       (FUN_009acf14(&local_490), plVar10 = local_490, local_490 != (long *)0x0)) {
      local_60 = 0;
      local_58 = (long *)0x0;
      local_70 = *(undefined8 *)(param_1 + 8);
      local_68 = (undefined8 *)0x0;
      FUN_00b64344(&local_68,param_1 + 0x328);
      local_478 = (long *)0x0;
      local_470 = (long *)CONCAT44(local_470._4_4_,0x1c);
      local_340 = '\0';
      local_330 = '\0';
      local_b0 = '\0';
      local_450 = (long *)((ulong)local_450 & 0xffffffffffffff00);
      local_440 = 0;
      local_438 = (code *)0x0;
      local_430 = (long *)0x0;
      local_428 = 0;
      local_3c0 = 0;
      local_3b8 = (code *)0x0;
      local_3b0 = 0;
      uStack_3a8 = 0;
      local_460 = 0;
      local_458 = 0;
      local_490 = *(long **)(param_1 + 0x468);
      local_488 = *(undefined8 *)(param_1 + 0x470);
      local_480 = *(undefined8 *)(param_1 + 0x478);
      plVar13 = *(long **)(param_1 + 0x480);
      if (plVar13 == (long *)0x0) {
      }
      else {
        (**(code **)(*plVar13 + 0x18))(plVar13);
        if (local_478 != (long *)0x0) {
          lVar12 = *local_478;
          local_478 = plVar13;
          (**(code **)(lVar12 + 0x20))();
          plVar13 = local_478;
        }
      }
      local_478 = plVar13;
      plVar13 = local_90;
      local_460 = 0;
      local_458 = 0;
      local_4d8 = (ulong)local_4d8._4_4_ << 0x20;
      local_4e0 = (long *)0x0;
      if (local_b0 == '\0') {
        local_80 = 0;
        local_88 = (long *)0x0;
        local_b0 = '\x01';
      }
      else {
        local_a8 = &DAT_cbf29ce484222645;
        local_a0 = &DAT_03996322;
        local_98 = 0;
        local_90 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x20))();
        }
        local_88 = local_4e0;
        local_80 = (undefined4)local_4d8;
      }
      local_7c = 1;
      local_90 = (long *)0x0;
      local_a8 = *(undefined1 **)(param_1 + 0x448);
      local_a0 = *(undefined1 **)(param_1 + 0x450);
      local_98 = *(undefined8 *)(param_1 + 0x458);
      plVar13 = *(long **)(param_1 + 0x460);
      local_4e0 = local_88;
      if (plVar13 == (long *)0x0) {
      }
      else {
        (**(code **)(*plVar13 + 0x18))(plVar13);
        if (local_90 != (long *)0x0) {
          lVar12 = *local_90;
          local_90 = plVar13;
          (**(code **)(lVar12 + 0x20))();
          plVar13 = local_90;
        }
      }
      local_90 = plVar13;
      uVar8 = *(undefined8 *)(param_1 + 8);
      local_80 = *(undefined4 *)(param_1 + 0x404);
      local_7c = 0;
      local_88 = (long *)uVar8;
      if (*(char *)(param_1 + 0x4b0) != '\0') {
        local_4e0 = *(long **)(param_1 + 0x408);
        local_4d8 = *(long *)(param_1 + 0x410);
        local_4d0 = *(undefined8 *)(param_1 + 0x418);
        local_4c8 = *(long **)(param_1 + 0x420);
        if (local_4c8 != (long *)0x0) {
          (**(code **)(*local_4c8 + 0x18))();
        }
        local_4c0 = *(undefined8 *)(param_1 + 0x428);
        local_4b8 = *(undefined8 *)(param_1 + 0x430);
        local_4b0 = *(undefined8 *)(param_1 + 0x438);
        local_4a8 = *(long **)(param_1 + 0x440);
        if (local_4a8 != (long *)0x0) {
          (**(code **)(*local_4a8 + 0x18))();
        }
        local_4a0 = *(undefined1 *)(param_1 + 0x4b1);
        local_498 = param_1;
        FUN_01c11438(&local_440,&local_4e0);
        if (local_4a8 != (long *)0x0) {
          (**(code **)(*local_4a8 + 0x20))();
        }
        if (local_4c8 != (long *)0x0) {
          (**(code **)(*local_4c8 + 0x20))();
        }
        uVar8 = *(undefined8 *)(param_1 + 8);
      }
      FUN_01c0fe58(&local_4e0,uVar8);
      plVar13 = local_58;
      local_58 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        lVar12 = plVar13[0xb];
        piVar9 = (int *)(lVar12 + 0xc);
        do {
          iVar7 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))();
        }
      }
      local_58 = local_4e0;
      FUN_01c0fed8(local_4e0,&local_70,&local_490);
      local_570 = &LAB_01c130c4;
      local_568 = FUN_01c13530;
      local_560 = &LAB_01c13534;
      puStack_558 = &LAB_01c13540;
      local_550 = param_1;
      local_548 = iVar6;
      FUN_01c0ff10(&local_4e8,plVar10,0x22,&local_58,&local_570,0);
      pcVar3 = local_568;
      if (local_4e8 != (long *)0x0) {
        lVar12 = local_4e8[0xb];
        piVar9 = (int *)(lVar12 + 0xc);
        do {
          iVar7 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_4e8 + 0x20))();
          pcVar3 = local_568;
          local_568 = (code *)0x0;
        }
      }
      if (pcVar3 != (code *)0x0) {
        local_560 = (undefined1 *)0x0;
        puStack_558 = (undefined1 *)0x0;
        local_570 = (undefined1 *)0x0;
        local_568 = (code *)0x0;
        (*pcVar3)(&local_550);
      }
      if (local_b0 != '\0') {
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x20))();
        }
        local_b0 = '\0';
      }
      pcVar3 = local_3b8;
      if (local_330 != '\0') {
        if (local_180 != '\0') {
          if (local_f0 != '\0') {
            local_f0 = '\0';
          }
          local_180 = '\0';
        }
        if (local_250 != '\0') {
          if (local_1c0 != '\0') {
            local_1c0 = '\0';
          }
          local_250 = '\0';
        }
        if (local_310 != '\0') {
          if (local_290 != '\0') {
            local_290 = '\0';
          }
          local_310 = '\0';
        }
      }
      local_340 = '\0';
      local_330 = '\0';
      bVar2 = local_3b8 != (code *)0x0;
      local_3b8 = (code *)0x0;
      pcVar4 = local_438;
      if (bVar2) {
        local_3b0 = 0;
        uStack_3a8 = 0;
        local_3c0 = 0;
        local_3b8 = (code *)0x0;
        (*pcVar3)(auStack_3a0);
        pcVar4 = local_438;
      }
      local_438 = (code *)0x0;
      if (pcVar4 != (code *)0x0) {
        local_430 = (long *)0x0;
        local_428 = 0;
        local_440 = 0;
        local_438 = (code *)0x0;
        (*pcVar4)(&local_420);
      }
      if (local_478 != (long *)0x0) {
        (**(code **)(*local_478 + 0x20))();
      }
      puVar5 = local_68;
      if (local_68 != (undefined8 *)0x0) {
        piVar9 = (int *)(local_68 + 1);
        do {
          iVar7 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar7 + -1 == 0) {
          local_68[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_490 = (long *)*puVar5;
          FUN_02a44274(lVar12 + 0xd8,&local_490);
        }
      }
      if (local_58 != (long *)0x0) {
        lVar12 = local_58[0xb];
        piVar9 = (int *)(lVar12 + 0xc);
        do {
          iVar7 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
      lVar12 = plVar10[0xb];
      piVar9 = (int *)(lVar12 + 0xc);
      do {
        iVar7 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
    }
  }
  return;
}


