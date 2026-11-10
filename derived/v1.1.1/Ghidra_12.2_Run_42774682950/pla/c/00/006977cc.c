/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006977cc; name: FUN_006977cc
 */


void FUN_006977cc(long param_1)

{
  ulong *puVar1;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if (puVar1 == (ulong *)0x0) {
      FUN_0069e168(*(undefined8 *)(param_1 + 0x10));
    }
  }
  else if (*(int *)(param_1 + 0x1c) == 1) {
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if (puVar1 == (ulong *)0x0) {
      FUN_0069e0dc(*(undefined8 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


