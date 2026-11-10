/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c1e4b4; name: FUN_01c1e4b4
 */


void FUN_01c1e4b4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *local_50;
  undefined8 uStack_48;
  long *local_40;
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x200) == 0) {
    local_40 = (long *)0x0;
  }
  else {
    FUN_00b907c8(&local_40);
  }
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379690), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar8 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar8;
  plVar9 = *(long **)(*(long *)(lVar8 + 0x50) + 0x38);
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
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
  if (local_40 == (long *)0x0) {
    if (plVar9 == (long *)0x0) {
      return;
    }
  }
  else {
    if (plVar9 == (long *)0x0) goto LAB_01c1e574;
    if ((char)local_40[0xc3] != '\0') {
      (**(code **)(*local_40 + 0x18))(local_38);
      local_50 = (undefined8 *)0x0;
      uStack_48 = 0;
      FUN_009cc414(&local_50,local_38);
      puVar4 = local_38[0];
      if (local_38[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_38[0] + 1);
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
          local_38[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_28 = *puVar4;
          FUN_02a44274(lVar8 + 0xd8,&local_28);
        }
      }
      bVar5 = FUN_014375dc(plVar9,&local_50);
      puVar4 = local_50;
      if (local_50 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_50 + 1);
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
          local_50[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_38[0] = (undefined8 *)*puVar4;
          FUN_02a44274(lVar8 + 0xd8,local_38);
        }
      }
      *(byte *)(local_40 + 0xc3) = ~bVar5 & 1;
    }
  }
  lVar8 = plVar9[0xb];
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
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (local_40 == (long *)0x0) {
    return;
  }
LAB_01c1e574:
  lVar8 = local_40[0xb];
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
    (**(code **)(*local_40 + 0x20))();
  }
  return;
}


