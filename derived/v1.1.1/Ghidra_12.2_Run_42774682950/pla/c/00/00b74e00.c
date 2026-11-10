/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b74e00; name: FUN_00b74e00
 */


void FUN_00b74e00(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar10;
  long *plVar9;
  undefined1 auStack_78 [24];
  
  plVar1 = (long *)*param_1;
  if ((long *)param_1[1] != plVar1) {
    lVar5 = tpidr_el0;
    plVar9 = (long *)param_1[1];
    do {
      plVar10 = plVar9 + -4;
      lVar8 = *plVar10;
      *plVar10 = 0;
      if (lVar8 != 0) {
        FUN_02bcbe58(auStack_78,0);
        FUN_00936104(lVar8);
        plVar2 = (long *)plVar9[-3];
        lVar3 = plVar9[-2];
        lVar7 = plVar9[-1];
        uVar6 = (**(code **)(*plVar2 + 0xc0))();
        if ((uVar6 & 1) == 0) {
LAB_00b74f14:
          (**(code **)(*plVar2 + 0x18))(plVar2,lVar8,lVar3,lVar7);
        }
        else {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_00b74f14;
          FUN_02bcc824(plVar2,lVar8,lVar3,lVar7);
        }
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        iVar4 = *(int *)(lVar5 + 0x38d480) + -1;
        *(int *)(lVar5 + 0x38d480) = iVar4;
        if (iVar4 == 0) {
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
      plVar9 = plVar10;
    } while (plVar1 != plVar10);
  }
  param_1[1] = plVar1;
  return;
}


