/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e28fc; name: FUN_032e28fc
 */


void FUN_032e28fc(undefined8 param_1,char *param_2,uint param_3)

{
  size_t sVar1;
  char *pcVar2;
  
  if (param_2 == (char *)0x0) {
    pcVar2 = (char *)0x0;
  }
  else {
    sVar1 = strlen(param_2);
    pcVar2 = param_2 + sVar1;
  }
  FUN_032e2950(param_1,param_2,pcVar2,param_3 & 1);
  return;
}


