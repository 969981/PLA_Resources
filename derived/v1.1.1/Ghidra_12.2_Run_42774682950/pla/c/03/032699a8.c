/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032699a8; name: FUN_032699a8
 */


void FUN_032699a8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  param_1[1] = param_2[1];
  *param_1 = *param_2;
  param_1[3] = param_3[1];
  param_1[2] = *param_3;
  param_1[5] = param_4[1];
  param_1[4] = *param_4;
  param_1[7] = param_5[1];
  local_30 = NEON_fmov(0x3f800000,4);
  param_1[6] = *param_5;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = local_30;
  FUN_03269a28(param_1,&local_18,&uStack_20,&local_28,&local_30);
  return;
}


