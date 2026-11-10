/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c4b60; name: FUN_032c4b60
 */


undefined8 FUN_032c4b60(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  sVar2 = strlen(param_1);
  sVar3 = strlen(param_2);
  iVar1 = (int)sVar3;
  if ((int)sVar2 < iVar1) {
LAB_032c4b90:
    uVar4 = 0;
  }
  else {
    if (0 < iVar1) {
      param_1 = param_1 + ((int)sVar2 - iVar1);
      uVar5 = sVar3 & 0xffffffff;
      do {
        if (*param_1 != *param_2) goto LAB_032c4b90;
        param_1 = param_1 + 1;
        uVar5 = uVar5 - 1;
        param_2 = param_2 + 1;
      } while (uVar5 != 0);
    }
    uVar4 = 1;
  }
  return uVar4;
}


