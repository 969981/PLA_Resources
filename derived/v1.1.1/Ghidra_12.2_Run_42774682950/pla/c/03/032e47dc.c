/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e47dc; name: FUN_032e47dc
 */


void FUN_032e47dc(undefined8 *param_1,long *param_2,char *param_3)

{
  long lVar1;
  ulong uVar2;
  size_t sVar3;
  char *pcVar4;
  
  if (*param_2 != 0) {
    lVar1 = param_2[1];
    if (param_3 == (char *)0x0) {
      pcVar4 = (char *)0x0;
    }
    else {
      sVar3 = strlen(param_3);
      pcVar4 = param_3 + sVar3;
    }
    uVar2 = FUN_032e2950(lVar1,param_3,pcVar4,1);
    if (1 < uVar2) {
      FUN_032e4868(param_1,param_2,uVar2);
      return;
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


