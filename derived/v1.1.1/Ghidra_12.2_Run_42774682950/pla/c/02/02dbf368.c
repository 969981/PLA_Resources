/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dbf368; name: FUN_02dbf368
 */


void FUN_02dbf368(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  lVar5 = param_1[0x4a];
  puVar1 = PTR_DAT_0437b260 + 0x70;
  puVar2 = PTR_DAT_0437b260 + 0xb8;
  *param_1 = (long)(PTR_DAT_0437b260 + 0x10);
  param_1[0x4a] = 0;
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (lVar5 != 0) {
    plVar8 = (long *)param_1[0x4b];
    lVar6 = param_1[0x4c];
    lVar7 = param_1[0x4d];
    uVar4 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar4 & 1) != 0) {
      lVar3 = tpidr_el0;
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar3 + 0x38d480)) {
        FUN_02bcc824(plVar8,lVar5,lVar6,lVar7);
        goto LAB_02dbf428;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar5,lVar6,lVar7);
  }
LAB_02dbf428:
  FUN_0093ac1c(param_1);
  return;
}


