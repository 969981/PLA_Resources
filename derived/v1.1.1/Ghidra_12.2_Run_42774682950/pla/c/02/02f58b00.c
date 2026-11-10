/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f58b00; name: thunk_FUN_02f58b10
 */


void * thunk_FUN_02f58b10(int param_1,undefined8 param_2,void *param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  void *__dest;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  size_t __n;
  
  if (param_3 == (void *)0x0) {
    __n = 0;
LAB_02f58ba8:
    uVar5 = __n + (__n >> 2) + (__n >> 3);
    uVar7 = uVar5;
    if (param_4 <= __n) {
      uVar7 = param_4;
    }
    if (param_4 <= uVar5) {
      param_4 = uVar7;
    }
    __dest = (void *)FUN_02f58a70(param_1,param_2,param_4);
    if ((param_3 != (void *)0x0) && (__dest != (void *)0x0)) {
      if (param_4 <= __n) {
        __n = param_4;
      }
      memcpy(__dest,param_3,__n);
      FUN_02f58ab0(param_1,param_3);
    }
  }
  else {
    uVar5 = *(ulong *)(&DAT_0442c148 + (long)param_1 * 0x820) & (ulong)param_3;
    if (*(long *)(uVar5 + 0x40) == 0) {
      lVar2 = (long)param_1 * 0x820;
      uVar8 = (ulong)*(uint *)(uVar5 + 0x30);
      lVar6 = ((uVar5 + 0x60) - (long)param_3) + *(long *)(&DAT_0442c120 + lVar2) * uVar8;
      uVar3 = *(long *)(&DAT_0442c120 + lVar2) - 1U & param_4 + 0x60;
      uVar7 = param_4 + 0x60 >> (*(ulong *)(&DAT_0442c128 + lVar2) & 0x3f);
LAB_02f58c3c:
      __dest = (void *)(uVar5 + 0x60);
      if (uVar3 != 0) {
        uVar7 = uVar7 + 1;
      }
      __n = lVar6 - 0x60;
      if (uVar8 < uVar7 || uVar7 < uVar8 >> 1) goto LAB_02f58ba8;
    }
    else {
      if (0x7d < *(uint *)(uVar5 + 0x14)) {
        lVar2 = (long)param_1 * 0x820;
        uVar8 = (ulong)*(uint *)(uVar5 + 0x30);
        lVar6 = ((uVar5 + 0x60) - (long)param_3) + *(long *)(&DAT_0442c138 + lVar2) * uVar8;
        uVar3 = *(ulong *)(&DAT_0442c148 + (long)param_1 * 0x820) - 1 & param_4 + 0x60;
        uVar7 = param_4 + 0x60 >> (*(ulong *)(&DAT_0442c140 + lVar2) & 0x3f);
        goto LAB_02f58c3c;
      }
      uVar1 = *(uint *)(uVar5 + 0x28);
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = (uint)((int)param_3 - (int)(uVar5 + 0x60)) / uVar1;
      }
      __dest = (void *)(uVar5 + 0x60 + (ulong)(uVar4 * uVar1));
      __n = (size_t)(uVar1 + ((int)__dest - (int)param_3));
      if (uVar1 < param_4) goto LAB_02f58ba8;
    }
    if (__dest == param_3) {
      __dest = param_3;
    }
    else {
      memmove(__dest,param_3,__n);
    }
  }
  return __dest;
}


