/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032cfe0; name: FUN_0032cfe0
 */


void FUN_0032cfe0(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((DAT_04399a58 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_04399a58), puVar1 = PTR_DAT_043730c0, iVar2 != 0)) {
    *(undefined8 *)(PTR_DAT_043730c0 + 0x10) = 0;
    *(undefined8 *)puVar1 = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
                    /* try { // try from 0032d01c to 0032d027 has its CatchHandler @ 0032d038 */
    FUN_0031f0c0(PTR_LAB_04373af8);
    __cxa_guard_release(&DAT_04399a58);
    return;
  }
  return;
}


