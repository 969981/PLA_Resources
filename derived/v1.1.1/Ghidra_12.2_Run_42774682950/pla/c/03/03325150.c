/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03325150; name: FUN_03325150
 */


undefined4 FUN_03325150(ulong *param_1)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  undefined4 uVar4;
  char *pcVar6;
  char *pcVar5;
  
  pcVar1 = (char *)*param_1;
  pcVar2 = (char *)param_1[1];
  if (pcVar1 < pcVar2) {
    pcVar6 = pcVar1;
    do {
      pcVar5 = pcVar6 + 1;
      if (*pcVar6 == '#') {
        uVar3 = FUN_032c4c80(pcVar1,(long)pcVar2 - (long)pcVar1,"-1.#INF00");
        if ((uVar3 & 1) != 0) {
          return 0;
        }
        uVar3 = FUN_032c4c80(*param_1,param_1[1] - *param_1,"1.#INF00");
        if ((uVar3 & 1) != 0) {
          return 1;
        }
        uVar3 = FUN_032c4c80(*param_1,param_1[1] - *param_1,"-1.#QNAN0");
        if ((uVar3 & 1) != 0) {
          return 2;
        }
        uVar3 = FUN_032c4c80(*param_1,param_1[1] - *param_1,"1.#QNAN0");
        if ((uVar3 & 1) != 0) {
          return 3;
        }
        uVar3 = FUN_032c4c80(*param_1,param_1[1] - *param_1,"-1.#IND00");
        uVar4 = 4;
        if ((uVar3 & 1) == 0) {
          uVar4 = 0xffffffff;
        }
        return uVar4;
      }
      pcVar6 = pcVar5;
    } while (pcVar2 != pcVar5);
  }
  return 5;
}


