/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00580880; name: FUN_00580880
 */


void FUN_00580880(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  size_t __n;
  int iVar4;
  ulong uVar5;
  void *__dest;
  char local_38 [8];
  undefined1 local_30;
  undefined1 local_2f;
  char local_2e;
  char local_2d;
  undefined1 local_2c;
  char local_2b;
  char local_2a;
  undefined1 local_29;
  char local_28;
  char local_27;
  undefined1 local_26;
  
  uVar5 = *param_2;
  if ((uVar5 == 0) || (0x2a300 < uVar5 + 0x15180)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)param_1 = 6;
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 1) = 0x435455;
    return;
  }
  param_1[2] = 0;
  iVar4 = (int)uVar5;
  local_30 = 0x43;
  local_2f = 0x2d;
  if (-1 < iVar4) {
    local_2f = 0x2b;
  }
  iVar2 = iVar4 / 0x3c;
  local_38[0] = s_Fixed_UTC_03972996[0];
  local_38[1] = s_Fixed_UTC_03972996[1];
  local_38[2] = s_Fixed_UTC_03972996[2];
  local_38[3] = s_Fixed_UTC_03972996[3];
  local_38[4] = s_Fixed_UTC_03972996[4];
  local_38[5] = s_Fixed_UTC_03972996[5];
  local_38[6] = s_Fixed_UTC_03972996[6];
  local_38[7] = s_Fixed_UTC_03972996[7];
  local_26 = 0;
  iVar4 = iVar4 % 0x3c;
  *param_1 = 0;
  param_1[1] = 0;
  if (iVar4 < 1) {
    iVar1 = iVar4;
    iVar3 = iVar2;
  }
  else {
    iVar1 = iVar4 + -0x3c;
    iVar3 = iVar2 + 1;
  }
  if ((uVar5 & 0x80000000) != 0) {
    iVar2 = -iVar3;
    iVar4 = -iVar1;
  }
  local_27 = "0123456789"[iVar4 % 10];
  local_2e = "0123456789"[(iVar2 / 600) % 10];
  local_29 = 0x3a;
  local_2c = 0x3a;
  local_28 = "0123456789"[(iVar4 / 10) % 10];
  local_2d = "0123456789"[(iVar2 / 0x3c) % 10];
  local_2a = "0123456789"[(iVar2 % 0x3c) % 10];
  local_2b = "0123456789"[((iVar2 % 0x3c) / 10) % 10];
  __n = strlen(local_38);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00580ab4;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar5 | 1;
  }
  memcpy(__dest,local_38,__n);
LAB_00580ab4:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


