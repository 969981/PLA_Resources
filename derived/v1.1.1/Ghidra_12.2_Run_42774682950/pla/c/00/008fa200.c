/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008fa200; name: FUN_008fa200
 */


void FUN_008fa200(long param_1,long param_2,int *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long local_28;
  
  local_28 = param_1;
  FUN_008fe230(param_2,param_3,&local_28);
  if (*(long *)(param_1 + 0x850) != 0) {
    lVar3 = FUN_008cca50();
    lVar2 = lVar3 + 0x1c9;
    if ((*(byte *)(lVar3 + 0x1c8) & 1) != 0) {
      lVar2 = *(long *)(lVar3 + 0x1d8);
    }
    lVar3 = *(long *)(param_1 + 0x850);
    plVar1 = (long *)(param_2 + (long)*param_3 * 0x10);
    *plVar1 = lVar2;
    plVar1[1] = lVar3;
    *param_3 = *param_3 + 1;
  }
  return;
}


