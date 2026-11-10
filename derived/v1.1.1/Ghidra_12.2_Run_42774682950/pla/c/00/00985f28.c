/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00985f28; name: FUN_00985f28
 */


void FUN_00985f28(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long local_90;
  undefined8 *puStack_88;
  long local_80;
  undefined1 auStack_78 [24];
  
  local_80 = 0;
  plVar10 = (long *)param_1[4];
  local_90 = param_2;
  puStack_88 = param_1;
  if (plVar10 == (long *)0x0) {
    FUN_00985d60(param_1,param_2,param_5);
    lVar5 = param_2 + 0x20;
    local_80 = 1;
  }
  else {
    lVar5 = param_2;
    if (plVar10 != param_4) {
      plVar8 = plVar10;
      do {
        FUN_00985d60(param_1,lVar5,plVar8);
        plVar8 = plVar8 + 4;
        lVar5 = lVar5 + 0x20;
      } while (param_4 != plVar8);
    }
    lVar4 = (lVar5 - param_2 >> 5) + 1;
    FUN_00985d60(param_1,lVar5,param_5);
    lVar5 = lVar5 + 0x20;
    lVar7 = param_1[5];
    local_80 = lVar4;
    if (plVar10 + lVar7 * 4 != param_4) {
      do {
        FUN_00985d60(param_1,lVar5,param_4);
        param_4 = param_4 + 4;
        lVar5 = lVar5 + 0x20;
      } while (plVar10 + lVar7 * 4 != param_4);
      lVar7 = param_1[5];
    }
    if (lVar7 != 0) {
      lVar4 = tpidr_el0;
      do {
        while( true ) {
          lVar9 = *plVar10;
          lVar7 = lVar7 + -1;
          *plVar10 = 0;
          if (lVar9 != 0) break;
LAB_0098610c:
          plVar10 = plVar10 + 4;
          if (lVar7 == 0) goto LAB_00986020;
        }
        FUN_02bcbe58(auStack_78,0);
        FUN_009840e8(lVar9);
        plVar8 = (long *)plVar10[1];
        lVar1 = plVar10[2];
        lVar11 = plVar10[3];
        uVar3 = (**(code **)(*plVar8 + 0xc0))(plVar8);
        if ((uVar3 & 1) == 0) {
LAB_0098614c:
          (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,lVar1,lVar11);
        }
        else {
          if (*(char *)(lVar4 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar4 + 0x38d488) = 1;
            *(undefined8 *)(lVar4 + 0x38d478) = 0;
            *(undefined8 *)(lVar4 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0098614c;
          FUN_02bcc824(plVar8,lVar9,lVar1,lVar11);
        }
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
        *(int *)(lVar4 + 0x38d480) = iVar2;
        if (iVar2 != 0) goto LAB_0098610c;
        FUN_02bcc320();
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar4 + 0x38d484) = 0;
        plVar10 = plVar10 + 4;
      } while (lVar7 != 0);
    }
LAB_00986020:
    lVar4 = param_1[6];
    plVar10 = (long *)*param_1;
    uVar6 = param_1[4];
    uVar3 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar3 & 1) != 0) {
      lVar7 = tpidr_el0;
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar10,uVar6,lVar4 << 5,8);
        goto LAB_009860a4;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,uVar6,lVar4 << 5,8);
  }
LAB_009860a4:
  param_1[4] = param_2;
  param_1[5] = lVar5 - param_2 >> 5;
  param_1[6] = param_3;
  local_90 = 0;
  FUN_00985ac4(&local_90);
  return;
}


