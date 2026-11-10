/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257c55c; name: FUN_0257c55c
 */


void FUN_0257c55c(long param_1,byte param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x180;
  param_2 = param_2 & 1;
  plVar2 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  if (*(long *)(*(long *)(param_1 + 0x2c8) + 0x150) != 0) {
    lVar3 = *plVar2;
    while (lVar3 != 0x59fda640aa718d53) {
      plVar2 = plVar2 + 6;
      lVar3 = *plVar2;
    }
  }
  *(byte *)(plVar2[4] + 0x58) = *(byte *)(plVar2[4] + 0x58) & 0xfe | param_2;
  lVar3 = FUN_0257b7e4(lVar1,"pane_P_icon_left_00");
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | param_2;
  lVar3 = FUN_0257b7e4(lVar1,"pane_P_icon_left_01");
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | param_2;
  lVar3 = FUN_0257b7e4(lVar1,"pane_P_icon_left_02");
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | param_2;
  lVar3 = FUN_0257b7e4(lVar1,"pane_P_icon_right_02");
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | param_2;
  lVar3 = FUN_0257b7e4(lVar1,"pane_T_item_name_00");
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | param_2;
  lVar3 = FUN_0257b7e4(lVar1,"pane_P_icon_infinity_00");
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | param_2;
  lVar1 = FUN_0257b7e4(lVar1,"pane_T_item_num_00");
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | param_2;
  return;
}


