/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e4868; name: FUN_032e4868
 */


void FUN_032e4868(long *param_1,long *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar7 = *param_2;
  if (lVar7 == 0 || param_3 < (ulong *)0x2) {
LAB_032e49cc:
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    return;
  }
  uVar9 = *param_3;
  uVar8 = (uint)uVar9;
  if (((uVar8 >> 0x11 & 1) == 0) ||
     (uVar4 = (uVar8 & 0x1ffff) - (uVar8 >> 1 & 0x5555),
     uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333),
     (param_3[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] & 0x300000) == 0)
     ) goto LAB_032e49cc;
  if (((param_2[2] & 1U) == 0) &&
     (((puVar1 = (undefined8 *)param_2[1], puVar1 < (undefined8 *)0x2 ||
       (uVar4 = (uint)*puVar1, (uVar4 >> 0x11 & 1) == 0)) ||
      (uVar4 = (uVar4 & 0x1ffff) - (uVar4 >> 1 & 0x5555),
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333),
      (puVar1[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] & 0x300000) == 0
      || (puVar1[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] & 0x500000) ==
         0)))) {
    uVar5 = uVar9 & 0x20000;
    puVar2 = param_3;
    if ((uVar8 >> 2 & 1) == 0) {
      do {
        puVar2 = (ulong *)puVar2[1];
        if (puVar2 == (ulong *)0x0) {
          uVar9 = 0;
          goto joined_r0x032e4a50;
        }
        uVar9 = *puVar2;
      } while (((uint)uVar9 >> 2 & 1) == 0);
    }
    uVar9 = puVar2[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
joined_r0x032e4a50:
    uVar10 = 0;
    uVar6 = 0;
    if (uVar5 == 0) goto LAB_032e49a4;
  }
  else {
    plVar3 = (long *)(param_2[2] & 0xfffffffffffffffe);
    uVar9 = (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    lVar7 = *param_2;
    uVar10 = 1;
    uVar8 = (uint)*param_3;
    if ((*param_3 & 0x20000) == 0) {
      uVar6 = 0;
      goto LAB_032e49a4;
    }
  }
  uVar8 = (uVar8 & 0x1ffff) - (uVar8 >> 1 & 0x5555);
  uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
  uVar6 = (ulong)(ushort)param_3[(ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2
                                ];
LAB_032e49a4:
  *param_1 = uVar6 + lVar7;
  param_1[1] = (long)param_3;
  param_1[2] = uVar10 | uVar9;
  if (uVar10 == 0 && (uVar9 & 1) == 0) {
    return;
  }
  FUN_032e0c28(uVar9 & 0xfffffffffffffffe);
  return;
}


