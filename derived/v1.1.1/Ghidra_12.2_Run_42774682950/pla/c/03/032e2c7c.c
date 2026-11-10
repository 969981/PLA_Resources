/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e2c7c; name: FUN_032e2c7c
 */


void FUN_032e2c7c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  ulong *puVar4;
  long *plVar5;
  long lVar6;
  
LAB_032e2cac:
  uVar2 = (uint)*param_2;
  if ((((uVar2 >> 5 & 1) != 0) &&
      (uVar2 = (uVar2 & 0x1f) - (uVar2 >> 1 & 5),
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333),
      plVar3 = (long *)param_2[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2],
      plVar3 != (long *)0x0)) && (*plVar3 != 0)) {
    lVar6 = *plVar3 << 4;
    do {
      plVar5 = plVar3 + 2;
      uVar1 = FUN_032e225c(*plVar5,param_3);
      if ((uVar1 & 1) != 0) {
        lVar6 = plVar3[1];
        puVar4 = (ulong *)*plVar5;
        *param_1 = lVar6;
        param_1[1] = (long)puVar4;
        goto joined_r0x032e2d38;
      }
      lVar6 = lVar6 + -0x10;
      plVar3 = plVar5;
    } while (lVar6 != 0);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  goto LAB_032e2cf0;
joined_r0x032e2d38:
  if (puVar4 == (ulong *)0x0) goto LAB_032e2d40;
  uVar1 = *puVar4;
  if (((uint)uVar1 >> 2 & 1) != 0) {
    uVar1 = puVar4[(uVar1 >> 1 & 1) + (uVar1 & 1) + 2];
    param_1[2] = uVar1;
    if ((uVar1 & 1) != 0) {
      FUN_032e0c28(uVar1 & 0xfffffffffffffffe);
    }
    goto joined_r0x032e2dcc;
  }
  puVar4 = (ulong *)puVar4[1];
  goto joined_r0x032e2d38;
LAB_032e2d40:
  uVar1 = 0;
  param_1[2] = 0;
joined_r0x032e2dcc:
  if (lVar6 != 0) {
    return;
  }
  if ((uVar1 & 1) == 0) {
LAB_032e2cf0:
    param_2 = (undefined8 *)param_2[1];
  }
  else {
    FUN_032e0c40(uVar1 & 0xfffffffffffffffe);
    param_2 = (undefined8 *)param_2[1];
  }
  if (param_2 == (undefined8 *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    return;
  }
  goto LAB_032e2cac;
}


