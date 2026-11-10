/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031f0c0; name: FUN_0031f0c0
 */


void FUN_0031f0c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  void *__src;
  size_t __n;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  
  puVar1 = PTR_DAT_04373ae0;
  if (((*PTR_DAT_04373ad8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04373ad8), iVar2 != 0))
  {
    puVar3 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x38);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[6] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      *(undefined2 *)(puVar3 + 3) = 1;
      *(undefined1 *)((long)puVar3 + 0x1a) = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
    }
    *(undefined8 **)puVar1 = puVar3;
    __cxa_guard_release(PTR_DAT_04373ad8);
  }
  plVar6 = *(long **)puVar1;
  std::mutex::lock();
  puVar3 = (undefined8 *)plVar6[1];
  if (puVar3 < (undefined8 *)plVar6[2]) {
    *puVar3 = param_1;
    puVar3[1] = param_2;
    plVar6[1] = plVar6[1] + 0x10;
    goto LAB_0031f1bc;
  }
  lVar7 = (long)puVar3 - *plVar6 >> 4;
  uVar8 = lVar7 + 1;
  if (uVar8 >> 0x3c != 0) {
                    /* try { // try from 0031f228 to 0031f22f has its CatchHandler @ 0031f230 */
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = plVar6[2] - *plVar6;
  if ((ulong)(lVar4 >> 4) < 0x7ffffffffffffff) {
    uVar5 = lVar4 >> 3;
    if (uVar8 <= uVar5) {
      uVar8 = uVar5;
    }
    if (uVar8 != 0) goto LAB_0031f164;
    lVar4 = 0;
  }
  else {
    uVar8 = 0xfffffffffffffff;
LAB_0031f164:
    lVar4 = FUN_002e2e80(PTR_FUN_04373078,uVar8 << 4);
  }
  puVar3 = (undefined8 *)(lVar4 + lVar7 * 0x10);
  *puVar3 = param_1;
  puVar3[1] = param_2;
  __src = (void *)*plVar6;
  __n = plVar6[1] - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar3 - __n),__src,__n);
    __src = (void *)*plVar6;
  }
  *plVar6 = (long)((long)puVar3 - __n);
  plVar6[1] = (long)(puVar3 + 2);
  plVar6[2] = lVar4 + uVar8 * 0x10;
  if (__src != (void *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
LAB_0031f1bc:
  std::mutex::unlock();
  return;
}


