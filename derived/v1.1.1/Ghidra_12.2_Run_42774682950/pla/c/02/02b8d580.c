/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b8d580; name: FUN_02b8d580
 */


void FUN_02b8d580(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_04285e58;
  param_1[9] = &PTR_LAB_04285ee8;
  param_1[0xb] = &PTR_LAB_04285f18;
  (*DAT_043f0360)(param_1 + 0x30);
  lVar5 = param_1[0x2c];
  param_1[0x2c] = 0;
  if (lVar5 != 0) {
    plVar1 = (long *)param_1[0x2d];
    uVar2 = param_1[0x2e];
    uVar6 = param_1[0x2f];
    uVar4 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar4 & 1) != 0) {
      lVar3 = tpidr_el0;
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar3 + 0x38d480)) {
        FUN_02bcc824(plVar1,lVar5,uVar2,uVar6);
        goto LAB_02b8d64c;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,uVar2,uVar6);
  }
LAB_02b8d64c:
  *param_1 = &PTR_LAB_04285f40;
  param_1[9] = &PTR_LAB_04285fd0;
  param_1[0xb] = &PTR_LAB_04286000;
  FUN_02b91764(param_1 + 0xd);
  return;
}


