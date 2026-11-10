/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0143ac78; name: FUN_0143ac78
 */


void FUN_0143ac78(long param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long *local_a0;
  long local_98;
  long local_90;
  long local_88;
  long *local_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined8 local_68;
  long *local_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined8 local_48;
  long *local_40;
  undefined1 local_38;
  
  lVar8 = *param_2;
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
  plVar6 = *(long **)(param_1 + 0xe8);
  *(long *)(param_1 + 0xe8) = lVar8;
  if (plVar6 == (long *)0x0) {
LAB_0143acd4:
    lVar8 = param_2[1];
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
    if (iVar5 != 0) goto LAB_0143acd4;
    (**(code **)(*plVar6 + 0x10))();
    lVar8 = param_2[1];
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
  plVar6 = *(long **)(param_1 + 0xf0);
  *(long *)(param_1 + 0xf0) = lVar8;
  if (plVar6 != (long *)0x0) {
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
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
      lVar8 = param_2[2];
      goto joined_r0x0143ad18;
    }
  }
  lVar8 = param_2[2];
joined_r0x0143ad18:
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
  plVar6 = *(long **)(param_1 + 0xf8);
  *(long *)(param_1 + 0xf8) = lVar8;
  if (plVar6 != (long *)0x0) {
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
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x100) = param_2[3];
  *(long *)(param_1 + 0x108) = param_2[4];
  *(long *)(param_1 + 0x110) = param_2[5];
  plVar6 = (long *)param_2[6];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = *(long **)(param_1 + 0x118);
  *(long **)(param_1 + 0x118) = plVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(long *)(param_1 + 0x120) = param_2[7];
  *(long *)(param_1 + 0x128) = param_2[8];
  *(long *)(param_1 + 0x130) = param_2[9];
  plVar6 = (long *)param_2[10];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = *(long **)(param_1 + 0x138);
  *(long **)(param_1 + 0x138) = plVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(long *)(param_1 + 0x140) = param_2[0xb];
  *(long *)(param_1 + 0x148) = param_2[0xc];
  *(long *)(param_1 + 0x150) = param_2[0xd];
  plVar6 = (long *)param_2[0xe];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = *(long **)(param_1 + 0x158);
  *(long **)(param_1 + 0x158) = plVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(long *)(param_1 + 0x160) = param_2[0xf];
  *(long *)(param_1 + 0x168) = param_2[0x10];
  *(long *)(param_1 + 0x170) = param_2[0x11];
  plVar6 = (long *)param_2[0x12];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = *(long **)(param_1 + 0x178);
  *(long **)(param_1 + 0x178) = plVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(long *)(param_1 + 0x180) = param_2[0x13];
  *(long *)(param_1 + 0x188) = param_2[0x14];
  *(long *)(param_1 + 400) = param_2[0x15];
  plVar6 = (long *)param_2[0x16];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = *(long **)(param_1 + 0x198);
  *(long **)(param_1 + 0x198) = plVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(long *)(param_1 + 0x1a0) = param_2[0x17];
  *(long *)(param_1 + 0x1a8) = param_2[0x18];
  *(long *)(param_1 + 0x1b0) = param_2[0x19];
  plVar6 = (long *)param_2[0x1a];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = *(long **)(param_1 + 0x1b8);
  *(long **)(param_1 + 0x1b8) = plVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(long *)(param_1 + 0x1c0) = param_2[0x1b];
  *(long *)(param_1 + 0x1c8) = param_2[0x1c];
  *(long *)(param_1 + 0x1d0) = param_2[0x1d];
  plVar6 = (long *)param_2[0x1e];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = *(long **)(param_1 + 0x1d8);
  *(long **)(param_1 + 0x1d8) = plVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(long *)(param_1 + 0x1e0) = param_2[0x1f];
  *(long *)(param_1 + 0x1e8) = param_2[0x20];
  *(long *)(param_1 + 0x1f0) = param_2[0x21];
  plVar6 = (long *)param_2[0x22];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = *(long **)(param_1 + 0x1f8);
  *(long **)(param_1 + 0x1f8) = plVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(long *)(param_1 + 0x200) = param_2[0x23];
  *(long *)(param_1 + 0x208) = param_2[0x24];
  *(long *)(param_1 + 0x210) = param_2[0x25];
  plVar6 = (long *)param_2[0x26];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = *(long **)(param_1 + 0x218);
  *(long **)(param_1 + 0x218) = plVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  lVar8 = param_2[0x27];
  lVar2 = param_2[0x28];
  *(long *)(param_1 + 0x230) = param_2[0x29];
  *(long *)(param_1 + 0x228) = lVar2;
  *(long *)(param_1 + 0x220) = lVar8;
  *(long *)(param_1 + 0x238) = param_2[0x2a];
  *(long *)(param_1 + 0x240) = param_2[0x2b];
  *(long *)(param_1 + 0x248) = param_2[0x2c];
  plVar6 = (long *)param_2[0x2d];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = *(long **)(param_1 + 0x250);
  *(long **)(param_1 + 0x250) = plVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  local_c0 = (long *)param_2[1];
  if (local_c0 != (long *)0x0) {
    plVar6 = local_c0 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_b8 = param_2[0xf];
  local_b0 = param_2[0x10];
  local_a8 = param_2[0x11];
  local_a0 = (long *)param_2[0x12];
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x18))();
  }
  local_98 = param_2[0x13];
  local_90 = param_2[0x14];
  local_88 = param_2[0x15];
  local_80 = (long *)param_2[0x16];
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x18))();
  }
  local_38 = 0;
  local_78 = &DAT_cbf29ce484222645;
  puStack_70 = &DAT_03996322;
  local_68 = 0;
  local_60 = (long *)0x0;
  local_58 = &DAT_cbf29ce484222645;
  puStack_50 = &DAT_03996322;
  local_48 = 0;
  local_40 = (long *)0x0;
  FUN_014228a0(param_1 + 0x58,&local_c0);
  *(undefined2 *)(param_1 + 0x260) = 1;
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_c0 != (long *)0x0) {
    plVar6 = local_c0 + 10;
    do {
      iVar5 = (int)*plVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  return;
}


