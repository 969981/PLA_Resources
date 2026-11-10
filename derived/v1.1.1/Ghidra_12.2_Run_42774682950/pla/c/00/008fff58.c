/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008fff58; name: FUN_008fff58
 */


void FUN_008fff58(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                 undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                 undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                 undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                 undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  byte local_80;
  undefined7 uStack_7f;
  char cStack_78;
  undefined2 local_77;
  undefined1 local_75;
  undefined4 uStack_74;
  long local_70;
  
  uStack_74 = 0;
  local_80 = 0x14;
  local_77 = 0x6174;
  uStack_7f = s_AiWazaData_0397c086._0_7_;
  cStack_78 = s_AiWazaData_0397c086[7];
  local_70 = 0;
  local_75 = 0;
  FUN_00910b98(*param_1 + 0x20,&local_80,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16,param_17,
               param_18,param_19,param_20,param_21,param_22,param_23,param_24,param_25,param_26,
               param_27,param_28,param_29,param_30,param_31,param_32);
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


