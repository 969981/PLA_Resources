/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108d050; name: FUN_0108d050
 */


bool FUN_0108d050(char *param_1)

{
  ushort uVar1;
  int *piVar2;
  ulong uVar3;
  
  if (*param_1 == '\0') {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x43) {
        return false;
      }
      uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x21];
      if (uVar3 == 0) {
        return false;
      }
      goto LAB_0108d078;
    }
    piVar2 = *(int **)(param_1 + 8);
    if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x43) {
      return false;
    }
    uVar1 = ((ushort *)((long)piVar2 - (long)*piVar2))[0x21];
  }
  else {
    piVar2 = *(int **)(param_1 + 0x18);
    if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x39) {
      return false;
    }
    uVar1 = ((ushort *)((long)piVar2 - (long)*piVar2))[0x1c];
  }
  uVar3 = (ulong)uVar1;
  if (uVar3 == 0) {
    return false;
  }
LAB_0108d078:
  return *(char *)((long)piVar2 + uVar3) != '\0';
}


