/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0137a998; name: FUN_0137a998
 */


void FUN_0137a998(long param_1,ulong param_2,ulong param_3,uint param_4,uint param_5,uint param_6)

{
  char cVar1;
  bool bVar2;
  undefined2 uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined1 *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  local_80 = &DAT_e2c06acab97c29c2;
  pcStack_78 = "CommonOptionBar";
  local_70 = 0xf;
  local_68 = (long *)0x0;
  lVar4 = FUN_00d6adf4(param_1 + 0x180,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  lVar8 = *(long *)(lVar4 + 0x498);
  *(undefined4 *)(lVar4 + 0x490) = 0xd;
  if (*(char *)(lVar8 + 0x7c) != '\0') {
    **(undefined2 **)(lVar8 + 0x58) = 0;
    *(undefined2 *)(lVar8 + 0x7a) = 0;
  }
  lVar8 = *(long *)(lVar4 + 0x4c8);
  *(undefined4 *)(lVar4 + 0x4c0) = 0xd;
  if (*(char *)(lVar8 + 0x7c) != '\0') {
    **(undefined2 **)(lVar8 + 0x58) = 0;
    *(undefined2 *)(lVar8 + 0x7a) = 0;
  }
  lVar8 = *(long *)(lVar4 + 0x4f8);
  *(undefined4 *)(lVar4 + 0x4f0) = 0xd;
  if (*(char *)(lVar8 + 0x7c) != '\0') {
    **(undefined2 **)(lVar8 + 0x58) = 0;
    *(undefined2 *)(lVar8 + 0x7a) = 0;
  }
  lVar8 = *(long *)(lVar4 + 0x528);
  *(undefined4 *)(lVar4 + 0x520) = 0xd;
  if (*(char *)(lVar8 + 0x7c) != '\0') {
    **(undefined2 **)(lVar8 + 0x58) = 0;
    *(undefined2 *)(lVar8 + 0x7a) = 0;
  }
  *(undefined4 *)(lVar4 + 0x550) = 0xd;
  lVar8 = *(long *)(lVar4 + 0x558);
  if (*(char *)(lVar8 + 0x7c) != '\0') {
    **(undefined2 **)(lVar8 + 0x58) = 0;
    *(undefined2 *)(lVar8 + 0x7a) = 0;
  }
  plVar9 = *(long **)(param_1 + 0x21a0);
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar8 = *(long *)(lVar4 + 0x498);
  iVar6 = 1;
  *(undefined4 *)(lVar4 + 0x490) = 1;
  if (*(char *)(lVar8 + 0x7c) == '\0') {
LAB_0137ab00:
    lVar8 = (long)iVar6;
    *(undefined8 *)(lVar4 + 0x4a0) = (&DAT_043eb278)[lVar8 * 6];
    *(undefined8 *)(lVar4 + 0x4a8) = (&DAT_043eb280)[lVar8 * 6];
    *(undefined8 *)(lVar4 + 0x4b0) = (&DAT_043eb288)[lVar8 * 6];
    plVar10 = (long *)(&DAT_043eb290)[lVar8 * 6];
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    plVar5 = *(long **)(lVar4 + 0x4b8);
    *(long **)(lVar4 + 0x4b8) = plVar10;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  else {
    uVar3 = FUN_02c30580(*(undefined8 *)(lVar8 + 0x58),plVar9[0xb],*(undefined2 *)(lVar8 + 0x78));
    *(undefined2 *)(lVar8 + 0x7a) = uVar3;
    iVar6 = *(int *)(lVar4 + 0x490);
    if (iVar6 < 0xd) goto LAB_0137ab00;
  }
  if (plVar9 == (long *)0x0) {
LAB_0137ab5c:
    plVar9 = *(long **)(param_1 + 0x21a8);
  }
  else {
    plVar10 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *(int *)plVar10 = iVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar6 != 0) goto LAB_0137ab5c;
    (**(code **)(*plVar9 + 0x10))(plVar9);
    plVar9 = *(long **)(param_1 + 0x21a8);
  }
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar8 = *(long *)(lVar4 + 0x4c8);
  iVar6 = 3;
  *(undefined4 *)(lVar4 + 0x4c0) = 3;
  if (*(char *)(lVar8 + 0x7c) == '\0') {
LAB_0137abac:
    lVar8 = (long)iVar6;
    *(undefined8 *)(lVar4 + 0x4d0) = (&DAT_043eb278)[lVar8 * 6];
    *(undefined8 *)(lVar4 + 0x4d8) = (&DAT_043eb280)[lVar8 * 6];
    *(undefined8 *)(lVar4 + 0x4e0) = (&DAT_043eb288)[lVar8 * 6];
    plVar10 = (long *)(&DAT_043eb290)[lVar8 * 6];
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    plVar5 = *(long **)(lVar4 + 0x4e8);
    *(long **)(lVar4 + 0x4e8) = plVar10;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  else {
    uVar3 = FUN_02c30580(*(undefined8 *)(lVar8 + 0x58),plVar9[0xb],*(undefined2 *)(lVar8 + 0x78));
    *(undefined2 *)(lVar8 + 0x7a) = uVar3;
    iVar6 = *(int *)(lVar4 + 0x4c0);
    if (iVar6 < 0xd) goto LAB_0137abac;
  }
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *(int *)plVar10 = iVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  if (((((param_2 & 1) == 0) || ((param_3 & 1) == 0)) || ((param_4 & 1) != 0)) ||
     ((param_5 & param_6 & 1) != 0)) goto LAB_0137acc8;
  if ((param_6 & 1) == 0) {
    plVar9 = *(long **)(param_1 + 0x21b0);
    if (plVar9 != (long *)0x0) {
      plVar10 = plVar9 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *(int *)plVar10 = (int)*plVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lVar8 = *(long *)(lVar4 + 0x4f8);
    *(undefined4 *)(lVar4 + 0x4f0) = 0;
    uVar7 = (uint)*(byte *)(lVar8 + 0x7c);
    if (*(byte *)(lVar8 + 0x7c) == 0) {
LAB_0137ac6c:
      lVar8 = (long)(int)uVar7;
      *(undefined8 *)(lVar4 + 0x500) = (&DAT_043eb278)[lVar8 * 6];
      *(undefined8 *)(lVar4 + 0x508) = (&DAT_043eb280)[lVar8 * 6];
      *(undefined8 *)(lVar4 + 0x510) = (&DAT_043eb288)[lVar8 * 6];
      plVar10 = (long *)(&DAT_043eb290)[lVar8 * 6];
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      plVar5 = *(long **)(lVar4 + 0x518);
      *(long **)(lVar4 + 0x518) = plVar10;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
    }
    else {
      uVar3 = FUN_02c30580(*(undefined8 *)(lVar8 + 0x58),plVar9[0xb],*(undefined2 *)(lVar8 + 0x78));
      *(undefined2 *)(lVar8 + 0x7a) = uVar3;
      uVar7 = *(uint *)(lVar4 + 0x4f0);
      if ((int)uVar7 < 0xd) goto LAB_0137ac6c;
    }
    if (plVar9 == (long *)0x0) goto LAB_0137acc8;
    plVar10 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *(int *)plVar10 = iVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    plVar9 = *(long **)(param_1 + 0x21b8);
    if (plVar9 != (long *)0x0) {
      plVar10 = plVar9 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *(int *)plVar10 = (int)*plVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lVar8 = *(long *)(lVar4 + 0x4f8);
    *(undefined4 *)(lVar4 + 0x4f0) = 0;
    uVar7 = (uint)*(byte *)(lVar8 + 0x7c);
    if (*(byte *)(lVar8 + 0x7c) == 0) {
LAB_0137ad40:
      lVar8 = (long)(int)uVar7;
      *(undefined8 *)(lVar4 + 0x500) = (&DAT_043eb278)[lVar8 * 6];
      *(undefined8 *)(lVar4 + 0x508) = (&DAT_043eb280)[lVar8 * 6];
      *(undefined8 *)(lVar4 + 0x510) = (&DAT_043eb288)[lVar8 * 6];
      plVar10 = (long *)(&DAT_043eb290)[lVar8 * 6];
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      plVar5 = *(long **)(lVar4 + 0x518);
      *(long **)(lVar4 + 0x518) = plVar10;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
    }
    else {
      uVar3 = FUN_02c30580(*(undefined8 *)(lVar8 + 0x58),plVar9[0xb],*(undefined2 *)(lVar8 + 0x78));
      *(undefined2 *)(lVar8 + 0x7a) = uVar3;
      uVar7 = *(uint *)(lVar4 + 0x4f0);
      if ((int)uVar7 < 0xd) goto LAB_0137ad40;
    }
    if (plVar9 == (long *)0x0) goto LAB_0137acc8;
    plVar10 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *(int *)plVar10 = iVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (iVar6 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_0137acc8:
  FUN_02814a44(lVar4,1);
  return;
}


