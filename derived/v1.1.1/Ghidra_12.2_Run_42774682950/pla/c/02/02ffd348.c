/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffd348; name: FUN_02ffd348
 */


undefined8 FUN_02ffd348(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  uVar2 = param_1[2];
  param_2[1] = CONCAT44(((float)((ulong)param_1[1] >> 0x20) + (float)((ulong)param_1[3] >> 0x20)) *
                        0.5,((float)param_1[1] + (float)param_1[3]) * 0.5);
  *param_2 = CONCAT44(((float)((ulong)uVar3 >> 0x20) + (float)((ulong)uVar2 >> 0x20)) * 0.5,
                      ((float)uVar3 + (float)uVar2) * 0.5);
  uVar3 = CONCAT44(((float)((ulong)param_1[2] >> 0x20) - (float)((ulong)*param_1 >> 0x20)) * 0.5,
                   ((float)param_1[2] - (float)*param_1) * 0.5);
  fVar1 = ((float)param_1[3] - (float)param_1[1]) * 0.5;
  uVar3 = NEON_fminp(uVar3,uVar3,4);
  uVar3 = NEON_fmin(CONCAT44(fVar1,fVar1),uVar3,4);
  *(int *)((long)param_2 + 0xc) = (int)uVar3;
  return 0;
}


