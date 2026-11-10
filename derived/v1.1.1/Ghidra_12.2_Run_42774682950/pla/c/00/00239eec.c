/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00239eec; name: FUN_00239eec
 */


undefined * FUN_00239eec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  if (((*PTR_DAT_04372b38 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04372b38), puVar2 = PTR_DAT_04372b50,
     puVar1 = PTR_DAT_04372b40, iVar3 != 0)) {
    if (((*PTR_DAT_04372b48 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04372b48), iVar3 != 0)) {
      *(undefined8 *)puVar2 = 0;
      __cxa_guard_release(PTR_DAT_04372b48);
    }
    *(undefined **)puVar1 = puVar2;
    __cxa_guard_release(PTR_DAT_04372b38);
  }
  return PTR_DAT_04372b40;
}


