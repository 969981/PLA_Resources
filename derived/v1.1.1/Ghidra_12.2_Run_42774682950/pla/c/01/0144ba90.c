/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0144ba90; name: FUN_0144ba90
 */


undefined8 FUN_0144ba90(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_0437f4f8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_0437f4f8), puVar1 = PTR_DAT_04379c98, iVar2 != 0)) {
    if (((*PTR_DAT_04379ca8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar2 != 0)) {
      uVar3 = FUN_009311a8();
      *(undefined8 *)puVar1 = uVar3;
      __cxa_guard_release(PTR_DAT_04379ca8);
    }
    *(undefined **)PTR_DAT_0437f500 = puVar1;
    __cxa_guard_release(PTR_DAT_0437f4f8);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_0437f500) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


