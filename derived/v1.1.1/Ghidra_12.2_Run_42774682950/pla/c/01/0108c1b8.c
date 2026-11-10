/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108c1b8; name: FUN_0108c1b8
 */


void FUN_0108c1b8(undefined8 *param_1,undefined1 param_2 [16],undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  *param_3 = param_2._0_8_;
  auVar4 = NEON_ext(param_2,param_2,8,1);
  param_3[1] = auVar4._0_8_;
  uVar2 = param_3[3];
  uVar1 = *param_3;
  uVar3 = param_3[1];
  param_1[2] = param_3[2];
  param_1[3] = uVar2;
  *param_1 = uVar1;
  param_1[1] = uVar3;
  return;
}


