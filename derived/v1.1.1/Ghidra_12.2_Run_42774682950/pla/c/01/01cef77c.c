/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cef77c; name: FUN_01cef77c
 */


long * FUN_01cef77c(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  
  plVar7 = (long *)FUN_01cef964(&local_28);
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[0xb];
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
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar2 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 9;
  }
  (**(code **)(*plVar2 + 0xb8))(plVar2,param_1);
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_009ad580(&local_40,param_1 + 0x318);
  (**(code **)(*plVar2 + 0xc0))(plVar2,&local_40);
  puVar5 = local_40;
  if (local_40 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_40 + 1);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      local_40[2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar6 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_28 = *puVar5;
      FUN_02a44274(lVar9 + 0xd8,&local_28);
    }
  }
  (**(code **)(*plVar2 + 200))(plVar2,*(undefined1 *)(param_1 + 0x33b));
  (**(code **)(*plVar2 + 0x90))(plVar2);
  local_48 = plVar7;
  FUN_02a4dad4(param_1 + 0xf0,&local_48);
  if (local_48 != (long *)0x0) {
    lVar9 = local_48[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  return plVar7;
}


