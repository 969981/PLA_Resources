/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b369dc; name: FUN_01b369dc
 */


long FUN_01b369dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  size_t sVar1;
  long lVar2;
  
  sVar1 = strlen((char *)*param_1);
  lVar2 = FUN_01b36a70(param_2,param_3);
  return sVar1 + lVar2 + 1;
}


