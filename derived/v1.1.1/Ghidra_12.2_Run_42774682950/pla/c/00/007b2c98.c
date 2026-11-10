/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007b2c98; name: FUN_007b2c98
 */


void FUN_007b2c98(long *param_1)

{
  undefined *puVar1;
  ulong *puVar2;
  byte *pbVar3;
  
  *param_1 = (long)(PTR_DAT_04377110 + 0x10);
  puVar1 = PTR_DAT_043730c0;
  puVar2 = (ulong *)(param_1[1] & 0xfffffffffffffffe);
  if ((param_1[1] & 1U) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (puVar2 == (ulong *)0x0) {
    pbVar3 = (byte *)param_1[2];
    if ((pbVar3 != PTR_DAT_043730c0) && (pbVar3 != (byte *)0x0)) {
      if ((*pbVar3 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar3 + 0x10));
      }
      FUN_002e2ea0(PTR_LAB_04373088,pbVar3);
    }
    pbVar3 = (byte *)param_1[3];
    if ((pbVar3 != puVar1) && (pbVar3 != (byte *)0x0)) {
      if ((*pbVar3 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar3 + 0x10));
      }
      FUN_002e2ea0(PTR_LAB_04373088,pbVar3);
      return;
    }
  }
  return;
}


