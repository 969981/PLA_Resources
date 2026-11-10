/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0128fd28; name: FUN_0128fd28
 */


void FUN_0128fd28(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if ((**(int **)(param_1 + 0x1648) == 1) || (**(int **)(param_1 + 0x1648) != 2)) {
    FUN_0128fa94(param_1,0);
    uVar2 = 0xa1fba57a06e27448;
  }
  else {
    FUN_0128fbec(param_1,param_2);
    uVar2 = 0xb04cbd7b5a91acc8;
  }
  pcStack_48 = "pane_L_money_00_T_param_add_00";
  local_50 = (undefined1 *)0x333f1bed2a73ee16;
  local_40 = 0x1e;
  local_38 = (long *)0x0;
  FUN_0128d2ac(param_1,0,uVar2,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = &DAT_bcaa842e33ae880f;
  pcStack_48 = "anime_L_money_00_money_add";
  local_40 = 0x1a;
  local_38 = (long *)0x0;
  lVar1 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_50);
    lVar1 = *(long *)(param_1 + 0x2c8);
  }
  local_50 = &DAT_bcaa842e33ae880f;
  pcStack_48 = "anime_L_money_00_money_add";
  local_40 = 0x1a;
  local_38 = (long *)0x0;
  if (lVar1 != 0) {
    FUN_0283b1e8(lVar1,&local_50);
  }
  return;
}


