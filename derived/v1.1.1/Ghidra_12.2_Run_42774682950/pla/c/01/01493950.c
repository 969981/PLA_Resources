/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01493950; name: FUN_01493950
 */


undefined1  [16] FUN_01493950(void *param_1,void *param_2,long *param_3,long param_4)

{
  void *__src;
  size_t __n;
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (param_2 != param_1) {
    do {
      auVar6 = FUN_01493ac0(param_3,param_4);
      lVar2 = auVar6._8_8_ + 0x14;
      lVar3 = lVar2 - *auVar6._0_8_ >> 2;
      lVar4 = lVar3 * -0x3333333333333333;
      lVar5 = ((long)param_2 - (long)param_1 >> 2) * -0x3333333333333333;
      __src = (void *)((long)param_2 + lVar3 * -4);
      if (lVar5 <= lVar4) {
        __src = param_1;
        lVar4 = lVar5;
      }
      __n = (long)param_2 - (long)__src;
      if (__n != 0) {
        memmove((void *)(lVar2 - __n),__src,__n);
      }
      if (lVar4 != 0) {
        uVar1 = (param_4 - *param_3 >> 2) * -0x3333333333333333 - lVar4;
        if ((long)uVar1 < 1) {
          lVar2 = 0xcb - uVar1;
          lVar4 = SUB168(SEXT816(lVar2) * SEXT816(0x5f5f5f5f5f5f5f5f),8) - lVar2;
          param_3 = param_3 + ((lVar4 >> 7) - (lVar4 >> 0x3f));
          param_4 = *param_3 + ((lVar2 / 0xcc) * 0xcc - lVar2) * 0x14 + 0xfdc;
        }
        else {
          param_3 = param_3 + uVar1 / 0xcc;
          param_4 = *param_3 + (uVar1 % 0xcc) * 0x14;
        }
      }
      param_2 = __src;
    } while (__src != param_1);
  }
  auVar6._8_8_ = param_4;
  auVar6._0_8_ = param_3;
  return auVar6;
}


