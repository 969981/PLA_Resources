/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00340fec; name: FUN_00340fec
 */


ulong * FUN_00340fec(long param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  void *__src;
  void *__dest;
  ulong uVar3;
  ulong *local_38;
  
  puVar1 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x18);
  if (puVar1 == (ulong *)0x0) goto LAB_003410a8;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  if ((*param_2 & 1) == 0) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    goto LAB_003410a8;
  }
  uVar2 = param_2[1];
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)param_2[2];
  if (uVar2 < 0x17) {
    __dest = (void *)((long)puVar1 + 1);
    *(char *)puVar1 = (char)((int)uVar2 << 1);
    if (uVar2 != 0) goto LAB_00341094;
  }
  else {
    uVar3 = uVar2 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
    *puVar1 = uVar3 | 1;
    puVar1[1] = uVar2;
    puVar1[2] = (ulong)__dest;
LAB_00341094:
    memcpy(__dest,__src,uVar2);
  }
  *(undefined1 *)((long)__dest + uVar2) = 0;
LAB_003410a8:
  local_38 = puVar1;
  FUN_003410d8(param_1 + 0xd0,&local_38);
  return puVar1;
}


