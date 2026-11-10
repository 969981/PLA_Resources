/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f8a3a0; name: FUN_00f8a3a0
 */


undefined8 FUN_00f8a3a0(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined1 local_18 [4];
  undefined4 local_14;
  
  local_18[0] = 1;
  local_14 = param_2;
  lVar1 = FUN_028b2084(param_1,local_18);
  return *(undefined8 *)(lVar1 + 8);
}


