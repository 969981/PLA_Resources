/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032caaf4; name: FUN_032caaf4
 */


void FUN_032caaf4(float param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  fVar1 = sinf(param_1 * 0.5);
  fVar2 = cosf(param_1 * 0.5);
  uVar3 = *param_3;
  param_2[1] = CONCAT44(fVar2,(float)param_3[1] * fVar1);
  *param_2 = CONCAT44((float)((ulong)uVar3 >> 0x20) * fVar1,(float)uVar3 * fVar1);
  return;
}


