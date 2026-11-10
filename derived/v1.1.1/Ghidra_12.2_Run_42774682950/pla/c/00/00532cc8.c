/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00532cc8; name: FUN_00532cc8
 */


void FUN_00532cc8(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_00532cc8(param_1,*param_2);
  FUN_00532cc8(param_1,param_2[1]);
  FUN_002e2ea0(PTR_LAB_04373088,param_2);
  return;
}


