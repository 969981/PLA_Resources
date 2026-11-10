/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b9dd50; name: FUN_02b9dd50
 */


void FUN_02b9dd50(long *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_78 [24];
  
  if ((long *)param_1[6] != (long *)0x0) {
    lVar5 = tpidr_el0;
    plVar6 = (long *)param_1[6];
LAB_02b9dd8c:
    do {
      lVar7 = plVar6[3];
      plVar6[3] = 0;
      plVar4 = (long *)*plVar6;
      if (lVar7 != 0) {
        FUN_02bcbe58(auStack_78,0);
        if (*(char *)(lVar7 + 0x42) != '\0') {
          (*DAT_043f0fa8)(lVar7);
        }
        plVar8 = (long *)plVar6[4];
        lVar1 = plVar6[5];
        lVar9 = plVar6[6];
        uVar3 = (**(code **)(*plVar8 + 0xc0))(plVar8);
        if ((uVar3 & 1) == 0) {
LAB_02b9de10:
          (**(code **)(*plVar8 + 0x18))(plVar8,lVar7,lVar1,lVar9);
        }
        else {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02b9de10;
          FUN_02bcc824(plVar8,lVar7,lVar1,lVar9);
        }
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        iVar2 = *(int *)(lVar5 + 0x38d480) + -1;
        *(int *)(lVar5 + 0x38d480) = iVar2;
        if (iVar2 == 0) {
          FUN_02bcc320();
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          *(undefined4 *)(lVar5 + 0x38d484) = 0;
        }
      }
      plVar8 = (long *)param_1[7];
      uVar3 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar3 & 1) != 0) {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) {
          FUN_02bcc824(plVar8,plVar6,0x38,8);
          plVar6 = plVar4;
          if (plVar4 == (long *)0x0) break;
          goto LAB_02b9dd8c;
        }
      }
      (**(code **)(*plVar8 + 0x18))(plVar8,plVar6,0x38,8);
      plVar6 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
  lVar5 = *param_1;
  *param_1 = 0;
  if (lVar5 == 0) {
    return;
  }
  lVar7 = param_1[1];
  plVar6 = (long *)param_1[2];
  uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar3 & 1) != 0) {
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar1 + 0x38d480)) {
      FUN_02bcc824(plVar6,lVar5,lVar7 << 3,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02b9e144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar7 << 3,8);
  return;
}


