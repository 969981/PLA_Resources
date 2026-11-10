/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008dc5fc; name: FUN_008dc5fc
 */


void FUN_008dc5fc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                 undefined8 param_69)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  byte local_80;
  char acStack_7f [7];
  char local_78;
  char acStack_77 [7];
  long local_70;
  
  local_80 = 0x1e;
  acStack_7f = (char  [7])s_BattleAiCommand_0391ae47._0_7_;
  local_78 = s_BattleAiCommand_0391ae47[7];
  acStack_77 = (char  [7])s_BattleAiCommand_0391ae47._8_7_;
  local_70 = 0;
  FUN_008dcb6c(*param_1 + 0x20,&local_80,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16,param_17,
               param_18,param_19,param_20,param_21,param_22,param_23,param_24,param_25,param_26,
               param_27,param_28,param_29,param_30,param_31,param_32,param_33,param_34,param_35,
               param_36,param_37,param_38,param_39,param_40,param_41,param_42,param_43,param_44,
               param_45,param_46,param_47,param_48,param_49,param_50,param_51,param_52,param_53,
               param_54,param_55,param_56,param_57,param_58,param_59,param_60,param_61,param_62,
               param_63,param_64,param_65,param_66,param_67,param_68,param_69);
  lVar3 = local_70;
  plVar2 = DAT_043f1798;
  if (((local_80 & 1) != 0) && (local_70 != 0)) {
    lVar1 = tpidr_el0;
    plVar5 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar5 = plVar2;
    }
    uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar5,lVar3,0,8);
        return;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar3,0,8);
  }
  return;
}


