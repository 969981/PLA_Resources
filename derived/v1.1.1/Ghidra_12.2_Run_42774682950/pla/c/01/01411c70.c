/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01411c70; name: FUN_01411c70
 */


void FUN_01411c70(long param_1,int param_2)

{
  char *__format;
  char acStack_440 [1024];
  
  param_1 = param_1 + 0x180;
  memset(acStack_440,0,0x400);
  if (param_2 == 1) {
    snprintf(acStack_440,0x400,"anime_L_detail_tab_%02d_select",1);
    FUN_00d2ded4(param_1,acStack_440);
LAB_01411cd4:
    snprintf(acStack_440,0x400,"anime_L_detail_tab_%02d_unselect",2);
    FUN_00d2ded4(param_1,acStack_440);
    if (param_2 != 3) goto LAB_01411d00;
    snprintf(acStack_440,0x400,"anime_L_detail_tab_%02d_select",3);
    FUN_00d2ded4(param_1,acStack_440);
LAB_01411d2c:
    snprintf(acStack_440,0x400,"anime_L_detail_tab_%02d_unselect",4);
    FUN_00d2ded4(param_1,acStack_440);
    if (param_2 == 5) {
      snprintf(acStack_440,0x400,"anime_L_detail_tab_%02d_select",5);
      FUN_00d2ded4(param_1,acStack_440);
      __format = "anime_L_detail_tab_%02d_unselect";
      goto LAB_01411d90;
    }
  }
  else {
    snprintf(acStack_440,0x400,"anime_L_detail_tab_%02d_unselect",1);
    FUN_00d2ded4(param_1,acStack_440);
    if (param_2 != 2) goto LAB_01411cd4;
    snprintf(acStack_440,0x400,"anime_L_detail_tab_%02d_select",2);
    FUN_00d2ded4(param_1,acStack_440);
LAB_01411d00:
    snprintf(acStack_440,0x400,"anime_L_detail_tab_%02d_unselect",3);
    FUN_00d2ded4(param_1,acStack_440);
    if (param_2 != 4) goto LAB_01411d2c;
    snprintf(acStack_440,0x400,"anime_L_detail_tab_%02d_select",4);
    FUN_00d2ded4(param_1,acStack_440);
  }
  snprintf(acStack_440,0x400,"anime_L_detail_tab_%02d_unselect",5);
  FUN_00d2ded4(param_1,acStack_440);
  __format = "anime_L_detail_tab_%02d_select";
  if (param_2 != 6) {
    __format = "anime_L_detail_tab_%02d_unselect";
  }
LAB_01411d90:
  snprintf(acStack_440,0x400,__format,6);
  FUN_00d2ded4(param_1,acStack_440);
  return;
}


