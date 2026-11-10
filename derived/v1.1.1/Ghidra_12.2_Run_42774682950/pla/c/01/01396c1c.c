/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01396c1c; name: FUN_01396c1c
 */


void FUN_01396c1c(undefined8 *param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  size_t __n;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  void *__dest;
  ulong uVar6;
  
  __dest = (void *)*param_1;
  uVar5 = ((long)param_3 - (long)param_2 >> 3) * -0xb81702e05c0b817;
  if ((ulong)((param_1[2] - (long)__dest >> 3) * -0xb81702e05c0b817) < uVar5) {
    FUN_01396e2c(param_1);
    uVar2 = FUN_01395f48(param_1,uVar5);
    FUN_01396928(param_1,uVar2);
    if (param_2 != param_3) {
      lVar3 = param_1[1];
      do {
        FUN_013969b4(param_1 + 3,lVar3,param_2);
        param_2 = (void *)((long)param_2 + 0x2c8);
        lVar3 = param_1[1] + 0x2c8;
        param_1[1] = lVar3;
      } while (param_3 != param_2);
    }
  }
  else {
    uVar6 = (param_1[1] - (long)__dest >> 3) * -0xb81702e05c0b817;
    pvVar4 = (void *)((long)param_2 + (param_1[1] - (long)__dest));
    pvVar1 = pvVar4;
    if (uVar5 <= uVar6) {
      pvVar1 = param_3;
    }
    __n = (long)pvVar1 - (long)param_2;
    if (__n != 0) {
      memmove(__dest,param_2,__n);
    }
    if (uVar6 < uVar5) {
      if (pvVar1 != param_3) {
        lVar3 = param_1[1];
        do {
          FUN_013969b4(param_1 + 3,lVar3,pvVar4);
          pvVar4 = (void *)((long)pvVar4 + 0x2c8);
          lVar3 = param_1[1] + 0x2c8;
          param_1[1] = lVar3;
        } while (param_3 != pvVar4);
      }
    }
    else {
      param_1[1] = (void *)((long)__dest + ((long)__n >> 3) * 8);
    }
  }
  return;
}


