/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00923de8; name: FUN_00923de8
 */


void FUN_00923de8(undefined8 *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [24];
  
  FUN_02bcbe58(auStack_58,0);
  plVar7 = *(long **)(param_2 + 0x1020);
  if (plVar7 == (long *)0x0) {
LAB_00923e38:
    plVar7 = *(long **)(param_2 + 0x1018);
    if (plVar7 == (long *)0x0) goto LAB_00923e5c;
LAB_00923e40:
    lVar9 = plVar7[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 != 0) goto LAB_00923e5c;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar7 + 0x20))();
    plVar7 = *(long **)(param_2 + 0x1010);
    if (plVar7 != (long *)0x0) goto LAB_00923e64;
LAB_00923e7c:
    plVar7 = *(long **)(param_2 + 0x1008);
    if (plVar7 == (long *)0x0) goto LAB_00923e9c;
LAB_00923e84:
    plVar2 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 != 0) goto LAB_00923e9c;
    (**(code **)(*plVar7 + 0x10))();
    plVar7 = *(long **)(param_2 + 0x1000);
    if (plVar7 != (long *)0x0) goto LAB_00923ea4;
LAB_00923ebc:
    plVar7 = *(long **)(param_2 + 0xff8);
    if (plVar7 == (long *)0x0) goto LAB_00923edc;
LAB_00923ec4:
    plVar2 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 != 0) goto LAB_00923edc;
    (**(code **)(*plVar7 + 0x10))();
    plVar7 = *(long **)(param_2 + 0xff0);
    if (plVar7 != (long *)0x0) goto LAB_00923ee4;
LAB_00923efc:
    plVar7 = *(long **)(param_2 + 0xd0);
    if (plVar7 == (long *)0x0) goto LAB_00923f1c;
LAB_00923f04:
    plVar2 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 != 0) goto LAB_00923f1c;
    (**(code **)(*plVar7 + 0x10))();
    plVar7 = *(long **)(param_2 + 200);
    if (plVar7 != (long *)0x0) goto LAB_00923f24;
LAB_00923f3c:
    plVar7 = *(long **)(param_2 + 0xc0);
    if (plVar7 == (long *)0x0) goto LAB_00923f5c;
LAB_00923f44:
    plVar2 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 != 0) goto LAB_00923f5c;
    (**(code **)(*plVar7 + 0x10))();
    plVar7 = *(long **)(param_2 + 0xb8);
    if (plVar7 != (long *)0x0) goto LAB_00923f64;
LAB_00923f7c:
    plVar7 = *(long **)(param_2 + 0xb0);
    if (plVar7 == (long *)0x0) goto LAB_00923f9c;
LAB_00923f84:
    plVar2 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 != 0) goto LAB_00923f9c;
    (**(code **)(*plVar7 + 0x10))();
    plVar7 = *(long **)(param_2 + 0x98);
    if (plVar7 != (long *)0x0) goto LAB_00923fa4;
LAB_00923fbc:
    plVar7 = *(long **)(param_2 + 0x88);
    if (plVar7 == (long *)0x0) goto LAB_00923fdc;
LAB_00923fc4:
    plVar2 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 != 0) goto LAB_00923fdc;
    (**(code **)(*plVar7 + 0x10))();
    plVar7 = *(long **)(param_2 + 0x78);
    if (plVar7 != (long *)0x0) goto LAB_00923fe4;
LAB_00923ffc:
    plVar7 = *(long **)(param_2 + 0x68);
    if (plVar7 == (long *)0x0) goto LAB_0092401c;
LAB_00924004:
    plVar2 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 != 0) goto LAB_0092401c;
    (**(code **)(*plVar7 + 0x10))();
    plVar7 = *(long **)(param_2 + 0x58);
  }
  else {
    lVar9 = plVar7[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 != 0) goto LAB_00923e38;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar7 + 0x20))();
    plVar7 = *(long **)(param_2 + 0x1018);
    if (plVar7 != (long *)0x0) goto LAB_00923e40;
LAB_00923e5c:
    plVar7 = *(long **)(param_2 + 0x1010);
    if (plVar7 == (long *)0x0) goto LAB_00923e7c;
