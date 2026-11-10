/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea5ce8; name: FUN_02ea5ce8
 */


undefined4 FUN_02ea5ce8(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    uVar2 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x50) == 0) {
      iVar1 = 0x3c;
    }
    else {
      iVar1 = FUN_02ea5d88(param_1);
      iVar1 = iVar1 + 0x3c;
      plVar3 = *(long **)(param_1 + 0x60);
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 0x5c) + iVar1;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x5c);
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3,param_1,0x44);
    (**(code **)(**(long **)(param_1 + 0x60) + 0x20))();
    *(undefined8 *)(param_1 + 0x60) = 0;
    FUN_02ea5c74(param_1);
    FUN_02f59e60(0,param_1);
  }
  return uVar2;
}


