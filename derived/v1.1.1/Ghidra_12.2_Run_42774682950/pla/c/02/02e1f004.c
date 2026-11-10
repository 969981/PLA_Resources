/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e1f004; name: FUN_02e1f004
 */


void FUN_02e1f004(long *param_1,undefined1 (*param_2) [16],undefined8 *param_3,undefined8 *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  
  auVar4 = NEON_ext(*param_2,*param_2,8,1);
  fVar2 = auVar4._0_4_ + (float)*(undefined8 *)*param_2;
  fVar3 = auVar4._4_4_ + (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
  *param_3 = CONCAT44(fVar3,fVar2);
  pfVar1 = (float *)*param_1;
  *param_1 = (long)(pfVar1 + 1);
  *pfVar1 = (fVar2 - fVar3) + *pfVar1;
  auVar4 = NEON_ext(*param_2,*param_2,8,1);
  fVar2 = (float)*(undefined8 *)*param_2 - auVar4._0_4_;
  fVar3 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20) - auVar4._4_4_;
  *param_4 = CONCAT44(fVar3,fVar2);
  pfVar1 = (float *)param_1[1];
  param_1[1] = (long)(pfVar1 + 1);
  *pfVar1 = fVar2 + fVar3 + *pfVar1;
  return;
}


