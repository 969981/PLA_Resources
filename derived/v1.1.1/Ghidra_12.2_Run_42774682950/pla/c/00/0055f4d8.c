/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055f4d8; name: FUN_0055f4d8
 */


undefined4 FUN_0055f4d8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 local_20;
  undefined8 local_1c;
  
  local_20 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  local_58 = PTR_DAT_04374d10 + 0x10;
  local_1c = DAT_0388a6a0;
                    /* try { // try from 0055f510 to 0055f51f has its CatchHandler @ 0055f53c */
  FUN_005610c0(&local_58,param_1,0,1);
  uVar1 = local_1c._4_4_;
  FUN_0055f550(&local_58);
  return uVar1;
}


