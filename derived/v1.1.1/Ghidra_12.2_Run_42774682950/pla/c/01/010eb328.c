/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010eb328; name: FUN_010eb328
 */


void FUN_010eb328(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  if ((*PTR_DAT_04379558 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04379558);
    if (iVar1 != 0) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
  }
  lVar2 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar2;
  FUN_010eb59c(*(undefined8 *)(lVar2 + 0x100),param_1 + 4,param_2);
  return;
}


