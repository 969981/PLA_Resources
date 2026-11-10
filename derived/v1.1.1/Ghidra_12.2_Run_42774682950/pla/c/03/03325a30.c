/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03325a30; name: FUN_03325a30
 */


int FUN_03325a30(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    iVar4 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x28);
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      iVar2 = iVar1 - iVar4;
      if (iVar2 == 0 || iVar1 < iVar4) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        return iVar4;
      }
      iVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
                        (*(long **)(param_1 + 0x18),*(long *)(param_1 + 0x20) + (long)iVar4,iVar2);
      iVar2 = iVar3 + iVar4;
    } while (iVar3 != 0);
  }
  return iVar4;
}


