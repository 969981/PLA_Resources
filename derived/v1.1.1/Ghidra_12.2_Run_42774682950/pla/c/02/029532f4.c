/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029532f4; name: FUN_029532f4
 */


void FUN_029532f4(long param_1,undefined2 param_2)

{
  int iVar1;
  long lVar2;
  long local_30 [2];
  
  if ((*PTR_DAT_043795f8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_043795f8);
    if (iVar1 != 0) {
      FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043795f8);
    }
  }
  *(undefined8 *)PTR_DAT_04379608 = *(undefined8 *)PTR_DAT_04379600;
  FUN_02c4fb44(local_30,param_2);
  if (*(char *)(local_30[0] + 0x20) == '\x01') {
    iVar1 = *(byte *)(local_30[0] + 0x21) + 1;
  }
  else {
    iVar1 = 4;
  }
  FUN_02c834fc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98),iVar1);
  if (iVar1 == 0x16) {
    lVar2 = *(long *)(param_1 + 0x60);
    FUN_02c7a8c4(*(undefined8 *)(lVar2 + 0x98),0x96);
    FUN_02c5bb1c(lVar2,1);
    return;
  }
  return;
}


