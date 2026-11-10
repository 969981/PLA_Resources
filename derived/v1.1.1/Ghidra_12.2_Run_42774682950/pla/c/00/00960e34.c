/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00960e34; name: FUN_00960e34
 */


void FUN_00960e34(void)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379690), iVar1 != 0))
  {
    FUN_00100250(&LAB_0096336c,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
  lVar2 = FUN_0286ba84();
  *(undefined1 *)(lVar2 + 5) = 1;
  return;
}


