/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018ea204; name: FUN_018ea204
 */


undefined * FUN_018ea204(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_04381f78 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04381f78), puVar1 = PTR_DAT_04381f80, iVar2 != 0)) {
    uVar3 = FUN_018ea168();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_04381f78);
  }
  return PTR_DAT_04381f80;
}


