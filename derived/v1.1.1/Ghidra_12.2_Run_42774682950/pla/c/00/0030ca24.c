/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030ca24; name: FUN_0030ca24
 */


undefined8 * FUN_0030ca24(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (((DAT_043999b0 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_043999b0), iVar1 == 0)) {
    return DAT_043999a8;
  }
  puVar2 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
                    /* try { // try from 0030ca78 to 0030ca87 has its CatchHandler @ 0030caa8 */
  FUN_0031f0c0(PTR_LAB_04373a38,puVar2);
  DAT_043999a8 = puVar2;
  __cxa_guard_release(&DAT_043999b0);
  return DAT_043999a8;
}


