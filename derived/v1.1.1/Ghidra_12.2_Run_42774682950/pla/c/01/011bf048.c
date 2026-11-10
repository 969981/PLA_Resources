/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011bf048; name: FUN_011bf048
 */


void FUN_011bf048(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[2];
  param_2[1] = param_1[1];
  param_2[2] = uVar2;
  *param_2 = uVar1;
  return;
}


