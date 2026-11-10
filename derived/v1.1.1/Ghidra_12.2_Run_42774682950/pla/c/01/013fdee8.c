/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013fdee8; name: FUN_013fdee8
 */


void FUN_013fdee8(long param_1,int param_2)

{
  long lVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_28 = (long *)0x0;
  lVar1 = (long)param_2 * 0x18;
  local_40 = *(undefined8 *)(&DAT_0420cb00 + lVar1);
  pcStack_38 = (&PTR_s_anime_L_tab_detail_00_switch_mai_0420cb08)[(long)param_2 * 3];
  local_30 = *(undefined8 *)(&DAT_0420cb10 + lVar1);
  FUN_00d2df7c(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0xe7549c1a038cffda;
  pcStack_38 = "anime_L_tab_detail_00_key_select";
  local_30 = 0x20;
  local_28 = (long *)0x0;
  FUN_00d2df7c(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


