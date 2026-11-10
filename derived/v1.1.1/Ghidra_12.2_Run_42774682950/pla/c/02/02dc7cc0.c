/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dc7cc0; name: FUN_02dc7cc0
 */


void FUN_02dc7cc0(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  puVar6 = (undefined8 *)param_1[8];
  *param_1 = &PTR_FUN_0429a518;
  param_1[8] = 0;
  lVar3 = tpidr_el0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar6)(puVar6);
    plVar5 = (long *)param_1[9];
    uVar1 = param_1[10];
    uVar7 = param_1[0xb];
    uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar4 & 1) == 0) {
LAB_02dc7d70:
      (**(code **)(*plVar5 + 0x18))(plVar5,puVar6,uVar1,uVar7);
    }
    else {
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02dc7d70;
      FUN_02bcc824(plVar5,puVar6,uVar1,uVar7);
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
  }
  puVar6 = (undefined8 *)param_1[4];
  param_1[4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar6)(puVar6);
    plVar5 = (long *)param_1[5];
    uVar1 = param_1[6];
    uVar7 = param_1[7];
    uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar4 & 1) == 0) {
LAB_02dc7e90:
      (**(code **)(*plVar5 + 0x18))(plVar5,puVar6,uVar1,uVar7);
    }
    else {
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02dc7e90;
      FUN_02bcc824(plVar5,puVar6,uVar1,uVar7);
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
      plVar5 = (long *)param_1[2];
      goto joined_r0x02dc7f58;
    }
  }
  plVar5 = (long *)param_1[2];
joined_r0x02dc7f58:
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02dc7f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x20))();
  return;
}


