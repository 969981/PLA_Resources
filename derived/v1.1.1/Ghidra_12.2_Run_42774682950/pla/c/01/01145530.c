/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01145530; name: FUN_01145530
 */


bool FUN_01145530(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  char *local_50;
  long *local_48;
  int local_3c;
  undefined1 local_38 [16];
  undefined8 local_28;
  
  local_28 = param_2;
  if (((*PTR_DAT_0437b668 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0437b668), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_0437e4e0,PTR_DAT_0437b670,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b668);
  }
  lVar2 = *(long *)PTR_DAT_0437b670;
  *(long *)PTR_DAT_0437b678 = lVar2;
  if ((lVar2 != 0) && (local_38 = FUN_00da9e68(), local_38._0_8_ != 0 || local_38._8_8_ != 0)) {
    uVar3 = nn::fs::IsSaveDataExisting(param_1,local_38);
    if ((uVar3 & 1) != 0) {
      iVar1 = nn::fs::MountSaveDataReadOnly("linked-save",param_1,local_38);
      if (iVar1 == 0) {
        local_3c = 0;
        local_50 = "linked-save";
        FUN_01145694(&local_48,&local_50,&local_28);
        if (local_48 == (long *)0x0) {
          plVar4 = (long *)PTR_PTR_04379d00;
        }
        else {
          plVar4 = local_48 + 0xc;
        }
        iVar1 = nn::fs::GetEntryType((DirectoryEntryType *)&local_3c,(char *)*plVar4);
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x20))();
        }
        nn::fs::Unmount("linked-save");
        if (iVar1 == 0) {
          return local_3c == 1;
        }
      }
    }
  }
  return false;
}


