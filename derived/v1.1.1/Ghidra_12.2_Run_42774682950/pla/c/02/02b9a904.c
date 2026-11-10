/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b9a904; name: FUN_02b9a904
 */


void FUN_02b9a904(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [24];
  
  lVar5 = *param_1;
  *param_1 = 0;
  if (lVar5 == 0) {
    return;
  }
  if ((char)param_1[2] == '\0') goto LAB_02b9aa54;
  lVar7 = *(long *)(lVar5 + 0x18);
  *(undefined8 *)(lVar5 + 0x18) = 0;
  if (lVar7 == 0) goto LAB_02b9aa54;
  FUN_02bcbe58(auStack_68,0);
  FUN_02b9b338(lVar7);
  plVar6 = *(long **)(lVar5 + 0x20);
  uVar1 = *(undefined8 *)(lVar5 + 0x28);
  uVar8 = *(undefined8 *)(lVar5 + 0x30);
  uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  lVar3 = tpidr_el0;
  if ((uVar4 & 1) == 0) {
LAB_02b9a9b8:
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,uVar1,uVar8);
  }
  else {
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02b9a9b8;
    FUN_02bcc824(plVar6,lVar7,uVar1,uVar8);
  }
  if (*(char *)(lVar3 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar3 + 0x38d488) = 1;
    *(undefined8 *)(lVar3 + 0x38d478) = 0;
    *(undefined8 *)(lVar3 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar2 = *(int *)(lVar3 + 0x38d480) + -1;
  *(int *)(lVar3 + 0x38d480) = iVar2;
  if (iVar2 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar3 + 0x38d484) = 0;
  }
LAB_02b9aa54:
  plVar6 = *(long **)param_1[1];
  uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar4 & 1) != 0) {
    lVar7 = tpidr_el0;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar7 + 0x38d480)) {
      FUN_02bcc824(plVar6,lVar5,0x38,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02b9aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0x38,8);
  return;
}


