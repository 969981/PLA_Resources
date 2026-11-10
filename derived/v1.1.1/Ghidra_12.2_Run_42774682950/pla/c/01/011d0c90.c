/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d0c90; name: FUN_011d0c90
 */


void FUN_011d0c90(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  lVar1 = param_2[3];
  lVar2 = param_2[4];
  lVar4 = param_2[5];
  lVar3 = param_2[6];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = lVar4;
  param_1[6] = lVar3;
  param_1[3] = lVar1;
  param_1[4] = lVar2;
  lVar1 = param_2[1] - *param_2;
  if (lVar1 != 0) {
    uVar5 = param_1[4];
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 < (ulong)((lVar1 >> 2) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    plVar6 = param_1 + 3;
    lVar4 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,lVar1,4);
    if (lVar4 == 0) {
      (**(code **)(*(long *)*plVar6 + 0xb8))();
    }
    param_1[2] = lVar4 + (lVar1 >> 2) * 4;
    *param_1 = lVar4;
    param_1[1] = lVar4;
    lVar2 = param_2[1];
    for (lVar1 = *param_2; lVar1 != lVar2; lVar1 = lVar1 + 0xc) {
      FUN_00967a80(plVar6,lVar4,lVar1);
      lVar4 = param_1[1] + 0xc;
      param_1[1] = lVar4;
    }
  }
  return;
}


