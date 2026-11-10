/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051fcc8; name: FUN_0051fcc8
 */


void FUN_0051fcc8(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_0051fcc8(param_1,*param_2);
  FUN_0051fcc8(param_1,param_2[1]);
  FUN_0051f7a0(param_2 + 9,param_2[10]);
  FUN_0051f4ac(param_2 + 4);
  FUN_002e2ea0(PTR_LAB_04373088,param_2);
  return;
}


