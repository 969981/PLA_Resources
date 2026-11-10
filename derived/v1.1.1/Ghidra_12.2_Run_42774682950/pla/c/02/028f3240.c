/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028f3240; name: FUN_028f3240
 */


void FUN_028f3240(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  FUN_02bcbe58(auStack_90,0);
  plVar9 = *(long **)(param_2 + 0x108);
  lVar3 = tpidr_el0;
joined_r0x028f327c:
  plVar6 = plVar9;
  if (plVar9 != (long *)0x0) {
    do {
      puVar10 = (undefined8 *)plVar6[6];
      plVar6[6] = 0;
      plVar9 = (long *)*plVar6;
      if (puVar10 == (undefined8 *)0x0) {
LAB_028f3364:
        plVar5 = (long *)plVar6[5];
      }
      else {
        FUN_02bcbe58(auStack_78,0);
        (**(code **)*puVar10)(puVar10);
        plVar5 = (long *)plVar6[7];
        lVar8 = plVar6[8];
        lVar11 = plVar6[9];
        uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
        if ((uVar4 & 1) == 0) {
LAB_028f330c:
          (**(code **)(*plVar5 + 0x18))(plVar5,puVar10,lVar8,lVar11);
        }
        else {
          if (*(char *)(lVar3 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar3 + 0x38d488) = 1;
            *(undefined8 *)(lVar3 + 0x38d478) = 0;
            *(undefined8 *)(lVar3 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_028f330c;
          FUN_02bcc824(plVar5,puVar10,lVar8,lVar11);
        }
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        iVar2 = *(int *)(lVar3 + 0x38d480) + -1;
        *(int *)(lVar3 + 0x38d480) = iVar2;
        if (iVar2 != 0) goto LAB_028f3364;
        FUN_02bcc320();
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar3 + 0x38d484) = 0;
        plVar5 = (long *)plVar6[5];
      }
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
      plVar5 = *(long **)(param_2 + 0x110);
      uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
      if ((uVar4 & 1) == 0) goto LAB_028f33c8;
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_028f33c8;
      FUN_02bcc824(plVar5,plVar6,0x50,8);
      plVar6 = plVar9;
      if (plVar9 == (long *)0x0) break;
    } while( true );
  }
  lVar8 = *(long *)(param_2 + 0xd8);
  *(undefined8 *)(param_2 + 0xd8) = 0;
  if (lVar8 == 0) {
LAB_028f3644:
    plVar9 = *(long **)(param_2 + 0xa0);
  }
  else {
    plVar9 = *(long **)(param_2 + 0xe8);
    lVar11 = *(long *)(param_2 + 0xe0) << 3;
    uVar4 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar4 & 1) == 0) {
LAB_028f3628:
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,lVar11,8);
      goto LAB_028f3644;
    }
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_028f3628;
    FUN_02bcc824(plVar9,lVar8,lVar11,8);
    plVar9 = *(long **)(param_2 + 0xa0);
  }
  if (plVar9 != (long *)0x0) {
    do {
      puVar10 = (undefined8 *)plVar9[6];
      plVar9[6] = 0;
      plVar6 = (long *)*plVar9;
      if (puVar10 == (undefined8 *)0x0) {
LAB_028f3730:
        plVar5 = (long *)plVar9[5];
      }
      else {
        FUN_02bcbe58(auStack_78,0);
        (**(code **)*puVar10)(puVar10);
        plVar5 = (long *)plVar9[7];
        lVar8 = plVar9[8];
        lVar11 = plVar9[9];
        uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
        if ((uVar4 & 1) == 0) {
LAB_028f36d8:
          (**(code **)(*plVar5 + 0x18))(plVar5,puVar10,lVar8,lVar11);
        }
        else {
          if (*(char *)(lVar3 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar3 + 0x38d488) = 1;
            *(undefined8 *)(lVar3 + 0x38d478) = 0;
            *(undefined8 *)(lVar3 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_028f36d8;
          FUN_02bcc824(plVar5,puVar10,lVar8,lVar11);
        }
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        iVar2 = *(int *)(lVar3 + 0x38d480) + -1;
        *(int *)(lVar3 + 0x38d480) = iVar2;
        if (iVar2 != 0) goto LAB_028f3730;
        FUN_02bcc320();
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar3 + 0x38d484) = 0;
        plVar5 = (long *)plVar9[5];
      }
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
      plVar5 = *(long **)(param_2 + 0xa8);
      uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
      if ((uVar4 & 1) == 0) {
LAB_028f3794:
        (**(code **)(*plVar5 + 0x18))(plVar5,plVar9,0x50,8);
      }
      else {
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_028f3794;
        FUN_02bcc824(plVar5,plVar9,0x50,8);
      }
      plVar9 = plVar6;
    } while (plVar6 != (long *)0x0);
  }
  lVar8 = *(long *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x70) = 0;
  if (lVar8 == 0) {
LAB_028f3a2c:
    plVar9 = *(long **)(param_2 + 0x38);
  }
  else {
    plVar9 = *(long **)(param_2 + 0x80);
    lVar11 = *(long *)(param_2 + 0x78) << 3;
    uVar4 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar4 & 1) == 0) {
LAB_028f3a10:
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,lVar11,8);
      goto LAB_028f3a2c;
    }
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_028f3a10;
    FUN_02bcc824(plVar9,lVar8,lVar11,8);
    plVar9 = *(long **)(param_2 + 0x38);
  }
  if (plVar9 != (long *)0x0) {
    do {
      puVar10 = (undefined8 *)plVar9[6];
      plVar9[6] = 0;
      plVar6 = (long *)*plVar9;
      if (puVar10 == (undefined8 *)0x0) {
LAB_028f3b18:
        plVar5 = (long *)plVar9[5];
      }
      else {
        FUN_02bcbe58(auStack_78,0);
        (**(code **)*puVar10)(puVar10);
        plVar5 = (long *)plVar9[7];
        lVar8 = plVar9[8];
        lVar11 = plVar9[9];
        uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
        if ((uVar4 & 1) == 0) {
LAB_028f3ac0:
          (**(code **)(*plVar5 + 0x18))(plVar5,puVar10,lVar8,lVar11);
        }
        else {
          if (*(char *)(lVar3 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar3 + 0x38d488) = 1;
            *(undefined8 *)(lVar3 + 0x38d478) = 0;
            *(undefined8 *)(lVar3 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_028f3ac0;
          FUN_02bcc824(plVar5,puVar10,lVar8,lVar11);
        }
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        iVar2 = *(int *)(lVar3 + 0x38d480) + -1;
        *(int *)(lVar3 + 0x38d480) = iVar2;
        if (iVar2 != 0) goto LAB_028f3b18;
        FUN_02bcc320();
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar3 + 0x38d484) = 0;
        plVar5 = (long *)plVar9[5];
      }
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
      plVar5 = *(long **)(param_2 + 0x40);
      uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
      if ((uVar4 & 1) == 0) {
LAB_028f3b7c:
        (**(code **)(*plVar5 + 0x18))(plVar5,plVar9,0x50,8);
      }
      else {
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_028f3b7c;
        FUN_02bcc824(plVar5,plVar9,0x50,8);
      }
      plVar9 = plVar6;
    } while (plVar6 != (long *)0x0);
  }
  lVar8 = *(long *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  if (lVar8 != 0) {
    plVar9 = *(long **)(param_2 + 0x18);
    lVar11 = *(long *)(param_2 + 0x10) << 3;
    uVar4 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar3 + 0x38d480)) {
        FUN_02bcc824(plVar9,lVar8,lVar11,8);
        goto LAB_028f3e14;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,lVar11,8);
  }
LAB_028f3e14:
  plVar9 = (long *)*param_1;
  uVar1 = param_1[1];
  uVar7 = param_1[2];
  uVar4 = (**(code **)(*plVar9 + 0xc0))(plVar9);
  if ((uVar4 & 1) != 0) {
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar3 + 0x38d480)) {
      FUN_02bcc824(plVar9,param_2,uVar1,uVar7);
      goto LAB_028f3e90;
    }
  }
  (**(code **)(*plVar9 + 0x18))(plVar9,param_2,uVar1,uVar7);
LAB_028f3e90:
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
  return;
LAB_028f33c8:
  (**(code **)(*plVar5 + 0x18))(plVar5,plVar6,0x50,8);
  goto joined_r0x028f327c;
}


