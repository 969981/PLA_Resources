/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064a470; name: FUN_0064a470
 */


void FUN_0064a470(long param_1,char *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  plVar1 = *(long **)(lVar2 + 0x40);
  (**(code **)(*plVar1 + 0x28))(plVar1,*param_2 != '\0');
  FUN_0064a1ec(lVar2,1);
  return;
}


