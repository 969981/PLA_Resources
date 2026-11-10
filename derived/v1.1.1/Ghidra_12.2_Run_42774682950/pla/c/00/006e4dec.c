/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e4dec; name: FUN_006e4dec
 */


ulong * FUN_006e4dec(ulong *param_1,ulong param_2,byte *param_3,ulong param_4)

{
  byte *__src;
  byte *pbVar1;
  byte bVar2;
  void *__dest;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  bVar2 = (byte)*param_1;
  if ((bVar2 & 1) == 0) {
    uVar6 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar6 = param_1[1];
  }
  if (uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_out_of_range();
  }
  if ((bVar2 & 1) == 0) {
    uVar7 = 0x16;
    uVar3 = 0x16 - uVar6;
  }
  else {
    uVar7 = (*param_1 & 0xfffffffffffffffe) - 1;
    uVar3 = uVar7 - uVar6;
  }
  if (param_4 <= uVar3) {
    if (param_4 == 0) {
      return param_1;
    }
    if ((bVar2 & 1) == 0) {
      pbVar4 = (byte *)((long)param_1 + 1);
    }
    else {
      pbVar4 = (byte *)param_1[2];
    }
    if (uVar6 - param_2 != 0) {
      __src = pbVar4 + param_2;
      pbVar1 = param_3 + param_4;
      if (pbVar4 + uVar6 <= param_3 || param_3 < __src) {
        pbVar1 = param_3;
      }
      memmove(__src + param_4,__src,uVar6 - param_2);
      param_3 = pbVar1;
    }
    memmove(pbVar4 + param_2,param_3,param_4);
    uVar6 = uVar6 + param_4;
    if ((*param_1 & 1) == 0) {
      pbVar4 = pbVar4 + uVar6;
      *(byte *)param_1 = (byte)((int)uVar6 << 1);
    }
    else {
      param_1[1] = uVar6;
      pbVar4 = pbVar4 + uVar6;
    }
    goto LAB_006e4fdc;
  }
  uVar3 = uVar6 + param_4;
  if (-uVar7 - 0x12 < uVar3 - uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if ((bVar2 & 1) == 0) {
    pbVar4 = (byte *)((long)param_1 + 1);
    if (0x7fffffffffffffe6 < uVar7) goto LAB_006e4eac;
LAB_006e4ec8:
    uVar5 = uVar7 << 1;
    if (uVar7 << 1 <= uVar3) {
      uVar5 = uVar3;
    }
    if (uVar5 < 0x17) {
      uVar5 = 0x17;
    }
    else {
      uVar5 = uVar5 + 0x10 & 0xfffffffffffffff0;
    }
  }
  else {
    pbVar4 = (byte *)param_1[2];
    if (uVar7 < 0x7fffffffffffffe7) goto LAB_006e4ec8;
LAB_006e4eac:
    uVar5 = 0xffffffffffffffef;
  }
  __dest = (void *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar5,1);
  if (param_2 != 0) {
    memcpy(__dest,pbVar4,param_2);
  }
  memcpy((void *)((long)__dest + param_2),param_3,param_4);
  if (uVar6 - param_2 != 0) {
    memcpy((void *)((long)((long)__dest + param_2) + param_4),pbVar4 + param_2,uVar6 - param_2);
  }
  if (uVar7 + 1 != 0x17) {
    (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],pbVar4,uVar7 + 1,1);
  }
  pbVar4 = (byte *)((long)__dest + uVar3);
  *param_1 = uVar5 | 1;
  param_1[1] = uVar3;
  param_1[2] = (ulong)__dest;
LAB_006e4fdc:
  *pbVar4 = 0;
  return param_1;
}


