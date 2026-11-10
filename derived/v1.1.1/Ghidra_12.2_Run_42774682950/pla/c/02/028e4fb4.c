/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028e4fb4; name: FUN_028e4fb4
 */


void FUN_028e4fb4(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  *param_1 = (long)&PTR_FUN_04273d90;
  param_1[9] = (long)&PTR_LAB_04273df0;
  param_1[10] = (long)&PTR_LAB_04273e38;
  FUN_028e5a00(param_1 + 0x4e);
  puVar2 = PTR_DAT_0437b260;
  lVar4 = param_1[0x4a];
  param_1[0x4a] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[9] = (long)(puVar2 + 0x70);
  param_1[10] = (long)(puVar2 + 0xb8);
  if (lVar4 != 0) {
    plVar7 = (long *)param_1[0x4b];
    lVar5 = param_1[0x4c];
    lVar6 = param_1[0x4d];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) != 0) {
      lVar1 = tpidr_el0;
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar7,lVar4,lVar5,lVar6);
        goto LAB_028e5094;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar4,lVar5,lVar6);
  }
LAB_028e5094:
  FUN_0093ac1c(param_1);
  return;
}


