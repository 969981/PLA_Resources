/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eca81c; name: FUN_02eca81c
 */


void FUN_02eca81c(char *param_1)

{
  size_t __n;
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  if (((DAT_0440a5a8 == (char *)0x0 && DAT_042aa0f4 == '\0') && (__n = strlen(param_1), __n != 0))
     && (pcVar1 = (char *)FUN_02f59e30(0,__n + 2), DAT_0440a5a8 = pcVar1, pcVar1 != (char *)0x0)) {
    memcpy(pcVar1,param_1,__n);
    DAT_0440a5b0 = (uint)__n;
    do {
      DAT_0440a5b0 = DAT_0440a5b0 - 1;
      if (DAT_0440a5b0 == 0) break;
    } while (param_1[DAT_0440a5b0] != '.');
    uVar3 = (ulong)DAT_0440a5b0;
    memcpy(pcVar1 + uVar3 + 1,param_1 + uVar3,__n - uVar3);
    pcVar1[__n + 1] = '\0';
    pcVar1[uVar3] = '0';
    for (lVar4 = DAT_0440a7e0; lVar4 != 0; lVar4 = *(long *)(lVar4 + 8)) {
      lVar6 = *(long *)(lVar4 + 0x10);
      plVar7 = &DAT_0440a7e0;
      do {
        plVar5 = (long *)*plVar7;
        plVar7 = plVar5 + 1;
        uVar3 = (**(code **)(*plVar5 + 0x60))(plVar5);
        pcVar1 = DAT_0440a5a8;
      } while ((uVar3 & 1) == 0);
      pcVar2 = param_1;
      if (lVar6 != plVar5[2]) {
        DAT_0440a5a8[DAT_0440a5b0] = DAT_0440a5a8[DAT_0440a5b0] + '\x01';
        pcVar2 = pcVar1;
      }
      FUN_02ec841c(lVar4,pcVar2);
    }
  }
  return;
}


