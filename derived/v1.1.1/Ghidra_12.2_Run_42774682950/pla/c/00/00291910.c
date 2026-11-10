/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00291910; name: FUN_00291910
 */


ulong * FUN_00291910(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  void *__dest;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *param_1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0x16;
    if (param_3 < 0x17) goto LAB_00291940;
  }
  else {
    uVar4 = (*param_1 & 0xfffffffffffffffe) - 1;
    if (param_3 <= uVar4) {
LAB_00291940:
      if ((uVar3 & 1) == 0) {
        pbVar2 = (byte *)((long)param_1 + 1);
      }
      else {
        pbVar2 = (byte *)param_1[2];
      }
      if (param_3 != 0) {
        memmove(pbVar2,param_2,param_3);
      }
      pbVar2[param_3] = 0;
      if ((*param_1 & 1) == 0) {
        *(byte *)param_1 = (byte)((int)param_3 << 1);
      }
      else {
        param_1[1] = param_3;
      }
      return param_1;
    }
  }
  if (-uVar4 - 0x12 < param_3 - uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if ((uVar3 & 1) == 0) {
    pbVar2 = (byte *)((long)param_1 + 1);
  }
  else {
    pbVar2 = (byte *)param_1[2];
  }
  if (uVar4 < 0x7fffffffffffffe7) {
    uVar1 = uVar4 * 2;
    if (uVar4 * 2 <= param_3) {
      uVar1 = param_3;
    }
    uVar3 = 0x17;
    if (0x16 < uVar1) {
      uVar3 = uVar1 + 0x10 & 0xfffffffffffffff0;
    }
  }
  else {
    uVar3 = 0xffffffffffffffef;
  }
  __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
  memcpy(__dest,param_2,param_3);
  if (uVar4 != 0x16) {
    FUN_002e2ea0(PTR_LAB_04373088,pbVar2);
  }
  param_1[1] = param_3;
  param_1[2] = (ulong)__dest;
  *param_1 = uVar3 | 1;
  *(undefined1 *)((long)__dest + param_3) = 0;
  return param_1;
}


