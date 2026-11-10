/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce9a20; name: FUN_00ce9a20
 */


undefined1  [16] FUN_00ce9a20(void *param_1,void *param_2,long *param_3,long param_4)

{
  long lVar1;
  size_t __n;
  void *__src;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if (param_2 != param_1) {
    do {
      while( true ) {
        auVar7 = FUN_00ce9b40(param_3,param_4);
        lVar1 = auVar7._8_8_ + 0x20;
        lVar4 = lVar1 - *auVar7._0_8_;
        lVar6 = (long)param_2 - (long)param_1 >> 5;
        lVar5 = lVar4 >> 5;
        __src = (void *)((long)param_2 - lVar4);
        if (lVar6 <= lVar5) {
          lVar5 = lVar6;
          __src = param_1;
        }
        __n = (long)param_2 - (long)__src;
        if (__n != 0) {
          memmove((void *)(lVar1 - __n),__src,__n);
        }
        param_2 = __src;
        if (lVar5 != 0) break;
LAB_00ce9a88:
        if (__src == param_1) goto LAB_00ce9b18;
      }
      uVar2 = (param_4 - *param_3 >> 5) - lVar5;
      if ((long)uVar2 < 1) {
        uVar3 = 0x7f - uVar2;
        uVar2 = 0xfe - uVar2;
        if (-1 < (long)uVar3) {
          uVar2 = uVar3;
        }
        param_3 = param_3 + -((long)uVar2 >> 7);
        param_4 = *param_3 + ((uVar2 & 0x7ffffffffffff80) - uVar3) * 0x20 + 0xfe0;
        goto LAB_00ce9a88;
      }
      param_3 = (long *)((long)param_3 + (uVar2 >> 4 & 0xffffffffffffff8));
      param_4 = *param_3 + (uVar2 & 0x7f) * 0x20;
    } while (__src != param_1);
  }
LAB_00ce9b18:
  auVar7._8_8_ = param_4;
  auVar7._0_8_ = param_3;
  return auVar7;
}


