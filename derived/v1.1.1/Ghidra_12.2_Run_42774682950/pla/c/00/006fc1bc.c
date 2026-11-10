/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006fc1bc; name: FUN_006fc1bc
 */


ulong * FUN_006fc1bc(long *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  void *__src;
  void *__dest;
  ulong uVar4;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    puVar1 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x38);
    if (puVar1 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    FUN_006fcc74(puVar1,param_2);
    return puVar1;
  }
  if (*(long *)(lVar2 + 0x70) != 0) {
    FUN_0032cf88(lVar2,0,0x38);
  }
  puVar1 = (ulong *)FUN_0032cea0(lVar2,0x38);
  lVar2 = *param_1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if ((*param_2 & 1) == 0) {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar4;
    *puVar1 = uVar3;
    goto LAB_006fc2b0;
  }
  uVar3 = param_2[1];
  if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)param_2[2];
  if (uVar3 < 0x17) {
    __dest = (void *)((long)puVar1 + 1);
    *(char *)puVar1 = (char)((int)uVar3 << 1);
    if (uVar3 != 0) goto LAB_006fc29c;
  }
  else {
    uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    *puVar1 = uVar4 | 1;
    puVar1[1] = uVar3;
    puVar1[2] = (ulong)__dest;
LAB_006fc29c:
    memcpy(__dest,__src,uVar3);
  }
  *(undefined1 *)((long)__dest + uVar3) = 0;
LAB_006fc2b0:
  FUN_00635a74(lVar2,puVar1);
  FUN_0030bdd8(puVar1 + 3,*param_1);
  FUN_0030c5d8(puVar1 + 3,param_2 + 3);
  return puVar1;
}


