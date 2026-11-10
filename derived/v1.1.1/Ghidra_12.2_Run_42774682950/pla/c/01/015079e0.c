/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015079e0; name: FUN_015079e0
 */


int FUN_015079e0(long param_1)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x630) + 0xb0);
  if ((int)uVar3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    uVar3 = uVar3 & 0xffffffff;
    piVar2 = (int *)(param_1 + 0x648);
    do {
      if (*piVar2 != 0) {
        iVar1 = piVar2[-1] + iVar1;
      }
      uVar3 = uVar3 - 1;
      piVar2 = piVar2 + 4;
    } while (uVar3 != 0);
  }
  return iVar1;
}


