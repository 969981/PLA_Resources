/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01919bf4; name: FUN_01919bf4
 */


void FUN_01919bf4(long param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined1 auVar20 [16];
  undefined8 local_68;
  
  uVar10 = *(ulong *)(param_1 + 0x40);
  lVar8 = *(long *)(param_1 + 8);
  plVar17 = (long *)(lVar8 + (uVar10 >> 5 & 0x7fffffffffffff8));
  if (*(long *)(param_1 + 0x10) == lVar8) {
    puVar19 = (undefined8 *)0x0;
    if (param_3 == (undefined8 *)0x0) goto LAB_01919c40;
LAB_01919d5c:
    uVar11 = ((long)param_3 - *param_2 >> 4) + ((long)param_2 - (long)plVar17) * 0x20;
    uVar18 = uVar11 - ((long)puVar19 - *plVar17 >> 4);
    puVar6 = puVar19;
    if (uVar18 == 0) goto LAB_01919c44;
    if ((long)uVar11 < 1) {
      uVar13 = 0xff - uVar11;
      uVar11 = 0x1fe - uVar11;
      if (-1 < (long)uVar13) {
        uVar11 = uVar13;
      }
      plVar16 = plVar17 + -((long)uVar11 >> 8);
      puVar6 = (undefined8 *)(*plVar16 + ((uVar11 & 0xfffffffffffff00) - uVar13) * 0x10 + 0xff0);
    }
    else {
      plVar16 = (long *)((long)plVar17 + (uVar11 >> 5 & 0x7fffffffffffff8));
      puVar6 = (undefined8 *)(*plVar16 + (uVar11 & 0xff) * 0x10);
    }
  }
  else {
    puVar19 = (undefined8 *)(*plVar17 + (uVar10 & 0xff) * 0x10);
    if (param_3 != puVar19) goto LAB_01919d5c;
LAB_01919c40:
    uVar18 = 0;
    puVar6 = puVar19;
LAB_01919c44:
    plVar16 = plVar17;
    puVar19 = puVar6;
  }
  lVar14 = (long)puVar6 - *plVar16;
  lVar12 = lVar14 >> 4;
  uVar11 = lVar12 + 1;
  if (*(long *)(param_1 + 0x48) - 1U >> 1 < uVar18) {
    if (lVar14 < -0xf) {
      uVar11 = 0xfe - lVar12;
      uVar18 = 0x1fd - lVar12;
      if (-1 < (long)uVar11) {
        uVar18 = uVar11;
      }
      plVar17 = plVar16 + -((long)uVar18 >> 8);
      lVar12 = *plVar17 + ((uVar18 & 0xfffffffffffff00) - uVar11) * 0x10 + 0xff0;
    }
    else {
      plVar17 = (long *)((long)plVar16 + (uVar11 >> 5 & 0x7fffffffffffff8));
      lVar12 = *plVar17 + (uVar11 & 0xff) * 0x10;
    }
    uVar10 = *(long *)(param_1 + 0x48) + uVar10;
    plVar7 = (long *)(lVar8 + (uVar10 >> 5 & 0x7fffffffffffff8));
    if (*(long *)(param_1 + 0x10) == lVar8) {
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar7 + (uVar10 & 0xff) * 0x10;
    }
    puVar19 = (undefined8 *)FUN_0191a320(plVar17,lVar12,plVar7,lVar8,plVar16,puVar6);
    puVar19 = (undefined8 *)*puVar19;
    if (puVar19 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar19 + 1);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        puVar19[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_68 = *puVar19;
        FUN_02a44274(lVar8 + 0xd8,&local_68);
      }
    }
    lVar12 = *(long *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = lVar12 + -1;
    lVar14 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
    lVar8 = 0;
    if (lVar14 != 0) {
      lVar8 = lVar14 * 0x20 + -1;
    }
    if ((lVar8 - (lVar12 + *(long *)(param_1 + 0x40))) + 1U < 0x200) {
      return;
    }
    plVar17 = *(long **)(param_1 + 0x50);
    uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      lVar8 = tpidr_el0;
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar8 + 0x38d480)) {
        FUN_02bcc824(plVar17,uVar15,0x1000,8);
        goto LAB_01919f30;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,uVar15,0x1000,8);
