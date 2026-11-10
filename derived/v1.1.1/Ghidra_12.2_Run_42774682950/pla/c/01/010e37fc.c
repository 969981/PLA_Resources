/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e37fc; name: FUN_010e37fc
 */


int FUN_010e37fc(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_010e630c();
  iVar2 = FUN_010e630c();
  iVar3 = FUN_010e3c70(param_1 + 0x54670,iVar2 + 0x1d);
  return iVar3 + (iVar1 - iVar2) * 0x1e;
}


