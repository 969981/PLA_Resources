/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0052353c; name: FUN_0052353c
 */


void FUN_0052353c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_0052353c(param_1,*param_2);
  FUN_0052353c(param_1,param_2[1]);
  FUN_0051fcc8(param_2 + 0xd,param_2[0xe]);
  FUN_005244dc(param_2 + 10,param_2[0xb]);
  if ((*(byte *)(param_2 + 7) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,param_2[9]);
  }
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,param_2[6]);
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_2);
  return;
}


