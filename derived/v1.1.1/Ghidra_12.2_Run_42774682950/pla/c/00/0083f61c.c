/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083f61c; name: FUN_0083f61c
 */


undefined1 FUN_0083f61c(ulong param_1)

{
  undefined1 uVar1;
  
  uVar1 = PTR_DAT_04377f60[param_1 & 0xff];
  PTR_DAT_04377f60[param_1 & 0xff] = 0;
  return uVar1;
}