LAB_01919f30:
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    return;
  }
  if (lVar14 < -0xf) {
    uVar18 = 0xfe - lVar12;
    uVar10 = 0x1fd - lVar12;
    if (-1 < (long)uVar18) {
      uVar10 = uVar18;
    }
    plVar7 = plVar16 + -((long)uVar10 >> 8);
    lVar8 = *plVar7 + ((uVar10 & 0xfffffffffffff00) - uVar18) * 0x10 + 0xff0;
  }
  else {
    plVar7 = (long *)((long)plVar16 + (uVar11 >> 5 & 0x7fffffffffffff8));
    lVar8 = *plVar7 + (uVar11 & 0xff) * 0x10;
  }
  auVar20._8_8_ = lVar8;
  auVar20._0_8_ = plVar7;
  if (puVar6 != puVar19) {
    lVar8 = (lVar12 + ((long)plVar16 - (long)plVar17) * 0x20) - ((long)puVar19 - *plVar17 >> 4);
    while (0 < lVar8) {
      while( true ) {
        puVar9 = (undefined8 *)*plVar16;
        if (puVar9 == puVar6) {
          plVar16 = plVar16 + -1;
          puVar9 = (undefined8 *)*plVar16;
          puVar6 = puVar9 + 0x200;
        }
        lVar14 = (long)puVar6 - (long)puVar9 >> 4;
        lVar12 = lVar8;
        puVar4 = puVar6 + lVar8 * -2;
        if (lVar14 <= lVar8) {
          lVar12 = lVar14;
          puVar4 = puVar9;
        }
        puVar9 = puVar6 + -2;
        auVar20 = FUN_0191a450(puVar4,puVar6,auVar20._0_8_,auVar20._8_8_);
        lVar8 = lVar8 - lVar12;
        puVar6 = puVar9;
        if (1 - lVar12 == 0) break;
        uVar10 = (1 - lVar12) + ((long)puVar9 - *plVar16 >> 4);
        if ((long)uVar10 < 1) {
          uVar18 = 0xff - uVar10;
          uVar10 = 0x1fe - uVar10;
          if (-1 < (long)uVar18) {
            uVar10 = uVar18;
          }
          plVar16 = plVar16 + -((long)uVar10 >> 8);
          puVar6 = (undefined8 *)(*plVar16 + ((uVar10 & 0xfffffffffffff00) - uVar18) * 0x10 + 0xff0)
          ;
        }
        else {
          plVar16 = (long *)((long)plVar16 + (uVar10 >> 5 & 0x7fffffffffffff8));
          puVar6 = (undefined8 *)(*plVar16 + (uVar10 & 0xff) * 0x10);
        }
        if (lVar8 < 1) goto LAB_01919c94;
      }
    }
  }
LAB_01919c94:
  puVar19 = (undefined8 *)*puVar19;
  if (puVar19 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar19 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      puVar19[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_68 = *puVar19;
      FUN_02a44274(lVar8 + 0xd8,&local_68);
    }
  }
  uVar10 = *(long *)(param_1 + 0x40) + 1;
  *(ulong *)(param_1 + 0x40) = uVar10;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
  if (uVar10 < 0x200) {
    return;
  }
  plVar17 = *(long **)(param_1 + 0x50);
  uVar15 = **(undefined8 **)(param_1 + 8);
  uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
  if ((uVar10 & 1) != 0) {
    lVar8 = tpidr_el0;
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar8 + 0x38d480)) {
      FUN_02bcc824(plVar17,uVar15,0x1000,8);
      goto LAB_01919fd0;
    }
  }
  (**(code **)(*plVar17 + 0x18))(plVar17,uVar15,0x1000,8);
LAB_01919fd0:
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0x100;
  return;
}


