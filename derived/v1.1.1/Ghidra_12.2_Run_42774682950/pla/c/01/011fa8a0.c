/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011fa8a0; name: FUN_011fa8a0
 */


void FUN_011fa8a0(long param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  plVar9 = (long *)(param_1 + 0x88);
  plVar6 = (long *)*plVar9;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plVar6 == (long *)0x0) {
LAB_011fa8ec:
    *plVar9 = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    if (param_2 != 0) goto LAB_011fa8f4;
LAB_011fa9f0:
    *(undefined4 *)(param_1 + 0x78) = 2;
  }
  else {
    plVar7 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_011fa8ec;
    (**(code **)(*plVar6 + 0x10))();
    *plVar9 = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    if (param_2 == 0) goto LAB_011fa9f0;
LAB_011fa8f4:
    if (param_2 != 1) {
      *(undefined1 *)(param_1 + 0x90) = 1;
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x158);
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(bool *)(param_1 + 0x91) = param_2 == 3;
      goto LAB_011fa9fc;
    }
    *(undefined4 *)(param_1 + 0x78) = 1;
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar8 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar8;
    plVar6 = *(long **)(lVar8 + 0xd0);
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar8 = plVar6[0xb];
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
    plVar7 = (long *)*plVar9;
    *plVar9 = 0;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 10;
      do {
        iVar5 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    plVar7 = plVar6 + 10;
    *plVar9 = lVar8;
    do {
      iVar5 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  *(undefined4 *)(param_1 + 0x94) = param_3;
LAB_011fa9fc:
  *(undefined1 *)(param_1 + 0x71) = 1;
  return;
}


