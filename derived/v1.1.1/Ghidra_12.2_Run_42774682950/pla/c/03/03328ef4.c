/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03328ef4; name: FUN_03328ef4
 */


void FUN_03328ef4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[4] = 0;
  param_1[2] = param_4;
  param_1[3] = param_5;
  if ((param_6 & 1) != 0) {
    param_1[4] = DAT_0444b3c0;
    DAT_0444b3c0 = param_1;
  }
  return;
}


