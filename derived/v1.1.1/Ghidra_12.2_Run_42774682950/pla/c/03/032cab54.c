/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cab54; name: FUN_032cab54
 */


void FUN_032cab54(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  
  fVar3 = (float)*param_3 * 0.5;
  fVar1 = sinf(fVar3);
  fVar3 = cosf(fVar3);
  uVar2 = *param_2;
  param_1[1] = CONCAT44(fVar3,(float)param_2[1] * fVar1);
  *param_1 = CONCAT44((float)((ulong)uVar2 >> 0x20) * fVar1,(float)uVar2 * fVar1);
  return;
}


