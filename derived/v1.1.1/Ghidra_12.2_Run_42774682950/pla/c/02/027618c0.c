/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027618c0; name: FUN_027618c0
 */


long FUN_027618c0(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar1 = FUN_027618fc();
  iVar3 = (int)*(char *)(param_1 + 0x21);
  if (iVar3 < 0) {
    iVar3 = -0x80;
  }
  lVar2 = FUN_02761670(iVar3);
  return lVar2 + lVar1;
}


