/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e37ec; name: FUN_032e37ec
 */


byte FUN_032e37ec(ulong *param_1,ulong *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  ulong *local_20;
  ulong *local_18;
  
  if (param_1 == param_2) {
    bVar1 = 1;
  }
  else {
    local_18 = param_1;
    while( true ) {
      uVar3 = (uint)*local_18;
      if ((uVar3 >> 0xd & 1) != 0) break;
      if (((*local_18 & 1) != 0) || (local_18 = (ulong *)local_18[1], local_18 == (ulong *)0x0))
      goto LAB_032e38ec;
    }
    if (local_18 != (ulong *)0x0) {
      uVar3 = (uVar3 & 0x1fff) - (uVar3 >> 1 & 0x555);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      local_18 = local_18 + (ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2;
      goto LAB_032e3878;
    }
LAB_032e38ec:
    local_18 = (ulong *)0x0;
LAB_032e3878:
    local_20 = param_2;
    while( true ) {
      uVar3 = (uint)*local_20;
      if ((uVar3 >> 0xd & 1) != 0) break;
      if (((*local_20 & 1) != 0) || (local_20 = (ulong *)local_20[1], local_20 == (ulong *)0x0))
      goto LAB_032e38f8;
    }
    if (local_20 != (ulong *)0x0) {
      uVar3 = (uVar3 & 0x1fff) - (uVar3 >> 1 & 0x555);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      local_20 = local_20 + (ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2;
      bVar2 = true;
      goto joined_r0x032e38d4;
    }
LAB_032e38f8:
    bVar2 = false;
    local_20 = (ulong *)0x0;
joined_r0x032e38d4:
    if (local_18 == (ulong *)0x0) {
      if (!bVar2) {
        for (; (param_1 != (ulong *)0x0 && ((*param_1 & 1) == 0)); param_1 = (ulong *)param_1[1]) {
        }
        for (; (param_2 != (ulong *)0x0 && ((*param_2 & 1) == 0)); param_2 = (ulong *)param_2[1]) {
        }
        bVar1 = param_1 == param_2;
        goto LAB_032e3804;
      }
    }
    else if (bVar2) {
      bVar1 = FUN_032ddbec(&local_18,&local_20);
      goto LAB_032e3804;
    }
    bVar1 = 0;
  }
LAB_032e3804:
  return bVar1 & 1;
}


