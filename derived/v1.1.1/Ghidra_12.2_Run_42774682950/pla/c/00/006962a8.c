/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006962a8; name: FUN_006962a8
 */


void FUN_006962a8(long param_1)

{
  ulong *puVar1;
  byte *pbVar2;
  
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 3:
  case 4:
  case 5:
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 != (ulong *)0x0) || (pbVar2 = *(byte **)(param_1 + 0x18), pbVar2 == (byte *)0x0))
    goto switchD_006962d8_default;
    FUN_002ded3c(pbVar2);
    break;
  case 6:
  case 7:
  case 8:
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if (((puVar1 != (ulong *)0x0) ||
        (pbVar2 = *(byte **)(param_1 + 0x18), pbVar2 == PTR_DAT_043730c0)) ||
       (pbVar2 == (byte *)0x0)) goto switchD_006962d8_default;
    if ((*pbVar2 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar2 + 0x10));
    }
    break;
  default:
    goto switchD_006962d8_default;
  }
  FUN_002e2ea0(PTR_LAB_04373088,pbVar2);
switchD_006962d8_default:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


