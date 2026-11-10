/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00847a24; name: FUN_00847a24
 */


void FUN_00847a24(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  
  lVar1 = param_1 + 0x10;
  if (*(long *)(param_1 + 0x18) != lVar1) {
    iVar2 = *(int *)(param_1 + 0x24);
    plVar4 = (long *)(*(long *)(param_1 + 0x18) - (long)iVar2);
    do {
      iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
      if (iVar3 == param_2) {
        FUN_007e8fec(lVar1,(long)plVar4 + (long)*(int *)(param_1 + 0x24));
        (**(code **)*plVar4)(plVar4);
        FUN_0081a840(plVar4);
        FUN_0081a800(plVar4);
        return;
      }
      plVar4 = (long *)(*(long *)((long)plVar4 + (long)*(int *)(param_1 + 0x24) + 8) -
                       (long)*(int *)(param_1 + 0x24));
    } while (plVar4 != (long *)(lVar1 - iVar2));
  }
  return;
}


