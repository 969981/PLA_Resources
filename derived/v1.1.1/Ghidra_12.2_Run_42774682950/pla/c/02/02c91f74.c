/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c91f74; name: FUN_02c91f74
 */


void FUN_02c91f74(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long *local_40;
  undefined1 auStack_38 [8];
  
  *(undefined8 *)(param_1 + 0x2c0) = *param_2;
  *(undefined8 *)(param_1 + 0x2c8) = param_2[1];
  *(undefined8 *)(param_1 + 0x2d0) = param_2[2];
  plVar7 = (long *)param_2[3];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar4 = *(long **)(param_1 + 0x2d8);
  *(long **)(param_1 + 0x2d8) = plVar7;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  FUN_009c69bc(&local_40,param_1);
  lVar5 = FUN_00ab4364(local_40 + 0x1e,auStack_38);
  if (local_40 != (long *)0x0) {
    lVar6 = local_40[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
    }
  }
  plVar7 = *(long **)(*(long *)(lVar5 + 0x208) + 0x88);
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *(int *)plVar4 = (int)*plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (0 < (short)((short)((uint)((int)plVar7[0x4f] - (int)plVar7[0x4e]) >> 4) * -0x5555)) {
    iVar8 = 0;
    do {
      plVar4 = (long *)FUN_02b68dac(plVar7,iVar8);
      if (*plVar4 == *(long *)(param_1 + 0x2c0)) {
        *(short *)(param_1 + 0x2e0) = (short)iVar8;
        goto LAB_02c920d8;
      }
      iVar8 = (int)(short)((short)iVar8 + 1);
    } while (iVar8 < (short)((short)((uint)((int)plVar7[0x4f] - (int)plVar7[0x4e]) >> 4) * -0x5555))
    ;
  }
  plVar4 = *(long **)(param_1 + 0x2d8);
  *(undefined1 **)(param_1 + 0x2c0) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2c8) = &DAT_03996322;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x2d8) = 0;
LAB_02c920d8:
  plVar4 = plVar7 + 10;
  do {
    iVar8 = (int)*plVar4 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *(int *)plVar4 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  return;
}


