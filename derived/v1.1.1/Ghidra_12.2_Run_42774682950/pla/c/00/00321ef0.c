/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00321ef0; name: FUN_00321ef0
 */


undefined8 FUN_00321ef0(ulong *param_1,undefined8 param_2)

{
  ulong __n;
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined1 *__dest;
  ulong uVar6;
  ulong local_58;
  ulong uStack_50;
  undefined1 *local_48;
  
  if (((byte)*param_1 & 1) == 0) {
    pbVar2 = (byte *)((long)param_1 + 1);
    uVar5 = (ulong)(byte)((byte)*param_1 >> 1);
    pbVar4 = pbVar2 + uVar5;
    if (uVar5 != 0) {
LAB_00321f24:
      do {
        if (*pbVar2 != 0x20) break;
        pbVar2 = pbVar2 + 1;
      } while (pbVar2 < pbVar4);
    }
  }
  else {
    pbVar2 = (byte *)param_1[2];
    pbVar4 = pbVar2 + param_1[1];
    if (0 < (long)param_1[1]) goto LAB_00321f24;
  }
  do {
    pbVar3 = pbVar4;
    if (pbVar3 <= pbVar2) {
      return 0;
    }
    pbVar4 = pbVar3 + -1;
  } while (pbVar3[-1] == 0x20);
  bVar1 = *pbVar2;
  *(bool *)param_2 = bVar1 == 0x2d;
  if (((bVar1 == 0x2d) || (*pbVar2 == 0x2b)) && (pbVar2 = pbVar2 + 1, pbVar3 <= pbVar2)) {
    return 0;
  }
  bVar1 = (byte)*param_1;
  if ((bVar1 & 1) == 0) {
    pbVar4 = (byte *)((long)param_1 + 1);
  }
  else {
    pbVar4 = (byte *)param_1[2];
  }
  uStack_50 = 0;
  local_48 = (undefined1 *)0x0;
  uVar6 = (long)pbVar2 - (long)pbVar4;
  local_58 = 0;
  uVar5 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar5 = param_1[1];
  }
  if (uVar5 < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_out_of_range();
  }
  pbVar4 = (byte *)param_1[2];
  if ((bVar1 & 1) == 0) {
    pbVar4 = (byte *)((long)param_1 + 1);
  }
  __n = uVar5 - uVar6;
  if ((ulong)((long)pbVar3 - (long)pbVar2) <= uVar5 - uVar6) {
    __n = (long)pbVar3 - (long)pbVar2;
  }
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_58 = (ulong)(byte)((int)__n << 1);
    __dest = (undefined1 *)((ulong)&local_58 | 1);
    if (__n == 0) {
      *__dest = 0;
      bVar1 = (byte)*param_1;
      goto joined_r0x0032206c;
    }
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
    local_58 = uVar5 | 1;
    uStack_50 = __n;
    local_48 = __dest;
  }
  memcpy(__dest,pbVar4 + uVar6,__n);
  __dest[__n] = 0;
  bVar1 = (byte)*param_1;
joined_r0x0032206c:
  if ((bVar1 & 1) == 0) {
    *(undefined2 *)param_1 = 0;
  }
  else {
    *(undefined1 *)param_1[2] = 0;
    param_1[1] = 0;
    if ((*param_1 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_1[2]);
      *param_1 = 0;
    }
  }
  param_1[2] = (ulong)local_48;
  param_1[1] = uStack_50;
  *param_1 = local_58;
  return 1;
}


