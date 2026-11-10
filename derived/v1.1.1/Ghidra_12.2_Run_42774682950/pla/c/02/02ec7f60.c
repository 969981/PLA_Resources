/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec7f60; name: FUN_02ec7f60
 */


void FUN_02ec7f60(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x148) == 0) {
    plVar2 = *(long **)(param_1 + 0x150);
  }
  else {
    FUN_02ea5ce8();
    *(undefined8 *)(param_1 + 0x148) = 0;
    plVar2 = *(long **)(param_1 + 0x150);
  }
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    *(undefined4 *)(plVar2 + 2) = 0;
    *(undefined4 *)(plVar2 + 1) = 0;
    *plVar2 = 0;
    if (lVar1 != 0) {
      FUN_02f59e70(5);
    }
    if (*(long *)(param_1 + 0x150) != 0) {
      FUN_02f59e60(5);
    }
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  return;
}


