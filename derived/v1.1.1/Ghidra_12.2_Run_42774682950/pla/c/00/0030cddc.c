/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030cddc; name: FUN_0030cddc
 */


void FUN_0030cddc(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  void *__src;
  void *__dest;
  ulong uVar4;
  
  if (*(int *)(param_1 + 4) == 4) {
    puVar1 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    if (puVar1 != (ulong *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    FUN_0030cc10(puVar1,*(undefined8 *)(param_1 + 8));
    goto LAB_0030cedc;
  }
  if (*(int *)(param_1 + 4) != 3) {
    return;
  }
  puVar3 = *(ulong **)(param_1 + 8);
  puVar1 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x18);
  if (puVar1 == (ulong *)0x0) goto LAB_0030cedc;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  if ((*puVar3 & 1) == 0) {
    uVar4 = puVar3[1];
    uVar2 = *puVar3;
    puVar1[2] = puVar3[2];
    puVar1[1] = uVar4;
    *puVar1 = uVar2;
    goto LAB_0030cedc;
  }
  uVar2 = puVar3[1];
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)puVar3[2];
  if (uVar2 < 0x17) {
    __dest = (void *)((long)puVar1 + 1);
    *(char *)puVar1 = (char)((int)uVar2 << 1);
    if (uVar2 != 0) goto LAB_0030cec8;
  }
  else {
    uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    *puVar1 = uVar4 | 1;
    puVar1[1] = uVar2;
    puVar1[2] = (ulong)__dest;
LAB_0030cec8:
    memcpy(__dest,__src,uVar2);
  }
  *(undefined1 *)((long)__dest + uVar2) = 0;
LAB_0030cedc:
  *(ulong **)(param_1 + 8) = puVar1;
  return;
}


