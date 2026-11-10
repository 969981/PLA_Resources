/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d52a24; name: FUN_00d52a24
 */


void FUN_00d52a24(long param_1,int param_2)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  if (param_2 == 3) {
    param_2 = *(int *)(param_1 + 0x6e0);
  }
  local_60 = 0x2bc79b400d5b2259;
  pcStack_58 = "anime_L_inventory_parts_00_L_cursor_inventory_00_change_form";
  local_50 = 0x3c;
  local_48 = (long *)0x0;
  if (*(char *)(param_1 + 0x671) == '\0') {
    uVar11 = 0;
    lVar4 = *(long *)(param_1 + 0x2c8);
  }
  else {
    uVar11 = 0x3f800000;
    lVar4 = *(long *)(param_1 + 0x2c8);
  }
  if (lVar4 != 0) {
    FUN_0283b1e8(lVar4,&local_60);
    lVar4 = *(long *)(param_1 + 0x2c8);
    if (lVar4 != 0) {
      plVar10 = *(long **)(lVar4 + 0x1a0);
      lVar6 = *(long *)(lVar4 + 0x1a8);
      if ((lVar6 == 0) || (*plVar10 == 0x2bc79b400d5b2259)) {
        plVar9 = plVar10;
      }
      else {
        lVar8 = lVar6 * 0x30;
        plVar7 = plVar10;
        do {
          lVar8 = lVar8 + -0x30;
          if (lVar8 == 0) goto LAB_00d52b84;
          plVar1 = plVar7 + 6;
          plVar9 = plVar7 + 6;
          plVar7 = plVar7 + 6;
        } while (*plVar1 != 0x2bc79b400d5b2259);
      }
      plVar10 = plVar10 + lVar6 * 6;
      if (plVar9 == plVar10) {
        plVar7 = (long *)0x0;
        if (plVar9 != plVar10) goto LAB_00d52b04;
LAB_00d52b84:
        if (lVar4 == 0) goto LAB_00d52ba0;
        FUN_0283b1e8(lVar4,&local_60);
      }
      else {
        plVar7 = plVar9 + 4;
        if (plVar9 == plVar10) goto LAB_00d52b84;
LAB_00d52b04:
        uVar5 = (ulong)*(uint *)(plVar7 + 1);
        if (((*(uint *)(*plVar7 + 0x278) <= *(uint *)(plVar7 + 1)) ||
            (lVar6 = *(long *)(*plVar7 + 600), *(char *)(lVar6 + uVar5 * 0x48 + 8) == '\0')) ||
           (*(char *)(lVar6 + uVar5 * 0x48 + 0xb) == '\0')) goto LAB_00d52b84;
        plVar10 = (long *)(lVar6 + uVar5 * 0x48 + 0x10);
        lVar4 = *plVar10;
        if ((lVar4 != 0) && (*(char *)(lVar6 + uVar5 * 0x48 + 9) == '\0')) {
          fVar12 = *(float *)(lVar4 + 0x20);
          uVar2 = FUN_00227728();
          uVar5 = FUN_00227744(*plVar10);
          if (((float)uVar2 <= fVar12) && ((uVar5 & 1) == 0)) {
            lVar4 = *(long *)(param_1 + 0x2c8);
            goto LAB_00d52b84;
          }
        }
      }
      FUN_0283b748(uVar11,*(undefined8 *)(param_1 + 0x2c8),&local_60);
    }
  }
