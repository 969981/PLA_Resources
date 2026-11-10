/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013f4ed4; name: FUN_013f4ed4
 */


void FUN_013f4ed4(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  
  lVar9 = *param_2;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar8 = *(long **)(param_1 + 0x5b8);
  *(long *)(param_1 + 0x5b8) = lVar9;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  lVar9 = FUN_01306260(param_1 + 0x180,"pane_N_view_area_3d_model_00");
  FUN_013622a0(*(undefined8 *)(param_1 + 0x5b8),lVar9);
  uVar3 = *(undefined4 *)(lVar9 + 0x50);
  uVar4 = *(undefined4 *)(lVar9 + 0x54);
  *(undefined8 *)(param_1 + 0x6b0) = *(undefined8 *)(lVar9 + 0x30);
  *(undefined4 *)(param_1 + 0x6b8) = uVar3;
  *(undefined4 *)(param_1 + 0x6bc) = uVar4;
  return;
}


