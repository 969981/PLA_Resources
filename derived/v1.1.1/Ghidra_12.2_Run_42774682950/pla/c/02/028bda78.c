/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028bda78; name: FUN_028bda78
 */


void FUN_028bda78(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined1 auStack_78 [24];
  
  lVar7 = param_1[0xf];
  *param_1 = &PTR_FUN_04273028;
  if (lVar7 == 0) {
LAB_028bdb30:
    lVar7 = param_1[8];
  }
  else {
    lVar1 = param_1[0x11];
    plVar2 = (long *)param_1[0x12];
    param_1[0x10] = lVar7;
    uVar6 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar6 & 1) == 0) {
LAB_028bdb14:
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar7,lVar1 - lVar7,8);
      goto LAB_028bdb30;
    }
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_028bdb14;
    FUN_02bcc824(plVar2,lVar7,lVar1 - lVar7,8);
    lVar7 = param_1[8];
  }
  if (lVar7 != 0) {
    lVar1 = param_1[10];
    plVar2 = (long *)param_1[0xb];
    param_1[9] = lVar7;
    uVar6 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar6 & 1) != 0) {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar2,lVar7,lVar1 - lVar7,8);
        puVar12 = (undefined8 *)param_1[1];
        goto joined_r0x028bdef0;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar7,lVar1 - lVar7,8);
  }
  puVar12 = (undefined8 *)param_1[1];
joined_r0x028bdef0:
  if (puVar12 == (undefined8 *)0x0) {
    return;
  }
  if ((undefined8 *)param_1[2] == puVar12) {
    puVar8 = puVar12;
  }
  else {
    lVar7 = tpidr_el0;
    puVar8 = (undefined8 *)param_1[2];
    do {
      puVar9 = puVar8 + -4;
      puVar10 = (undefined8 *)*puVar9;
      *puVar9 = 0;
      if (puVar10 != (undefined8 *)0x0) {
        FUN_02bcbe58(auStack_78,0);
        (**(code **)*puVar10)(puVar10);
        plVar2 = (long *)puVar8[-3];
        uVar3 = puVar8[-2];
        uVar11 = puVar8[-1];
        uVar6 = (**(code **)(*plVar2 + 0xc0))(plVar2);
        if ((uVar6 & 1) == 0) {
LAB_028bdc88:
          (**(code **)(*plVar2 + 0x18))(plVar2,puVar10,uVar3,uVar11);
        }
        else {
          if (*(char *)(lVar7 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar7 + 0x38d488) = 1;
            *(undefined8 *)(lVar7 + 0x38d478) = 0;
            *(undefined8 *)(lVar7 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_028bdc88;
          FUN_02bcc824(plVar2,puVar10,uVar3,uVar11);
        }
        if (*(char *)(lVar7 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar7 + 0x38d488) = 1;
          *(undefined8 *)(lVar7 + 0x38d478) = 0;
          *(undefined8 *)(lVar7 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
        }
        iVar4 = *(int *)(lVar7 + 0x38d480) + -1;
        *(int *)(lVar7 + 0x38d480) = iVar4;
        if (iVar4 == 0) {
          FUN_02bcc320();
          if (*(char *)(lVar7 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar7 + 0x38d488) = 1;
            *(undefined8 *)(lVar7 + 0x38d478) = 0;
            *(undefined8 *)(lVar7 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
          }
          *(undefined4 *)(lVar7 + 0x38d484) = 0;
        }
      }
      puVar8 = puVar9;
    } while (puVar12 != puVar9);
    puVar8 = (undefined8 *)param_1[1];
  }
  lVar7 = param_1[3];
  plVar2 = (long *)param_1[4];
  param_1[2] = puVar12;
  uVar6 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  if ((uVar6 & 1) != 0) {
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar1 + 0x38d480)) {
      FUN_02bcc824(plVar2,puVar8,lVar7 - (long)puVar8,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x028bdeb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,puVar8,lVar7 - (long)puVar8,8);
  return;
}


