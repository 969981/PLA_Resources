/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dfeb8; name: FUN_032dfeb8
 */


void FUN_032dfeb8(undefined8 *param_1,ulong *param_2)

{
  ulong *puVar1;
  uint uVar2;
  ulong *puVar3;
  
  puVar1 = (ulong *)*param_1;
  if ((puVar1 == (ulong *)0x0) || (*puVar1 == 0)) {
LAB_032dfecc:
    puVar1 = (ulong *)param_1[1];
  }
  else {
    puVar3 = param_2;
    while( true ) {
      uVar2 = (uint)*puVar3;
      if ((uVar2 >> 6 & 1) != 0) break;
      if (((*puVar3 & 1) != 0) || (puVar3 = (ulong *)puVar3[1], puVar3 == (ulong *)0x0))
      goto LAB_032e005c;
    }
    if ((puVar3 != (ulong *)0x0) &&
       (uVar2 = (uVar2 & 0x3f) - (uVar2 >> 1 & 0x15),
       uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333),
       puVar3[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] != 0)) {
      if (puVar3[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] == *puVar1)
      goto LAB_032dfecc;
      *puVar1 = (ulong)&LAB_032eac64;
      puVar1 = (ulong *)param_1[1];
      goto joined_r0x032e003c;
    }
LAB_032e005c:
    *puVar1 = 0;
    puVar1 = (ulong *)param_1[1];
  }
joined_r0x032e003c:
  if ((puVar1 == (ulong *)0x0) || (*puVar1 == 0)) {
LAB_032dff48:
    puVar1 = (ulong *)param_1[2];
  }
  else {
    puVar3 = param_2;
    while( true ) {
      uVar2 = (uint)*puVar3;
      if ((uVar2 >> 7 & 1) != 0) break;
      if (((*puVar3 & 1) != 0) || (puVar3 = (ulong *)puVar3[1], puVar3 == (ulong *)0x0))
      goto LAB_032e004c;
    }
    if ((puVar3 != (ulong *)0x0) &&
       (uVar2 = (uVar2 & 0x7f) - (uVar2 >> 1 & 0x15),
       uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333),
       puVar3[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] != 0)) {
      if (puVar3[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] != *puVar1) {
        *puVar1 = (ulong)&LAB_032eaf4c;
      }
      goto LAB_032dff48;
    }
LAB_032e004c:
    *puVar1 = 0;
    puVar1 = (ulong *)param_1[2];
  }
  if ((puVar1 == (ulong *)0x0) || (*puVar1 == 0)) {
    return;
  }
  while( true ) {
    uVar2 = (uint)*param_2;
    if ((uVar2 >> 9 & 1) != 0) break;
    if (((*param_2 & 1) != 0) || (param_2 = (ulong *)param_2[1], param_2 == (ulong *)0x0))
    goto LAB_032e0044;
  }
  if ((param_2 != (ulong *)0x0) &&
     (uVar2 = (uVar2 & 0x1ff) - (uVar2 >> 1 & 0x55),
     uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333),
     param_2[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] != 0)) {
    if (param_2[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] == *puVar1) {
      return;
    }
    *puVar1 = (ulong)&LAB_032eb270;
    return;
  }
LAB_032e0044:
  *puVar1 = 0;
  return;
}


