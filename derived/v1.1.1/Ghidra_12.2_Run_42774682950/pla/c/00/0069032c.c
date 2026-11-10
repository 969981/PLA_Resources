/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0069032c; name: FUN_0069032c
 */


void FUN_0069032c(long param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_00690214(param_1);
  }
  else {
    plVar2 = (long *)*plVar2;
    FUN_00690214(param_1);
  }
  if (param_2 != 0) {
    puVar1 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_2 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((ulong *)plVar2 != puVar1) {
      param_2 = FUN_0032d170(plVar2,param_2);
    }
    *(undefined4 *)(param_1 + 0x1c) = 3;
    *(long *)(param_1 + 0x10) = param_2;
  }
  return;
}


