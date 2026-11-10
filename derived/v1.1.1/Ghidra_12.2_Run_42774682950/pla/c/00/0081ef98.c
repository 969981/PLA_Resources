/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081ef98; name: FUN_0081ef98
 */


void FUN_0081ef98(char *param_1,long param_2,char *param_3)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  ulong uVar5;
  
  if (param_3 < param_1) {
    if (*param_3 == '\0') {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        lVar1 = uVar5 + 1;
        uVar5 = uVar5 + 1;
      } while (param_3[lVar1] != '\0');
      if ((long)uVar5 < 0) {
        return;
      }
    }
    pcVar2 = param_1 + uVar5;
    pcVar4 = param_3 + uVar5;
    lVar1 = ~uVar5 + param_2;
    do {
      if (pcVar2 <= param_1 + param_2 + -1) {
        if (lVar1 == 0) {
          param_1[param_2 + -1] = '\0';
        }
        else {
          *pcVar2 = *pcVar4;
        }
      }
      pcVar4 = pcVar4 + -1;
      pcVar2 = pcVar2 + -1;
      lVar1 = lVar1 + 1;
    } while (param_3 <= pcVar4);
  }
  else if (param_3 != param_1) {
    if ((param_1 + param_2 + -1 != param_1) && (cVar3 = *param_3, cVar3 != '\0')) {
      param_2 = param_2 + -2;
      pcVar2 = param_1;
      do {
        param_3 = param_3 + 1;
        param_1 = pcVar2 + 1;
        *pcVar2 = cVar3;
        cVar3 = *param_3;
        if (param_2 == 0) break;
        param_2 = param_2 + -1;
        pcVar2 = param_1;
      } while (cVar3 != '\0');
    }
    *param_1 = '\0';
  }
  return;
}


