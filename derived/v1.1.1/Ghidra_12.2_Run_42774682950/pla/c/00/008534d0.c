/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008534d0; name: FUN_008534d0
 */


bool FUN_008534d0(long param_1,long param_2,char param_3)

{
  int local_30 [4];
  byte local_14 [4];
  
  if (((param_2 == 0) || (param_3 == -1)) ||
     (FUN_00854df4(local_30,*(undefined8 *)PTR_DAT_043773c0,local_14,param_2), local_30[0] != 0)) {
    return false;
  }
  return *(char *)(param_1 + (ulong)local_14[0] + 0x94) == param_3;
}


