/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00400220; name: FUN_00400220
 */


undefined8 FUN_00400220(undefined *param_1,undefined *param_2,undefined *param_3)

{
  if ((DAT_0439cd98 & 1) != 0) {
    return 0;
  }
  if (param_1 != (undefined *)0x0) {
    PTR_FUN_04157670 = param_1;
  }
  if (param_2 != (undefined *)0x0) {
    PTR_FUN_04157678 = param_2;
  }
  if (param_3 != (undefined *)0x0) {
    PTR_FUN_04157680 = param_3;
  }
  return 1;
}


