/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0135e0dc; name: FUN_0135e0dc
 */


void FUN_0135e0dc(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar4 = (param_3 - param_2 >> 4) * -0x5555555555555555;
  if ((ulong)((param_1[2] - *param_1 >> 4) * -0x5555555555555555) < uVar4) {
    FUN_0135e4f4(param_1);
    uVar1 = FUN_0135e65c(param_1,uVar4);
    uVar4 = param_1[4];
    if (0x7ffffffffffffffe < uVar4) {
      uVar4 = 0x7fffffffffffffff;
    }
    if (uVar4 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    plVar5 = param_1 + 3;
    lVar2 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,uVar1 * 0x30,8);
    if (lVar2 == 0) {
      (**(code **)(*(long *)*plVar5 + 0xb8))();
    }
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar2 + uVar1 * 0x30;
    for (; param_2 != param_3; param_2 = param_2 + 0x30) {
      FUN_0135e6c0(plVar5,lVar2,param_2);
      lVar2 = param_1[1] + 0x30;
      param_1[1] = lVar2;
    }
  }
  else {
    lVar2 = param_1[1] - *param_1 >> 4;
    if ((ulong)(lVar2 * -0x5555555555555555) < uVar4) {
      lVar2 = param_2 + lVar2 * 0x10;
      FUN_0135e450(param_2,lVar2);
      if (lVar2 != param_3) {
        lVar3 = param_1[1];
        do {
          FUN_0135e6c0(param_1 + 3,lVar3,lVar2);
          lVar2 = lVar2 + 0x30;
          lVar3 = param_1[1] + 0x30;
          param_1[1] = lVar3;
        } while (param_3 != lVar2);
      }
    }
    else {
      lVar3 = FUN_0135e450(param_2,param_3);
      lVar2 = param_1[1];
      while (lVar2 != lVar3) {
        plVar5 = (long *)(lVar2 + -0x18);
        lVar2 = lVar2 + -0x30;
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x20))();
        }
      }
      param_1[1] = lVar3;
    }
  }
  return;
}


