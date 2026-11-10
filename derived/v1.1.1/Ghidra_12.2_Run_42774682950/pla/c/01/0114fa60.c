/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0114fa60; name: FUN_0114fa60
 */


void FUN_0114fa60(int *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 2);
  if (lVar2 == 0) {
    return;
  }
  if (*param_1 - 1U < 3) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04379558), iVar1 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar2 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar2;
    FUN_010cef88(*(undefined8 *)(lVar2 + 0x100));
    lVar2 = *(long *)(param_1 + 2);
  }
  FUN_02a49678(lVar2,"save process",0xffffffff,0x10);
  return;
}


