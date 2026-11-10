/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00523bb8; name: FUN_00523bb8
 */


void FUN_00523bb8(byte *param_1)

{
  byte bVar1;
  
  FUN_00523c98(param_1 + 0xb0);
  FUN_003e9f80(param_1 + 0x98,*(undefined8 *)(param_1 + 0xa0));
  if ((param_1[0x80] & 1) == 0) {
    bVar1 = param_1[0x60];
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x90));
    bVar1 = param_1[0x60];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x48];
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x70));
    bVar1 = param_1[0x48];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x30];
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x58));
    bVar1 = param_1[0x30];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x10));
  return;
}


