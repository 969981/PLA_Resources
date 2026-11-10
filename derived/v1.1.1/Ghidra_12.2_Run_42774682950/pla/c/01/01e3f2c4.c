/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e3f2c4; name: FUN_01e3f2c4
 */


bool FUN_01e3f2c4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  *(ulong *)(param_2 + 8) = (ulong)*(uint *)(param_2 + 0x10);
  lVar1 = FUN_01e3f404();
  if (lVar1 == 0) {
    FUN_01e3f554(param_1,param_2);
  }
  return lVar1 == 0;
}


