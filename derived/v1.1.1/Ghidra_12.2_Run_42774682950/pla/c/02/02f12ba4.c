/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f12ba4; name: FUN_02f12ba4
 */


void FUN_02f12ba4(long param_1,uint *param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  float local_30;
  float local_2c;
  float local_28;
  
  lVar4 = *(long *)(param_1 + 0x48);
  FUN_02f12e1c(&local_30,param_3,lVar4 + (ulong)*param_2 * 0xc,lVar4 + (ulong)param_2[1] * 0xc,
               lVar4 + (ulong)param_2[2] * 0xc);
  if (((-1e-05 <= local_30) && (-1e-05 <= local_2c)) && (-1e-05 <= local_28)) {
    fVar5 = local_2c * local_2c + local_30 * local_30 + local_28 * local_28;
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (fVar5 < 1e-38) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < -1e-38;
        bVar2 = fVar5 == -1e-38;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      fVar5 = 1.0 / fVar5;
      *(float *)(param_4 + (ulong)*param_2 * 4) =
           *(float *)(param_4 + (ulong)*param_2 * 4) + fVar5 * local_30 * local_30;
      *(float *)(param_4 + (ulong)param_2[1] * 4) =
           *(float *)(param_4 + (ulong)param_2[1] * 4) + fVar5 * local_2c * local_2c;
      *(float *)(param_4 + (ulong)param_2[2] * 4) =
           *(float *)(param_4 + (ulong)param_2[2] * 4) + fVar5 * local_28 * local_28;
    }
  }
  return;
}


