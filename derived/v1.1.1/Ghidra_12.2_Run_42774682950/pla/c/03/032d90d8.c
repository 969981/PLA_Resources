/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d90d8; name: FUN_032d90d8
 */


int FUN_032d90d8(long *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  iVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  return iVar2 + iVar1;
}


