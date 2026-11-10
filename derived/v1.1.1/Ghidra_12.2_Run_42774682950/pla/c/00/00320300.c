/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00320300; name: FUN_00320300
 */


void FUN_00320300(int param_1,long param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  *(undefined1 *)(param_2 + 0xb) = 0;
  if (-1 < param_1) {
    pcVar2 = (char *)(param_2 + 0xb);
    do {
      pcVar2 = pcVar2 + -1;
      *pcVar2 = (char)param_1 + (char)(param_1 / 10) * -10 + '0';
      bVar1 = 9 < param_1;
      param_1 = param_1 / 10;
    } while (bVar1);
    return;
  }
  if (-10 < param_1) {
    *(char *)(param_2 + 10) = '0' - (char)param_1;
    *(undefined1 *)(param_2 + 9) = 0x2d;
    return;
  }
  iVar4 = (-10 - param_1) / 10;
  *(char *)(param_2 + 10) = (char)(-10 - param_1) + (char)iVar4 * -10 + '0';
  pcVar2 = (char *)(param_2 + 9);
  iVar4 = iVar4 + 1;
  do {
    pcVar3 = pcVar2 + -1;
    *pcVar2 = (char)iVar4 + (char)(iVar4 / 10) * -10 + '0';
    bVar1 = 9 < iVar4;
    pcVar2 = pcVar3;
    iVar4 = iVar4 / 10;
  } while (bVar1);
  *pcVar3 = '-';
  return;
}


