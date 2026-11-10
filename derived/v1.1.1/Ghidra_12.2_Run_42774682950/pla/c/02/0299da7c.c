/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0299da7c; name: FUN_0299da7c
 */


undefined8 FUN_0299da7c(long param_1,char param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = (ulong)*(byte *)(param_1 + 0xd88);
  if (uVar2 != 0) {
    uVar1 = 0;
    pcVar3 = (char *)(param_1 + 0x65);
    if (param_3 == 0) {
      do {
        if (((*pcVar3 == '\0') && (*(long *)(pcVar3 + -0x5d) != 0)) &&
           (*(char *)(*(long *)(pcVar3 + -0x5d) + 0x7d) == param_2)) {
LAB_0299db08:
          param_1 = param_1 + uVar1 * 0x60;
          *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xf1ffffff | 0x6000000;
          return 1;
        }
        uVar1 = uVar1 + 1;
        pcVar3 = pcVar3 + 0x60;
      } while (uVar2 != uVar1);
    }
    else {
      do {
        if ((((*pcVar3 == '\0') && (*(int *)(pcVar3 + -0x55) == 1)) &&
            (*(int *)(pcVar3 + -0x4d) == param_3)) &&
           ((*(long *)(pcVar3 + -0x5d) != 0 &&
            (*(char *)(*(long *)(pcVar3 + -0x5d) + 0x7d) == param_2)))) goto LAB_0299db08;
        uVar1 = uVar1 + 1;
        pcVar3 = pcVar3 + 0x60;
      } while (uVar2 != uVar1);
    }
  }
  return 0;
}


