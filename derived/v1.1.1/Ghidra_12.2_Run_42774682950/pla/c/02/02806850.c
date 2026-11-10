/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02806850; name: FUN_02806850
 */


void FUN_02806850(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_02806290();
  local_40 = 0xd8bd1fa4b54234bc;
  pcStack_38 = "anime_menu_out";
  local_30 = 0xe;
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x2c8) == 0) {
    bVar1 = true;
    lVar2 = 0;
  }
  else {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_40);
    lVar2 = *(long *)(param_1 + 0x2c8);
    bVar1 = lVar2 == 0;
  }
  local_40 = 0x49d565de9da67ee8;
  pcStack_38 = "anime_title_in";
  local_30 = 0xe;
  uStack_28 = 0;
  if (!bVar1) {
    FUN_0283b1e8(lVar2,&local_40);
  }
  return;
}


