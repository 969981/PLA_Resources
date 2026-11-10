/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f1318; name: FUN_001f1318
 */


undefined8
FUN_001f1318(undefined8 param_1,undefined8 param_2,undefined4 param_3,void *param_4,ulong param_5,
            long *param_6)

{
  size_t __n;
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = FUN_0020b90c(param_1,param_3);
  if ((lVar1 == 0) || (lVar3 = *(long *)(lVar1 + 0x1e8), lVar3 == 0)) {
    uVar2 = 0xfffffc7a;
  }
  else {
    uVar4 = *(ulong *)(lVar3 + 0x260);
    __n = uVar4;
    if (param_5 <= uVar4) {
      __n = param_5;
    }
    memcpy((void *)(*(long *)(lVar3 + 600) + *(long *)(lVar3 + 0x268)),param_4,__n);
    *(size_t *)(lVar3 + 0x260) = *(long *)(lVar3 + 0x260) - __n;
    *(size_t *)(lVar3 + 0x268) = *(long *)(lVar3 + 0x268) + __n;
    *(long *)(lVar1 + 0x1520) = *(long *)(lVar1 + 0x1520) + 1;
    param_6[0xbc] = param_6[0xbc] + 1;
    if (*param_6 != lVar1) {
      FUN_001e6b54(lVar1,0,6);
    }
    if (uVar4 < param_5) {
      *(size_t *)(lVar3 + 0x240) = (long)param_4 + __n;
      *(ulong *)(lVar3 + 0x248) = param_5 - __n;
    }
    else if (*param_6 == lVar1) {
      return 0;
    }
    *(undefined4 *)(*(long *)(lVar1 + 0x10) + 0x5d8) = param_3;
    uVar2 = 0xfffffdf2;
  }
  return uVar2;
}


