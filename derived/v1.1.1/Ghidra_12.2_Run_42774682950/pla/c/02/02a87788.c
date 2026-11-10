/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a87788; name: FUN_02a87788
 */


void FUN_02a87788(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  ulong uVar5;
  byte *pbVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  
  pbVar10 = (byte *)param_1[0x11];
  *param_1 = &PTR_FUN_0427f448;
  lVar2 = tpidr_el0;
  if (pbVar10 != (byte *)0x0) {
    pbVar6 = (byte *)param_1[0x12];
    if (pbVar6 != pbVar10) {
      bVar1 = pbVar6[-0x18];
      pbVar3 = pbVar6 + -0x18;
      plVar4 = DAT_043f1798;
      do {
        DAT_043f1798 = plVar4;
        if (((bVar1 & 1) != 0) && (lVar8 = *(long *)(pbVar6 + -8), lVar8 != 0)) {
          plVar7 = *(long **)(lVar2 + 0x20);
          if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
            *(long **)(lVar2 + 0x20) = plVar4;
            plVar7 = plVar4;
          }
          uVar5 = (**(code **)(*plVar7 + 0xc0))(plVar7);
          if ((uVar5 & 1) != 0) {
            if (*(char *)(lVar2 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar2 + 0x38d488) = 1;
              *(undefined8 *)(lVar2 + 0x38d478) = 0;
              *(undefined8 *)(lVar2 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar2 + 0x38d480)) {
              FUN_02bcc824(plVar7,lVar8,0,8);
              goto LAB_02a87814;
            }
          }
          (**(code **)(*plVar7 + 0x18))(plVar7,lVar8,0,8);
        }
LAB_02a87814:
        if (pbVar10 == pbVar3) goto LAB_02a87910;
        bVar1 = pbVar3[-0x18];
        pbVar6 = pbVar3;
        pbVar3 = pbVar3 + -0x18;
        plVar4 = DAT_043f1798;
      } while( true );
    }
    param_1[0x12] = pbVar10;
    if (pbVar10 != (byte *)0x0) goto LAB_02a8792c;
  }
LAB_02a879cc:
  lVar8 = param_1[0xe];
  if (lVar8 == 0) goto LAB_02a87a78;
