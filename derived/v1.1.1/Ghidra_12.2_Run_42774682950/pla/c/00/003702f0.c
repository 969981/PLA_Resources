/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003702f0; name: FUN_003702f0
 */


void FUN_003702f0(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  void *__dest;
  long *plVar2;
  size_t __n;
  ulong uVar3;
  
  lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x40);
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  plVar2 = (long *)*param_4;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  if (plVar2[1] - *plVar2 != 0) {
    uVar3 = plVar2[1] - *plVar2 >> 2;
    if (uVar3 >> 0x3e != 0) {
                    /* try { // try from 003703a4 to 003703af has its CatchHandler @ 003703b0 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078);
    *(void **)(lVar1 + 0x20) = __dest;
    *(void **)(lVar1 + 0x28) = __dest;
    *(void **)(lVar1 + 0x30) = (void *)((long)__dest + uVar3 * 4);
    __n = plVar2[1] - *plVar2;
    if (0 < (long)__n) {
      memcpy(__dest,(void *)*plVar2,__n);
      *(size_t *)(lVar1 + 0x28) = *(long *)(lVar1 + 0x28) + __n;
    }
  }
  *(undefined4 *)(lVar1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


