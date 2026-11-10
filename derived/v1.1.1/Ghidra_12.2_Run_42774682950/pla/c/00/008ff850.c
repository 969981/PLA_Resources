/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008ff850; name: FUN_008ff850
 */


void FUN_008ff850(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  byte local_48;
  undefined7 uStack_47;
  char local_40;
  undefined3 uStack_3f;
  undefined4 local_3c;
  long local_38;
  
  local_38 = 0;
  local_48 = 0x16;
  uStack_47 = s_WazaAiParam_038c064a._0_7_;
  _local_40 = CONCAT31(0x6d6172,s_WazaAiParam_038c064a[7]);
  local_3c = 0;
  FUN_0090019c(*param_1 + 0x20,&local_48,param_2,param_3,param_4);
  lVar3 = local_38;
  plVar2 = DAT_043f1798;
  if (((local_48 & 1) != 0) && (local_38 != 0)) {
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


