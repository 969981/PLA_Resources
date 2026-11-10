/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00522f94; name: FUN_00522f94
 */


void FUN_00522f94(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_00522f94(param_1,*param_2);
  FUN_00522f94(param_1,param_2[1]);
  if (*(char *)(param_2 + 10) != '\0') {
    if ((*(byte *)(param_2 + 0xb) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_2[0xd]);
    }
    *(undefined1 *)(param_2 + 10) = 0;
  }
  if ((*(byte *)(param_2 + 7) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,param_2[9]);
  }
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,param_2[6]);
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_2);
  return;
}


