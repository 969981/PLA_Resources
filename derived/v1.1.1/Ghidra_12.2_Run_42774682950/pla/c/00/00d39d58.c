/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d39d58; name: FUN_00d39d58
 */


void FUN_00d39d58(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x4d0) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x4d0) = 0;
  if (*(long *)(param_1 + 0x3b8) == 0) {
    lVar1 = *(long *)(param_1 + 0x428);
  }
  else {
    (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x378) +
                                      (*(ulong *)(param_1 + 0x3b0) >> 6 & 0x3fffffffffffff8)) +
                            (*(ulong *)(param_1 + 0x3b0) & 0x1ff) * 8) + 0x50))();
    FUN_00d39140(param_1 + 0x370);
    lVar1 = *(long *)(param_1 + 0x428);
  }
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x498);
  }
  else {
    (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 1000) +
                                      (*(ulong *)(param_1 + 0x420) >> 6 & 0x3fffffffffffff8)) +
                            (*(ulong *)(param_1 + 0x420) & 0x1ff) * 8) + 0x50))();
    FUN_00d39140(param_1 + 0x3e0);
    lVar1 = *(long *)(param_1 + 0x498);
  }
  if (lVar1 != 0) {
    (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x458) +
                                      (*(ulong *)(param_1 + 0x490) >> 6 & 0x3fffffffffffff8)) +
                            (*(ulong *)(param_1 + 0x490) & 0x1ff) * 8) + 0x50))();
    FUN_00d39140(param_1 + 0x450);
  }
  *(undefined4 *)(param_1 + 0x4c0) = 6;
  return;
}


