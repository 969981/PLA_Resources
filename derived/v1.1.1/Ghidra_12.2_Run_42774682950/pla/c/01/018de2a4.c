/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018de2a4; name: FUN_018de2a4
 */


void FUN_018de2a4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_48;
  long *local_40;
  undefined8 uStack_38;
  
  plVar3 = param_1 + 3;
  plVar1 = (long *)(**(code **)(*(long *)*plVar3 + 0x10))((long *)*plVar3,0x20,8);
  if (plVar1 == (long *)0x0) {
    (**(code **)(*(long *)*plVar3 + 0xb8))();
  }
  *plVar1 = 0;
  uStack_38 = 1;
  local_40 = plVar3;
  FUN_018e4f3c(plVar3,plVar1 + 2,param_2);
  plVar1[1] = (long)param_1;
  lVar2 = *param_1;
  *plVar1 = lVar2;
  *(long **)(lVar2 + 8) = plVar1;
  *param_1 = (long)plVar1;
  param_1[2] = param_1[2] + 1;
  local_48 = 0;
  FUN_018e5030(&local_48);
  return;
}


