/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257d068; name: FUN_0257d068
 */


void FUN_0257d068(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (*(int *)(param_1 + 0x5ac) == 0) {
    lVar1 = (long)*(int *)(param_1 + 0x700) * 0x18;
    local_40 = *(undefined8 *)(&DAT_0425d518 + lVar1);
    pcStack_38 = (&PTR_s_anime_passive_select_item_03_0425d520)[(long)*(int *)(param_1 + 0x700) * 3]
    ;
    local_30 = *(undefined8 *)(&DAT_0425d528 + lVar1);
    local_28 = (long *)0x0;
    lVar1 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_40);
      lVar1 = *(long *)(param_1 + 0x2c8);
    }
    pcStack_38 = "anime_passive_select_item_07";
    local_40 = 0x6b9836212057d244;
  }
  else {
    lVar1 = (long)*(int *)(param_1 + 0x700) * 0x18;
    local_40 = *(undefined8 *)(&DAT_0425d590 + lVar1);
    pcStack_38 = (&PTR_s_anime_passive_select_poke_03_0425d598)[(long)*(int *)(param_1 + 0x700) * 3]
    ;
    local_30 = *(undefined8 *)(&DAT_0425d5a0 + lVar1);
    local_28 = (long *)0x0;
    lVar1 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_40);
      lVar1 = *(long *)(param_1 + 0x2c8);
    }
    pcStack_38 = "anime_passive_select_poke_07";
    local_40 = 0xe783011ea48198a6;
  }
  local_30 = 0x1c;
  local_28 = (long *)0x0;
  if (lVar1 != 0) {
    FUN_0283b1e8(lVar1,&local_40);
  }
  if ((param_2 & 1) == 0) {
    local_40 = 0x173e069923e9df2e;
    pcStack_38 = "PLAY_UI_COMMON_ITEM_CANNOT_USE";
    local_30 = 0x1e;
    local_28 = (long *)0x0;
    FUN_028354b0(&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


