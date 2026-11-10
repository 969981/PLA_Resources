/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00395fb8; name: FUN_00395fb8
 */


void FUN_00395fb8(long *param_1)

{
  byte *pbVar1;
  
  switch((int)param_1[1]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    if (*param_1 != 0) {
      FUN_002e2ea0(PTR_LAB_04373088);
      return;
    }
    break;
  case 9:
    pbVar1 = (byte *)*param_1;
    if (pbVar1 != (byte *)0x0) {
      if ((*pbVar1 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar1 + 0x10));
      }
LAB_00396038:
      FUN_002e2ea0(PTR_LAB_04373088,pbVar1);
      return;
    }
    break;
  case 10:
    pbVar1 = (byte *)*param_1;
    if (pbVar1 != (byte *)0x0) {
      (*(code *)**(undefined8 **)pbVar1)(pbVar1);
      goto LAB_00396038;
    }
  }
  return;
}


