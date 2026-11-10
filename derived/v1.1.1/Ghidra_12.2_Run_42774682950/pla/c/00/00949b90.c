/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00949b90; name: FUN_00949b90
 */


void FUN_00949b90(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  
  FUN_00949f0c();
  puVar1 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  if (puVar1 != puVar3) {
    plVar8 = (long *)param_1[10];
    uVar7 = *puVar1;
    uVar5 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    lVar6 = tpidr_el0;
    if ((uVar5 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar8,uVar7,0xfc0,8);
        goto joined_r0x00949c68;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,uVar7,0xfc0,8);
joined_r0x00949c68:
    do {
      puVar1 = puVar1 + 1;
      if (puVar1 == puVar3) goto LAB_00949d08;
      plVar8 = (long *)param_1[10];
      uVar7 = *puVar1;
      uVar5 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar5 & 1) != 0) {
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar8,uVar7,0xfc0,8);
          goto joined_r0x00949c68;
        }
      }
      (**(code **)(*plVar8 + 0x18))(plVar8,uVar7,0xfc0,8);
    } while( true );
  }
  goto LAB_00949bc0;
LAB_00949d08:
  lVar6 = param_1[2] - param_1[1];
  if (lVar6 != 0) {
    param_1[2] = param_1[2] + (lVar6 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    lVar6 = *param_1;
    goto joined_r0x00949d2c;
  }
LAB_00949bc0:
  lVar6 = *param_1;
joined_r0x00949d2c:
  if (lVar6 == 0) {
    return;
  }
  lVar2 = param_1[3];
  plVar8 = (long *)param_1[4];
  uVar5 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  if ((uVar5 & 1) != 0) {
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar8,lVar6,lVar2 - lVar6,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00949dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x18))(plVar8,lVar6,lVar2 - lVar6,8);
  return;
}


