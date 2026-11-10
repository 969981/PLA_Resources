/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b0fd18; name: FUN_00b0fd18
 */


void FUN_00b0fd18(long *param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  param_2 = (long *)*param_2;
  *param_1 = (long)param_2;
  if (param_2 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    (**(code **)(*param_2 + 0x18))();
    plVar5 = (long *)*param_1;
  }
  plVar2 = (long *)PTR_DAT_04379c88;
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 0xb;
  }
  plVar1 = (long *)PTR_PTR_04379d00;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 0xc;
  }
  lVar3 = *plVar1;
  if (plVar5 == (long *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = plVar5[0xd];
  }
  param_1[1] = *plVar2;
  param_1[2] = lVar3;
  param_1[3] = lVar4;
  param_1[4] = 0;
  if (plVar5 == (long *)0x0) {
    param_1[4] = 0;
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    plVar2 = (long *)param_1[4];
    param_1[4] = (long)plVar5;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
  }
  *(undefined4 *)(param_1 + 5) = param_3;
  FUN_02a8eb50(param_1);
  return;
}


