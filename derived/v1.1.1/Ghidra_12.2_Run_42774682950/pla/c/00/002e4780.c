/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e4780; name: FUN_002e4780
 */


ulong FUN_002e4780(ulong *param_1,char *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_1 != (ulong *)0x0) && (uVar3 = *param_1, uVar3 != 0)) {
    uVar2 = param_1[1];
    uVar4 = 0;
    do {
      iVar1 = strcmp(*(char **)(uVar2 + 8),param_2);
      if (iVar1 == 0) {
        return uVar2;
      }
      uVar4 = uVar4 + 1;
      uVar2 = uVar2 + 0x20;
    } while (uVar4 < uVar3);
  }
  return 0;
}


