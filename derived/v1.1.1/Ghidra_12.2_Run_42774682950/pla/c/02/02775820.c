/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02775820; name: FUN_02775820
 */


void FUN_02775820(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 *param_5)

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
  undefined8 *local_140;
  undefined8 uStack_138;
  long *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 *local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [104];
  undefined4 local_88 [2];
  undefined8 local_80;
  long *local_78;
  undefined1 auStack_70 [24];
  long *local_58;
  long *local_48;
  
  FUN_013b1c3c(&local_110,param_2);
  if (local_110 == (undefined8 *)0x0) {
    local_48 = (long *)0x0;
  }
  else {
    FUN_013b20c8(&local_48);
    if (local_110 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_110 + 1);
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
        local_110[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_130 = (long *)*local_110;
        FUN_02a44274(lVar9 + 0xd8,&local_130);
      }
    }
  }
  FUN_00ae29ec(&local_78,param_3);
  FUN_02a47560(auStack_70,&local_78);
  plVar6 = local_48;
  local_88[0] = 0;
  local_80 = 0x2000;
  local_130 = local_48;
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
  local_128 = *param_4;
  local_120 = *(undefined8 *)(param_4 + 2);
  local_118 = *param_5;
  local_108 = (code *)0x0;
  local_100 = 0;
  local_f8 = 0;
  local_110 = (undefined8 *)0x0;
  FUN_02775c18(&local_110,&local_130);
  FUN_013b1d1c(param_1,auStack_70,local_88,&local_110);
  pcVar5 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = 0;
    local_f8 = 0;
    local_110 = (undefined8 *)0x0;
    local_108 = (code *)0x0;
    (*pcVar5)(auStack_f0);
  }
  if (plVar6 != (long *)0x0) {
    lVar9 = plVar6[0xb];
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
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  uVar8 = *param_1;
  FUN_013b1c3c(&local_110,param_2);
  local_140 = (undefined8 *)0x0;
  uStack_138 = 0;
  FUN_013b8954(&local_140,&local_110);
  FUN_013b1d7c(uVar8,&local_140);
  puVar4 = local_140;
  if (local_140 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_140 + 1);
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
      local_140[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_130 = (long *)*puVar4;
      FUN_02a44274(lVar9 + 0xd8,&local_130);
    }
  }
  puVar4 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_110 + 1);
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
      local_110[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_130 = (long *)*puVar4;
      FUN_02a44274(lVar9 + 0xd8,&local_130);
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


