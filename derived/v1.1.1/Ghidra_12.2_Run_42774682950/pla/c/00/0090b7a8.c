/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0090b7a8; name: FUN_0090b7a8
 */


void FUN_0090b7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *local_58;
  undefined8 uStack_50;
  long **local_48;
  
  plVar2 = DAT_043f1798;
  lVar1 = tpidr_el0;
  plVar3 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar3 = plVar2;
  }
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0xf0,8);
  FUN_0090b880(plVar2,param_3,param_4,param_5);
  local_48 = &local_58;
  local_58 = plVar2;
  uStack_50 = param_2;
  FUN_00910af0(param_1,&uStack_50);
  plVar2 = local_58;
  local_58 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}


