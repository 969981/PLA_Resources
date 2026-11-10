/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02938870; name: FUN_02938870
 */


void FUN_02938870(char *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  size_t sVar2;
  
  sVar1 = strlen(param_1);
  sVar1 = (size_t)(int)(~(uint)sVar1 + param_3);
  sVar2 = strlen(param_2);
  if ((ulong)(long)(int)sVar2 <= sVar1) {
    sVar1 = (long)(int)sVar2;
  }
  strncat(param_1,param_2,sVar1);
  return;
}


