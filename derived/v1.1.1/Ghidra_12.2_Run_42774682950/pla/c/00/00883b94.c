/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00883b94; name: FUN_00883b94
 */


bool FUN_00883b94(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_02948360(*(undefined8 *)(*(long *)(param_1 + 0x2b68) + 0x98));
  if (iVar2 == 1) {
    lVar3 = FUN_00923bbc(*(undefined8 *)(param_1 + 0x2b68));
    bVar1 = *(char *)(lVar3 + 0x229) == '\0';
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


