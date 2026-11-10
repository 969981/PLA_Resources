/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032131c; name: FUN_0032131c
 */


void FUN_0032131c(undefined8 *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  
  uVar1 = 1L << ((param_3 & 0xffffffff) * 4 - 4 & 0x3f) | param_2;
  pcVar2 = (char *)(param_1 + 6);
  do {
    uVar3 = param_2 & 0xf;
    param_2 = param_2 >> 4;
    uVar1 = uVar1 >> 4;
    pcVar2 = pcVar2 + -1;
    *pcVar2 = "0123456789abcdef"[uVar3];
  } while (uVar1 != 0);
  *param_1 = pcVar2;
  param_1[1] = (long)(param_1 + 6) - (long)pcVar2;
  return;
}


