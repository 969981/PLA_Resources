/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00916b98; name: FUN_00916b98
 */


long FUN_00916b98(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_001511d0(param_1,0xffffffff);
  FUN_0014ff10(param_1,0xfffffffe);
  return lVar1 + ((ulong)(uint)-(int)lVar1 & 7);
}


