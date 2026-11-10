/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079d6a4; name: FUN_0079d6a4
 */


void FUN_0079d6a4(long param_1)

{
  ulong *puVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x7c) == 10) {
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 != (ulong *)0x0) || (lVar2 = *(long *)(param_1 + 0x70), lVar2 == 0))
    goto LAB_0079d718;
    FUN_0030be58(lVar2);
  }
  else {
    if (*(int *)(param_1 + 0x7c) != 9) goto LAB_0079d718;
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 != (ulong *)0x0) || (lVar2 = *(long *)(param_1 + 0x70), lVar2 == 0))
    goto LAB_0079d718;
    FUN_00602294(lVar2);
  }
  FUN_002e2ea0(PTR_LAB_04373088,lVar2);
LAB_0079d718:
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}


