/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b9a190; name: FUN_02b9a190
 */


void FUN_02b9a190(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_78 [24];
  
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar3 = tpidr_el0;
LAB_02b9a1d0:
  do {
    lVar6 = param_2[3];
    param_2[3] = 0;
    plVar5 = (long *)*param_2;
    if (lVar6 != 0) {
      FUN_02bcbe58(auStack_78,0);
      FUN_02b9b338(lVar6);
      plVar7 = (long *)param_2[4];
      lVar1 = param_2[5];
      lVar8 = param_2[6];
      uVar4 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((uVar4 & 1) == 0) {
LAB_02b9a248:
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,lVar1,lVar8);
      }
      else {
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02b9a248;
        FUN_02bcc824(plVar7,lVar6,lVar1,lVar8);
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
    plVar7 = *(long **)(param_1 + 0x38);
    uVar4 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar3 + 0x38d480)) {
        FUN_02bcc824(plVar7,param_2,0x38,8);
        param_2 = plVar5;
        if (plVar5 == (long *)0x0) {
          return;
        }
        goto LAB_02b9a1d0;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,param_2,0x38,8);
    param_2 = plVar5;
    if (plVar5 == (long *)0x0) {
      return;
    }
  } while( true );
}


