/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00466cc0; name: FUN_00466cc0
 */


uint FUN_00466cc0(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  FUN_00456b10(param_1,0xffffffff,0xffffffff);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xb0);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0xb4);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0xb8);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_1 + 0xbc);
  }
  return *(uint *)(param_1 + 0xbc) & 1;
}


