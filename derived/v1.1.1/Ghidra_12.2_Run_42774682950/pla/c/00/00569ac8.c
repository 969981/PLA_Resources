/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00569ac8; name: FUN_00569ac8
 */


void FUN_00569ac8(undefined8 *param_1,undefined8 param_2)

{
  undefined *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  char local_30;
  undefined4 local_2c;
  undefined8 *local_28;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_30 = '\0';
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  local_68 = PTR_DAT_04374d98 + 0x10;
  local_2c = 100000;
  uStack_58 = 0;
  local_60 = 0;
                    /* try { // try from 00569b14 to 00569b3f has its CatchHandler @ 00569b58 */
  local_28 = param_1;
  FUN_005610c0(&local_68,param_2,6,0);
  if (local_30 != '\0') {
    FUN_002e4094(param_1," [truncated]",0xc);
  }
  FUN_0055f550(&local_68);
  return;
}