LAB_00923e64:
    plVar2 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 != 0) goto LAB_00923e7c;
    (**(code **)(*plVar7 + 0x10))();
    plVar7 = *(long **)(param_2 + 0x1008);
    if (plVar7 != (long *)0x0) goto LAB_00923e84;
LAB_00923e9c:
    plVar7 = *(long **)(param_2 + 0x1000);
    if (plVar7 == (long *)0x0) goto LAB_00923ebc;
LAB_00923ea4:
    plVar2 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 != 0) goto LAB_00923ebc;
    (**(code **)(*plVar7 + 0x10))();
    plVar7 = *(long **)(param_2 + 0xff8);
    if (plVar7 != (long *)0x0) goto LAB_00923ec4;
LAB_00923edc:
    plVar7 = *(long **)(param_2 + 0xff0);
    if (plVar7 == (long *)0x0) goto LAB_00923efc;
LAB_00923ee4:
    plVar2 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 != 0) goto LAB_00923efc;
    (**(code **)(*plVar7 + 0x10))();
    plVar7 = *(long **)(param_2 + 0xd0);
    if (plVar7 != (long *)0x0) goto LAB_00923f04;
LAB_00923f1c:
    plVar7 = *(long **)(param_2 + 200);
    if (plVar7 == (long *)0x0) goto LAB_00923f3c;
LAB_00923f24:
    plVar2 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 != 0) goto LAB_00923f3c;
    (**(code **)(*plVar7 + 0x10))();
    plVar7 = *(long **)(param_2 + 0xc0);
    if (plVar7 != (long *)0x0) goto LAB_00923f44;
LAB_00923f5c:
    plVar7 = *(long **)(param_2 + 0xb8);
    if (plVar7 == (long *)0x0) goto LAB_00923f7c;
LAB_00923f64:
    plVar2 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 != 0) goto LAB_00923f7c;
    (**(code **)(*plVar7 + 0x10))();
    plVar7 = *(long **)(param_2 + 0xb0);
    if (plVar7 != (long *)0x0) goto LAB_00923f84;
LAB_00923f9c:
    plVar7 = *(long **)(param_2 + 0x98);
    if (plVar7 == (long *)0x0) goto LAB_00923fbc;
LAB_00923fa4:
    plVar2 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 != 0) goto LAB_00923fbc;
    (**(code **)(*plVar7 + 0x10))();
    plVar7 = *(long **)(param_2 + 0x88);
    if (plVar7 != (long *)0x0) goto LAB_00923fc4;
LAB_00923fdc:
    plVar7 = *(long **)(param_2 + 0x78);
    if (plVar7 == (long *)0x0) goto LAB_00923ffc;
LAB_00923fe4:
    plVar2 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 != 0) goto LAB_00923ffc;
    (**(code **)(*plVar7 + 0x10))();
    plVar7 = *(long **)(param_2 + 0x68);
    if (plVar7 != (long *)0x0) goto LAB_00924004;
LAB_0092401c:
    plVar7 = *(long **)(param_2 + 0x58);
  }
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = (long *)*param_1;
  uVar4 = param_1[1];
  uVar10 = param_1[2];
  uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  lVar9 = tpidr_el0;
  if ((uVar8 & 1) != 0) {
    if (*(char *)(lVar9 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar9 + 0x38d488) = 1;
      *(undefined8 *)(lVar9 + 0x38d478) = 0;
      *(undefined8 *)(lVar9 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar9 + 0x38d480)) {
      FUN_02bcc824(plVar7,param_2,uVar4,uVar10);
      goto LAB_009240b8;
    }
  }
  (**(code **)(*plVar7 + 0x18))(plVar7,param_2,uVar4,uVar10);
LAB_009240b8:
  if (*(char *)(lVar9 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar9 + 0x38d488) = 1;
    *(undefined8 *)(lVar9 + 0x38d478) = 0;
    *(undefined8 *)(lVar9 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar3 = *(int *)(lVar9 + 0x38d480) + -1;
  *(int *)(lVar9 + 0x38d480) = iVar3;
  if (iVar3 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar9 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar9 + 0x38d488) = 1;
      *(undefined8 *)(lVar9 + 0x38d478) = 0;
      *(undefined8 *)(lVar9 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar9 + 0x38d484) = 0;
  }
  return;
}


