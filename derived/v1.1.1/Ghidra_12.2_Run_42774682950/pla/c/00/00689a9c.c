/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00689a9c; name: FUN_00689a9c
 */


void FUN_00689a9c(long param_1)

{
  int iVar1;
  ulong *puVar2;
  byte *pbVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 3) {
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if ((puVar2 != (ulong *)0x0) || (pbVar3 = *(byte **)(param_1 + 0x10), pbVar3 == (byte *)0x0))
    goto LAB_00689b5c;
    FUN_0069ace8(pbVar3);
  }
  else if (iVar1 == 2) {
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if ((puVar2 != (ulong *)0x0) || (pbVar3 = *(byte **)(param_1 + 0x10), pbVar3 == (byte *)0x0))
    goto LAB_00689b5c;
    FUN_0069a0f0(pbVar3);
  }
  else {
    if (iVar1 != 1) goto LAB_00689b5c;
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if (((puVar2 != (ulong *)0x0) ||
        (pbVar3 = *(byte **)(param_1 + 0x10), pbVar3 == PTR_DAT_043730c0)) ||
       (pbVar3 == (byte *)0x0)) goto LAB_00689b5c;
    if ((*pbVar3 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar3 + 0x10));
    }
  }
  FUN_002e2ea0(PTR_LAB_04373088,pbVar3);
LAB_00689b5c:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


