/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032db518; name: FUN_032db518
 */


void FUN_032db518(long *param_1,undefined8 param_2)

{
  ushort *puVar1;
  ulong local_38;
  ulong local_30;
  undefined8 local_28;
  
  puVar1 = (ushort *)*param_1;
  local_28 = FUN_032e239c(param_1[1]);
  local_30 = (ulong)*puVar1;
  local_38 = (ulong)puVar1[1] & 0xfff;
  FUN_032c6810(param_2,"{}{{ size={} align={} }}",&DAT_0434b040,&local_28,&local_30,&local_38);
  return;
}


