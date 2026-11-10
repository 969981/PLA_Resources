/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002b2e20; name: FUN_002b2e20
 */


void FUN_002b2e20(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  byte *pbVar3;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) goto LAB_002b2ebc;
    uVar2 = *(ulong *)(param_1 + 8);
  }
  puVar1 = (ulong *)(uVar2 & 0xfffffffffffffffe);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)*puVar1;
  }
  if (((puVar1 == (ulong *)0x0) && (pbVar3 = *(byte **)(param_1 + 0x10), pbVar3 != PTR_DAT_043730c0)
      ) && (pbVar3 != (byte *)0x0)) {
    if ((*pbVar3 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar3);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  }
LAB_002b2ebc:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


