/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bf7bf0; name: FUN_00bf7bf0
 */


void FUN_00bf7bf0(undefined8 *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float __x;
  undefined8 uVar3;
  
  fVar1 = (float)FUN_0095d8f0(*(undefined4 *)((long)param_1 + 0xc));
  fVar1 = fVar1 + fVar1;
  if (ABS(fVar1) <= 1.1920929e-07) {
    fVar1 = 0.0;
    uVar3 = *(undefined8 *)(PTR_DAT_0437a100 + 8);
    *param_2 = *(undefined8 *)PTR_DAT_0437a100;
    param_2[1] = uVar3;
  }
  else {
    __x = 1.0 - *(float *)((long)param_1 + 0xc) * *(float *)((long)param_1 + 0xc);
    fVar2 = SQRT(__x);
    if (NAN(fVar2)) {
      fVar2 = sqrtf(__x);
    }
    uVar3 = *param_1;
    param_2[1] = (ulong)(uint)((float)param_1[1] / fVar2);
    *param_2 = CONCAT44((float)((ulong)uVar3 >> 0x20) / fVar2,(float)uVar3 / fVar2);
  }
  *param_3 = fVar1;
  return;
}


