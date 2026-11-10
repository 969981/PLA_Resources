/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01302da4; name: FUN_01302da4
 */


void FUN_01302da4(long *param_1,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  void *__src;
  void *pvVar6;
  void *__dest;
  ulong uVar7;
  
  if (param_1 == param_2) {
    return;
  }
  FUN_01302f68();
  __src = (void *)*param_2;
  pvVar2 = (void *)param_2[1];
  __dest = (void *)*param_1;
  uVar7 = ((long)pvVar2 - (long)__src >> 4) * -0x5555555555555555;
  if ((ulong)((param_1[2] - (long)__dest >> 4) * -0x5555555555555555) < uVar7) {
    FUN_013030c4(param_1);
    uVar3 = param_1[4];
    if (0x7ffffffffffffffe < uVar3) {
      uVar3 = 0x7fffffffffffffff;
    }
    if (uVar3 < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - *param_1 >> 4;
    if ((ulong)(lVar4 * -0x5555555555555555) < uVar3 >> 1) {
      uVar5 = lVar4 * 0x5555555555555556;
      uVar3 = uVar7;
      if (uVar7 <= uVar5) {
        uVar3 = uVar5;
      }
    }
    FUN_013031ec(param_1,uVar3);
    if (__src != pvVar2) {
      lVar4 = param_1[1];
      do {
        FUN_0130327c(param_1 + 3,lVar4,__src);
        __src = (void *)((long)__src + 0x30);
        lVar4 = param_1[1] + 0x30;
        param_1[1] = lVar4;
      } while (pvVar2 != __src);
    }
  }
  else {
    uVar3 = (param_1[1] - (long)__dest >> 4) * -0x5555555555555555;
    pvVar6 = (void *)((long)__src + (param_1[1] - (long)__dest));
    pvVar1 = pvVar6;
    if (uVar7 <= uVar3) {
      pvVar1 = pvVar2;
    }
    __n = (long)pvVar1 - (long)__src;
    if (__n != 0) {
      memmove(__dest,__src,__n);
    }
    if (uVar3 < uVar7) {
      if (pvVar1 != pvVar2) {
        lVar4 = param_1[1];
        do {
          FUN_0130327c(param_1 + 3,lVar4,pvVar6);
          pvVar6 = (void *)((long)pvVar6 + 0x30);
          lVar4 = param_1[1] + 0x30;
          param_1[1] = lVar4;
        } while (pvVar2 != pvVar6);
      }
    }
    else {
      param_1[1] = (long)((long)__dest + ((long)__n >> 4) * 0x10);
    }
  }
  return;
}


