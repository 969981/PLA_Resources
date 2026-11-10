/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086c704; name: FUN_0086c704
 */


void FUN_0086c704(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  void *__dest;
  
  plVar3 = (long *)FUN_00612290();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (ulong)plVar3;
  if ((*param_2 & 1) == 0) {
    uVar5 = *param_2;
    uVar4 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = uVar4;
    *param_1 = uVar5;
    goto LAB_0086c7b0;
  }
  uVar5 = param_2[1];
  if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)param_2[2];
  if (uVar5 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar5 << 1);
    if (uVar5 != 0) goto LAB_0086c79c;
  }
  else {
    uVar4 = uVar5 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
    *param_1 = uVar4 | 1;
    param_1[1] = uVar5;
    param_1[2] = (ulong)__dest;
LAB_0086c79c:
    memcpy(__dest,__src,uVar5);
  }
  *(undefined1 *)((long)__dest + uVar5) = 0;
LAB_0086c7b0:
  *(short *)(param_1 + 4) = (short)param_2[4];
  plVar3 = (long *)FUN_00612290();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = (ulong)plVar3;
  lVar2 = param_2[6] - param_2[5];
  if (lVar2 != 0) {
    if (0x249249249249249 < (ulong)((lVar2 >> 4) * 0x6db6db6db6db6db7)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar2,8);
    param_1[7] = uVar4 + (lVar2 >> 4) * 0x10;
    param_1[5] = uVar4;
    param_1[6] = uVar4;
    uVar1 = param_2[6];
    for (uVar5 = param_2[5]; uVar5 != uVar1; uVar5 = uVar5 + 0x70) {
      FUN_00701ce0(uVar4,uVar5);
      uVar4 = param_1[6] + 0x70;
      param_1[6] = uVar4;
    }
  }
  uVar5 = param_2[9];
  uVar4 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar4;
  param_1[9] = uVar5;
  return;
}


