/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00848058; name: FUN_00848058
 */


void FUN_00848058(long param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    if (*(long *)(param_1 + 0x18) != param_1 + 0x10) {
      iVar1 = *(int *)(param_1 + 0x24);
      plVar4 = (long *)(*(long *)(param_1 + 0x18) - (long)iVar1);
      do {
        uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
        if (((uVar3 >> 0x10 & 0xff) == 0) || (cVar2 = FUN_008473d0(plVar4), cVar2 != -3)) {
          (**(code **)(*plVar4 + 0x50))(plVar4);
        }
        plVar4 = (long *)(*(long *)((long)plVar4 + (long)*(int *)(param_1 + 0x24) + 8) -
                         (long)*(int *)(param_1 + 0x24));
      } while (plVar4 != (long *)((param_1 + 0x10) - (long)iVar1));
    }
  }
  return;
}


