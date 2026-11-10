/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027ab6ac; name: FUN_027ab6ac
 */


void FUN_027ab6ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *local_150;
  undefined8 uStack_148;
  long *local_140;
  undefined4 local_138;
  undefined8 local_130;
  long *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  long *local_108;
  long *local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [96];
  undefined4 local_80 [2];
  undefined8 local_78;
  long *local_70;
  undefined1 auStack_68 [24];
  long *local_50;
  long *local_48;
  
  FUN_013b1c3c(&local_100,param_2);
  if (local_100 == (long *)0x0) {
    local_48 = (long *)0x0;
  }
  else {
    FUN_013b20c8(&local_48);
    if (local_100 != (long *)0x0) {
      plVar1 = local_100 + 1;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        local_100[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_140 = (long *)*local_100;
        FUN_02a44274(lVar9 + 0xd8,&local_140);
      }
    }
  }
  FUN_00ae29ec(&local_70,param_3);
  FUN_02a47560(auStack_68,&local_70);
  local_78 = 0x2000;
  local_80[0] = 0;
  local_140 = local_48;
  if (local_48 != (long *)0x0) {
    lVar9 = local_48[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_138 = *param_4;
  local_130 = *(undefined8 *)(param_4 + 2);
  local_128 = (long *)*param_5;
  *param_5 = 0;
  local_120 = param_5[1];
  local_118 = param_5[2];
  local_110 = param_5[3];
  local_108 = (long *)param_5[4];
  param_5[4] = 0;
  local_e8 = 0;
  local_100 = (long *)0x0;
  local_f8 = (code *)0x0;
  local_f0 = 0;
  FUN_027abb18(&local_100,&local_140);
  FUN_013b1d1c(param_1,auStack_68,local_80,&local_100);
  pcVar6 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = 0;
    local_e8 = 0;
    local_100 = (long *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar6)(auStack_e0);
  }
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x20))();
  }
  if (local_128 != (long *)0x0) {
    lVar9 = local_128[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_128 + 0x20))();
    }
  }
  if (local_140 != (long *)0x0) {
    lVar9 = local_140[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_140 + 0x20))();
    }
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  uVar8 = *param_1;
  FUN_013b1c3c(&local_100,param_2);
  local_150 = (long *)0x0;
  uStack_148 = 0;
  FUN_013b8954(&local_150,&local_100);
  FUN_013b1d7c(uVar8,&local_150);
  plVar1 = local_150;
  if (local_150 != (long *)0x0) {
    plVar3 = local_150 + 1;
    do {
      iVar7 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      local_150[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_140 = (long *)*plVar1;
      FUN_02a44274(lVar9 + 0xd8,&local_140);
    }
  }
  plVar1 = local_100;
  if (local_100 != (long *)0x0) {
    plVar3 = local_100 + 1;
    do {
      iVar7 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      local_100[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_140 = (long *)*plVar1;
      FUN_02a44274(lVar9 + 0xd8,&local_140);
    }
  }
  if (local_48 != (long *)0x0) {
    lVar9 = local_48[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  return;
}


