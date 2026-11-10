/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02759218; name: FUN_02759218
 */


void FUN_02759218(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 long param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *local_150;
  undefined8 uStack_148;
  long *local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  long *local_108;
  undefined8 *local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [96];
  undefined4 local_80 [2];
  undefined8 local_78;
  long *local_70;
  long local_68;
  long lStack_60;
  long local_58;
  long *local_50;
  long *local_48;
  
  FUN_013b1c3c(&local_100,param_2);
  if (local_100 == (undefined8 *)0x0) {
    local_48 = (long *)0x0;
  }
  else {
    FUN_013b20c8(&local_48);
    if (local_100 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_100 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
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
  plVar6 = local_70;
  if (local_70 == (long *)0x0) {
    local_68 = *(long *)PTR_DAT_04379c88;
  }
  else {
    local_68 = local_70[0xb];
    if (local_70 != (long *)0x0) {
      lStack_60 = local_70[0xc];
      goto joined_r0x02759678;
    }
  }
  lStack_60 = *(long *)PTR_PTR_04379d00;
joined_r0x02759678:
  if (local_70 == (long *)0x0) {
    local_58 = 0;
  }
  else {
    local_58 = local_70[0xd];
  }
  local_50 = (long *)0x0;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x18))(local_70);
  }
  local_78 = 0x2000;
  local_50 = plVar6;
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
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_138 = *param_4;
  local_130 = *(undefined8 *)(param_4 + 2);
  local_120 = *(undefined8 *)(param_5 + 8);
  local_118 = *(undefined8 *)(param_5 + 0x10);
  local_110 = *(undefined8 *)(param_5 + 0x18);
  local_108 = *(long **)(param_5 + 0x20);
  *(undefined8 *)(param_5 + 0x20) = 0;
  local_e8 = 0;
  local_100 = (undefined8 *)0x0;
  local_f8 = (code *)0x0;
  local_f0 = 0;
  FUN_0275969c(&local_100,&local_140);
  FUN_013b1d1c(param_1,&local_68,local_80,&local_100);
  pcVar5 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = 0;
    local_e8 = 0;
    local_100 = (undefined8 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar5)(auStack_e0);
  }
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x20))();
  }
  if (local_140 != (long *)0x0) {
    lVar9 = local_140[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
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
  local_150 = (undefined8 *)0x0;
  uStack_148 = 0;
  FUN_013b8954(&local_150,&local_100);
  FUN_013b1d7c(uVar8,&local_150);
  puVar4 = local_150;
  if (local_150 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_150 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_150[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_140 = (long *)*puVar4;
      FUN_02a44274(lVar9 + 0xd8,&local_140);
    }
  }
  puVar4 = local_100;
  if (local_100 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_100 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_100[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_140 = (long *)*puVar4;
      FUN_02a44274(lVar9 + 0xd8,&local_140);
    }
  }
  if (local_48 != (long *)0x0) {
    lVar9 = local_48[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  return;
}


