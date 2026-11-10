/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f2c10; name: FUN_002f2c10
 */


undefined8 FUN_002f2c10(undefined8 *param_1)

{
  if ((undefined *)*param_1 == (undefined *)0x0 || (undefined *)*param_1 == PTR_DAT_04373888) {
    return 0;
  }
  return param_1[1];
}


