/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01135e5c; name: FUN_01135e5c
 */


undefined4 FUN_01135e5c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *local_38;
  
  if ((undefined1 *)*param_2 == (undefined1 *)0xc0ea47549ab5f3d9 ||
      (undefined1 *)*param_2 == &DAT_cbf29ce484222645) {
    uVar7 = 0;
  }
  else {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar6 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar6;
    plVar9 = *(long **)(lVar6 + 0x100);
    if (plVar9 != (long *)0x0) {
      plVar10 = plVar9 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *(int *)plVar10 = (int)*plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar10 = (long *)plVar9[0x20];
    if (plVar10 != (long *)0x0) {
      plVar5 = plVar10 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = (int)*plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar5 = (long *)plVar10[0xe];
    if (plVar5 != (long *)0x0) {
      plVar8 = plVar5 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar8 = (long *)plVar5[0xb];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    plVar5 = plVar10 + 10;
    do {
      iVar4 = (int)*plVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    plVar10 = plVar9 + 10;
    do {
      iVar4 = (int)*plVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    FUN_016a50f0(&local_38,plVar8,param_2,*(undefined8 *)(param_1 + 8));
    if (local_38 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (undefined4)local_38[0x2c];
      plVar9 = local_38 + 10;
      do {
        iVar4 = (int)*plVar9 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 10;
      do {
        iVar4 = (int)*plVar9 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  return uVar7;
}


