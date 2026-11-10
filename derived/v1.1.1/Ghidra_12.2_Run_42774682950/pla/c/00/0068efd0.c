/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0068efd0; name: FUN_0068efd0
 */


void FUN_0068efd0(long param_1)

{
  ulong *puVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x24) == 3) {
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if (puVar1 == (ulong *)0x0) {
      FUN_0069dce8(*(undefined8 *)(param_1 + 0x18));
    }
  }
  else if (*(int *)(param_1 + 0x24) == 2) {
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 == (ulong *)0x0) && (lVar2 = *(long *)(param_1 + 0x18), lVar2 != 0)) {
      FUN_006993c4(lVar2);
      FUN_002e2ea0(PTR_LAB_04373088,lVar2);
      *(undefined4 *)(param_1 + 0x24) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


