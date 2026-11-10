/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02942fac; name: FUN_02942fac
 */


undefined8 FUN_02942fac(long param_1,int *param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  code *pcVar14;
  long lVar15;
  undefined1 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long *local_1a8 [4];
  long *local_188;
  undefined8 local_178;
  long lStack_170;
  long local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  
  switch(*param_2) {
  case 0:
    *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x10d8) = 6;
    lVar12 = *(long *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(lVar12 + 4);
    *(undefined2 *)(param_1 + 0x122) = *(undefined2 *)(lVar12 + 0x102c);
    *(undefined2 *)(param_1 + 0x124) = *(undefined2 *)(lVar12 + 0x102e);
    uVar4 = *(undefined2 *)(lVar12 + 0x1030);
    uVar17 = *(undefined8 *)(param_1 + 8);
    *(byte *)(param_1 + 0x13a) = *(byte *)(param_1 + 0x13a) & 0xe4;
    *(undefined2 *)(param_1 + 0x126) = uVar4;
    *(undefined1 *)(param_1 + 0x134) = 0;
    *(undefined8 *)(param_1 + 0x128) = 8;
    local_178 = uVar17;
    lStack_170 = param_1;
    FUN_02944240(&local_168,uVar17,&local_178);
    lVar12 = local_168;
    local_168 = 0;
    puVar18 = *(undefined8 **)(param_1 + 0x390);
    *(long *)(param_1 + 0x390) = lVar12;
    lVar12 = tpidr_el0;
    if (puVar18 != (undefined8 *)0x0) {
      FUN_02bcbe58(local_1a8,0);
      (**(code **)*puVar18)(puVar18);
      plVar9 = *(long **)(param_1 + 0x398);
      uVar19 = *(undefined8 *)(param_1 + 0x3a0);
      uVar20 = *(undefined8 *)(param_1 + 0x3a8);
      uVar10 = (**(code **)(*plVar9 + 0xc0))(plVar9);
      if ((uVar10 & 1) == 0) {
LAB_029430f4:
        (**(code **)(*plVar9 + 0x18))(plVar9,puVar18,uVar19,uVar20);
      }
      else {
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar12 + 0x38d480) < 1) goto LAB_029430f4;
        FUN_02bcc824(plVar9,puVar18,uVar19,uVar20);
      }
      if (*(char *)(lVar12 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar12 + 0x38d488) = 1;
        *(undefined8 *)(lVar12 + 0x38d478) = 0;
        *(undefined8 *)(lVar12 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar8 = *(int *)(lVar12 + 0x38d480) + -1;
      *(int *)(lVar12 + 0x38d480) = iVar8;
      if (iVar8 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar12 + 0x38d484) = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x398) = local_160;
    *(undefined8 *)(param_1 + 0x3a8) = local_150;
    *(undefined8 *)(param_1 + 0x3a0) = uStack_158;
    local_178 = uVar17;
    lStack_170 = param_1;
    FUN_02944240(&local_168,uVar17,&local_178);
    lVar11 = local_168;
    local_168 = 0;
    puVar18 = *(undefined8 **)(param_1 + 0x370);
    *(long *)(param_1 + 0x370) = lVar11;
    if (puVar18 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x388) = local_150;
      *(undefined8 *)(param_1 + 0x380) = uStack_158;
      *(undefined8 *)(param_1 + 0x378) = local_160;
    }
    else {
      FUN_02bcbe58(local_1a8,0);
      (**(code **)*puVar18)(puVar18);
      plVar9 = *(long **)(param_1 + 0x378);
      uVar17 = *(undefined8 *)(param_1 + 0x380);
      uVar19 = *(undefined8 *)(param_1 + 0x388);
      uVar10 = (**(code **)(*plVar9 + 0xc0))(plVar9);
      if ((uVar10 & 1) == 0) {
LAB_02943248:
        (**(code **)(*plVar9 + 0x18))(plVar9,puVar18,uVar17,uVar19);
      }
      else {
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar12 + 0x38d480) < 1) goto LAB_02943248;
        FUN_02bcc824(plVar9,puVar18,uVar17,uVar19);
      }
      if (*(char *)(lVar12 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar12 + 0x38d488) = 1;
        *(undefined8 *)(lVar12 + 0x38d478) = 0;
        *(undefined8 *)(lVar12 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar8 = *(int *)(lVar12 + 0x38d480) + -1;
      *(int *)(lVar12 + 0x38d480) = iVar8;
      if (iVar8 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar12 + 0x38d484) = 0;
      }
      *(undefined8 *)(param_1 + 0x378) = local_160;
      lVar11 = *(long *)(param_1 + 0x370);
      *(undefined8 *)(param_1 + 0x388) = local_150;
      *(undefined8 *)(param_1 + 0x380) = uStack_158;
    }
    local_168 = *(long *)(lVar11 + 8);
    lVar11 = FUN_029490a4(*(undefined8 *)(param_1 + 8),&local_168);
    if (lVar11 != 0) {
      piVar1 = (int *)(lVar11 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = *(long **)(param_1 + 0x1a0);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 10;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *(long *)(param_1 + 0x1a0) = lVar11;
    local_168 = *(long *)(*(long *)(param_1 + 0x370) + 8);
    lVar11 = FUN_029490a4(*(undefined8 *)(param_1 + 8),&local_168);
    if (lVar11 != 0) {
      piVar1 = (int *)(lVar11 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = *(long **)(param_1 + 0x1a8);
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 10;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *(long *)(param_1 + 0x1a8) = lVar11;
    local_168 = *(long *)(*(long *)(param_1 + 0x370) + 8);
    lVar11 = FUN_029490a4(*(undefined8 *)(param_1 + 8),&local_168);
    if (lVar11 != 0) {
      piVar1 = (int *)(lVar11 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = *(long **)(param_1 + 0x1b0);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 10;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *(long *)(param_1 + 0x1b0) = lVar11;
    local_168 = *(long *)(*(long *)(param_1 + 0x370) + 8);
    lVar11 = FUN_029490a4(*(undefined8 *)(param_1 + 8),&local_168);
    if (lVar11 != 0) {
      piVar1 = (int *)(lVar11 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = *(long **)(param_1 + 0x1b8);
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 10;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *(long *)(param_1 + 0x1b8) = lVar11;
    local_168 = *(long *)(*(long *)(param_1 + 0x370) + 8);
    lVar11 = FUN_029490a4(*(undefined8 *)(param_1 + 8),&local_168);
    if (lVar11 != 0) {
      piVar1 = (int *)(lVar11 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = *(long **)(param_1 + 0x1c0);
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 10;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    lVar15 = *(long *)(param_1 + 0x58);
    *(long *)(param_1 + 0x1c0) = lVar11;
    if (*(char *)(lVar15 + 0x54) == '\0') {
      uVar16 = *(undefined1 *)(lVar15 + 0x1051);
    }
    else {
      uVar16 = 2;
    }
    *(undefined1 *)(param_1 + 0x120) = uVar16;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined2 *)(param_1 + 0x350) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined1 *)(param_1 + 0x10c) = 0;
    *(byte *)(param_1 + 0x13a) = *(byte *)(param_1 + 0x13a) & 0xfb;
    *(undefined2 *)(lVar15 + 0x1124) = 0;
    *(undefined8 *)(lVar15 + 0x110c) = 0;
    *(undefined8 *)(lVar15 + 0x1114) = 0;
    *(undefined8 *)(lVar15 + 0x111c) = 0;
    nn::crypto::GenerateCryptographicallyRandomBytes(&local_168,8);
    *(long *)(param_1 + 0x68) = local_168;
    *(undefined8 *)(param_1 + 0x70) = 0x82a2b175229d6a5b;
    *(long *)(param_1 + 0x78) = local_168;
    *(long *)(param_1 + 0x80) = local_168;
    *(long *)(*(long *)(param_1 + 0x58) + 0x10f8) = local_168;
    FUN_0293d640(param_1 + 0x60,*(undefined1 *)(*(long *)(param_1 + 0x58) + 0x106d),
                 *(undefined8 *)(param_1 + 8));
    plVar9 = *(long **)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x1058);
    *(undefined8 *)(param_1 + 0x118) = 0;
    puVar18 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0xa0,8);
    if (puVar18 == (undefined8 *)0x0) {
      plVar9 = (long *)0x0;
      uVar19 = 0;
      uVar17 = 0;
    }
    else {
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar8 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar9;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      uVar17 = 8;
      puVar18[0x12] = 0;
      puVar18[0x13] = 0;
      uVar19 = 0xa0;
      puVar18[0x10] = 0;
      puVar18[0x11] = 0;
      puVar18[0xe] = 0;
      puVar18[0xf] = 0;
      puVar18[0xc] = 0;
      puVar18[0xd] = 0;
      puVar18[10] = 0;
      puVar18[0xb] = 0;
      puVar18[8] = 0;
      puVar18[9] = 0;
      puVar18[6] = 0;
      puVar18[7] = 0;
      puVar18[4] = 0;
      puVar18[5] = 0;
      puVar18[2] = 0;
      puVar18[3] = 0;
      *puVar18 = 0;
      puVar18[1] = 0;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    lVar11 = *(long *)(param_1 + 0x1c8);
    *(undefined8 **)(param_1 + 0x1c8) = puVar18;
    if (lVar11 != 0) {
      FUN_02bcbe58(&local_168,0);
      FUN_0294aaec(lVar11);
      plVar3 = *(long **)(param_1 + 0x1d0);
      uVar20 = *(undefined8 *)(param_1 + 0x1d8);
      uVar21 = *(undefined8 *)(param_1 + 0x1e0);
      uVar10 = (**(code **)(*plVar3 + 0xc0))(plVar3);
      if ((uVar10 & 1) == 0) {
LAB_02943b34:
        (**(code **)(*plVar3 + 0x18))(plVar3,lVar11,uVar20,uVar21);
      }
      else {
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar12 + 0x38d480) < 1) goto LAB_02943b34;
        FUN_02bcc824(plVar3,lVar11,uVar20,uVar21);
      }
      if (*(char *)(lVar12 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar12 + 0x38d488) = 1;
        *(undefined8 *)(lVar12 + 0x38d478) = 0;
        *(undefined8 *)(lVar12 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar8 = *(int *)(lVar12 + 0x38d480) + -1;
      *(int *)(lVar12 + 0x38d480) = iVar8;
      if (iVar8 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar12 + 0x38d484) = 0;
      }
    }
    *(long **)(param_1 + 0x1d0) = plVar9;
    *(undefined8 *)(param_1 + 0x1d8) = uVar19;
    *(undefined8 *)(param_1 + 0x1e0) = uVar17;
    FUN_02955ac8(*(undefined8 *)(param_1 + 8));
    *(undefined1 *)(param_1 + 0x132) = 0;
    local_168 = *(long *)(param_1 + 8);
    if (DAT_043ecdf0 == (long *)0x0) {
      plVar9 = (long *)FUN_008c43ec(local_1a8,local_168,&local_168);
      if (plVar9 != (long *)0x0) {
        plVar3 = plVar9 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *(int *)plVar3 = (int)*plVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar3 = DAT_043ecdf0;
      DAT_043ecdf0 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        plVar2 = plVar3 + 10;
        do {
          iVar8 = (int)*plVar2 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      DAT_043ecdf0 = plVar9;
    }
    iVar8 = *(int *)(*(long *)(param_1 + 0x58) + 0x10cc);
    if (-1 < iVar8) {
      snprintf((char *)&local_168,0x100,"bin/battle/talk/%03d.gfbbt",iVar8);
      FUN_01559fc0(local_1a8,&local_168);
      uVar10 = FUN_00938764(param_1 + 0x3b0,1,local_1a8,0,*(undefined8 *)(param_1 + 8),0);
      if (((uVar10 & 1) != 0) && (plVar9 = *(long **)(param_1 + 0x3d8), plVar9 != (long *)0x0)) {
        lVar12 = plVar9[0xb];
        if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar12 + 0x10) == 0) {
          uVar17 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
          *(undefined8 *)(lVar12 + 0x10) = uVar17;
        }
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        lVar12 = plVar9[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
      }
      if (local_188 != (long *)0x0) {
        (**(code **)(*local_188 + 0x20))();
      }
      if (local_1a8[0] != (long *)0x0) {
        (**(code **)(*local_1a8[0] + 0x20))();
      }
    }
    break;
  case 1:
    if ((*(long *)(param_1 + 0x3b8) != 0) && (*(char *)(*(long *)(param_1 + 0x3b8) + 0x1e1) == '\0')
       ) {
      return 0;
    }
    iVar8 = 2;
    goto LAB_02943ccc;
  case 2:
    lVar12 = *(long *)(param_1 + 0x58);
    if (*(char *)(lVar12 + 0x54) == '\0') {
      if ((*(int *)(lVar12 + 4) == 2) || (*(int *)(lVar12 + 4) != 1)) {
        puVar13 = &LAB_02944e68;
      }
      else if (*(char *)(lVar12 + 0x55) == '\0') {
        puVar13 = &LAB_02945330;
      }
      else {
        puVar13 = &LAB_02945774;
      }
      *(undefined1 **)(param_1 + 0x88) = puVar13;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    local_168 = *(long *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x98) = 0;
    lVar12 = FUN_016aef6c(local_1a8,local_168,&local_168);
    if (lVar12 != 0) {
      piVar1 = (int *)(lVar12 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = *(long **)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 10;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    local_168 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 0xb0) = lVar12;
    lVar12 = FUN_016aef6c(local_1a8,local_168,&local_168);
    if (lVar12 != 0) {
      piVar1 = (int *)(lVar12 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = *(long **)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 10;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    local_168 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 0xd8) = lVar12;
    lVar12 = FUN_016aef6c(local_1a8,local_168,&local_168);
    if (lVar12 != 0) {
      piVar1 = (int *)(lVar12 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = *(long **)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 10;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    local_168 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 0xb8) = lVar12;
    lVar12 = FUN_016aef6c(local_1a8,local_168,&local_168);
    if (lVar12 != 0) {
      piVar1 = (int *)(lVar12 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = *(long **)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 10;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    local_168 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 0xe0) = lVar12;
    lVar12 = FUN_016aef6c(local_1a8,local_168,&local_168);
    if (lVar12 != 0) {
      piVar1 = (int *)(lVar12 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = *(long **)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 10;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    local_168 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 0xc0) = lVar12;
    lVar12 = FUN_016aef6c(local_1a8,local_168,&local_168);
    if (lVar12 != 0) {
      piVar1 = (int *)(lVar12 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = *(long **)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 10;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    local_168 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 0xe8) = lVar12;
    lVar12 = FUN_016aef6c(local_1a8,local_168,&local_168);
    if (lVar12 != 0) {
      piVar1 = (int *)(lVar12 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = *(long **)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = 0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 10;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    local_168 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 200) = lVar12;
    lVar12 = FUN_016aef6c(local_1a8,local_168,&local_168);
    if (lVar12 != 0) {
      piVar1 = (int *)(lVar12 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = *(long **)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 10;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    local_168 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 0xf0) = lVar12;
    lVar12 = FUN_016aef6c(local_1a8,local_168,&local_168);
    if (lVar12 != 0) {
      piVar1 = (int *)(lVar12 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = *(long **)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 10;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    local_168 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 0xd0) = lVar12;
    lVar12 = FUN_016aef6c(local_1a8,local_168,&local_168);
    if (lVar12 != 0) {
      piVar1 = (int *)(lVar12 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = *(long **)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 10;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    local_168 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 0xf8) = lVar12;
    lVar12 = FUN_016aef6c(local_1a8,local_168,&local_168);
    if (lVar12 != 0) {
      piVar1 = (int *)(lVar12 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = *(long **)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x100) = 0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 10;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *(long *)(param_1 + 0x100) = lVar12;
    break;
  case 3:
    pcVar14 = *(code **)(param_1 + 0x88);
    uVar10 = *(ulong *)(param_1 + 0x90);
    if ((pcVar14 != (code *)0x0) || (uVar10 != 0 && (uVar10 & 1) != 0)) {
      plVar9 = (long *)(param_1 + ((long)uVar10 >> 1));
      if ((uVar10 & 1) != 0) {
        pcVar14 = *(code **)(pcVar14 + *plVar9);
      }
      uVar10 = (*pcVar14)(plVar9,param_1 + 0x98);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
    }
    if ((*(byte *)(param_1 + 0x13a) & 1) != 0) {
      *(byte *)(param_1 + 0x13a) = *(byte *)(param_1 + 0x13a) | 2;
    }
    return 1;
  default:
    return 0;
  }
  iVar8 = *param_2 + 1;
LAB_02943ccc:
  *param_2 = iVar8;
  return 0;
}


