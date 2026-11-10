/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0036b20c; name: FUN_0036b20c
 */


ulong * FUN_0036b20c(ulong *param_1,ulong param_2,ulong param_3,byte *param_4,ulong param_5)

{
  ulong uVar1;
  byte *__dest;
  byte bVar2;
  ulong uVar3;
  size_t sVar4;
  byte *__dest_00;
  void *__dest_01;
  size_t __n;
  size_t __n_00;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  
  bVar2 = (byte)*param_1;
  if ((bVar2 & 1) == 0) {
    uVar6 = (ulong)(bVar2 >> 1);
    uVar3 = uVar6 - param_2;
  }
  else {
    uVar6 = param_1[1];
    uVar3 = uVar6 - param_2;
  }
  if (uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_out_of_range();
  }
  __n_00 = uVar3;
  if (param_3 <= uVar3) {
    __n_00 = param_3;
  }
  if ((bVar2 & 1) == 0) {
    uVar8 = 0x16;
    uVar1 = (__n_00 - uVar6) + 0x16;
  }
  else {
    uVar8 = (*param_1 & 0xfffffffffffffffe) - 1;
    uVar1 = (__n_00 - uVar6) + uVar8;
  }
  if (uVar1 < param_5) {
    uVar3 = (uVar6 - __n_00) + param_5;
    if (-uVar8 - 0x12 < uVar3 - uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if ((bVar2 & 1) == 0) {
      pbVar7 = (byte *)((long)param_1 + 1);
      if (uVar8 < 0x7fffffffffffffe7) goto LAB_0036b384;
LAB_0036b318:
      uVar5 = 0xffffffffffffffef;
    }
    else {
      pbVar7 = (byte *)param_1[2];
      if (0x7fffffffffffffe6 < uVar8) goto LAB_0036b318;
LAB_0036b384:
      uVar1 = uVar8 << 1;
      if (uVar8 << 1 <= uVar3) {
        uVar1 = uVar3;
      }
      uVar5 = 0x17;
      if (0x16 < uVar1) {
        uVar5 = uVar1 + 0x10 & 0xfffffffffffffff0;
      }
    }
    __dest_01 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
    if (param_2 != 0) {
      memcpy(__dest_01,pbVar7,param_2);
    }
    memcpy((void *)((long)__dest_01 + param_2),param_4,param_5);
    sVar4 = (uVar6 - __n_00) - param_2;
    if (sVar4 != 0) {
      memcpy((void *)((long)((long)__dest_01 + param_2) + param_5),pbVar7 + __n_00 + param_2,sVar4);
    }
    if (uVar8 != 0x16) {
      FUN_002e2ea0(PTR_LAB_04373088,pbVar7);
    }
    pbVar7 = (byte *)((long)__dest_01 + uVar3);
    *param_1 = uVar5 | 1;
    param_1[1] = uVar3;
    param_1[2] = (ulong)__dest_01;
    goto LAB_0036b420;
  }
  sVar4 = param_5;
  if ((bVar2 & 1) == 0) {
    pbVar7 = (byte *)((long)param_1 + 1);
    if (__n_00 != param_5) goto LAB_0036b28c;
joined_r0x0036b4ac:
    __n_00 = sVar4;
    __n = param_5;
    if (__n != 0) {
      __dest_00 = pbVar7 + param_2;
      param_5 = __n;
      goto LAB_0036b340;
    }
  }
  else {
    pbVar7 = (byte *)param_1[2];
    if (__n_00 == param_5) goto joined_r0x0036b4ac;
LAB_0036b28c:
    __n = uVar3 - __n_00;
    sVar4 = __n_00;
    if (__n == 0) goto joined_r0x0036b4ac;
    __dest = pbVar7 + param_2;
    if (__n_00 <= param_5) {
      if ((__dest < param_4) && (param_4 < pbVar7 + uVar6)) {
        if (param_4 < __dest + __n_00) {
          if (__n_00 != 0) {
            memmove(__dest,param_4,__n_00);
          }
          param_2 = __n_00 + param_2;
          param_4 = param_4 + param_5;
          param_5 = param_5 - __n_00;
          __n_00 = 0;
        }
        else {
          param_4 = param_4 + (param_5 - __n_00);
        }
      }
      memmove(pbVar7 + param_5 + param_2,pbVar7 + __n_00 + param_2,__n);
      sVar4 = __n_00;
      goto joined_r0x0036b4ac;
    }
    if (param_5 != 0) {
      memmove(__dest,param_4,param_5);
    }
    __dest_00 = __dest + param_5;
    param_4 = __dest + __n_00;
LAB_0036b340:
    memmove(__dest_00,param_4,__n);
    __n = param_5;
  }
  uVar6 = (__n - __n_00) + uVar6;
  if ((*param_1 & 1) == 0) {
    pbVar7 = pbVar7 + uVar6;
    *(byte *)param_1 = (byte)((int)uVar6 << 1);
  }
  else {
    param_1[1] = uVar6;
    pbVar7 = pbVar7 + uVar6;
  }
LAB_0036b420:
  *pbVar7 = 0;
  return param_1;
}


