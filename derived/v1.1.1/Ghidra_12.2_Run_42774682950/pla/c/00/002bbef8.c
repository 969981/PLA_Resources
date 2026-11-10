/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002bbef8; name: FUN_002bbef8
 */


void FUN_002bbef8(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long local_90 [4];
  long *local_70;
  long alStack_60 [4];
  long *local_40;
  
  local_70 = local_90;
  if ((*param_1 == 0) && (param_1[2] == 0)) {
    return;
  }
  *(undefined1 *)(param_2 + 9) = 1;
  plVar3 = (long *)param_1[8];
  plVar1 = param_1 + 2;
  lVar2 = (long)param_1 + 9;
  if (plVar3 == (long *)0x0) {
    local_70 = (long *)0x0;
    *(long *)(param_2 + 0x78) = lVar2;
    *(long **)(param_2 + 0x80) = param_1;
    *(long **)(param_2 + 0x70) = plVar1;
LAB_002bbf90:
    local_40 = (long *)0x0;
  }
  else {
    if (param_1 + 4 == plVar3) {
      (**(code **)(*plVar3 + 0x18))(plVar3,local_90);
      *(long *)(param_2 + 0x78) = lVar2;
      *(long **)(param_2 + 0x80) = param_1;
      *(long **)(param_2 + 0x70) = plVar1;
    }
    else {
      local_70 = (long *)(**(code **)(*plVar3 + 0x10))();
      *(long *)(param_2 + 0x78) = lVar2;
      *(long **)(param_2 + 0x80) = param_1;
      *(long **)(param_2 + 0x70) = plVar1;
    }
    if (local_70 == (long *)0x0) goto LAB_002bbf90;
    if (local_90 == local_70) {
      local_40 = alStack_60;
                    /* try { // try from 002bbfd4 to 002bbfdb has its CatchHandler @ 002bc054 */
      (**(code **)(*local_70 + 0x18))(local_70,alStack_60);
    }
    else {
                    /* try { // try from 002bbf74 to 002bbf77 has its CatchHandler @ 002bc054 */
      local_40 = (long *)(**(code **)(*local_70 + 0x10))();
    }
  }
  FUN_002bbcc4(alStack_60,param_2 + 0x90);
  if (alStack_60 == local_40) {
    pcVar4 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_002bc014;
    pcVar4 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar4)();
LAB_002bc014:
  if (local_90 == local_70) {
    pcVar4 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) {
      return;
    }
    pcVar4 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar4)();
  return;
}


