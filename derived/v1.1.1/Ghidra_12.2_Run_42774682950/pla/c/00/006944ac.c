/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006944ac; name: FUN_006944ac
 */


undefined1 * FUN_006944ac(undefined *param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  void *__src;
  ulong uVar6;
  ulong uVar7;
  size_t __n;
  
  if ((param_1 != PTR_DAT_04375cf8) && (lVar4 = *(long *)(param_1 + 0x10), lVar4 != 0)) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      lVar4 = *(long *)(param_1 + 0x10);
    }
    *param_2 = 10;
    uVar1 = *(uint *)(lVar4 + 0x30);
    if (uVar1 < 0x80) {
      param_2[1] = (byte)uVar1;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar1 | 0x80;
      if (uVar1 >> 0xe == 0) {
        param_2[2] = (char)(uVar1 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar1 = uVar1 >> 7;
        do {
          puVar5 = param_2;
          uVar2 = uVar1 >> 7;
          puVar5[-1] = (byte)uVar1 | 0x80;
          param_2 = puVar5 + 1;
          uVar3 = uVar1 >> 0xe;
          uVar1 = uVar2;
        } while (uVar3 != 0);
        *puVar5 = (char)uVar2;
      }
    }
    param_2 = (undefined1 *)FUN_0068dc9c(lVar4,param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  if ((*(byte *)(uVar7 + 8) & 1) == 0) {
    __src = (void *)(uVar7 + 9);
    uVar6 = (ulong)(*(byte *)(uVar7 + 8) >> 1);
  }
  else {
    uVar6 = *(ulong *)(uVar7 + 0x10);
    __src = *(void **)(uVar7 + 0x18);
  }
  __n = (size_t)(int)uVar6;
  if (*param_3 - (long)param_2 < (long)__n) {
    puVar5 = (undefined1 *)FUN_00310fe4(param_3,__src,uVar6,param_2);
    return puVar5;
  }
  memcpy(param_2,__src,__n);
  return param_2 + __n;
}


