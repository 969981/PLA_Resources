/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01493b80; name: FUN_01493b80
 */


undefined1  [16] FUN_01493b80(void *param_1,void *param_2,long *param_3,void *param_4)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (param_1 != param_2) {
    do {
      lVar3 = (*param_3 - (long)param_4) + 0xff0;
      lVar5 = ((long)param_2 - (long)param_1 >> 2) * -0x3333333333333333;
      lVar4 = (lVar3 >> 2) * -0x3333333333333333;
      pvVar1 = (void *)((long)param_1 + lVar3);
      if (lVar5 <= lVar4) {
        lVar4 = lVar5;
        pvVar1 = param_2;
      }
      if ((long)pvVar1 - (long)param_1 != 0) {
        memmove(param_4,param_1,(long)pvVar1 - (long)param_1);
      }
      if (lVar4 != 0) {
        uVar2 = lVar4 + ((long)param_4 - *param_3 >> 2) * -0x3333333333333333;
        if ((long)uVar2 < 1) {
          lVar3 = 0xcb - uVar2;
          lVar4 = SUB168(SEXT816(lVar3) * SEXT816(0x5f5f5f5f5f5f5f5f),8) - lVar3;
          param_3 = param_3 + ((lVar4 >> 7) - (lVar4 >> 0x3f));
          param_4 = (void *)(*param_3 + ((lVar3 / 0xcc) * 0xcc - lVar3) * 0x14 + 0xfdc);
        }
        else {
          param_3 = param_3 + uVar2 / 0xcc;
          param_4 = (void *)(*param_3 + (uVar2 % 0xcc) * 0x14);
        }
      }
      param_1 = pvVar1;
    } while (pvVar1 != param_2);
  }
  auVar6._8_8_ = param_4;
  auVar6._0_8_ = param_3;
  return auVar6;
}


