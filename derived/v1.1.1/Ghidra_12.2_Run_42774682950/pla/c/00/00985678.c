/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00985678; name: FUN_00985678
 */


void FUN_00985678(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long local_90;
  undefined8 *puStack_88;
  long local_80;
  undefined1 auStack_78 [24];
  
  local_80 = 0;
  plVar10 = (long *)param_1[4];
  lVar5 = param_2;
  puStack_88 = param_1;
  if (plVar10 == (long *)0x0) {
    local_80 = 0;
  }
  else {
    local_90 = param_2;
    if (plVar10 == param_4) {
      local_80 = 0;
    }
    else {
      plVar7 = plVar10;
      do {
        FUN_00985d60(param_1,lVar5,plVar7);
        plVar7 = plVar7 + 4;
        lVar5 = lVar5 + 0x20;
      } while (param_4 != plVar7);
      local_80 = lVar5 - param_2 >> 5;
    }
    lVar8 = param_1[5];
    if (plVar10 + lVar8 * 4 != param_4) {
      do {
        FUN_00985d60(param_1,lVar5,param_4);
        param_4 = param_4 + 4;
        lVar5 = lVar5 + 0x20;
      } while (plVar10 + lVar8 * 4 != param_4);
      lVar8 = param_1[5];
    }
    if (lVar8 != 0) {
      lVar3 = tpidr_el0;
LAB_00985820:
      do {
        lVar9 = *plVar10;
        lVar8 = lVar8 + -1;
        *plVar10 = 0;
        if (lVar9 != 0) {
          FUN_02bcbe58(auStack_78,0);
          FUN_009840e8(lVar9);
          plVar7 = (long *)plVar10[1];
          lVar1 = plVar10[2];
          lVar11 = plVar10[3];
          uVar4 = (**(code **)(*plVar7 + 0xc0))(plVar7);
          if ((uVar4 & 1) == 0) {
LAB_00985870:
            (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,lVar1,lVar11);
          }
          else {
            if (*(char *)(lVar3 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar3 + 0x38d488) = 1;
              *(undefined8 *)(lVar3 + 0x38d478) = 0;
              *(undefined8 *)(lVar3 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_00985870;
            FUN_02bcc824(plVar7,lVar9,lVar1,lVar11);
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
            plVar10 = plVar10 + 4;
            if (lVar8 == 0) break;
            goto LAB_00985820;
          }
        }
        plVar10 = plVar10 + 4;
      } while (lVar8 != 0);
    }
    lVar8 = param_1[6];
    plVar10 = (long *)*param_1;
    uVar6 = param_1[4];
    uVar4 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar4 & 1) != 0) {
      lVar3 = tpidr_el0;
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar3 + 0x38d480)) {
        FUN_02bcc824(plVar10,uVar6,lVar8 << 5,8);
        goto LAB_009856bc;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,uVar6,lVar8 << 5,8);
  }
LAB_009856bc:
  param_1[4] = param_2;
  param_1[5] = lVar5 - param_2 >> 5;
  param_1[6] = param_3;
  local_90 = 0;
  FUN_00985ac4(&local_90);
  return;
}


