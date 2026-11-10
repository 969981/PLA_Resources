/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f8bd0; name: FUN_001f8bd0
 */


ulong FUN_001f8bd0(long param_1,long param_2)

{
  ulong uVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return (ulong)(param_1 == 0 && param_2 == 0);
  }
  uVar1 = FUN_001f8b48();
  return uVar1;
}


