/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01441860; name: FUN_01441860
 */


void FUN_01441860(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long *local_28;
  
  lVar8 = *param_2;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar8;
  if (plVar6 != (long *)0x0) {
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
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x60) = param_2[1];
  *(long *)(param_1 + 0x68) = param_2[2];
  *(long *)(param_1 + 0x70) = param_2[3];
  plVar6 = (long *)param_2[4];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = *(long **)(param_1 + 0x78);
  *(long **)(param_1 + 0x78) = plVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(long *)(param_1 + 0x80) = param_2[5];
  *(long *)(param_1 + 0x88) = param_2[6];
  *(long *)(param_1 + 0x90) = param_2[7];
  plVar6 = (long *)param_2[8];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = *(long **)(param_1 + 0x98);
  *(long **)(param_1 + 0x98) = plVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(long *)(param_1 + 0xa0) = param_2[9];
  *(long *)(param_1 + 0xa8) = param_2[10];
  *(long *)(param_1 + 0xb0) = param_2[0xb];
  plVar6 = (long *)param_2[0xc];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = *(long **)(param_1 + 0xb8);
  *(long **)(param_1 + 0xb8) = plVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  if (**(char **)(param_1 + 0x68) != '\0') {
    FUN_014417ec(&local_28,param_1 + 0x60,param_1 + 0xa0);
    FUN_02a47560(&local_50,&local_28);
    *(undefined8 *)(param_1 + 200) = local_50;
    *(undefined8 *)(param_1 + 0xd0) = local_48;
    plVar6 = *(long **)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xd8) = local_40;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
    }
    uVar5 = local_38;
    local_38 = 0;
    *(undefined8 *)(param_1 + 0xe0) = uVar5;
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    FUN_014417ec(&local_28,param_1 + 0x80,param_1 + 0xa0);
    FUN_02a47560(&local_50,&local_28);
    *(undefined8 *)(param_1 + 0xe8) = local_50;
    *(undefined8 *)(param_1 + 0xf0) = local_48;
    plVar6 = *(long **)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0xf8) = local_40;
    *(undefined8 *)(param_1 + 0x100) = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
    }
    uVar5 = local_38;
    local_38 = 0;
    *(undefined8 *)(param_1 + 0x100) = uVar5;
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


