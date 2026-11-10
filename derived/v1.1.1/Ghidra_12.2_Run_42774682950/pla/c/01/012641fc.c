/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012641fc; name: FUN_012641fc
 */


long FUN_012641fc(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  
  sVar1 = strlen((char *)*param_1);
  sVar2 = strlen(param_2);
  sVar3 = strlen((char *)*param_3);
  return sVar2 + sVar1 + sVar3;
}


