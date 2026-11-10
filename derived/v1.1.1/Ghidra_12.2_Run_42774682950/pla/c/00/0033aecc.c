/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033aecc; name: FUN_0033aecc
 */


ulong * FUN_0033aecc(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  
  puVar2 = (ulong *)(*param_1 & 0xfffffffffffffffe);
  if ((*param_1 & 1) == 0) {
    if (puVar2 != (ulong *)0x0) goto LAB_0033aee8;
LAB_0033af10:
    puVar1 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x20);
    if (puVar1 == (ulong *)0x0) goto LAB_0033af2c;
  }
  else {
    puVar2 = (ulong *)*puVar2;
    if (puVar2 == (ulong *)0x0) goto LAB_0033af10;
LAB_0033aee8:
    if (puVar2[0xe] != 0) {
      FUN_0032cf88(puVar2,0,0x20);
    }
    puVar1 = (ulong *)FUN_0032c850(puVar2,0x20,PTR_LAB_04373b58);
  }
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
LAB_0033af2c:
  *param_1 = (ulong)puVar1 | 1;
  *puVar1 = (ulong)puVar2;
  return puVar1 + 1;
}


