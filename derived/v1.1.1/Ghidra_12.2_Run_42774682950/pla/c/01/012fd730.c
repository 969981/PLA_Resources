/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012fd730; name: FUN_012fd730
 */


void FUN_012fd730(long param_1)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  
  local_27 = 1;
  local_38 = 0;
  local_30 = 0;
  local_38 = FUN_01300134(*(undefined8 *)(param_1 + 0x90),*(undefined2 *)(param_1 + 0xaa));
  local_30 = CONCAT44(local_30._4_4_,1);
  local_26 = 1;
  local_28 = 1;
  FUN_00d428b0(*(undefined8 *)(param_1 + 0xa0),0);
  FUN_00d67ea8(*(undefined8 *)(param_1 + 0xa0),&local_38);
  return;
}


