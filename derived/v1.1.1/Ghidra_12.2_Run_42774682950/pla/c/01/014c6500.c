/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c6500; name: FUN_014c6500
 */


void FUN_014c6500(long param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_014c5dc8(param_1,0);
  FUN_014c6580(param_1,0);
  FUN_014c6634(param_1,0);
  local_40 = 0x3d329c02f3035d38;
  pcStack_38 = "anime_L_scr_01_waza_detaile_in";
  local_30 = 0x1e;
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_40);
  }
  *(undefined4 *)(param_1 + 0x5bc) = 5;
  return;
}


