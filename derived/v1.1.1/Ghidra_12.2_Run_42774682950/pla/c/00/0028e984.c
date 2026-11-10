/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028e984; name: FUN_0028e984
 */


void FUN_0028e984(long param_1,undefined8 param_2)

{
  byte bVar1;
  char *pcVar2;
  ulong uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x4d);
  if ((ulong)bVar1 != 0) {
    uVar3 = 0;
    do {
      *(ulong *)(*(long *)(param_1 + 0x28) + uVar3 * 8) = *(long *)(param_1 + 0x20) + uVar3 * 0x48;
      pcVar2 = *(char **)(*(long *)(param_1 + 0x28) + uVar3 * 8);
      if (*pcVar2 != '\0') {
        FUN_008773a4(pcVar2,param_2);
        FUN_008772bc(pcVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != bVar1);
  }
  return;
}


