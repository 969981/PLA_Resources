/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0143d338; name: FUN_0143d338
 */


void FUN_0143d338(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  if ((long *)param_1[0x17a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17a] + 0x20))();
  }
  if ((long *)param_1[0x175] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x175] + 0x20))();
  }
  if ((long *)param_1[0x171] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x171] + 0x20))();
  }
  if ((long *)param_1[0x16d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16d] + 0x20))();
  }
  if ((long *)param_1[0x169] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x169] + 0x20))();
  }
  plVar5 = (long *)param_1[0x165];
  if (plVar5 != (long *)0x0) {
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
  }
  FUN_011cc710(param_1 + 0x137);
  if ((long *)param_1[0x136] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x136] + 0x20))();
  }
  if ((long *)param_1[0x132] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x132] + 0x20))();
  }
  if ((long *)param_1[0x12d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12d] + 0x20))();
  }
  if ((long *)param_1[0x129] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x129] + 0x20))();
  }
  if ((long *)param_1[0x125] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x125] + 0x20))();
  }
  plVar5 = (long *)param_1[0x121];
  if (plVar5 == (long *)0x0) {
LAB_0143d458:
    plVar5 = (long *)param_1[0x120];
  }
  else {
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
    if (iVar4 != 0) goto LAB_0143d458;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[0x120];
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  if ((long *)param_1[0x11c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x11c] + 0x20))();
  }
  if ((long *)param_1[0x118] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x118] + 0x20))();
  }
  if ((long *)param_1[0x114] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x114] + 0x20))();
  }
  if ((long *)param_1[0x110] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x110] + 0x20))();
  }
  if ((long *)param_1[0x10c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10c] + 0x20))();
  }
  plVar5 = (long *)param_1[0x108];
  if (plVar5 == (long *)0x0) {
LAB_0143d4f0:
    plVar5 = (long *)param_1[0x106];
  }
  else {
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
    if (iVar4 != 0) goto LAB_0143d4f0;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[0x106];
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  if ((long *)param_1[0x102] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x102] + 0x20))();
  }
  if ((long *)param_1[0xfe] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xfe] + 0x20))();
  }
  if ((long *)param_1[0xfa] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xfa] + 0x20))();
  }
  plVar5 = (long *)param_1[0xf6];
  if (plVar5 == (long *)0x0) {
LAB_0143d560:
    plVar5 = (long *)param_1[0xf4];
  }
  else {
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
    if (iVar4 != 0) goto LAB_0143d560;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[0xf4];
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  if ((long *)param_1[0xf0] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf0] + 0x20))();
  }
  if ((long *)param_1[0xec] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xec] + 0x20))();
  }
  if ((long *)param_1[0xe8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xe8] + 0x20))();
  }
  plVar5 = (long *)param_1[0xe4];
  if (plVar5 == (long *)0x0) {
LAB_0143d5d0:
    plVar5 = (long *)param_1[0xe2];
  }
  else {
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
    if (iVar4 != 0) goto LAB_0143d5d0;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[0xe2];
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  if ((long *)param_1[0xde] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xde] + 0x20))();
  }
  if ((long *)param_1[0xda] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xda] + 0x20))();
  }
  if ((long *)param_1[0xd6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xd6] + 0x20))();
  }
  plVar5 = (long *)param_1[0xd2];
  if (plVar5 != (long *)0x0) {
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
      plVar5 = (long *)param_1[0xd0];
      goto joined_r0x0143d644;
    }
  }
  plVar5 = (long *)param_1[0xd0];
joined_r0x0143d644:
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  if ((long *)param_1[0xcc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xcc] + 0x20))();
  }
  if ((long *)param_1[200] != (long *)0x0) {
    (**(code **)(*(long *)param_1[200] + 0x20))();
  }
  if ((long *)param_1[0xc4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc4] + 0x20))();
  }
  plVar5 = (long *)param_1[0xc0];
  if (plVar5 != (long *)0x0) {
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
  }
  FUN_011cc710(param_1 + 0x92);
  if ((long *)param_1[0x91] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x91] + 0x20))();
  }
  if ((long *)param_1[0x8d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8d] + 0x20))();
  }
  if ((long *)param_1[0x89] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x89] + 0x20))();
  }
  if ((long *)param_1[0x85] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x85] + 0x20))();
  }
  if ((long *)param_1[0x81] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x81] + 0x20))();
  }
  if ((long *)param_1[0x7d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x7d] + 0x20))();
  }
  if ((long *)param_1[0x79] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x79] + 0x20))();
  }
  if ((long *)param_1[0x75] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x75] + 0x20))();
  }
  if ((long *)param_1[0x71] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x71] + 0x20))();
  }
  if ((long *)param_1[0x6d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x6d] + 0x20))();
  }
  if ((long *)param_1[0x69] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x69] + 0x20))();
  }
  if ((long *)param_1[0x65] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x65] + 0x20))();
  }
  if ((long *)param_1[0x61] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x61] + 0x20))();
  }
  if ((long *)param_1[0x5d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x5d] + 0x20))();
  }
  if ((long *)param_1[0x59] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x59] + 0x20))();
  }
  if ((long *)param_1[0x55] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x55] + 0x20))();
  }
  if ((long *)param_1[0x51] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x51] + 0x20))();
  }
  if ((long *)param_1[0x4c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4c] + 0x20))();
  }
  if ((long *)param_1[0x48] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x48] + 0x20))();
  }
  if ((long *)param_1[0x43] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x43] + 0x20))();
  }
  if ((long *)param_1[0x3f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3f] + 0x20))();
  }
  if ((long *)param_1[0x3b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3b] + 0x20))();
  }
  if ((long *)param_1[0x37] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x37] + 0x20))();
  }
  if ((long *)param_1[0x33] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x33] + 0x20))();
  }
  if ((long *)param_1[0x2f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2f] + 0x20))();
  }
  if ((long *)param_1[0x2a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2a] + 0x20))();
  }
  if ((long *)param_1[0x25] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x25] + 0x20))();
  }
  if ((long *)param_1[0x21] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x21] + 0x20))();
  }
  if ((long *)param_1[0x1c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1c] + 0x20))();
  }
  if ((long *)param_1[0x16] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16] + 0x20))();
  }
  if ((long *)param_1[0x11] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x11] + 0x20))();
  }
  if ((long *)param_1[0xd] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xd] + 0x20))();
  }
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 0x20))();
  }
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 0x20))();
  }
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    plVar5 = param_1 + 10;
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
                    /* WARNING: Could not recover jumptable at 0x0143da34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}


