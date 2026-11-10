/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00703644; name: FUN_00703644
 */


void FUN_00703644(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  size_t __n;
  byte *pbVar3;
  void *__dest;
  ulong uVar4;
  byte local_a0;
  undefined7 uStack_9f;
  undefined8 local_90;
  long *plStack_88;
  byte local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_04376490;
  if (*(undefined **)(param_2 + 0x20) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 0x20);
  }
  FUN_0070d948(param_1,puVar1);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    pbVar3 = pbVar3 + 1;
  }
  else {
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  FUN_0070e760(&local_a0,pbVar3);
  *(undefined8 *)(param_1 + 0x70) = uStack_58;
  *(undefined8 *)(param_1 + 0x68) = local_60;
  *(undefined8 *)(param_1 + 0x80) = uStack_48;
  *(undefined8 *)(param_1 + 0x78) = uStack_50;
  uStack_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  if ((local_80 & 1) == 0) {
    if ((local_a0 & 1) != 0) goto LAB_007036f8;
LAB_007036bc:
    pbVar3 = *(byte **)(param_2 + 0x18);
    if ((*pbVar3 & 1) != 0) goto LAB_00703724;
LAB_007036cc:
    pbVar3 = pbVar3 + 1;
  }
  else {
    (**(code **)(*plStack_68 + 0x18))
              (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
    if ((local_a0 & 1) == 0) goto LAB_007036bc;
LAB_007036f8:
    (**(code **)(*plStack_88 + 0x18))
              (plStack_88,local_90,CONCAT71(uStack_9f,local_a0) & 0xfffffffffffffffe,1);
    pbVar3 = *(byte **)(param_2 + 0x18);
    if ((*pbVar3 & 1) == 0) goto LAB_007036cc;
LAB_00703724:
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  plVar2 = (long *)FUN_00612290();
  *(long **)(param_1 + 0xa0) = plVar2;
  __n = strlen((char *)pbVar3);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 007037c4 to 007037cb has its CatchHandler @ 007037cc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)(param_1 + 0x89);
    *(char *)(param_1 + 0x88) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_007037a8;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar4,1);
    *(ulong *)(param_1 + 0x88) = uVar4 | 1;
    *(size_t *)(param_1 + 0x90) = __n;
    *(void **)(param_1 + 0x98) = __dest;
  }
  memcpy(__dest,pbVar3,__n);
LAB_007037a8:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


