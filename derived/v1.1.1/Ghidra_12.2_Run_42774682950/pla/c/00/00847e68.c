/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00847e68; name: FUN_00847e68
 */


void FUN_00847e68(long param_1)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x18) != param_1 + 0x10) {
    iVar1 = *(int *)(param_1 + 0x24);
    plVar3 = (long *)(*(long *)(param_1 + 0x18) - (long)iVar1);
    do {
      cVar2 = (**(code **)(*plVar3 + 0x20))(plVar3);
      if (cVar2 == ',') {
        FUN_008473d8(plVar3,0xfd);
      }
      else {
        (**(code **)(*plVar3 + 0x48))(plVar3);
      }
      plVar3 = (long *)(*(long *)((long)plVar3 + (long)*(int *)(param_1 + 0x24) + 8) -
                       (long)*(int *)(param_1 + 0x24));
    } while (plVar3 != (long *)((param_1 + 0x10) - (long)iVar1));
  }
  return;
}


