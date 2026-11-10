/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b53578; name: FUN_00b53578
 */


void FUN_00b53578(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auStack_78 [24];
  
  FUN_02bcbe58(auStack_78,0);
  if ((long *)param_2[0xe] != (long *)0x0) {
    (**(code **)(*(long *)param_2[0xe] + 0x18))();
  }
  if ((long *)param_2[0xd] != (long *)0x0) {
    (**(code **)(*(long *)param_2[0xd] + 0x18))();
  }
  puVar7 = (undefined8 *)param_2[6];
  lVar4 = tpidr_el0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar9 = (long *)*puVar7;
    if ((long *)puVar7[3] != (long *)0x0) {
      (**(code **)(*(long *)puVar7[3] + 0x18))();
    }
    plVar10 = (long *)param_2[7];
    uVar5 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar5 & 1) == 0) {
LAB_00b53650:
      (**(code **)(*plVar10 + 0x18))(plVar10,puVar7,0x20,8);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_00b53650;
      FUN_02bcc824(plVar10,puVar7,0x20,8);
    }
    if (plVar9 != (long *)0x0) {
      plVar10 = (long *)*plVar9;
      if ((long *)plVar9[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar9[3] + 0x18))();
      }
      plVar11 = (long *)param_2[7];
      uVar5 = (**(code **)(*plVar11 + 0xc0))(plVar11);
      if ((uVar5 & 1) != 0) {
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar4 + 0x38d480)) {
          FUN_02bcc824(plVar11,plVar9,0x20,8);
          goto joined_r0x00b53900;
        }
      }
      (**(code **)(*plVar11 + 0x18))(plVar11,plVar9,0x20,8);
joined_r0x00b53900:
      if (plVar10 != (long *)0x0) {
        do {
          plVar9 = (long *)*plVar10;
          if ((long *)plVar10[3] != (long *)0x0) {
            (**(code **)(*(long *)plVar10[3] + 0x18))();
          }
          plVar11 = (long *)param_2[7];
          uVar5 = (**(code **)(*plVar11 + 0xc0))(plVar11);
          if ((uVar5 & 1) != 0) {
            if (*(char *)(lVar4 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar4 + 0x38d488) = 1;
              *(undefined8 *)(lVar4 + 0x38d478) = 0;
              *(undefined8 *)(lVar4 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar4 + 0x38d480)) goto LAB_00b539b4;
          }
          (**(code **)(*plVar11 + 0x18))(plVar11,plVar10,0x20,8);
          plVar10 = plVar9;
          if (plVar9 == (long *)0x0) break;
        } while( true );
      }
    }
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
        FUN_02bcc824(plVar9,lVar8,lVar1 << 3,8);
        goto LAB_00b53784;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,lVar1 << 3,8);
  }
LAB_00b53784:
  plVar9 = (long *)*param_1;
  uVar2 = param_1[1];
  uVar6 = param_1[2];
  uVar5 = (**(code **)(*plVar9 + 0xc0))(plVar9);
  if ((uVar5 & 1) != 0) {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar9,param_2,uVar2,uVar6);
      goto LAB_00b537fc;
    }
  }
  (**(code **)(*plVar9 + 0x18))(plVar9,param_2,uVar2,uVar6);
LAB_00b537fc:
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
LAB_00b539b4:
  FUN_02bcc824(plVar11,plVar10,0x20,8);
  plVar10 = plVar9;
  goto joined_r0x00b53900;
}


