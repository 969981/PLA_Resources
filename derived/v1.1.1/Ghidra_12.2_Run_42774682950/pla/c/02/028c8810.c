/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028c8810; name: FUN_028c8810
 */


void FUN_028c8810(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_78 [24];
  
  *param_1 = (long)&PTR_FUN_04273288;
  param_1[9] = (long)&PTR_LAB_042732e8;
  param_1[10] = (long)&PTR_LAB_04273330;
  if ((long *)param_1[0x58] != (long *)0x0) {
    lVar5 = tpidr_el0;
    plVar6 = (long *)param_1[0x58];
LAB_028c8864:
    do {
      lVar9 = plVar6[6];
      plVar6[6] = 0;
      plVar8 = (long *)*plVar6;
      if (lVar9 == 0) {
LAB_028c8944:
        plVar4 = (long *)plVar6[5];
      }
      else {
        FUN_02bcbe58(auStack_78,0);
        FUN_00936104(lVar9 + 0x60);
        FUN_00936104(lVar9 + 0x30);
        FUN_00936104(lVar9);
        plVar4 = (long *)plVar6[7];
        lVar7 = plVar6[8];
        lVar10 = plVar6[9];
        uVar3 = (**(code **)(*plVar4 + 0xc0))(plVar4);
        if ((uVar3 & 1) == 0) {
LAB_028c88ec:
          (**(code **)(*plVar4 + 0x18))(plVar4,lVar9,lVar7,lVar10);
        }
        else {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_028c88ec;
          FUN_02bcc824(plVar4,lVar9,lVar7,lVar10);
        }
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        iVar1 = *(int *)(lVar5 + 0x38d480) + -1;
        *(int *)(lVar5 + 0x38d480) = iVar1;
        if (iVar1 != 0) goto LAB_028c8944;
        FUN_02bcc320();
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar5 + 0x38d484) = 0;
        plVar4 = (long *)plVar6[5];
      }
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
      plVar4 = (long *)param_1[0x59];
      uVar3 = (**(code **)(*plVar4 + 0xc0))(plVar4);
      if ((uVar3 & 1) == 0) {
LAB_028c89a8:
        (**(code **)(*plVar4 + 0x18))(plVar4,plVar6,0x50,8);
        plVar6 = plVar8;
        if (plVar8 == (long *)0x0) break;
        goto LAB_028c8864;
      }
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_028c89a8;
      FUN_02bcc824(plVar4,plVar6,0x50,8);
      plVar6 = plVar8;
    } while (plVar8 != (long *)0x0);
  }
  lVar5 = param_1[0x52];
  param_1[0x52] = 0;
  if (lVar5 != 0) {
    lVar9 = param_1[0x53];
    plVar6 = (long *)param_1[0x54];
    uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar3 & 1) != 0) {
      lVar7 = tpidr_el0;
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar6,lVar5,lVar9 << 3,8);
        goto LAB_028c8c2c;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar9 << 3,8);
  }
LAB_028c8c2c:
  lVar5 = param_1[0x4e];
  param_1[0x4e] = 0;
  if (lVar5 != 0) {
    FUN_028c9150(param_1 + 0x4f);
  }
  puVar2 = PTR_DAT_0437b260;
  lVar5 = param_1[0x4a];
  param_1[0x4a] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[9] = (long)(puVar2 + 0x70);
  param_1[10] = (long)(puVar2 + 0xb8);
  if (lVar5 != 0) {
    plVar6 = (long *)param_1[0x4b];
    lVar9 = param_1[0x4c];
    lVar7 = param_1[0x4d];
    uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar3 & 1) != 0) {
      lVar10 = tpidr_el0;
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar10 + 0x38d480)) {
        FUN_02bcc824(plVar6,lVar5,lVar9,lVar7);
        goto LAB_028c8ce8;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar9,lVar7);
  }
LAB_028c8ce8:
  FUN_0093ac1c(param_1);
  return;
}


