/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e58e88; name: FUN_02e58e88
 */


undefined4 FUN_02e58e88(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(uint *)(param_1 + 0x18) == 0) {
    return 0;
  }
  lVar1 = (ulong)*(uint *)(param_1 + 0x18) * 0x158;
  uVar3 = 0x7f7fffff;
  puVar2 = (undefined4 *)(*(long *)(param_1 + 0x10) + 0x84);
  do {
    uVar4 = *puVar2;
    puVar2 = puVar2 + 0x56;
    uVar3 = NEON_fminnm(uVar4,uVar3);
    lVar1 = lVar1 + -0x158;
  } while (lVar1 != 0);
  return uVar3;
}


