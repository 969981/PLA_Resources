/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f2720; name: FUN_002f2720
 */


void FUN_002f2720(undefined8 *param_1,long *param_2)

{
  undefined8 *__dest;
  undefined8 *puVar1;
  size_t __n;
  long lVar2;
  undefined8 *in_x9;
  ulong uVar3;
  ulong *puVar4;
  void *__src;
  ulong uVar5;
  
  puVar4 = (ulong *)(param_2 + 1);
  lVar2 = *param_2;
  if (lVar2 == 0) {
    uVar5 = (ulong)(byte)*puVar4;
  }
  else {
    uVar5 = *puVar4;
  }
  if (uVar5 < 0x18) {
    uVar3 = 0;
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)FUN_002ebd50(uVar5 + 0x38);
    puVar1[5] = 0;
    *puVar1 = puVar1 + 5;
    *(undefined4 *)(puVar1 + 1) = 3;
    puVar1[2] = puVar1;
    puVar1[3] = &LAB_002f3f58;
    in_x9 = puVar1 + 7;
    uVar3 = uVar5 & 0xffffffffffffff00;
    puVar1[4] = puVar1;
    puVar1[6] = 1;
    lVar2 = *param_2;
  }
  param_1[1] = uVar3 | uVar5 & 0xff;
  param_1[2] = in_x9;
  *param_1 = puVar1;
  __dest = (undefined8 *)((long)param_1 + 9);
  if (puVar1 != (undefined8 *)0x0) {
    __dest = in_x9;
  }
  if (lVar2 == 0) {
    __src = (void *)((long)param_2 + 9);
    __n = (size_t)(byte)*puVar4;
  }
  else {
    __n = param_2[1];
    __src = (void *)param_2[2];
  }
  memcpy(__dest,__src,__n);
  return;
}


