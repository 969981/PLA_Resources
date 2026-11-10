/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00847ffc; name: FUN_00847ffc
 */


void FUN_00847ffc(long param_1)

{
  int iVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x18) != param_1 + 0x10) {
    iVar1 = *(int *)(param_1 + 0x24);
    plVar2 = (long *)(*(long *)(param_1 + 0x18) - (long)iVar1);
    do {
      (**(code **)(*plVar2 + 0x38))(plVar2);
      plVar2 = (long *)(*(long *)((long)plVar2 + (long)*(int *)(param_1 + 0x24) + 8) -
                       (long)*(int *)(param_1 + 0x24));
    } while (plVar2 != (long *)((param_1 + 0x10) - (long)iVar1));
  }
  return;
}


