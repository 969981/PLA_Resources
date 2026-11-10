/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034b0f4; name: FUN_0034b0f4
 */


void FUN_0034b0f4(ulong *param_1,undefined *param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  size_t __n;
  uint uVar3;
  long lVar4;
  void *__dest;
  char *__s;
  ulong uVar5;
  undefined *local_50;
  undefined *local_48;
  undefined **local_40;
  undefined **ppuStack_38;
  undefined ***local_28;
  
  puVar2 = *(ulong **)(param_2 + 0x30);
  if ((puVar2 != (ulong *)0x0) &&
     (local_48 = PTR_LAB_04373a98, local_50 = param_2, *puVar2 != 0xffffffffffffffff)) {
    local_40 = &local_48;
    local_28 = &local_40;
    ppuStack_38 = &local_50;
    std::__call_once(puVar2,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  uVar3 = *(uint *)(param_2 + 0x38);
  if (uVar3 == 0xe) {
    puVar2 = *(ulong **)(param_2 + 0x30);
    if ((puVar2 != (ulong *)0x0) && (local_48 = param_2, *puVar2 != 0xffffffffffffffff)) {
      ppuStack_38 = &local_48;
      local_40 = (undefined **)PTR_LAB_04373a98;
      local_28 = &local_40;
      std::__call_once(puVar2,&local_28,(_func_void_void_ptr *)PTR_LAB_04373b88);
    }
    lVar4 = *(long *)(param_2 + 0x70);
LAB_0034b1f0:
    FUN_0034b2f0(param_1,&DAT_0389ff53,*(undefined8 *)(lVar4 + 8));
    return;
  }
  if (uVar3 == 0xb) {
    puVar2 = *(ulong **)(param_2 + 0x30);
    if ((puVar2 != (ulong *)0x0) && (local_48 = param_2, *puVar2 != 0xffffffffffffffff)) {
      ppuStack_38 = &local_48;
      local_40 = (undefined **)PTR_LAB_04373a98;
      local_28 = &local_40;
      std::__call_once(puVar2,&local_28,(_func_void_void_ptr *)PTR_LAB_04373b88);
    }
    lVar4 = *(long *)(param_2 + 0x68);
    goto LAB_0034b1f0;
  }
  puVar2 = *(ulong **)(param_2 + 0x30);
  if (puVar2 != (ulong *)0x0) {
    local_48 = PTR_LAB_04373a98;
    local_50 = param_2;
    if (*puVar2 != 0xffffffffffffffff) {
      local_40 = &local_48;
      local_28 = &local_40;
      ppuStack_38 = &local_50;
      std::__call_once(puVar2,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    uVar3 = *(uint *)(param_2 + 0x38);
  }
  puVar1 = PTR_PTR_04373bc8;
  param_1[2] = 0;
  __s = *(char **)(puVar1 + (ulong)uVar3 * 8);
  *param_1 = 0;
  param_1[1] = 0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0034b2c8;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar5 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_0034b2c8:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


