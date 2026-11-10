/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0135a798; name: FUN_0135a798
 */


void FUN_0135a798(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar5 = param_1[4];
  lVar2 = (param_1[1] - *param_1 >> 3) * -0x5555555555555555;
  if (0x7ffffffffffffffe < uVar5) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar1 = lVar2 + 1;
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
  FUN_0135a868(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x18;
  FUN_0135a9dc(param_1,auStack_58);
  FUN_0135aadc(auStack_58);
  return;
}


