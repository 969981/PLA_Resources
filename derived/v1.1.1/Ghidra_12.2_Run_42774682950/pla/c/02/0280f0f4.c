/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280f0f4; name: FUN_0280f0f4
 */


void FUN_0280f0f4(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long *local_48;
  
  pcVar10 = *(code **)(param_1 + 0x208);
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x210) = 0;
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x200) = 0;
    *(undefined8 *)(param_1 + 0x208) = 0;
    (*pcVar10)(param_1 + 0x220);
  }
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,param_1 + 0x220);
    uVar2 = *param_4;
    uVar3 = param_4[1];
    uVar4 = param_4[3];
    *(undefined8 *)(param_1 + 0x210) = param_4[2];
    *(undefined8 *)(param_1 + 0x218) = uVar4;
    *(undefined8 *)(param_1 + 0x200) = uVar2;
    *(undefined8 *)(param_1 + 0x208) = uVar3;
  }
  pcVar10 = *(code **)(param_1 + 0x288);
  if (pcVar10 == (code *)0x0) {
    pcVar10 = (code *)param_3[2];
  }
  else {
    *(undefined8 *)(param_1 + 0x290) = 0;
    *(undefined8 *)(param_1 + 0x298) = 0;
    *(undefined8 *)(param_1 + 0x280) = 0;
    *(undefined8 *)(param_1 + 0x288) = 0;
    (*pcVar10)(param_1 + 0x2a0);
    pcVar10 = (code *)param_3[2];
  }
  if (pcVar10 != (code *)0x0) {
    (*pcVar10)(param_3 + 4,param_1 + 0x2a0);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[3];
    *(undefined8 *)(param_1 + 0x290) = param_3[2];
    *(undefined8 *)(param_1 + 0x298) = uVar4;
    *(undefined8 *)(param_1 + 0x280) = uVar2;
    *(undefined8 *)(param_1 + 0x288) = uVar3;
  }
  local_60 = 0xc323bb5fed707702;
  local_58 = "GRID_PANEL_CATCH_ITEM";
  local_50 = 0x15;
  local_48 = (long *)0x0;
  lVar8 = FUN_0280f34c(param_1,*(undefined8 *)(param_1 + 8),&local_60);
  *(long *)(param_1 + 0x448) = lVar8;
  *(undefined8 *)(lVar8 + 0xa8) = *param_2;
  *(undefined8 *)(lVar8 + 0xb0) = param_2[1];
  *(undefined8 *)(lVar8 + 0xb8) = param_2[2];
  plVar12 = (long *)param_2[3];
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  plVar9 = *(long **)(lVar8 + 0xc0);
  *(long **)(lVar8 + 0xc0) = plVar12;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  *(undefined8 *)(lVar8 + 200) = param_2[4];
  *(undefined8 *)(lVar8 + 0xd0) = param_2[5];
  *(undefined8 *)(lVar8 + 0xd8) = param_2[6];
  plVar12 = (long *)param_2[7];
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  plVar9 = *(long **)(lVar8 + 0xe0);
  *(long **)(lVar8 + 0xe0) = plVar12;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  lVar8 = *(long *)(param_1 + 0x448);
  lVar11 = *(long *)(param_1 + 0xe8);
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar12 = *(long **)(lVar8 + 0xe8);
  *(undefined8 *)(lVar8 + 0xe8) = 0;
  if (plVar12 != (long *)0x0) {
    plVar9 = plVar12 + 10;
    do {
      iVar7 = (int)*plVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *(int *)plVar9 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  *(long *)(lVar8 + 0xe8) = lVar11;
  lVar8 = *(long *)(param_1 + 0x448);
  local_60 = *(undefined8 *)(lVar8 + 0xa8);
  plVar12 = *(long **)(param_1 + 0xe8);
  local_58 = *(char **)(lVar8 + 0xb0);
  local_50 = *(undefined8 *)(lVar8 + 0xb8);
  local_48 = *(long **)(lVar8 + 0xc0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  (**(code **)(*plVar12 + 0x50))(plVar12,&local_60,0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


