/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091c0cc; name: FUN_0091c0cc
 */


ulong FUN_0091c0cc(long param_1,char param_2,char param_3)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  
  pcVar4 = *(char **)(param_1 + 0x70);
  pcVar1 = *(char **)(param_1 + 0x78);
  if (pcVar4 == pcVar1) {
LAB_0091c0e0:
    if (pcVar4 != pcVar1) {
      return (ulong)(byte)pcVar4[2];
    }
  }
  else {
    do {
      if ((*pcVar4 == param_2) && (pcVar4[1] == param_3)) goto LAB_0091c0e0;
      pcVar4 = pcVar4 + 3;
    } while (pcVar1 != pcVar4);
  }
  lVar2 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0));
  if (lVar2 == 0) {
    return 0;
  }
  uVar3 = FUN_00931fe0();
  return uVar3;
}


