/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce9bb0; name: FUN_00ce9bb0
 */


undefined1  [16] FUN_00ce9bb0(void *param_1,void *param_2,long *param_3,void *param_4)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if (param_1 != param_2) {
    do {
      lVar1 = (*param_3 - (long)param_4) + 0x1000;
      lVar6 = (long)param_2 - (long)param_1 >> 5;
      lVar5 = lVar1 >> 5;
      pvVar3 = (void *)((long)param_1 + lVar1);
      if (lVar6 <= lVar5) {
        lVar5 = lVar6;
        pvVar3 = param_2;
      }
      if ((long)pvVar3 - (long)param_1 != 0) {
        memmove(param_4,param_1,(long)pvVar3 - (long)param_1);
      }
      if (lVar5 != 0) {
        uVar2 = lVar5 + ((long)param_4 - *param_3 >> 5);
        if ((long)uVar2 < 1) {
          uVar4 = 0x7f - uVar2;
          uVar2 = 0xfe - uVar2;
          if (-1 < (long)uVar4) {
            uVar2 = uVar4;
          }
          param_3 = param_3 + -((long)uVar2 >> 7);
          param_4 = (void *)(*param_3 + ((uVar2 & 0x7ffffffffffff80) - uVar4) * 0x20 + 0xfe0);
        }
        else {
          param_3 = (long *)((long)param_3 + (uVar2 >> 4 & 0xffffffffffffff8));
          param_4 = (void *)(*param_3 + (uVar2 & 0x7f) * 0x20);
        }
      }
      param_1 = pvVar3;
    } while (pvVar3 != param_2);
  }
  auVar7._8_8_ = param_4;
  auVar7._0_8_ = param_3;
  return auVar7;
}


