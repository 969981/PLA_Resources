/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008dcb6c; name: FUN_008dcb6c
 */


void FUN_008dcb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                 undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                 undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                 undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                 undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                 undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                 undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                 undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                 undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                 undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                 undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                 undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                 undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                 undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                 undefined8 param_69,undefined8 param_70)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 in_stack_000001f0;
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
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x8a0,8);
  FUN_008dd09c(plVar2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
               param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,param_20,
               param_21,param_22,param_23,param_24,param_25,param_26,param_27,param_28,param_29,
               param_30,param_31,param_32,param_33,param_34,param_35,param_36,param_37,param_38,
               param_39,param_40,param_41,param_42,param_43,param_44,param_45,param_46,param_47,
               param_48,param_49,param_50,param_51,param_52,param_53,param_54,param_55,param_56,
               param_57,param_58,param_59,param_60,param_61,param_62,param_63,param_64,param_65,
               param_66,param_67,param_68,param_69,param_70,in_stack_000001f0);
  local_70 = &local_80;
  local_80 = plVar2;
  uStack_78 = param_2;
  FUN_008ff75c(param_1,&uStack_78);
  plVar2 = local_80;
  local_80 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}


