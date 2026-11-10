/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e54e88; name: FUN_02e54e88
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02e54e88(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_24 [4];
  
  if ((*(long *)(param_2 + 0x78) != 0) && (*(long *)(*(long *)(param_2 + 0x78) + 0x40) != 0)) {
    if (*(int *)(param_1 + 0x30) == 0) {
      lVar3 = -1;
    }
    else {
      lVar3 = *(long *)(**(long **)(param_1 + 0x28) + 0x40);
    }
    lVar4 = *(long *)(param_2 + 0x40);
    if (*(ulong *)(param_1 + (ulong)(lVar3 != lVar4) * 0x38 + 0x650) < (ulong)_DAT_042a5ca4) {
      plVar1 = (long *)FUN_02e54f44(param_3,param_1,auStack_24);
      if (plVar1 != (long *)0x0) {
        *plVar1 = param_1;
        if (lVar3 == lVar4) {
          uVar2 = *(uint *)(plVar1 + 1) | 1;
        }
        else {
          uVar2 = *(uint *)(plVar1 + 1) | 2;
        }
        *(uint *)(plVar1 + 1) = uVar2;
      }
      return 1;
    }
  }
  return 0;
}


