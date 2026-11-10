/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dc3a0; name: FUN_032dc3a0
 */


void FUN_032dc3a0(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  uVar2 = (uint)*param_2;
  if ((((uVar2 >> 5 & 1) != 0) &&
      (uVar2 = (uVar2 & 0x1f) - (uVar2 >> 1 & 5),
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333),
      plVar3 = (long *)param_2[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2],
      plVar3 != (long *)0x0)) && (*plVar3 != 0)) {
    lVar5 = *plVar3 << 4;
    do {
      plVar4 = plVar3 + 2;
      uVar1 = FUN_032e225c(*plVar4,param_3);
      if ((uVar1 & 1) != 0) {
        lVar5 = *plVar4;
        *param_1 = plVar3[1];
        param_1[1] = lVar5;
        if (lVar5 == 0) {
          param_1[2] = 0;
          return;
        }
        uVar1 = FUN_032e3508();
        param_1[2] = uVar1;
        if ((uVar1 & 1) == 0) {
          return;
        }
        FUN_032e0c28(uVar1 & 0xfffffffffffffffe);
        return;
      }
      lVar5 = lVar5 + -0x10;
      plVar3 = plVar4;
    } while (lVar5 != 0);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


