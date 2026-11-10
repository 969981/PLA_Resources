/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019189f0; name: FUN_019189f0
 */


long FUN_019189f0(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x1e8;
  if (param_2 != 7) {
    lVar1 = param_1 + 0xe8;
  }
  lVar2 = param_1 + 0x168;
  if (param_2 != 5) {
    lVar2 = lVar1;
  }
  return lVar2;
}


