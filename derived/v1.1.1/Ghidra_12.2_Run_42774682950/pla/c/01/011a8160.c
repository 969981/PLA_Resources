/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a8160; name: FUN_011a8160
 */


ulong FUN_011a8160(long param_1,int param_2)

{
  ulong uVar1;
  
  thunk_FUN_00d2ec48(param_1 + 0x180,&DAT_043bdb00 + (long)param_2 * 4);
  uVar1 = FUN_0280f49c();
  return uVar1 >> 0x20;
}


