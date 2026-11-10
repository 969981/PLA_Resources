/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00342190; name: FUN_00342190
 */


long FUN_00342190(void)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_04399ad0 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_04399ad0), iVar1 == 0)) {
    return DAT_04399ac8;
  }
  lVar2 = FUN_002e2e80(PTR_FUN_04373078,0x68);
  if (lVar2 != 0) {
                    /* try { // try from 003421dc to 003421f3 has its CatchHandler @ 00342214 */
    FUN_003c3f54(lVar2);
  }
  FUN_0031f0c0(PTR_FUN_04373b80,lVar2);
  DAT_04399ac8 = lVar2;
  __cxa_guard_release(&DAT_04399ad0);
  return DAT_04399ac8;
}


