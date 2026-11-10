/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b8a90; name: FUN_008b8a90
 */


void FUN_008b8a90(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = *(long **)(**(long **)(param_1 + 0x70) + 0x30);
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = (long *)plVar6[0x1f];
  if (plVar7 == (long *)0x0) {
    piVar5 = (int *)FUN_009696f0(0);
  }
  else {
    plVar1 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    piVar5 = (int *)FUN_009696f0(plVar7);
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  plVar7 = plVar6 + 10;
  do {
    iVar4 = (int)*plVar7 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *(int *)plVar7 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  iVar4 = *piVar5;
  if (iVar4 == 1) {
    FUN_00927320(*(undefined8 *)(**(long **)(param_1 + 0x70) + 0xf0),
                 (uint)*(uint3 *)(piVar5 + 1) | piVar5[2] << 0x18);
    return;
  }
  if (iVar4 == 2) {
    if ((char)piVar5[3] != '\x1f') {
      FUN_00927310(*(undefined8 *)(**(long **)(param_1 + 0x70) + 0xf0));
      return;
    }
  }
  else if (iVar4 == 3) {
    FUN_008b80a4(param_1,0);
    return;
  }
  return;
}


