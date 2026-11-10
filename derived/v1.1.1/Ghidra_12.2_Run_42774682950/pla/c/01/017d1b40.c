/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017d1b40; name: FUN_017d1b40
 */


undefined * FUN_017d1b40(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (param_2 == 0x1e) {
    puVar5 = (undefined8 *)(param_1 + 8);
  }
  else {
    if (0x1c < param_2) {
      FUN_017d1db0();
      if (((*PTR_DAT_04381910 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04381910), puVar2 = PTR_DAT_04381918,
         puVar1 = PTR_DAT_043794d8, iVar3 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar3 != 0)) {
          uVar4 = FUN_0087f8f0();
          *(undefined8 *)puVar1 = uVar4;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(PTR_DAT_04381910);
      }
      return PTR_DAT_04381918;
    }
    puVar5 = (undefined8 *)(param_1 + (ulong)param_2 * 0x28 + 0x78);
  }
  return (undefined *)*puVar5;
}


