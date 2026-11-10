/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edc450; name: FUN_02edc450
 */


long FUN_02edc450(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 1) < *(uint *)(param_1 + 2)) {
    lVar3 = FUN_02f59e30(0,0x98);
    if (lVar3 == 0) {
      return 0;
    }
    FUN_02edb39c(lVar3);
    uVar2 = *(uint *)(param_1 + 1);
    if (uVar2 < *(uint *)((long)param_1 + 0xc)) {
      *(uint *)(param_1 + 1) = uVar2 + 1;
      plVar1 = (long *)(*param_1 + (ulong)uVar2 * 8);
      if (plVar1 != (long *)0x0) {
        *plVar1 = lVar3;
        return lVar3;
      }
    }
    FUN_02edb3d8(lVar3);
    FUN_02f59e60(0,lVar3);
  }
  return 0;
}


