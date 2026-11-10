/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f619a4; name: FUN_01f619a4
 */


long FUN_01f619a4(double param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  double *pdVar7;
  
  if (param_1 <= 0.0) {
    return param_2;
  }
  if (*(double *)(param_2 + 0x80) <= param_1) {
    return param_2;
  }
  lVar1 = *(long *)(param_2 + 8);
  uVar4 = *(long *)(param_2 + 0x10) - lVar1;
  uVar5 = (long)uVar4 >> 5;
  uVar2 = (int)(uVar4 >> 5) - 1;
  lVar3 = param_2 + 8;
  if ((int)uVar2 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    pdVar7 = (double *)(lVar1 + 0x10);
    do {
      if (uVar5 == uVar4) goto LAB_01f61bbc;
      if (param_1 <= *pdVar7) break;
      param_1 = param_1 - *pdVar7;
      uVar4 = uVar4 + 1;
      pdVar7 = pdVar7 + 4;
    } while (uVar2 != uVar4);
  }
  iVar6 = (int)uVar4;
  uVar4 = (ulong)iVar6;
  if (uVar5 - 1 <= uVar4) {
    return lVar3;
  }
  if ((uVar4 < uVar5) && (uVar4 + 1 < uVar5)) {
    if (param_1 <= 0.0) {
      return lVar3;
    }
    if (*(double *)(lVar1 + uVar4 * 0x20 + 0x10) <= param_1) {
      return lVar3;
    }
    if (*(int *)(param_2 + 0x88) != 1) {
      if (*(int *)(param_2 + 0x88) == 0) {
        return lVar3;
      }
      return lVar3;
    }
    if (((iVar6 < 1) || ((ulong)(long)(iVar6 + -1) < uVar5)) &&
       ((uVar5 - 1 <= uVar4 + 1 || (uVar4 + 2 < uVar5)))) {
      NEON_fmov(0x40400000,4);
      NEON_fmov(0xc0400000,4);
      return lVar3;
    }
  }
LAB_01f61bbc:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


