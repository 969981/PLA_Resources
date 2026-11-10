/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014bee4c; name: FUN_014bee4c
 */


void FUN_014bee4c(undefined1 param_1 [16],float param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  float fVar9;
  undefined8 local_a8;
  char *local_a0;
  undefined8 local_98;
  long *local_90;
  int local_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 auStack_60 [4];
  float local_5c;
  undefined1 auStack_58 [4];
  float local_54;
  
  uVar7 = *(undefined8 *)(param_3 + 8);
  FUN_014c7490(&local_a8,uVar7);
  uVar5 = local_a8;
  local_a8 = 0;
  lVar6 = *(long *)(param_3 + 0x5f0);
  *(undefined8 *)(param_3 + 0x5f0) = uVar5;
  if (lVar6 != 0) {
    FUN_014c7da4(param_3 + 0x5f8);
  }
  *(undefined8 *)(param_3 + 0x600) = local_98;
  *(long **)(param_3 + 0x608) = local_90;
  *(char **)(param_3 + 0x5f8) = local_a0;
  plVar8 = *(long **)(param_3 + 0x2c8);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_a8 = 0x33d842b36b9566c5;
  local_a0 = "pane_L_scr_03_param_L_pt_graph_N_graph_max";
  local_98 = 0x2a;
  local_90 = (long *)0x0;
  fVar9 = (float)FUN_0283ad10(plVar8,&local_a8);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  local_a8 = 0x33d842b36b9566c5;
  local_a0 = "pane_L_scr_03_param_L_pt_graph_N_graph_max";
  local_98 = 0x2a;
  local_90 = (long *)0x0;
  FUN_0283af38(plVar8,&local_a8,auStack_58);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  local_a8 = 0x33f34cb36bac3f7b;
  local_a0 = "pane_L_scr_03_param_L_pt_graph_N_graph_min";
  local_98 = 0x2a;
  local_90 = (long *)0x0;
  FUN_0283af38(plVar8,&local_a8,auStack_60);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  local_a8 = 0x912cc74bf51df1d1;
  local_a0 = "status_radar_chart_param";
  local_98 = 0x18;
  local_90 = (long *)0x0;
  local_80 = (int)(local_54 * 0.5);
  iStack_7c = (int)(local_5c * 0.5);
  local_68 = 0x190000080ff;
  local_78 = 0x3f75f5f63f7bfbfc;
  uStack_70 = 0x3f8000003f57d7d8;
  local_88 = (int)fVar9;
  iStack_84 = (int)param_2;
  FUN_014bcbdc(*(undefined8 *)(param_3 + 0x5f0),&local_a8,uVar7);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  local_a8 = 0xee98e95502beafc6;
  local_a0 = "status_radar_chart_level";
  local_98 = 0x18;
  local_90 = (long *)0x0;
  local_78 = 0x3f6dedee3e64e4e5;
  uStack_70 = 0x3ecccccd3f49c9ca;
  local_80 = (int)(local_54 * 0.5);
  iStack_7c = (int)(local_5c * 0.5);
  local_68 = 0x190000080fa;
  local_88 = (int)fVar9;
  iStack_84 = (int)param_2;
  FUN_014bcbdc(*(long *)(param_3 + 0x5f0) + 0x60,&local_a8,uVar7);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  return;
}


