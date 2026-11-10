/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042e370; name: FUN_0042e370
 */


bool FUN_0042e370(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return false;
  }
  lVar3 = FUN_0040c5d0(param_2,*(long *)(param_1 + 0x18));
  bVar1 = false;
  if (lVar3 != 0) {
    iVar2 = FUN_0040c130(*(undefined8 *)(param_1 + 0x18));
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


