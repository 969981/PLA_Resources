/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ca6260; name: FUN_02ca6260
 */


void FUN_02ca6260(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  lVar5 = param_1[0x3c];
  *param_1 = &PTR_FUN_04295650;
  lVar3 = tpidr_el0;
  if (lVar5 == 0) {
LAB_02ca6314:
    lVar5 = param_1[0x34];
  }
  else {
    lVar1 = param_1[0x3e];
    plVar7 = (long *)param_1[0x3f];
    param_1[0x3d] = lVar5;
    uVar4 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar4 & 1) == 0) {
LAB_02ca62f8:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,lVar1 - lVar5,0x10);
      goto LAB_02ca6314;
    }
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02ca62f8;
    FUN_02bcc824(plVar7,lVar5,lVar1 - lVar5,0x10);
    lVar5 = param_1[0x34];
  }
  if (lVar5 != 0) {
    lVar1 = param_1[0x36];
    plVar7 = (long *)param_1[0x37];
    param_1[0x35] = lVar5;
    uVar4 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar3 + 0x38d480)) {
        FUN_02bcc824(plVar7,lVar5,lVar1 - lVar5,4);
        goto LAB_02ca6398;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,lVar1 - lVar5,4);
  }
LAB_02ca6398:
  FUN_02ca963c(param_1 + 0x2b,param_1[0x2c]);
  FUN_02ca963c(param_1 + 0x24,param_1[0x25]);
  plVar7 = (long *)param_1[0x1d];
joined_r0x02ca63b4:
  if (plVar7 != (long *)0x0) {
    do {
      lVar5 = plVar7[3];
      plVar7[3] = 0;
      plVar8 = (long *)*plVar7;
      if (lVar5 != 0) {
        FUN_02ca8dd0(plVar7 + 4);
      }
      plVar6 = (long *)param_1[0x1e];
      uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar4 & 1) != 0) {
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar3 + 0x38d480)) goto LAB_02ca646c;
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar7,0x38,8);
      plVar7 = plVar8;
      if (plVar8 == (long *)0x0) break;
    } while( true );
  }
  lVar5 = param_1[0x17];
  param_1[0x17] = 0;
  if (lVar5 == 0) {
LAB_02ca6550:
    plVar7 = (long *)param_1[0x10];
    if (plVar7 == (long *)0x0) goto LAB_02ca66f8;
LAB_02ca6558:
    if ((long *)param_1[0x11] == plVar7) {
      plVar8 = plVar7;
    }
    else {
      plVar8 = (long *)param_1[0x11];
      do {
        plVar6 = plVar8 + -8;
        lVar5 = *plVar6;
        if (lVar5 != 0) {
          lVar1 = plVar8[-6];
          plVar2 = (long *)plVar8[-5];
          plVar8[-7] = lVar5;
          uVar4 = (**(code **)(*plVar2 + 0xc0))(plVar2);
          if ((uVar4 & 1) != 0) {
            if (*(char *)(lVar3 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar3 + 0x38d488) = 1;
              *(undefined8 *)(lVar3 + 0x38d478) = 0;
              *(undefined8 *)(lVar3 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar3 + 0x38d480)) {
              FUN_02bcc824(plVar2,lVar5,lVar1 - lVar5,4);
              goto LAB_02ca65fc;
            }
          }
          (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,4);
        }
LAB_02ca65fc:
        plVar8 = plVar6;
      } while (plVar7 != plVar6);
      plVar8 = (long *)param_1[0x10];
    }
    lVar5 = param_1[0x12];
    plVar6 = (long *)param_1[0x13];
    param_1[0x11] = plVar7;
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_02ca66dc:
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar8,lVar5 - (long)plVar8,8);
      goto LAB_02ca66f8;
    }
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02ca66dc;
    FUN_02bcc824(plVar6,plVar8,lVar5 - (long)plVar8,8);
    plVar7 = (long *)param_1[9];
  }
  else {
    lVar1 = param_1[0x18];
    plVar7 = (long *)param_1[0x19];
    uVar4 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar4 & 1) == 0) {
LAB_02ca6534:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,lVar1 << 3,8);
      goto LAB_02ca6550;
    }
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02ca6534;
    FUN_02bcc824(plVar7,lVar5,lVar1 << 3,8);
    plVar7 = (long *)param_1[0x10];
    if (plVar7 != (long *)0x0) goto LAB_02ca6558;
LAB_02ca66f8:
    plVar7 = (long *)param_1[9];
  }
  if (plVar7 == (long *)0x0) {
LAB_02ca68a0:
    plVar7 = (long *)param_1[2];
  }
  else {
    if ((long *)param_1[10] == plVar7) {
      plVar8 = plVar7;
    }
    else {
      plVar8 = (long *)param_1[10];
      do {
        plVar6 = plVar8 + -8;
        lVar5 = *plVar6;
        if (lVar5 != 0) {
          lVar1 = plVar8[-6];
          plVar2 = (long *)plVar8[-5];
          plVar8[-7] = lVar5;
          uVar4 = (**(code **)(*plVar2 + 0xc0))(plVar2);
          if ((uVar4 & 1) != 0) {
            if (*(char *)(lVar3 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar3 + 0x38d488) = 1;
              *(undefined8 *)(lVar3 + 0x38d478) = 0;
              *(undefined8 *)(lVar3 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar3 + 0x38d480)) {
              FUN_02bcc824(plVar2,lVar5,lVar1 - lVar5,4);
              goto LAB_02ca67a4;
            }
          }
          (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,4);
        }
LAB_02ca67a4:
        plVar8 = plVar6;
      } while (plVar7 != plVar6);
      plVar8 = (long *)param_1[9];
    }
    lVar5 = param_1[0xb];
    plVar6 = (long *)param_1[0xc];
    param_1[10] = plVar7;
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_02ca6884:
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar8,lVar5 - (long)plVar8,8);
      goto LAB_02ca68a0;
    }
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02ca6884;
    FUN_02bcc824(plVar6,plVar8,lVar5 - (long)plVar8,8);
    plVar7 = (long *)param_1[2];
  }
  if (plVar7 == (long *)0x0) {
    return;
  }
  if ((long *)param_1[3] == plVar7) {
    plVar8 = plVar7;
    goto LAB_02ca69cc;
  }
  plVar8 = (long *)param_1[3];
  do {
    plVar6 = plVar8 + -0xb;
    lVar5 = *plVar6;
    if (lVar5 != 0) {
      lVar1 = plVar8[-9];
      plVar2 = (long *)plVar8[-8];
      plVar8[-10] = lVar5;
      uVar4 = (**(code **)(*plVar2 + 0xc0))(plVar2);
      if ((uVar4 & 1) != 0) {
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar3 + 0x38d480)) {
          FUN_02bcc824(plVar2,lVar5,lVar1 - lVar5,4);
          goto LAB_02ca694c;
        }
      }
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,4);
    }
LAB_02ca694c:
    plVar8 = plVar6;
    if (plVar7 == plVar6) {
      plVar8 = (long *)param_1[2];
LAB_02ca69cc:
      lVar5 = param_1[4];
      plVar6 = (long *)param_1[5];
      param_1[3] = plVar7;
      uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar4 & 1) != 0) {
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar3 + 0x38d480)) {
          FUN_02bcc824(plVar6,plVar8,lVar5 - (long)plVar8,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02ca6a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar8,lVar5 - (long)plVar8,8);
      return;
    }
  } while( true );
LAB_02ca646c:
  FUN_02bcc824(plVar6,plVar7,0x38,8);
  plVar7 = plVar8;
  goto joined_r0x02ca63b4;
}