LAB_00d52ba0:
  local_60 = 0xca334afc97d2478;
  pcStack_58 = "anime_L_inventory_parts_00_L_cursor_inventory_00_switch_default";
  local_50 = 0x3f;
  local_48 = (long *)0x0;
  if ((*(char *)(param_1 + 0x5f1) == '\0') &&
     (plVar10 = local_48, *(char *)(param_1 + 0x5f2) == '\0')) {
LAB_00d52c30:
    local_48 = plVar10;
    lVar4 = *(long *)(param_1 + 0x2c8);
    plVar10 = local_48;
  }
  else {
    if (((DAT_043abab8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043abab8), iVar3 != 0)) {
      DAT_043aba58 = 0xc25780276c503506;
      DAT_043aba60 = "anime_L_inventory_parts_00_L_cursor_inventory_00_switch_red";
      DAT_043aba68 = 0x3b;
      DAT_043aba70 = 0;
      DAT_043aba78 = 0x830be2755fe7875b;
      DAT_043aba80 = "anime_L_inventory_parts_00_L_cursor_inventory_00_switch_blue";
      DAT_043aba88 = 0x3c;
      DAT_043aba90 = 0;
      DAT_043aba98 = 0x5732880708383f26;
      DAT_043abaa0 = "anime_L_inventory_parts_00_L_cursor_inventory_00_switch_green";
      DAT_043abaa8 = 0x3d;
      DAT_043abab0 = 0;
      FUN_00100250(&LAB_00d48cd0,0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043abab8);
    }
    lVar4 = (long)param_2;
    local_60 = (&DAT_043aba58)[lVar4 * 4];
    pcStack_58 = (&DAT_043aba60)[lVar4 * 4];
    local_50 = (&DAT_043aba68)[lVar4 * 4];
    plVar10 = (long *)(&DAT_043aba70)[lVar4 * 4];
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    if (local_48 == (long *)0x0) goto LAB_00d52c30;
    lVar4 = *local_48;
    local_48 = plVar10;
    (**(code **)(lVar4 + 0x20))();
    lVar4 = *(long *)(param_1 + 0x2c8);
  }
  if (lVar4 != 0) {
    FUN_0283b1e8(lVar4,&local_60);
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  local_60 = 0xc33c0a5ee66c0f45;
  pcStack_58 = "anime_L_inventory_parts_00_change_name_popup_color_default";
  local_50 = 0x3a;
  local_48 = (long *)0x0;
  if ((*(char *)(param_1 + 0x5f1) != '\0') ||
     (plVar10 = local_48, *(char *)(param_1 + 0x5f2) != '\0')) {
    if (((DAT_043abb20 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043abb20), iVar3 != 0)) {
      DAT_043abac0 = 0xc090f8c68c0bfe2f;
      DAT_043abac8 = "anime_L_inventory_parts_00_change_name_popup_color_red";
      DAT_043abad0 = 0x36;
      DAT_043abad8 = 0;
      DAT_043abae0 = 0xa235cdd7f6c608d4;
      DAT_043abae8 = "anime_L_inventory_parts_00_change_name_popup_color_blue";
      DAT_043abaf0 = 0x37;
      DAT_043abaf8 = 0;
      DAT_043abb00 = 0x604019b8ae9fe47b;
      DAT_043abb08 = "anime_L_inventory_parts_00_change_name_popup_color_green";
      DAT_043abb10 = 0x38;
      DAT_043abb18 = 0;
      FUN_00100250(0xd48d30,0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043abb20);
    }
    lVar4 = (long)param_2;
    local_60 = (&DAT_043abac0)[lVar4 * 4];
    pcStack_58 = (&DAT_043abac8)[lVar4 * 4];
    local_50 = (&DAT_043abad0)[lVar4 * 4];
    plVar10 = (long *)(&DAT_043abad8)[lVar4 * 4];
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    if (local_48 != (long *)0x0) {
      lVar4 = *local_48;
      local_48 = plVar10;
      (**(code **)(lVar4 + 0x20))();
      lVar4 = *(long *)(param_1 + 0x2c8);
      goto joined_r0x00d52cd0;
    }
  }
  local_48 = plVar10;
  lVar4 = *(long *)(param_1 + 0x2c8);
  plVar10 = local_48;
joined_r0x00d52cd0:
  if (lVar4 != 0) {
    FUN_0283b1e8(lVar4,&local_60);
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  return;
}


