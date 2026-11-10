/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aeee68; name: FUN_00aeee68
 */


void FUN_00aeee68(undefined8 param_1,long param_2,ulong *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  int iVar19;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  undefined8 local_58;
  
  if (*(long *)(param_2 + 0x250) != 0) goto LAB_00aeee9c;
  local_58 = *(undefined8 *)(param_2 + 8);
  FUN_00aef340(&local_98,local_58,&local_58);
  uVar11 = local_98;
  local_98 = 0;
  lVar17 = *(long *)(param_2 + 0x250);
  *(undefined8 *)(param_2 + 0x250) = uVar11;
  if (lVar17 != 0) {
    FUN_02bcbe58(auStack_78,0);
    FUN_00af221c(lVar17);
    plVar9 = *(long **)(param_2 + 600);
    uVar11 = *(undefined8 *)(param_2 + 0x260);
    uVar18 = *(undefined8 *)(param_2 + 0x268);
    uVar13 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    lVar5 = tpidr_el0;
    if ((uVar13 & 1) == 0) {
LAB_00aef0bc:
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar17,uVar11,uVar18);
    }
    else {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_00aef0bc;
      FUN_02bcc824(plVar9,lVar17,uVar11,uVar18);
    }
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar19 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar19;
    if (iVar19 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
  }
  *(undefined8 *)(param_2 + 0x268) = local_80;
  *(undefined8 *)(param_2 + 0x260) = uStack_88;
  *(undefined8 *)(param_2 + 600) = local_90;
LAB_00aeee9c:
  puVar7 = PTR_DAT_04379e80;
  puVar6 = PTR_DAT_04379e78;
  if ((((undefined1 *)*param_3 == &DAT_cfb6c0f3820db5c2) &&
      (lVar17 = *(long *)(param_2 + 0x1f0), lVar17 != 0)) && (*(int *)(lVar17 + 0xc) != 0)) {
    piVar1 = (int *)(lVar17 + 0xc);
    iVar19 = *(int *)(lVar17 + 0xc);
    do {
      plVar9 = *(long **)(lVar17 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
        uVar11 = FUN_0095a420();
        *(undefined8 *)puVar7 = uVar11;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar9 == (long *)0x0) goto LAB_00aeeeb8;
        if (plVar9 == (long *)puVar7) break;
        plVar9 = (long *)*plVar9;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar19) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar19 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar17 = *(long *)(lVar17 + 0x18);
          plVar9 = (long *)(lVar17 + -0x50);
          if (lVar17 != 0) {
            FUN_01bdbed8(param_1,plVar9);
            lVar17 = *(long *)(lVar17 + 8);
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar19 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar19 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar19 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*plVar9 + 0x20))(plVar9);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar19 = iVar8;
    } while (iVar8 != 0);
  }
LAB_00aeeeb8:
  plVar9 = *(long **)(param_2 + 0x250);
  uVar13 = plVar9[1];
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar12 = *param_3;
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar13 - 1 & uVar12;
    }
    else if (uVar12 < uVar13) {
      uVar15 = uVar12;
    }
    else {
      uVar15 = 0;
      if (uVar13 != 0) {
        uVar15 = uVar12 / uVar13;
      }
      uVar15 = uVar12 - uVar15 * uVar13;
    }
    plVar16 = *(long **)(*plVar9 + uVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar16[1] == uVar12) {
            if (plVar16[2] == uVar12) goto LAB_00aeef44;
          }
          else if ((plVar16[1] & uVar13 - 1) != uVar15) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar16[1];
          if (uVar14 == uVar12) {
            if (plVar16[2] == uVar12) {
LAB_00aeef44:
              *(int *)(plVar16 + 6) = (int)param_1;
              return;
            }
          }
          else {
            if (uVar13 <= uVar14) {
              uVar4 = 0;
              if (uVar13 != 0) {
                uVar4 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar4 * uVar13;
            }
            if (uVar14 != uVar15) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  puVar10 = (undefined4 *)FUN_00aef474(plVar9,param_3);
  *puVar10 = (int)param_1;
  return;
}


