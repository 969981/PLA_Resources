/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0069602c; name: FUN_0069602c
 */


undefined1 * FUN_0069602c(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  void *__src;
  ulong uVar7;
  undefined1 uVar8;
  ulong uVar9;
  size_t __n;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 1) {
    if ((param_2 < (undefined1 *)*param_3) ||
       (param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2), *(int *)(param_1 + 0x1c) == 1)) {
      uVar8 = *(undefined1 *)(param_1 + 0x10);
    }
    else {
      uVar8 = 0;
    }
    *param_2 = 8;
    param_2[1] = uVar8;
    iVar1 = *(int *)(param_1 + 0x1c);
    param_2 = param_2 + 2;
  }
  if (iVar1 == 2) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    lVar5 = *(long *)(param_1 + 0x10);
    *param_2 = 0x12;
    uVar2 = *(uint *)(lVar5 + 0x1c);
    if (uVar2 < 0x80) {
      param_2[1] = (byte)uVar2;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar2 | 0x80;
      if (uVar2 >> 0xe == 0) {
        param_2[2] = (char)(uVar2 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar2 = uVar2 >> 7;
        do {
          puVar6 = param_2;
          uVar3 = uVar2 >> 7;
          puVar6[-1] = (byte)uVar2 | 0x80;
          param_2 = puVar6 + 1;
          uVar4 = uVar2 >> 0xe;
          uVar2 = uVar3;
        } while (uVar4 != 0);
        *puVar6 = (char)uVar3;
      }
    }
    param_2 = (undefined1 *)FUN_006025b8(lVar5,param_2,param_3);
    uVar9 = *(ulong *)(param_1 + 8);
  }
  else {
    uVar9 = *(ulong *)(param_1 + 8);
  }
  if ((uVar9 & 1) == 0) {
    return param_2;
  }
  uVar9 = uVar9 & 0xfffffffffffffffe;
  if ((*(byte *)(uVar9 + 8) & 1) == 0) {
    __src = (void *)(uVar9 + 9);
    uVar7 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
  }
  else {
    uVar7 = *(ulong *)(uVar9 + 0x10);
    __src = *(void **)(uVar9 + 0x18);
  }
  __n = (size_t)(int)uVar7;
  if (*param_3 - (long)param_2 < (long)__n) {
    puVar6 = (undefined1 *)FUN_00310fe4(param_3,__src,uVar7,param_2);
    return puVar6;
  }
  memcpy(param_2,__src,__n);
  return param_2 + __n;
}


