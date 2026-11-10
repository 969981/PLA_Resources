/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0107dd48; name: FUN_0107dd48
 */


void FUN_0107dd48(long param_1)

{
  long local_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  *(undefined2 *)(param_1 + 400) = 1;
  local_38 = 1;
  local_48 = 0;
  local_40 = 0xfffffffe;
  local_58 = 0;
  local_50 = 0xfffffffe;
  FUN_008ea1e4(param_1 + 0x168,&local_58);
  FUN_008ea1e4(param_1 + 0x178,&local_48);
  *(undefined4 *)(param_1 + 0x188) = (undefined4)local_38;
  if ((local_48 != 0) && ((int)local_40 != -2)) {
    FUN_00155150(local_48,0xfff0b9d8);
  }
  if ((local_58 != 0) && ((int)local_50 != -2)) {
    FUN_00155150(local_58,0xfff0b9d8);
  }
  return;
}


