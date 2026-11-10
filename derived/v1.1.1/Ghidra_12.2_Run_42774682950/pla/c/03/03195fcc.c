/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03195fcc; name: FUN_03195fcc
 */


bool FUN_03195fcc(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  float fVar1;
  undefined1 auStack_30 [16];
  undefined4 local_18 [2];
  
  local_18[0] = *param_2;
  fVar1 = (float)FUN_03196014(param_1,local_18,param_3,param_4,auStack_30);
  return fVar1 < (float)*param_5 * (float)*param_5;
}


