/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c4c80; name: FUN_032c4c80
 */


bool FUN_032c4c80(void *param_1,size_t param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  
  if (param_3 == (char *)0x0) {
    bVar1 = param_2 == 0;
  }
  else {
    sVar3 = strlen(param_3);
    if (sVar3 != param_2) {
      return false;
    }
    iVar2 = memcmp(param_1,param_3,param_2);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


