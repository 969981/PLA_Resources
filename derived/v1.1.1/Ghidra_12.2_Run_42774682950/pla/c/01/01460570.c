/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01460570; name: FUN_01460570
 */


void FUN_01460570(long param_1)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  iVar10 = *(int *)(param_1 + 0x18);
  if (iVar10 - 1U < 4) {
    uVar13 = *(undefined4 *)(&DAT_0388a070 + (long)(int)(iVar10 - 1U) * 4);
    bVar3 = *(byte *)(param_1 + 0x28);
  }
  else {
    uVar13 = 0;
    bVar3 = *(byte *)(param_1 + 0x28);
  }
  if ((bVar3 >> 2 & 1) != 0) {
    iVar10 = *(int *)(param_1 + 0x1c);
    if (iVar10 - 1U < 4) {
      uVar13 = *(undefined4 *)(&DAT_0388a070 + (long)(int)(iVar10 - 1U) * 4);
    }
    else {
      uVar13 = 0;
    }
  }
  if (*(int *)(param_1 + 0x20) != iVar10) {
    *(int *)(param_1 + 0x20) = iVar10;
    local_50 = 0x7574620f3a4863ed;
    pcStack_48 = "anime_L_gauge_nspoke_01_L_icon_change";
    local_40 = 0x25;
    local_38 = (long *)0x0;
    FUN_014609c0(uVar13,param_1,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  if ((*(ushort *)(param_1 + 0x30) & 0x1ff) == 0) {
    local_50 = 0x83cdaae7616f2554;
    pcStack_48 = "anime_L_gauge_nspoke_01_L_button_active";
    local_40 = 0x27;
    local_38 = (long *)0x0;
    lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
    if (lVar6 != 0) {
      FUN_0283b1e8(lVar6,&local_50);
    }
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      local_50 = 0x62460b5bbf9ec2df;
      pcStack_48 = "anime_L_gauge_nspoke_01_L_icon_active";
      local_40 = 0x25;
    }
    else {
      local_50 = 0x3f4411949c6ffa8e;
      pcStack_48 = "anime_L_gauge_nspoke_01_L_icon_passive";
      local_40 = 0x26;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
  }
  else {
    local_50 = 0xa8fe63283a2e9c87;
    pcStack_48 = "anime_L_gauge_nspoke_01_L_button_passive";
    local_40 = 0x28;
    local_38 = (long *)0x0;
    lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
    lVar6 = 0;
    if (lVar9 != 0) {
      FUN_0283b1e8(lVar9,&local_50);
      lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
    }
    local_50 = 0x3f4411949c6ffa8e;
    pcStack_48 = "anime_L_gauge_nspoke_01_L_icon_passive";
    local_40 = 0x26;
  }
  local_38 = (long *)0x0;
  if (lVar6 != 0) {
    local_38 = (long *)0x0;
    FUN_0283b1e8(lVar6,&local_50);
  }
  if ((uint)*(byte *)(param_1 + 0x24) != ((uint)(*(ulong *)(param_1 + 0x28) >> 3) & 1)) {
    uVar7 = *(ulong *)(param_1 + 0x28) & 8;
    *(char *)(param_1 + 0x24) = (char)(uVar7 >> 3);
    if (uVar7 == 0) {
      local_50 = 0xa3813cef569caf04;
      pcStack_48 = "anime_L_gauge_nspoke_01_L_icon_ride_out";
      local_40 = 0x27;
    }
    else {
      local_50 = 0x1bf68ff7b8ec9ddf;
      pcStack_48 = "anime_L_gauge_nspoke_01_L_icon_ride_in";
      local_40 = 0x26;
    }
    local_38 = (long *)0x0;
    lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
    lVar6 = 0;
    if (lVar9 != 0) {
      FUN_0283b1e8(lVar9,&local_50);
      lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
    }
    local_50 = 0x88db544abc3b02ca;
    pcStack_48 = "anime_L_gauge_nspoke_01_L_button_key_select";
    local_40 = 0x2b;
    local_38 = (long *)0x0;
    if (lVar6 != 0) {
      FUN_0283b1e8(lVar6,&local_50);
      bVar3 = *(byte *)(param_1 + 0x28);
      goto joined_r0x01460874;
    }
  }
  bVar3 = *(byte *)(param_1 + 0x28);
joined_r0x01460874:
  if ((((bVar3 & 1) == 0) && (uVar7 = FUN_0145f5a4(), (uVar7 & 1) != 0)) &&
     ((*(byte *)(param_1 + 0x40) & 1) == 0)) {
    plVar8 = *(long **)(*(long *)(param_1 + 0x10) + 0x148);
    if (plVar8 != (long *)0x0) {
      plVar11 = plVar8 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar11 = (long *)plVar8[0x29];
    lVar6 = plVar8[0x2a];
    if ((lVar6 != 0) && (*plVar11 != 0x29288174277c5656)) {
      plVar12 = plVar11 + lVar6 * 6;
      lVar6 = lVar6 * 0x30;
      do {
        lVar6 = lVar6 + -0x30;
        if (lVar6 == 0) {
          plVar11 = plVar12;
          break;
        }
        plVar2 = plVar11 + 6;
        plVar1 = plVar11 + 6;
        plVar11 = plVar2;
      } while (*plVar1 != 0x29288174277c5656);
    }
    *(byte *)(plVar11[4] + 0x58) = *(byte *)(plVar11[4] + 0x58) | 1;
    if (plVar8 != (long *)0x0) {
      plVar11 = plVar8 + 10;
      do {
        iVar10 = (int)*plVar11 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
  }
  else {
    plVar8 = *(long **)(*(long *)(param_1 + 0x10) + 0x148);
    if (plVar8 != (long *)0x0) {
      plVar11 = plVar8 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar11 = (long *)plVar8[0x29];
    lVar6 = plVar8[0x2a];
    if ((lVar6 != 0) && (*plVar11 != 0x29288174277c5656)) {
      plVar12 = plVar11 + lVar6 * 6;
      lVar6 = lVar6 * 0x30;
      do {
        lVar6 = lVar6 + -0x30;
        if (lVar6 == 0) {
          plVar11 = plVar12;
          break;
        }
        plVar2 = plVar11 + 6;
        plVar1 = plVar11 + 6;
        plVar11 = plVar2;
      } while (*plVar1 != 0x29288174277c5656);
    }
    *(byte *)(plVar11[4] + 0x58) = *(byte *)(plVar11[4] + 0x58) & 0xfe;
    if (plVar8 != (long *)0x0) {
      plVar11 = plVar8 + 10;
      do {
        iVar10 = (int)*plVar11 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  return;
}


