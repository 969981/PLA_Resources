/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00631648; name: FUN_00631648
 */


undefined1 * FUN_00631648(long param_1,undefined1 *param_2,long *param_3)

{
  undefined1 *puVar1;
  void *__src;
  ulong uVar2;
  undefined1 uVar3;
  ulong uVar4;
  size_t __n;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    if (param_2 < (undefined1 *)*param_3) {
      uVar3 = 1;
    }
    else {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      uVar3 = *(undefined1 *)(param_1 + 0x10);
    }
    *param_2 = 8;
    param_2[1] = uVar3;
    param_2 = param_2 + 2;
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    if (param_2 < (undefined1 *)*param_3) {
      uVar3 = 1;
    }
    else {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      uVar3 = *(undefined1 *)(param_1 + 0x11);
    }
    *param_2 = 0x10;
    param_2[1] = uVar3;
    param_2 = param_2 + 2;
  }
  if (*(char *)(param_1 + 0x12) != '\0') {
    if (param_2 < (undefined1 *)*param_3) {
      uVar3 = 1;
    }
    else {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      uVar3 = *(undefined1 *)(param_1 + 0x12);
    }
    *param_2 = 0x18;
    param_2[1] = uVar3;
    param_2 = param_2 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  if ((*(byte *)(uVar4 + 8) & 1) == 0) {
    __src = (void *)(uVar4 + 9);
    uVar2 = (ulong)(*(byte *)(uVar4 + 8) >> 1);
  }
  else {
    uVar2 = *(ulong *)(uVar4 + 0x10);
    __src = *(void **)(uVar4 + 0x18);
  }
  __n = (size_t)(int)uVar2;
  if (*param_3 - (long)param_2 < (long)__n) {
    puVar1 = (undefined1 *)FUN_00310fe4(param_3,__src,uVar2,param_2);
    return puVar1;
  }
  memcpy(param_2,__src,__n);
  return param_2 + __n;
}


