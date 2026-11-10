/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333de70; name: FUN_0333de70
 */


void FUN_0333de70(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  
  *param_1 = param_4;
  param_1[1] = 0;
  param_1[9] = 0;
  if (param_2 == 0) {
    param_1[1] = param_1 + 2;
    param_1[9] = param_5;
  }
  else if (param_3 != 0) {
    lVar1 = FUN_032cf470((long)((int)param_3 + (int)param_2),0);
    *(undefined8 *)(lVar1 + param_2 + -0x10) = param_5;
    param_1[1] = lVar1 + param_2;
  }
  return;
}


