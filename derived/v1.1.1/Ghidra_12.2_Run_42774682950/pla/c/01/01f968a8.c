/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f968a8; name: FUN_01f968a8
 */


void FUN_01f968a8(long *param_1,ulong param_2)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  
  pcVar2 = (char *)param_1[1];
  lVar3 = (long)pcVar2 - *param_1 >> 7;
  uVar4 = lVar3 * -0x5555555555555555;
  if (uVar4 < param_2) {
    FUN_01f99cc4(param_1,param_2 + lVar3 * 0x5555555555555555);
    return;
  }
  if (uVar4 != param_2) {
    pcVar1 = (char *)(*param_1 + param_2 * 0x180);
    if (pcVar1 != pcVar2) {
      pcVar2 = pcVar2 + -0x180;
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
      }
      while (pcVar2 != pcVar1) {
        pcVar2 = pcVar2 + -0x180;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
        }
      }
    }
    param_1[1] = (long)pcVar1;
  }
  return;
}


