/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e3dac; name: FUN_032e3dac
 */


undefined8 FUN_032e3dac(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  uint uVar6;
  
  if (param_1 == param_2) {
    return 0;
  }
  puVar5 = param_1;
  while( true ) {
    uVar6 = (uint)*puVar5;
    if ((uVar6 >> 3 & 1) != 0) break;
    if (((*puVar5 & 1) != 0) || (puVar5 = (ulong *)puVar5[1], puVar5 == (ulong *)0x0))
    goto LAB_032e3ddc;
  }
  if (puVar5 != (ulong *)0x0) {
    uVar6 = (uVar6 & 7) - (uVar6 >> 1 & 1);
    uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
    uVar1 = puVar5[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
    goto LAB_032e3e1c;
  }
LAB_032e3ddc:
  uVar1 = 0;
LAB_032e3e1c:
  do {
    uVar6 = (uint)*param_1;
    if ((uVar6 >> 0xf & 1) != 0) {
      uVar6 = (uVar6 & 0x7fff) - (uVar6 >> 1 & 0x1555);
      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
      uVar4 = param_1[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
      break;
    }
    if ((*param_1 & 9) != 0) {
      uVar4 = 0;
      break;
    }
    param_1 = (ulong *)param_1[1];
    uVar4 = 0;
  } while (param_1 != (ulong *)0x0);
  puVar5 = param_2;
  while( true ) {
    uVar6 = (uint)*puVar5;
    if ((uVar6 >> 3 & 1) != 0) break;
    if (((*puVar5 & 1) != 0) || (puVar5 = (ulong *)puVar5[1], puVar5 == (ulong *)0x0))
    goto LAB_032e3e48;
  }
  if (puVar5 != (ulong *)0x0) {
    uVar6 = (uVar6 & 7) - (uVar6 >> 1 & 1);
    uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
    uVar3 = puVar5[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
    goto LAB_032e3e88;
  }
LAB_032e3e48:
  uVar3 = 0;
LAB_032e3e88:
  do {
    uVar6 = (uint)*param_2;
    if ((uVar6 >> 0xf & 1) != 0) {
      uVar6 = (uVar6 & 0x7fff) - (uVar6 >> 1 & 0x1555);
      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
      uVar2 = FUN_032e3c78(uVar1,uVar4,uVar3,
                           param_2[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
                                   2]);
      return uVar2;
    }
  } while (((*param_2 & 9) == 0) && (param_2 = (ulong *)param_2[1], param_2 != (ulong *)0x0));
  uVar2 = FUN_032e3c78(uVar1,uVar4,uVar3,0);
  return uVar2;
}


