/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02837c00; name: FUN_02837c00
 */


void FUN_02837c00(long *param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  long local_60;
  char *pcStack_58;
  long local_50;
  long *local_48;
  
  lVar4 = param_1[0x15];
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar2 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  *(int *)(lVar4 + 0x180) = (int)*(undefined8 *)PTR_DAT_0437a0d8;
  pcVar6 = (char *)param_1[0x59];
  if (*pcVar6 != '\0') {
    lVar4 = param_1[0x58];
    lVar7 = param_1[0x5a];
    plVar5 = (long *)param_1[0x5b];
    local_60 = lVar4;
    pcStack_58 = pcVar6;
    local_50 = lVar7;
    local_48 = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    param_1[0x23] = lVar4;
    param_1[0x24] = (long)pcVar6;
    param_1[0x25] = lVar7;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    plVar3 = (long *)param_1[0x26];
    param_1[0x26] = (long)plVar5;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    uVar1 = FUN_028354b0(&local_60);
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if ((param_2 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1b) = 0;
    *(undefined4 *)(param_1 + 0x10) = 7;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 5;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  return;
}


