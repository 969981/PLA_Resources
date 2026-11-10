/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011c0c44; name: FUN_011c0c44
 */


void FUN_011c0c44(long *param_1,int *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  byte local_70 [64];
  
  plVar8 = *(long **)(*param_1 + 0x1c0);
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  puVar9 = &DAT_cbf29ce484222645;
  snprintf((char *)local_70,0x40,"WAZAINFO_%03d",*param_2);
  if (local_70[0] != 0) {
    pbVar5 = (byte *)((ulong)local_70 | 1);
    do {
      puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)local_70[0]) * 0x100000001b3);
      local_70[0] = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (local_70[0] != 0);
  }
  lVar7 = *(long *)(param_1[2] + 0xb0);
  if (lVar7 != 0) {
    plVar6 = *(long **)(lVar7 + 0x270);
    if (plVar6 != *(long **)(lVar7 + 0x278)) {
      iVar4 = 0;
      do {
        puVar1 = (undefined8 *)PTR_DAT_04379c88;
        if (*plVar6 != 0) {
          puVar1 = (undefined8 *)(*plVar6 + 0x58);
        }
        if ((undefined1 *)*puVar1 == puVar9) goto LAB_011c0d40;
        plVar6 = plVar6 + 1;
        iVar4 = iVar4 + 1;
      } while (*(long **)(lVar7 + 0x278) != plVar6);
    }
  }
  iVar4 = 0;
LAB_011c0d40:
  FUN_02c2e33c(param_1[2],iVar4,plVar8);
  local_90 = 0x2212c2da63bffc48;
  pcStack_88 = "pane_L_wazainfo_00_T_info_00";
  local_80 = 0x1c;
  local_78 = (long *)0x0;
  FUN_0283ce7c(*param_1,&local_90,plVar8,10);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  return;
}


