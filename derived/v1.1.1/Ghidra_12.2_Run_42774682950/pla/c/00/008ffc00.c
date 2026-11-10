/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008ffc00; name: FUN_008ffc00
 */


void FUN_008ffc00(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  byte local_48;
  undefined7 uStack_47;
  char cStack_40;
  undefined7 uStack_3f;
  char local_38;
  undefined2 uStack_37;
  undefined5 uStack_35;
  
  uStack_35 = 0;
  local_48 = 0x22;
  uStack_3f = s_PokeChangeAiParam_038ca819._8_7_;
  local_38 = s_PokeChangeAiParam_038ca819[0xf];
  uStack_47 = s_PokeChangeAiParam_038ca819._0_7_;
  cStack_40 = s_PokeChangeAiParam_038ca819[7];
  uStack_37 = 0x6d;
  FUN_0090b7a8(*param_1 + 0x20,&local_48,param_2,param_3,param_4);
  plVar3 = DAT_043f1798;
  if (((local_48 & 1) != 0) &&
     (lVar2 = CONCAT53(uStack_35,CONCAT21(uStack_37,local_38)), lVar2 != 0)) {
    lVar1 = tpidr_el0;
    plVar5 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar5 = plVar3;
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
        FUN_02bcc824(plVar5,lVar2,0,8);
        return;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar2,0,8);
  }
  return;
}


