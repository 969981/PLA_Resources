/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301274c; name: FUN_0301274c
 */


void FUN_0301274c(undefined8 *param_1,long param_2)

{
  char cVar1;
  
  FUN_03012258();
  *param_1 = &PTR_LAB_042c3810;
  FUN_03010738(param_1 + 6);
  cVar1 = *(char *)(param_2 + 0x50);
  *(char *)(param_1 + 10) = cVar1;
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  FUN_03010754(param_1 + 6,param_1,cVar1 != '\0');
  return;
}


