/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0098dbbc; name: FUN_0098dbbc
 */


void FUN_0098dbbc(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_78 [24];
  
  lVar10 = param_1[5];
  if (lVar10 != 0) {
    plVar7 = (long *)param_1[4];
    lVar4 = tpidr_el0;
LAB_0098dc24:
    do {
      lVar8 = *plVar7;
      lVar10 = lVar10 + -1;
      *plVar7 = 0;
      if (lVar8 != 0) {
        FUN_02bcbe58(auStack_78,0);
        FUN_009840e8(lVar8);
        plVar1 = (long *)plVar7[1];
        lVar2 = plVar7[2];
        lVar9 = plVar7[3];
        uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
        if ((uVar5 & 1) == 0) {
LAB_0098dc74:
          (**(code **)(*plVar1 + 0x18))(plVar1,lVar8,lVar2,lVar9);
        }
        else {
          if (*(char *)(lVar4 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar4 + 0x38d488) = 1;
            *(undefined8 *)(lVar4 + 0x38d478) = 0;
            *(undefined8 *)(lVar4 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0098dc74;
          FUN_02bcc824(plVar1,lVar8,lVar2,lVar9);
        }
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
          plVar7 = plVar7 + 4;
          if (lVar10 == 0) break;
          goto LAB_0098dc24;
        }
      }
      plVar7 = plVar7 + 4;
    } while (lVar10 != 0);
  }
  if (param_1[6] == 0) {
    return;
  }
  plVar7 = (long *)*param_1;
  lVar10 = param_1[6] << 5;
  uVar6 = param_1[4];
  uVar5 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar5 & 1) != 0) {
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar7,uVar6,lVar10,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0098deec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x18))(plVar7,uVar6,lVar10,8);
  return;
}


