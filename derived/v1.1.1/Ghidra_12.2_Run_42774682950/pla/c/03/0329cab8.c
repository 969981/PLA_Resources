/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329cab8; name: FUN_0329cab8
 */


void FUN_0329cab8(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (0x1f < iVar1) {
    return;
  }
  if (iVar1 != 0) {
    lVar2 = (long)iVar1 << 3;
    pcVar3 = (char *)(param_1 + 3);
    do {
      if ((pcVar3[-1] == *(char *)((long)param_2 + 2)) && (*pcVar3 == *(char *)((long)param_2 + 3)))
      {
        return;
      }
      lVar2 = lVar2 + -8;
      pcVar3 = pcVar3 + 8;
    } while (lVar2 != 0);
  }
  *(int *)(param_1 + 0x100) = iVar1 + 1;
  *(undefined8 *)(param_1 + (long)iVar1 * 8) = *param_2;
  return;
}


