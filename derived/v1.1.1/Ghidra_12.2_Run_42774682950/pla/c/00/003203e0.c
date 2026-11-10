/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003203e0; name: FUN_003203e0
 */


char * FUN_003203e0(uint param_1,char *param_2)

{
  char *pcVar1;
  ulong uVar2;
  
  if (param_1 < 1000000000) {
    if (param_1 < 100) {
      if (param_1 < 10) {
        *param_2 = (char)param_1 + '0';
        param_2[1] = '\0';
        return param_2 + 1;
      }
      goto LAB_00320480;
    }
    if (0x270 < param_1 >> 4) {
      if (999999 < param_1) {
        if (99999999 < param_1) {
          uVar2 = (ulong)(param_1 / 100000000);
          pcVar1 = param_2 + 1;
          *param_2 = (char)(param_1 / 100000000) + '0';
          goto LAB_00320410;
        }
        if (9999999 < param_1) goto LAB_0032041c;
        uVar2 = (ulong)(param_1 / 1000000);
        pcVar1 = param_2 + 1;
        *param_2 = (char)(param_1 / 1000000) + '0';
        goto LAB_00320434;
      }
      if (0xc34 < param_1 >> 5) goto LAB_00320440;
      uVar2 = (ulong)param_1 / 10000;
      pcVar1 = param_2 + 1;
      *param_2 = (char)(param_1 / 10000) + '0';
      goto LAB_00320458;
    }
    if (999 < param_1) goto LAB_00320460;
    uVar2 = (ulong)(param_1 & 0xffff) / 100;
    pcVar1 = param_2 + 1;
    *param_2 = (char)((param_1 & 0xffff) / 100) + '0';
  }
  else {
    uVar2 = (ulong)param_1 / 100000000;
    pcVar1 = param_2 + 2;
    *(undefined2 *)param_2 = *(undefined2 *)(&DAT_039f9e18 + uVar2 * 2);
LAB_00320410:
    param_1 = param_1 + (int)uVar2 * -100000000;
    param_2 = pcVar1;
LAB_0032041c:
    uVar2 = (ulong)param_1 / 1000000;
    pcVar1 = param_2 + 2;
    *(undefined2 *)param_2 = *(undefined2 *)(&DAT_039f9e18 + uVar2 * 2);
LAB_00320434:
    param_1 = param_1 + (int)uVar2 * -1000000;
    param_2 = pcVar1;
LAB_00320440:
    uVar2 = (ulong)param_1 / 10000;
    pcVar1 = param_2 + 2;
    *(undefined2 *)param_2 = *(undefined2 *)(&DAT_039f9e18 + uVar2 * 2);
LAB_00320458:
    param_1 = param_1 + (int)uVar2 * -10000;
    param_2 = pcVar1;
LAB_00320460:
    uVar2 = (ulong)param_1 / 100;
    pcVar1 = param_2 + 2;
    *(undefined2 *)param_2 = *(undefined2 *)(&DAT_039f9e18 + uVar2 * 2);
  }
  param_1 = param_1 + (int)uVar2 * -100;
  param_2 = pcVar1;
LAB_00320480:
  *(undefined2 *)param_2 = *(undefined2 *)(&DAT_039f9e18 + (ulong)param_1 * 2);
  param_2[2] = '\0';
  return param_2 + 2;
}


