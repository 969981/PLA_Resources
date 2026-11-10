/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0047a370; name: FUN_0047a370
 */


void FUN_0047a370(undefined4 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = *param_1;
  uStack_14 = param_1[1];
  if (param_6 == 0) {
    FUN_0047c1f0(&local_18,param_3,param_4,param_5);
  }
  else {
    FUN_0047c0f0();
  }
  *param_2 = (char)local_18;
  param_2[4] = (char)uStack_14;
  param_2[1] = (char)((uint)local_18 >> 8);
  param_2[2] = (char)((uint)local_18 >> 0x10);
  param_2[3] = (char)((uint)local_18 >> 0x18);
  param_2[5] = (char)((uint)uStack_14 >> 8);
  param_2[6] = (char)((uint)uStack_14 >> 0x10);
  param_2[7] = (char)((uint)uStack_14 >> 0x18);
  return;
}


