/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028f1c28; name: FUN_028f1c28
 */


long FUN_028f1c28(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *local_40 [2];
  long *local_28;
  
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  FUN_028f1f48(local_40,uVar9);
  if (local_40[0] == (undefined8 *)0x0) {
    local_28 = (long *)0x0;
    plVar7 = *(long **)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
LAB_028f1cb4:
    if (plVar7 != (long *)0x0) {
      lVar8 = plVar7[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 1) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
      }
    }
    uVar9 = 0;
  }
  else {
    FUN_028f22e8(&local_28);
    plVar7 = *(long **)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    if (local_28 == (long *)0x0) goto LAB_028f1cb4;
    if (plVar7 != (long *)0x0) {
      lVar8 = plVar7[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
      }
    }
    plVar7 = local_28;
    local_28 = (long *)0x0;
    *(long **)(param_1 + 8) = plVar7;
  }
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  puVar5 = local_40[0];
  if (local_28 != (long *)0x0) {
    lVar8 = local_28[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
      puVar5 = local_40[0];
    }
  }
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
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
      puVar5[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_28 = (long *)*puVar5;
      FUN_02a44274(lVar8 + 0xd8,&local_28);
    }
  }
  lVar8 = *(long *)(param_2 + 0x18);
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar8;
  if (plVar7 == (long *)0x0) {
LAB_028f1d94:
    lVar8 = *(long *)(param_2 + 0x20);
  }
  else {
    plVar2 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 != 0) goto LAB_028f1d94;
    (**(code **)(*plVar7 + 0x10))();
    lVar8 = *(long *)(param_2 + 0x20);
  }
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar8;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
      lVar8 = *(long *)(param_2 + 0x28);
      goto joined_r0x028f1dc4;
    }
  }
  lVar8 = *(long *)(param_2 + 0x28);
joined_r0x028f1dc4:
  if (lVar8 != 0) {
    lVar10 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar8;
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  return param_1;
}


