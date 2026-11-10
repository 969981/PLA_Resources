/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e3e88; name: FUN_002e3e88
 */


ulong * FUN_002e3e88(ulong *param_1,ulong param_2,byte *param_3,ulong param_4)

{
  byte *__src;
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  void *__dest;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  bVar3 = (byte)*param_1;
  if ((bVar3 & 1) == 0) {
    uVar7 = (ulong)(bVar3 >> 1);
  }
  else {
    uVar7 = param_1[1];
  }
  if (uVar7 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_out_of_range();
  }
  if ((bVar3 & 1) == 0) {
    uVar8 = 0x16;
    uVar4 = 0x16 - uVar7;
  }
  else {
    uVar8 = (*param_1 & 0xfffffffffffffffe) - 1;
    uVar4 = uVar8 - uVar7;
  }
  if (param_4 <= uVar4) {
    if (param_4 == 0) {
      return param_1;
    }
    if ((bVar3 & 1) == 0) {
      pbVar5 = (byte *)((long)param_1 + 1);
    }
    else {
      pbVar5 = (byte *)param_1[2];
    }
    if (uVar7 - param_2 != 0) {
      __src = pbVar5 + param_2;
      pbVar2 = param_3 + param_4;
      if (pbVar5 + uVar7 <= param_3 || param_3 < __src) {
        pbVar2 = param_3;
      }
      memmove(__src + param_4,__src,uVar7 - param_2);
      param_3 = pbVar2;
    }
    memmove(pbVar5 + param_2,param_3,param_4);
    uVar7 = uVar7 + param_4;
    if ((*param_1 & 1) == 0) {
      pbVar5 = pbVar5 + uVar7;
      *(byte *)param_1 = (byte)((int)uVar7 << 1);
    }
    else {
      param_1[1] = uVar7;
      pbVar5 = pbVar5 + uVar7;
    }
    goto LAB_002e4060;
  }
  uVar4 = uVar7 + param_4;
  if (-uVar8 - 0x12 < uVar4 - uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if ((bVar3 & 1) == 0) {
    pbVar5 = (byte *)((long)param_1 + 1);
    if (uVar8 < 0x7fffffffffffffe7) goto LAB_002e3f64;
LAB_002e3f48:
    uVar6 = 0xffffffffffffffef;
  }
  else {
    pbVar5 = (byte *)param_1[2];
    if (0x7fffffffffffffe6 < uVar8) goto LAB_002e3f48;
LAB_002e3f64:
    uVar1 = uVar8 << 1;
    if (uVar8 << 1 <= uVar4) {
      uVar1 = uVar4;
    }
    uVar6 = 0x17;
    if (0x16 < uVar1) {
      uVar6 = uVar1 + 0x10 & 0xfffffffffffffff0;
    }
  }
  __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
  if (param_2 != 0) {
    memcpy(__dest,pbVar5,param_2);
  }
  memcpy((void *)((long)__dest + param_2),param_3,param_4);
  if (uVar7 - param_2 != 0) {
    memcpy((void *)((long)((long)__dest + param_2) + param_4),pbVar5 + param_2,uVar7 - param_2);
  }
  if (uVar8 != 0x16) {
    FUN_002e2ea0(PTR_LAB_04373088,pbVar5);
  }
  pbVar5 = (byte *)((long)__dest + uVar4);
  *param_1 = uVar6 | 1;
  param_1[1] = uVar4;
  param_1[2] = (ulong)__dest;
LAB_002e4060:
  *pbVar5 = 0;
  return param_1;
}


