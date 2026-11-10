/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027c7754; name: FUN_027c7754
 */


void FUN_027c7754(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *local_110 [2];
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [96];
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *local_48;
  long *local_38;
  
  FUN_013b1c3c(&local_f0,param_2);
  if (local_f0 == (undefined8 *)0x0) {
    local_38 = (long *)0x0;
  }
  else {
    FUN_013b20c8(&local_38);
    if (local_f0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_f0 + 1);
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
        local_f0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_110[0] = (long *)*local_f0;
        FUN_02a44274(lVar8 + 0xd8,local_110);
      }
    }
  }
  local_60 = *param_3;
  local_58 = param_3[1];
  local_50 = param_3[2];
  local_48 = (long *)param_3[3];
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  plVar5 = local_38;
  local_70[0] = 0;
  local_68 = 0x2000;
  local_110[0] = local_38;
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_100 = *param_4;
  local_f8 = *(undefined8 *)(param_4 + 2);
  local_d8 = 0;
  local_f0 = (undefined8 *)0x0;
  local_e8 = (code *)0x0;
  local_e0 = 0;
  FUN_027c79d0(&local_f0,local_110);
  FUN_013b1d1c(param_1,&local_60,local_70,&local_f0);
  pcVar4 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = (undefined8 *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar4)(auStack_d0);
  }
  if (plVar5 != (long *)0x0) {
    lVar8 = plVar5[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


