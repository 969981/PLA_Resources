/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011323a4; name: FUN_011323a4
 */


bool FUN_011323a4(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_011323d0(param_1 + 0x6c);
  bVar1 = false;
  if (lVar2 != 0) {
    bVar1 = *(char *)(lVar2 + 6) != '\0';
  }
  return bVar1;
}


