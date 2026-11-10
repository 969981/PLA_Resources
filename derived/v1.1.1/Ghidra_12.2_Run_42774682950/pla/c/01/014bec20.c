/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014bec20; name: FUN_014bec20
 */


/* WARNING: Removing unreachable block (ram,0x014bece8) */
/* WARNING: Removing unreachable block (ram,0x014becec) */
/* WARNING: Removing unreachable block (ram,0x014becf4) */
/* WARNING: Removing unreachable block (ram,0x014becfc) */
/* WARNING: Removing unreachable block (ram,0x014bee24) */
/* WARNING: Removing unreachable block (ram,0x014bed30) */
/* WARNING: Removing unreachable block (ram,0x014bed6c) */

void FUN_014bec20(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 uStack_88;
  char *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  long *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  long *local_30;
  undefined1 local_28;
  
  lVar6 = FUN_01422a54(&local_b0,*(undefined8 *)(param_1 + 8));
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x5e8);
  *(undefined8 *)(param_1 + 0x5e8) = 0;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x5e8) = lVar6;
  local_b0 = *(long **)(param_1 + 0x2c8);
  if (local_b0 != (long *)0x0) {
    plVar7 = local_b0 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_30 = (long *)0x0;
  uStack_38 = 0;
  local_40 = &DAT_03996322;
  puStack_48 = &DAT_cbf29ce484222645;
  local_50 = (long *)0x0;
  uStack_58 = 0;
  local_60 = &DAT_03996322;
  puStack_68 = &DAT_cbf29ce484222645;
  uStack_78 = 0x2c;
  local_80 = "anime_L_scr_01_basic_L_pt_exp_01_gauge_scale";
  uStack_88 = 0x1a65244b01327bd;
  local_90 = (long *)0x0;
  uStack_98 = 0x1f;
  local_a0 = "pane_L_scr_01_basic_L_pt_exp_01";
  uStack_a8 = 0xd9732a91b68b6f80;
  local_70 = (long *)0x0;
  local_28 = 1;
  FUN_014228a0(*(long *)(param_1 + 0x5e8) + 0x58,&local_b0);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    plVar7 = local_b0 + 10;
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
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  return;
}


