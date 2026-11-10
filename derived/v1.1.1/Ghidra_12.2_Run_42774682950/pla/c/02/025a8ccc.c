/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025a8ccc; name: FUN_025a8ccc
 */


void FUN_025a8ccc(undefined4 param_1,long param_2)

{
  FUN_025a8d10(param_2,1);
  FUN_025a8d10(0x3f800000,param_2,2);
  *(undefined4 *)(param_2 + 0xa0) = param_1;
  return;
}


