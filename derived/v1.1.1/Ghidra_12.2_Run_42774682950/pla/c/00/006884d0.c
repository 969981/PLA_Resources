/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006884d0; name: FUN_006884d0
 */


void FUN_006884d0(long param_1)

{
  int iVar1;
  ulong *puVar2;
  byte *pbVar3;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 4) {
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if (puVar2 == (ulong *)0x0) {
      FUN_0068c3a0(*(undefined8 *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x24) = 0;
      return;
    }
  }
  else if (iVar1 == 3) {
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if (puVar2 == (ulong *)0x0) {
      FUN_0068c314(*(undefined8 *)(param_1 + 0x18));
    }
  }
  else if (iVar1 == 2) {
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if (((puVar2 == (ulong *)0x0) &&
        (pbVar3 = *(byte **)(param_1 + 0x18), pbVar3 != PTR_DAT_043730c0)) &&
       (pbVar3 != (byte *)0x0)) {
      if ((*pbVar3 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar3 + 0x10));
      }
      FUN_002e2ea0(PTR_LAB_04373088,pbVar3);
      *(undefined4 *)(param_1 + 0x24) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


