/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00586d70; name: FUN_00586d70
 */


void FUN_00586d70(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *__src;
  size_t __n;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  void *__dest;
  ulong uVar7;
  
  puVar4 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)((param_1[2] - (long)puVar4 >> 4) * -0x5555555555555555)) {
    do {
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      param_2 = param_2 - 1;
      puVar4[2] = 0x7b2;
      *(undefined4 *)(puVar4 + 3) = 0x101;
      *(undefined1 *)((long)puVar4 + 0x1c) = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[4] = 0x7b2;
      *(undefined4 *)(puVar4 + 5) = 0x101;
      *(undefined1 *)((long)puVar4 + 0x2c) = 0;
      puVar4 = (undefined8 *)(param_1[1] + 0x30);
      param_1[1] = (long)puVar4;
    } while (param_2 != 0);
    return;
  }
  lVar2 = (long)puVar4 - *param_1 >> 4;
  uVar7 = 0x555555555555555;
  uVar1 = lVar2 * -0x5555555555555555 + param_2;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1 >> 4;
  if ((ulong)(lVar5 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
    uVar6 = lVar5 * 0x5555555555555556;
    uVar7 = uVar1;
    if (uVar1 <= uVar6) {
      uVar7 = uVar6;
    }
    if (uVar7 == 0) {
      lVar5 = 0;
      goto LAB_00586e0c;
    }
  }
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,uVar7 * 0x30);
LAB_00586e0c:
  puVar3 = (undefined8 *)(lVar5 + lVar2 * 0x10);
  puVar4 = puVar3;
  do {
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    param_2 = param_2 - 1;
    puVar4[2] = 0x7b2;
    *(undefined4 *)(puVar4 + 3) = 0x101;
    *(undefined1 *)((long)puVar4 + 0x1c) = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[4] = 0x7b2;
    *(undefined4 *)(puVar4 + 5) = 0x101;
    *(undefined1 *)((long)puVar4 + 0x2c) = 0;
    puVar4 = puVar4 + 6;
  } while (param_2 != 0);
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  __dest = (void *)((long)puVar3 - __n);
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
    __src = (void *)*param_1;
  }
  *param_1 = (long)__dest;
  param_1[1] = (long)puVar4;
  param_1[2] = lVar5 + uVar7 * 0x30;
  if (__src == (void *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


