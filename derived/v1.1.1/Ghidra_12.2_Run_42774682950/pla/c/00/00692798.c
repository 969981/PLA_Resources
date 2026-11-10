/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00692798; name: FUN_00692798
 */


void FUN_00692798(long param_1)

{
  int iVar1;
  ulong *puVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 3) {
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if ((puVar2 != (ulong *)0x0) || (lVar3 = *(long *)(param_1 + 0x10), lVar3 == 0))
    goto LAB_00692838;
    FUN_00691c50(lVar3);
  }
  else if (iVar1 == 2) {
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if ((puVar2 != (ulong *)0x0) || (lVar3 = *(long *)(param_1 + 0x10), lVar3 == 0))
    goto LAB_00692838;
    FUN_00692074(lVar3);
  }
  else {
    if (iVar1 != 1) goto LAB_00692838;
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if ((puVar2 != (ulong *)0x0) || (lVar3 = *(long *)(param_1 + 0x10), lVar3 == 0))
    goto LAB_00692838;
    FUN_0069182c(lVar3);
  }
  FUN_002e2ea0(PTR_LAB_04373088,lVar3);
LAB_00692838:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


