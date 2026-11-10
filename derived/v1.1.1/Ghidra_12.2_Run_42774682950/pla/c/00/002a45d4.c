/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002a45d4; name: FUN_002a45d4
 */


ulong * FUN_002a45d4(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  void *__dest;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  ulong uVar6;
  ulong uVar7;
  
  bVar2 = (byte)*param_1;
  if ((bVar2 & 1) == 0) {
    uVar5 = (ulong)(bVar2 >> 1);
    uVar7 = 0x16;
    uVar4 = 0x16 - uVar5;
  }
  else {
    uVar5 = param_1[1];
    uVar7 = (*param_1 & 0xfffffffffffffffe) - 1;
    uVar4 = uVar7 - uVar5;
  }
  if (param_3 <= uVar4) {
    if (param_3 == 0) {
      return param_1;
    }
    if ((bVar2 & 1) == 0) {
      uVar7 = (long)param_1 + 1;
    }
    else {
      uVar7 = param_1[2];
    }
    memcpy((void *)(uVar7 + uVar5),param_2,param_3);
    uVar5 = uVar5 + param_3;
    if ((*param_1 & 1) == 0) {
      puVar3 = (undefined1 *)(uVar7 + uVar5);
      *(char *)param_1 = (char)((int)uVar5 << 1);
    }
    else {
      param_1[1] = uVar5;
      puVar3 = (undefined1 *)(uVar7 + uVar5);
    }
    goto LAB_002a4754;
  }
  uVar4 = uVar5 + param_3;
  if (-uVar7 - 0x12 < uVar4 - uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if ((bVar2 & 1) == 0) {
    __src = (void *)((long)param_1 + 1);
    if (uVar7 < 0x7fffffffffffffe7) goto LAB_002a4684;
LAB_002a4668:
    uVar6 = 0xffffffffffffffef;
  }
  else {
    __src = (void *)param_1[2];
    if (0x7fffffffffffffe6 < uVar7) goto LAB_002a4668;
LAB_002a4684:
    uVar1 = uVar7 << 1;
    if (uVar7 << 1 <= uVar4) {
      uVar1 = uVar4;
    }
    uVar6 = 0x17;
    if (0x16 < uVar1) {
      uVar6 = uVar1 + 0x10 & 0xfffffffffffffff0;
    }
  }
  __dest = (void *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar6,1);
  if (uVar5 != 0) {
    memcpy(__dest,__src,uVar5);
  }
  memcpy((void *)((long)__dest + uVar5),param_2,param_3);
  if (uVar7 + 1 != 0x17) {
    (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],__src,uVar7 + 1,1);
  }
  puVar3 = (undefined1 *)((long)__dest + uVar4);
  *param_1 = uVar6 | 1;
  param_1[1] = uVar4;
  param_1[2] = (ulong)__dest;
LAB_002a4754:
  *puVar3 = 0;
  return param_1;
}


