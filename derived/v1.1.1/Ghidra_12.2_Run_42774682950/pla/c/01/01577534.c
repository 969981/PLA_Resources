/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01577534; name: FUN_01577534
 */


undefined1  [16] FUN_01577534(undefined1 param_1 [16],undefined8 param_2)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_PTR_0437a4c8;
  fVar2 = (float)(**(code **)PTR_PTR_0437a4c8)(param_2);
  auVar4._0_4_ = param_1._0_4_ + (0.0 - param_1._0_4_) * fVar2;
  fVar2 = (float)(**(code **)puVar1)(param_2);
  fVar3 = (float)(**(code **)puVar1)(param_2);
  auVar4._4_4_ = param_1._4_4_ + (0.0 - param_1._4_4_) * fVar2;
  auVar4._8_4_ = param_1._8_4_ + (0.0 - param_1._8_4_) * fVar3;
  auVar4._12_4_ = 0;
  return auVar4;
}


