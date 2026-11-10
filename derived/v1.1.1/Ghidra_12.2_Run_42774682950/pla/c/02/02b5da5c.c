/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b5da5c; name: FUN_02b5da5c
 */


void FUN_02b5da5c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_c0;
  long local_b8;
  long local_b0;
  long *plStack_a8;
  char local_88 [32];
  long *local_68;
  
  lVar10 = param_1[0x25];
  lVar11 = param_1[0x26];
  *param_1 = &PTR_FUN_04285338;
  param_1[9] = &PTR_LAB_04285370;
  lVar5 = tpidr_el0;
  if (lVar10 != lVar11) {
    do {
      FUN_02b5dfa0(&local_c0,lVar10);
      FUN_02b7f4f8(*(undefined8 *)(param_1[0xb] + 0x58),local_88);
      if (local_88[0] != '\0') {
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        local_88[0] = '\0';
      }
      plVar7 = plStack_a8;
      lVar12 = local_c0;
      if (local_c0 != 0) {
        local_b8 = local_c0;
        lVar9 = local_b0 - local_c0;
        uVar6 = (**(code **)(*plStack_a8 + 0xc0))(plStack_a8);
        if ((uVar6 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar7,lVar12,lVar9,1);
            goto LAB_02b5dadc;
          }
        }
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar12,lVar9,1);
      }
LAB_02b5dadc:
      lVar10 = lVar10 + 0x60;
    } while (lVar11 != lVar10);
  }
  if ((long *)param_1[0x30] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x30] + 0x20))();
  }
  lVar10 = param_1[0x25];
  if (lVar10 == 0) {
LAB_02b5ddc8:
    lVar10 = param_1[0x1e];
  }
  else {
    lVar11 = param_1[0x26];
    if (lVar11 == lVar10) {
      lVar11 = lVar10;
    }
    else {
      lVar12 = 0;
      do {
        lVar9 = lVar11 + lVar12;
        if (*(char *)(lVar9 + -0x28) != '\0') {
          if (*(long **)(lVar9 + -8) != (long *)0x0) {
            (**(code **)(**(long **)(lVar9 + -8) + 0x20))();
          }
          *(undefined1 *)(lVar9 + -0x28) = 0;
        }
        lVar8 = *(long *)(lVar9 + -0x60);
        if (lVar8 != 0) {
          plVar7 = *(long **)(lVar9 + -0x48);
          *(long *)(lVar9 + -0x58) = lVar8;
          lVar9 = *(long *)(lVar9 + -0x50) - lVar8;
          uVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7);
          if ((uVar6 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar7,lVar8,lVar9,1);
              goto LAB_02b5dc44;
            }
          }
          (**(code **)(*plVar7 + 0x18))(plVar7,lVar8,lVar9,1);
        }
LAB_02b5dc44:
        lVar12 = lVar12 + -0x60;
      } while (lVar10 - lVar11 != lVar12);
      lVar11 = param_1[0x25];
    }
    lVar12 = param_1[0x27];
    plVar7 = (long *)param_1[0x28];
    param_1[0x26] = lVar10;
    uVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar6 & 1) == 0) {
LAB_02b5ddac:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,lVar12 - lVar11,8);
      goto LAB_02b5ddc8;
    }
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02b5ddac;
    FUN_02bcc824(plVar7,lVar11,lVar12 - lVar11,8);
    lVar10 = param_1[0x1e];
  }
  if (lVar10 != 0) {
    lVar11 = param_1[0x20];
    plVar7 = (long *)param_1[0x21];
    param_1[0x1f] = lVar10;
    uVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar6 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar7,lVar10,lVar11 - lVar10,4);
        goto LAB_02b5de4c;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar10,lVar11 - lVar10,4);
  }
LAB_02b5de4c:
  FUN_02b5e888(param_1 + 0x17);
  FUN_02b5e888(param_1 + 0x10);
  if ((long *)param_1[0xf] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf] + 0x20))();
  }
  plVar7 = (long *)param_1[0xb];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  return;
}


