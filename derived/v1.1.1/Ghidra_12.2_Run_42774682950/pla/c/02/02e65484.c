/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e65484; name: FUN_02e65484
 */


undefined8 FUN_02e65484(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  char *pcVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  
  if ((param_2 == (char *)0x0) || (sVar1 = strlen(param_2), 0x1f < sVar1)) {
    uVar3 = 2;
  }
  else {
    if (sVar1 != 0) {
      if (param_2[sVar1 - 1] == '/') {
        return 2;
      }
      if (param_2[sVar1 - 1] == '\\') {
        return 2;
      }
    }
    if (0x1d < sVar1) {
      sVar1 = 0x1e;
    }
    pcVar2 = strncpy(&DAT_0440a0c8,param_2,sVar1 + 1);
    pcVar2[sVar1 + 1] = '\0';
    if (DAT_0440a0c0 == 0) {
      uVar3 = 1;
    }
    else {
      lVar5 = (ulong)(DAT_0440a0c0 - 1) << 4;
      iVar4 = DAT_0440a0c0;
      do {
        (**(code **)(DAT_0440a0b8 + lVar5))(&DAT_0440a0c8,((undefined8 *)(DAT_0440a0b8 + lVar5))[1])
        ;
        iVar4 = iVar4 + -1;
        lVar5 = lVar5 + -0x10;
        uVar3 = 1;
      } while (iVar4 != 0);
    }
  }
  return uVar3;
}