LAB_02a879d4:
  param_1[0xf] = lVar8;
  plVar4 = DAT_043f1798;
  plVar7 = *(long **)(lVar2 + 0x20);
  if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
    *(long **)(lVar2 + 0x20) = DAT_043f1798;
    plVar7 = plVar4;
  }
  uVar5 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar5 & 1) == 0) {
LAB_02a87a5c:
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar8,0,8);
    goto LAB_02a87a78;
  }
  if (*(char *)(lVar2 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar2 + 0x38d488) = 1;
    *(undefined8 *)(lVar2 + 0x38d478) = 0;
    *(undefined8 *)(lVar2 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
  }
  if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02a87a5c;
  FUN_02bcc824(plVar7,lVar8,0,8);
  lVar8 = param_1[0xb];
  goto joined_r0x02a87f80;
LAB_02a87cd8:
  param_1[0xc] = lVar8;
  lVar8 = param_1[0xb];
  if (param_1[0xb] != 0) goto LAB_02a87cf4;
  goto LAB_02a87d94;
LAB_02a87910:
  param_1[0x12] = pbVar10;
  pbVar10 = (byte *)param_1[0x11];
  if ((byte *)param_1[0x11] == (byte *)0x0) goto LAB_02a879cc;
LAB_02a8792c:
  plVar4 = DAT_043f1798;
  plVar7 = *(long **)(lVar2 + 0x20);
  if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
    *(long **)(lVar2 + 0x20) = DAT_043f1798;
    plVar7 = plVar4;
  }
  uVar5 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar5 & 1) == 0) {
LAB_02a879b0:
    (**(code **)(*plVar7 + 0x18))(plVar7,pbVar10,0,8);
    goto LAB_02a879cc;
  }
  if (*(char *)(lVar2 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar2 + 0x38d488) = 1;
    *(undefined8 *)(lVar2 + 0x38d478) = 0;
    *(undefined8 *)(lVar2 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
  }
  if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02a879b0;
  FUN_02bcc824(plVar7,pbVar10,0,8);
  lVar8 = param_1[0xe];
  if (lVar8 != 0) goto LAB_02a879d4;
LAB_02a87a78:
  lVar8 = param_1[0xb];
joined_r0x02a87f80:
  if (lVar8 == 0) {
LAB_02a87d94:
    lVar8 = param_1[8];
    if (lVar8 == 0) goto LAB_02a87e40;
LAB_02a87d9c:
    param_1[9] = lVar8;
    plVar4 = DAT_043f1798;
    plVar7 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar7 = plVar4;
    }
    uVar5 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar5 & 1) == 0) {
LAB_02a87e24:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar8,0,8);
      goto LAB_02a87e40;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02a87e24;
    FUN_02bcc824(plVar7,lVar8,0,8);
    lVar8 = param_1[5];
  }
  else {
    lVar11 = param_1[0xc];
    if (lVar11 != lVar8) {
      bVar1 = *(byte *)(lVar11 + -0x18);
      plVar4 = DAT_043f1798;
      do {
        DAT_043f1798 = plVar4;
        if (((bVar1 & 1) != 0) && (lVar9 = *(long *)(lVar11 + -8), lVar9 != 0)) {
          plVar7 = *(long **)(lVar2 + 0x20);
          if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
            *(long **)(lVar2 + 0x20) = plVar4;
            plVar7 = plVar4;
          }
          uVar5 = (**(code **)(*plVar7 + 0xc0))(plVar7);
          if ((uVar5 & 1) != 0) {
            if (*(char *)(lVar2 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar2 + 0x38d488) = 1;
              *(undefined8 *)(lVar2 + 0x38d478) = 0;
              *(undefined8 *)(lVar2 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar2 + 0x38d480)) {
              FUN_02bcc824(plVar7,lVar9,0,8);
              goto LAB_02a87b78;
            }
          }
          (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,0,8);
        }
LAB_02a87b78:
        plVar4 = DAT_043f1798;
        if (((*(byte *)(lVar11 + -0x30) & 1) != 0) &&
           (lVar9 = *(long *)(lVar11 + -0x20), lVar9 != 0)) {
          plVar7 = *(long **)(lVar2 + 0x20);
          if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
            *(long **)(lVar2 + 0x20) = DAT_043f1798;
            plVar7 = plVar4;
          }
          uVar5 = (**(code **)(*plVar7 + 0xc0))(plVar7);
          if ((uVar5 & 1) != 0) {
            if (*(char *)(lVar2 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar2 + 0x38d488) = 1;
              *(undefined8 *)(lVar2 + 0x38d478) = 0;
              *(undefined8 *)(lVar2 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar2 + 0x38d480)) {
              FUN_02bcc824(plVar7,lVar9,0,8);
              goto LAB_02a87ac4;
            }
          }
          (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,0,8);
        }
LAB_02a87ac4:
        if (lVar8 == lVar11 + -0x30) goto LAB_02a87cd8;
        bVar1 = *(byte *)(lVar11 + -0x48);
        lVar11 = lVar11 + -0x30;
        plVar4 = DAT_043f1798;
      } while( true );
    }
    param_1[0xc] = lVar8;
    if (lVar8 == 0) goto LAB_02a87d94;
LAB_02a87cf4:
    plVar4 = DAT_043f1798;
    plVar7 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar7 = plVar4;
    }
    uVar5 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar5 & 1) == 0) {
LAB_02a87d78:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar8,0,8);
      goto LAB_02a87d94;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02a87d78;
    FUN_02bcc824(plVar7,lVar8,0,8);
    lVar8 = param_1[8];
    if (lVar8 != 0) goto LAB_02a87d9c;
LAB_02a87e40:
    lVar8 = param_1[5];
  }
  if (lVar8 != 0) {
    param_1[6] = lVar8;
    plVar4 = DAT_043f1798;
    plVar7 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar7 = plVar4;
    }
    uVar5 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar5 & 1) != 0) {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar7,lVar8,0,8);
        goto LAB_02a87eec;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar8,0,8);
  }
LAB_02a87eec:
  std::locale::~locale((locale *)(param_1 + 2));
  *param_1 = &PTR_LAB_0427f208;
  if ((long *)param_1[1] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02a87f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 8))();
  return;
}


