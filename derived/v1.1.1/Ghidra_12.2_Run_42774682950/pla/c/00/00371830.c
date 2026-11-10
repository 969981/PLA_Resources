/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00371830; name: FUN_00371830
 */


undefined8 FUN_00371830(undefined8 param_1,long param_2,long *param_3)

{
  char *local_158;
  undefined8 uStack_150;
  undefined1 *local_128;
  long local_120;
  undefined1 auStack_118 [32];
  undefined *local_f8;
  undefined8 uStack_f0;
  char *local_c8;
  undefined8 uStack_c0;
  undefined1 *local_98;
  long local_90;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined8 uStack_60;
  byte local_38 [16];
  undefined8 local_28;
  
  if (param_2 < 0x80000000) {
    return 1;
  }
  local_68 = "Input size too large: ";
  uStack_60 = 0x16;
  local_98 = auStack_88;
  local_90 = FUN_00320710(param_2,auStack_88);
  local_90 = local_90 - (long)auStack_88;
  local_c8 = " bytes";
  uStack_c0 = 6;
  local_f8 = &DAT_03904a63;
  uStack_f0 = 3;
  local_128 = auStack_118;
  local_120 = FUN_00320570(0x7fffffff,auStack_118);
  local_120 = local_120 - (long)auStack_118;
  local_158 = " bytes.";
  uStack_150 = 7;
  FUN_003216b0(local_38,&local_68,&local_98,&local_c8,&local_f8,&local_128,&local_158);
                    /* try { // try from 003718f4 to 00371907 has its CatchHandler @ 00371948 */
  (**(code **)(*param_3 + 0x10))(param_3,0xffffffff,0,local_38);
  if ((local_38[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_28);
  }
  return 0;
}


