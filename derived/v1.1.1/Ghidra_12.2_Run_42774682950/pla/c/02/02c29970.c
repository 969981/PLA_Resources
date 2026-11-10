/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c29970; name: FUN_02c29970
 */


void FUN_02c29970(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_58 [16];
  long local_48;
  undefined8 local_38;
  
  if ((ulong)((param_1[2] - param_1[1] >> 3) * -0x5555555555555555) < param_2) {
    lVar2 = (param_1[1] - *param_1 >> 3) * -0x5555555555555555;
    uVar5 = param_1[4];
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar1 = lVar2 + param_2;
    if (uVar5 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar3 * 0x5555555555555556;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if ((ulong)(lVar3 * -0x5555555555555555) < uVar5 >> 1) {
      uVar5 = uVar1;
    }
    FUN_0135a948(auStack_58,uVar5,lVar2,param_1 + 3);
    do {
      FUN_02c29a7c(local_38,local_48);
      local_48 = local_48 + 0x18;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    FUN_0135a9dc(param_1,auStack_58);
    FUN_0135aadc(auStack_58);
  }
  else {
    do {
      FUN_02c29a7c(param_1 + 3);
      param_2 = param_2 - 1;
      param_1[1] = param_1[1] + 0x18;
    } while (param_2 != 0);
  }
  return;
}


