/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e78a60; name: FUN_02e78a60
 */


undefined4 FUN_02e78a60(char *param_1)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  
  if (DAT_0440a300 == (char *)0x0) {
    sVar2 = strlen(param_1);
    DAT_0440a300 = (char *)(*DAT_0442d138)(0x10,sVar2 + 1);
    if (DAT_0440a300 == (char *)0x0) {
      uVar3 = 0x34;
    }
    else {
      strcpy(DAT_0440a300,param_1);
      uVar3 = 1;
    }
  }
  else {
    iVar1 = strcmp(param_1,DAT_0440a300);
    uVar3 = 0x53;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
  }
  return uVar3;
}


