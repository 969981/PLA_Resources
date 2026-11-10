/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00910b98; name: FUN_00910b98
 */


void FUN_00910b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                 undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                 undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                 undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                 undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                 undefined8 param_33)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *local_80;
  undefined8 uStack_78;
  long **local_70;
  
  plVar2 = DAT_043f1798;
  lVar1 = tpidr_el0;
  plVar3 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar3 = plVar2;
  }
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x2b0,8);
  FUN_00910d94(plVar2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
               param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,param_20,
               param_21,param_22,param_23,param_24,param_25,param_26,param_27,param_28,param_29,
               param_30,param_31,param_32,param_33);
  local_70 = &local_80;
  local_80 = plVar2;
  uStack_78 = param_2;
  FUN_00919b50(param_1,&uStack_78);
  plVar2 = local_80;
  local_80 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}


