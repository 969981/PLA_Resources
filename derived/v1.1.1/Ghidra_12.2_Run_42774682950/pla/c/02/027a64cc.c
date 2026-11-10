/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a64cc; name: FUN_027a64cc
 */


uint FUN_027a64cc(long param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  if ((DAT_043ea610 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_043ea610);
    if (iVar2 != 0) {
      FUN_027a6590();
      DAT_043ea608 = &DAT_043ea618;
      __cxa_guard_release(&DAT_043ea610);
    }
  }
  lVar4 = 0;
  uVar3 = 0xffff;
  do {
    pbVar1 = (byte *)(param_1 + lVar4);
    lVar4 = lVar4 + 2;
    uVar3 = (uint)*(ushort *)
                   (DAT_043ea608 +
                   ((ulong)((uint)pbVar1[1] ^
                           ((uint)*(ushort *)
                                   (DAT_043ea608 + ((ulong)((uint)*pbVar1 ^ uVar3 >> 8) & 0xff) * 2)
                           ^ uVar3 << 8) >> 8) & 0xff) * 2) ^
            (uint)*(ushort *)(DAT_043ea608 + ((ulong)((uint)*pbVar1 ^ uVar3 >> 8) & 0xff) * 2) << 8;
  } while (lVar4 != 0x2c8);
  return uVar3;
}


