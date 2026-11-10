/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01904460; name: FUN_01904460
 */


float FUN_01904460(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if (*(float *)(param_2 + 0x104) <= param_1) {
    fVar4 = 0.0;
  }
  else if (param_1 < *(float *)(param_2 + 0xa4)) {
    fVar4 = 1.0;
    if (*(float *)(param_2 + 0x44) < param_1) {
      if (*(float *)(param_2 + 0x160) < param_1) {
        fVar4 = *(float *)(param_2 + 0x15c);
      }
      else {
        lVar2 = 0;
        do {
          lVar1 = param_2 + lVar2;
          if ((*(float *)(lVar1 + 0x168) <= param_1) && (param_1 <= *(float *)(lVar1 + 0x160))) {
            if (ABS(param_1 - *(float *)(lVar1 + 0x168)) <= 1.1920929e-07) {
              return *(float *)(lVar1 + 0x164);
            }
            fVar4 = *(float *)(lVar1 + 0x15c);
            if (ABS(param_1 - *(float *)(lVar1 + 0x160)) <= 1.1920929e-07) {
              return fVar4;
            }
            fVar3 = *(float *)(lVar1 + 0x164);
            goto LAB_019044ec;
          }
          lVar2 = lVar2 + 8;
        } while (lVar2 != 0x3f8);
      }
    }
  }
  else if (*(float *)(param_2 + 0x560) < param_1) {
    fVar4 = *(float *)(param_2 + 0x55c);
  }
  else {
    lVar2 = 0;
    do {
      lVar1 = param_2 + lVar2;
      if ((*(float *)(lVar1 + 0x568) <= param_1) && (param_1 <= *(float *)(lVar1 + 0x560))) {
        if (ABS(param_1 - *(float *)(lVar1 + 0x568)) <= 1.1920929e-07) {
          return *(float *)(lVar1 + 0x564);
        }
        fVar4 = *(float *)(lVar1 + 0x55c);
        if (ABS(param_1 - *(float *)(lVar1 + 0x560)) <= 1.1920929e-07) {
          return fVar4;
        }
        fVar3 = *(float *)(lVar1 + 0x564);
LAB_019044ec:
        return (fVar4 + fVar3) * 0.5;
      }
      lVar2 = lVar2 + 8;
    } while (lVar2 != 0x3f8);
    lVar2 = *(long *)(param_2 + 0x130);
    if (*(long *)(lVar2 + 0x10) == *(long *)(lVar2 + 8)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    fVar4 = (float)(*(double *)(*(long *)(lVar2 + 8) + 0x10) / *(double *)(lVar2 + 0x80));
  }
  return fVar4;
}


