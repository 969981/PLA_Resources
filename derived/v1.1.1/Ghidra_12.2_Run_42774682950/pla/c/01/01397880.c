/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01397880; name: FUN_01397880
 */


int FUN_01397880(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  char local_2b0 [8];
  undefined1 auStack_2a8 [632];
  long *local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379558), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_0114924c(&local_28);
  if (local_28 == (long *)0x0) {
    iVar2 = 3;
  }
  else {
    FUN_01397710(local_2b0,param_2);
    if (local_2b0[0] == '\0') {
      iVar2 = 3;
      plVar1 = local_28;
    }
    else {
      uVar3 = FUN_013979d0(param_2);
      if ((uVar3 & 1) == 0) {
        iVar2 = 3;
        plVar1 = local_28;
      }
      else {
        iVar2 = FUN_01397b20(param_1,param_2);
        plVar1 = local_28;
        if (iVar2 != 3) {
          FUN_01121528(local_28,auStack_2a8);
          plVar1 = local_28;
        }
      }
    }
    local_2b0[0] = '\0';
    if ((plVar1 != (long *)0x0) && (uVar3 = FUN_02a43a5c(plVar1[0xb]), (uVar3 & 1) != 0)) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
  return iVar2;
}


