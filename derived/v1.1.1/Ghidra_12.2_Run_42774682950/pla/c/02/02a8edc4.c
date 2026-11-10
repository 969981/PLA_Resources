/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a8edc4; name: FUN_02a8edc4
 */


int FUN_02a8edc4(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  char local_68 [16];
  char local_58;
  long *local_50;
  long *local_30;
  int local_14;
  
  if (((*PTR_DAT_04379d30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379d30);
  }
  uVar3 = *(undefined8 *)PTR_DAT_04379d38;
  *(undefined8 *)PTR_DAT_04379d40 = uVar3;
  FUN_02a7c7ac(local_68,uVar3,param_1);
  if ((local_68[0] == '\0') || (local_58 == '\0')) {
    param_1 = (long *)*param_1;
  }
  else {
    param_1 = local_50;
  }
  plVar1 = (long *)PTR_PTR_04379d00;
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 0xc;
  }
  iVar2 = nn::fs::GetEntryType((DirectoryEntryType *)&local_14,(char *)*plVar1);
  if (iVar2 == 0) {
    iVar2 = (uint)(local_14 == 0) << 1;
    if (local_14 == 1) {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
  if (local_68[0] != '\0') {
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x20))();
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
  }
  return iVar2;
}


