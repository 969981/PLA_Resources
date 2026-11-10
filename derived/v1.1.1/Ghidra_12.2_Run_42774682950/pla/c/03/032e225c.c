/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e225c; name: FUN_032e225c
 */


uint FUN_032e225c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong *local_20;
  ulong *local_18;
  
  if (param_1 == param_2) {
LAB_032e2394:
    uVar1 = 1;
  }
  else {
    local_18 = param_1;
    while( true ) {
      uVar1 = (uint)*local_18;
      if ((uVar1 >> 0xd & 1) != 0) break;
      if (((*local_18 & 1) != 0) || (local_18 = (ulong *)local_18[1], local_18 == (ulong *)0x0))
      goto LAB_032e2294;
    }
    if (local_18 != (ulong *)0x0) {
      uVar1 = (uVar1 & 0x1fff) - (uVar1 >> 1 & 0x555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      local_18 = local_18 + (ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2;
      goto LAB_032e22dc;
    }
LAB_032e2294:
    local_18 = (ulong *)0x0;
LAB_032e22dc:
    local_20 = param_2;
    while( true ) {
      uVar1 = (uint)*local_20;
      if ((uVar1 >> 0xd & 1) != 0) break;
      if (((*local_20 & 1) != 0) || (local_20 = (ulong *)local_20[1], local_20 == (ulong *)0x0))
      goto joined_r0x032e22f8;
    }
    if ((local_20 != (ulong *)0x0) &&
       (uVar1 = (uVar1 & 0x1fff) - (uVar1 >> 1 & 0x555),
       uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333),
       local_20 = local_20 + (ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2,
       local_18 != (ulong *)0x0)) {
      uVar1 = FUN_032ddb80(&local_18,&local_20);
      goto LAB_032e2360;
    }
joined_r0x032e22f8:
    for (; (param_2 != (ulong *)0x0 && ((*param_2 & 1) == 0)); param_2 = (ulong *)param_2[1]) {
    }
    if (param_1 == (ulong *)0x0) {
      uVar1 = 0;
    }
    else {
      do {
        if (param_1 == param_2) goto LAB_032e2394;
        param_1 = (ulong *)param_1[1];
        uVar1 = 0;
      } while (param_1 != (ulong *)0x0);
    }
  }
LAB_032e2360:
  return uVar1 & 1;
}


