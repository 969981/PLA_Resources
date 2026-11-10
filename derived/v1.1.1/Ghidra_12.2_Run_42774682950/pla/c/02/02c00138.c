/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c00138; name: FUN_02c00138
 */


void FUN_02c00138(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  
  plVar5 = *(long **)(param_1 + 0x278);
  *(undefined8 *)(param_1 + 0x278) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  plVar5 = *(long **)(param_1 + 0x250);
  *(undefined8 *)(param_1 + 0x250) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  plVar5 = *(long **)(param_1 + 600);
  *(undefined8 *)(param_1 + 600) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  plVar5 = *(long **)(param_1 + 0x260);
  *(undefined8 *)(param_1 + 0x260) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  plVar5 = *(long **)(param_1 + 0x268);
  *(undefined8 *)(param_1 + 0x268) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  plVar5 = *(long **)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x270) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  lVar7 = *(long *)(param_1 + 0x50);
  lVar6 = (ulong)*(byte *)(lVar7 + 0x20d) * 8;
  lVar9 = *(long *)(lVar7 + lVar6 + 0x18);
  piVar1 = (int *)(lVar9 + 0x308);
  iVar2 = *piVar1;
  do {
    if (iVar2 != 1) {
      pcVar8 = *(code **)(lVar9 + 0x398);
      if (pcVar8 != (code *)0x0) {
        *(undefined8 *)(lVar9 + 0x3a0) = 0;
        *(undefined8 *)(lVar9 + 0x3a8) = 0;
        *(undefined8 *)(lVar9 + 0x390) = 0;
        *(undefined8 *)(lVar9 + 0x398) = 0;
        (*pcVar8)(lVar9 + 0x3b0);
      }
      *(long *)(lVar9 + 0x3b0) = param_1;
      *(undefined1 **)(lVar9 + 0x390) = &LAB_02c05b9c;
      *(code **)(lVar9 + 0x398) = FUN_02c05de8;
      *(undefined1 **)(lVar9 + 0x3a0) = &LAB_02c05dec;
      *(undefined1 **)(lVar9 + 0x3a8) = &LAB_02c05df8;
      *piVar1 = 1;
    }
    lVar9 = *(long *)(lVar7 + 0x20 + lVar6);
    lVar6 = lVar6 + 8;
    piVar1 = (int *)(lVar9 + 0x308);
    iVar2 = *piVar1;
  } while (lVar6 != 0x10);
  if (iVar2 != 1) {
    pcVar8 = *(code **)(lVar9 + 0x398);
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(lVar9 + 0x3a0) = 0;
      *(undefined8 *)(lVar9 + 0x3a8) = 0;
      *(undefined8 *)(lVar9 + 0x390) = 0;
      *(undefined8 *)(lVar9 + 0x398) = 0;
      (*pcVar8)(lVar9 + 0x3b0);
    }
    *(long *)(lVar9 + 0x3b0) = param_1;
    *(undefined1 **)(lVar9 + 0x390) = &LAB_02c05b9c;
    *(code **)(lVar9 + 0x398) = FUN_02c05de8;
    *(undefined1 **)(lVar9 + 0x3a0) = &LAB_02c05dec;
    *(undefined1 **)(lVar9 + 0x3a8) = &LAB_02c05df8;
    *(undefined4 *)(lVar9 + 0x308) = 1;
  }
  return;
}


