/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0145af60; name: FUN_0145af60
 */


void FUN_0145af60(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *local_58 [4];
  long *local_38;
  char *local_28;
  
  lVar8 = *param_2;
  if (lVar8 != 0) {
    piVar2 = (int *)(lVar8 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x200);
  *(long *)(param_1 + 0x200) = lVar8;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
  plVar7 = *(long **)(lVar8 + 0x148);
  lVar8 = *(long *)(lVar8 + 0x150);
  if ((lVar8 != 0) && (*plVar7 != 0x80a8e808288e407)) {
    plVar9 = plVar7 + lVar8 * 6;
    lVar8 = lVar8 * 0x30;
    do {
      lVar8 = lVar8 + -0x30;
      if (lVar8 == 0) {
        plVar7 = plVar9;
        break;
      }
      plVar3 = plVar7 + 6;
      plVar1 = plVar7 + 6;
      plVar7 = plVar3;
    } while (*plVar1 != 0x80a8e808288e407);
  }
  *(byte *)(plVar7[4] + 0x58) = *(byte *)(plVar7[4] + 0x58) & 0xfe;
  local_28 = "bin/appli/table/hud/guide_table.bin";
  FUN_009f1b84(local_58,&local_28);
  FUN_00938764(param_1 + 0x210,0,local_58,0,0,0);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_58[0] != (long *)0x0) {
    (**(code **)(*local_58[0] + 0x20))();
  }
  FUN_0145b0c8(param_1);
  FUN_0145c618(param_1);
  FUN_0145c7f0(param_1);
  return;
}


