/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0067e2fc; name: FUN_0067e2fc
 */


void FUN_0067e2fc(long *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = param_3 - param_2 >> 3;
  lVar1 = param_1[2];
  lVar3 = *param_1;
  if ((ulong)(lVar1 - lVar3 >> 3) < uVar5) {
    if (lVar3 != 0) {
      lVar4 = param_1[1];
      if (lVar4 == lVar3) {
        lVar4 = lVar3;
      }
      else {
        do {
          lVar4 = lVar4 + -8;
          FUN_00680b34(lVar4);
        } while (lVar3 != lVar4);
        lVar1 = param_1[2];
        lVar4 = *param_1;
      }
      param_1[1] = lVar3;
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar4,lVar1 - lVar4,8);
      lVar1 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (uVar5 >> 0x3d != 0) {
LAB_0067e458:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(lVar1 >> 3) < 0xfffffffffffffff) {
      uVar2 = lVar1 >> 2;
      if ((uVar5 <= uVar2) && (uVar5 = uVar2, uVar2 >> 0x3d != 0)) goto LAB_0067e458;
    }
    else {
      uVar5 = 0x1fffffffffffffff;
    }
    lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar5 * 8,8);
    param_1[2] = lVar3 + uVar5 * 8;
    *param_1 = lVar3;
    param_1[1] = lVar3;
    for (; param_2 != param_3; param_2 = param_2 + 8) {
      FUN_00680c08(lVar3,param_2);
      lVar3 = param_1[1] + 8;
      param_1[1] = lVar3;
    }
  }
  else {
    uVar2 = param_1[1] - lVar3 >> 3;
    lVar1 = param_2 + (param_1[1] - lVar3);
    if (uVar5 <= uVar2) {
      lVar1 = param_3;
    }
    for (; param_2 != lVar1; param_2 = param_2 + 8) {
      FUN_00680c24(lVar3,param_2);
      lVar3 = lVar3 + 8;
    }
    if (uVar2 < uVar5) {
      if (lVar1 != param_3) {
        lVar3 = param_1[1];
        do {
          FUN_00680c08(lVar3,lVar1);
          lVar1 = lVar1 + 8;
          lVar3 = param_1[1] + 8;
          param_1[1] = lVar3;
        } while (param_3 != lVar1);
      }
    }
    else {
      lVar1 = param_1[1];
      while (lVar1 != lVar3) {
        lVar1 = lVar1 + -8;
        FUN_00680b34(lVar1);
      }
      param_1[1] = lVar3;
    }
  }
  return;
}


