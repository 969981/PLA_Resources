/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01270ea0; name: FUN_01270ea0
 */


void FUN_01270ea0(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  undefined8 local_30;
  undefined *puStack_28;
  undefined8 local_20;
  long *local_18;
  
  param_2 = param_2 & 0xffffffff;
  lVar1 = param_2 * 0x30;
  if ((param_3 & 1) == 0) {
    local_30 = *(undefined8 *)(&DAT_04200668 + lVar1);
    puStack_28 = (&PTR_s_anime_L_hair_tab_00_L_tab_00_uns_04200670)[param_2 * 6];
    local_20 = *(undefined8 *)(&DAT_04200678 + lVar1);
  }
  else {
    local_30 = *(undefined8 *)(&DAT_04200650 + lVar1);
    puStack_28 = (&PTR_s_anime_L_hair_tab_00_L_tab_00_sel_04200658)[param_2 * 6];
    local_20 = *(undefined8 *)(&DAT_04200660 + lVar1);
  }
  local_18 = (long *)0x0;
  FUN_00d2df7c(param_1 + 0x180,&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


