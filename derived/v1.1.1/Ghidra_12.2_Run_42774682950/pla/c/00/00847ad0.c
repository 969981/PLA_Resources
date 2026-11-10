/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00847ad0; name: FUN_00847ad0
 */


long * FUN_00847ad0(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  if (((uint)((ulong)param_2 >> 0x18) & 0xff) == (param_3 & 0xff)) {
    if (*(long *)(param_1 + 0x18) != param_1 + 0x10) {
      iVar1 = *(int *)(param_1 + 0x24);
      plVar3 = (long *)(*(long *)(param_1 + 0x18) - (long)iVar1);
      do {
        iVar2 = (**(code **)(*plVar3 + 0x18))(plVar3);
        if ((int)param_2 == iVar2) {
          return plVar3;
        }
        plVar3 = (long *)(*(long *)((long)plVar3 + (long)*(int *)(param_1 + 0x24) + 8) -
                         (long)*(int *)(param_1 + 0x24));
      } while (plVar3 != (long *)((param_1 + 0x10) - (long)iVar1));
    }
  }
  return (long *)0x0;
}


