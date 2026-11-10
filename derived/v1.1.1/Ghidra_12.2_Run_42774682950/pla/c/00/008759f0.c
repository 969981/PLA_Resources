/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008759f0; name: FUN_008759f0
 */


ulong * FUN_008759f0(ulong *param_1,ulong *param_2)

{
  ulong __n;
  byte *__src;
  byte bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  byte *__dest;
  
  if (param_1 != param_2) {
    __n = param_2[1];
    __src = (byte *)param_2[2];
    bVar1 = (byte)*param_1;
    if (((byte)*param_2 & 1) == 0) {
      __src = (byte *)((long)param_2 + 1);
      __n = (ulong)(byte)((byte)*param_2 >> 1);
    }
    if ((bVar1 & 1) == 0) {
      uVar2 = 0x16;
      lVar3 = __n - 0x16;
      if (0x15 < __n && lVar3 != 0) goto LAB_00875a54;
    }
    else {
      uVar2 = (*param_1 & 0xfffffffffffffffe) - 1;
      lVar3 = __n - uVar2;
      if (uVar2 <= __n && lVar3 != 0) {
LAB_00875a54:
        if ((bVar1 & 1) == 0) {
          uVar4 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar4 = param_1[1];
        }
        FUN_00876378(param_1,uVar2,lVar3,uVar4,0,uVar4,__n);
        return param_1;
      }
    }
    if ((bVar1 & 1) == 0) {
      __dest = (byte *)((long)param_1 + 1);
    }
    else {
      __dest = (byte *)param_1[2];
    }
    if (__n != 0) {
      memmove(__dest,__src,__n);
    }
    __dest[__n] = 0;
    if ((*param_1 & 1) != 0) {
      param_1[1] = __n;
      return param_1;
    }
    *(byte *)param_1 = (byte)((int)__n << 1);
  }
  return param_1;
}


