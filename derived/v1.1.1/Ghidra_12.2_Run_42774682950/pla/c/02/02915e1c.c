/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02915e1c; name: FUN_02915e1c
 */


void FUN_02915e1c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auStack_78 [24];
  
  FUN_02bcbe58(auStack_78,0);
  nn::os::FinalizeMutex((MutexType *)(param_2 + 0xe));
  lVar4 = tpidr_el0;
  plVar9 = (long *)param_2[6];
joined_r0x02915e60:
  if (plVar9 != (long *)0x0) {
    do {
      plVar11 = (long *)*plVar9;
      pcVar6 = (code *)plVar9[5];
      if (pcVar6 != (code *)0x0) {
        plVar9[6] = 0;
        plVar9[7] = 0;
        plVar9[4] = 0;
        plVar9[5] = 0;
        (*pcVar6)(plVar9 + 8);
      }
      plVar10 = (long *)param_2[7];
      uVar5 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar5 & 1) != 0) {
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar4 + 0x38d480)) goto LAB_02915f14;
      }
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar9,0xb0,0x10);
      plVar9 = plVar11;
      if (plVar11 == (long *)0x0) break;
    } while( true );
  }
  lVar8 = *param_2;
  *param_2 = 0;
  if (lVar8 != 0) {
    lVar1 = param_2[1];
    plVar9 = (long *)param_2[2];
    uVar5 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar5 & 1) != 0) {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar9,lVar8,lVar1 << 3,0x10);
        goto LAB_02916004;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,lVar1 << 3,0x10);
  }
LAB_02916004:
  plVar9 = (long *)*param_1;
  uVar2 = param_1[1];
  uVar7 = param_1[2];
  uVar5 = (**(code **)(*plVar9 + 0xc0))(plVar9);
  if ((uVar5 & 1) != 0) {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar9,param_2,uVar2,uVar7);
      goto LAB_0291607c;
    }
  }
  (**(code **)(*plVar9 + 0x18))(plVar9,param_2,uVar2,uVar7);
LAB_0291607c:
  if (*(char *)(lVar4 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar4 + 0x38d488) = 1;
    *(undefined8 *)(lVar4 + 0x38d478) = 0;
    *(undefined8 *)(lVar4 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar3 = *(int *)(lVar4 + 0x38d480) + -1;
  *(int *)(lVar4 + 0x38d480) = iVar3;
  if (iVar3 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar4 + 0x38d484) = 0;
  }
  return;
LAB_02915f14:
  FUN_02bcc824(plVar10,plVar9,0xb0,0x10);
  plVar9 = plVar11;
  goto joined_r0x02915e60;
}


