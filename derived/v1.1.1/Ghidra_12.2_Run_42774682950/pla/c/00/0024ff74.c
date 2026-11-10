/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024ff74; name: FUN_0024ff74
 */


undefined * FUN_0024ff74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  if (((*PTR_DAT_04372d60 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04372d60), puVar2 = PTR_DAT_04372d68,
     puVar1 = PTR_DAT_04372cd0, iVar3 != 0)) {
    if (((*PTR_DAT_04372cc8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04372cc8), iVar3 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_04372cc8);
    }
    *(undefined **)puVar2 = puVar1;
    __cxa_guard_release(PTR_DAT_04372d60);
  }
  return PTR_DAT_04372d68;
}


