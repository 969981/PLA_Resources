/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091c9f0; name: FUN_0091c9f0
 */


char * FUN_0091c9f0(char *param_1,char *param_2,char *param_3)

{
  undefined2 uVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_1 != param_2) {
    while ((*param_3 != *param_1 || (param_3[1] != param_1[1]))) {
      param_1 = param_1 + 3;
      if (param_2 == param_1) {
        return param_2;
      }
    }
  }
  pcVar2 = param_1;
  if (param_1 != param_2) {
    while (pcVar3 = pcVar2, pcVar2 = pcVar3 + 3, pcVar2 != param_2) {
      if ((*param_3 != *pcVar2) || (param_3[1] != pcVar3[4])) {
        uVar1 = *(undefined2 *)pcVar2;
        param_1[2] = pcVar3[5];
        *(undefined2 *)param_1 = uVar1;
        param_1 = param_1 + 3;
      }
    }
  }
  return param_1;
}


