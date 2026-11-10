/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053efc0; name: FUN_0053efc0
 */


undefined8 FUN_0053efc0(ulong *param_1,ulong param_2,long param_3)

{
  uint uVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = param_1[2];
  uVar5 = *param_1;
  uVar1 = (uint)uVar5 & 7;
  uVar6 = (ulong)uVar1;
  uVar2 = uVar3;
  if (uVar3 < 5) {
    uVar2 = 4;
  }
  do {
    uVar4 = uVar2;
    uVar2 = uVar4 << 1;
  } while (uVar4 < param_2);
  uVar2 = (uVar4 << uVar6) + 0xf & 0xfffffffffffffff0;
  __dest = *(void **)(param_3 + 8);
  if ((ulong)(*(long *)(param_3 + 0x10) - (long)__dest) < uVar2) {
    __dest = (void *)FUN_0053f330(param_3);
  }
  else {
    *(ulong *)(param_3 + 8) = (long)__dest + uVar2;
  }
  if ((uVar3 << uVar6 == 0) || (__dest == (void *)0x0)) {
    if (__dest == (void *)0x0) {
      return 0;
    }
  }
  else {
    memcpy(__dest,(void *)(uVar5 & 0xfffffffffffffff8),uVar3 << uVar6);
  }
  if (4 < uVar1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("elem_size_lg2 <= 4","external/upb/upb/msg.c",0x1a,"tag_arrptr");
  }
  *param_1 = (ulong)__dest | uVar6;
  param_1[2] = uVar4;
  return 1;
}


