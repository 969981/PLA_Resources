/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281857c; name: FUN_0281857c
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x02818d4c) */
/* WARNING: Removing unreachable block (ram,0x02818d50) */
/* WARNING: Removing unreachable block (ram,0x02818d58) */
/* WARNING: Removing unreachable block (ram,0x02818d60) */
/* WARNING: Removing unreachable block (ram,0x02819568) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0281857c(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *******ppppppplVar7;
  undefined8 *******pppppppuVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  int iVar18;
  long lVar19;
  code *pcVar20;
  int iVar21;
  long *plVar22;
  undefined1 *puVar23;
  undefined8 uVar24;
  long *plVar25;
  long *plVar26;
  undefined8 ******ppppppuVar27;
  undefined8 *puVar28;
  long *plVar29;
  undefined8 ******ppppppuVar30;
  undefined8 uVar31;
  undefined8 ******ppppppuVar32;
  long lVar33;
  long lVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  long *******local_138;
  undefined8 ******local_130;
  undefined8 ******local_128;
  undefined8 ******local_120;
  long *local_118;
  undefined1 *local_110;
  char *local_108;
  undefined8 local_100;
  long *local_f8;
  undefined1 *local_f0;
  char *local_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined1 *local_d0;
  char *local_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 *******local_a0;
  undefined8 uStack_98;
  undefined8 *******local_78;
  
  plVar25 = *(long **)(param_1 + 0xe8);
  if (plVar25 != (long *)0x0) {
    plVar15 = plVar25 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar19 = param_1 + 0x738;
  piVar11 = (int *)(**(code **)(*plVar25 + 0xc0))(plVar25,lVar19,"ScrollStartX");
  if (plVar25 == (long *)0x0) {
LAB_02818604:
    plVar25 = *(long **)(param_1 + 0xe8);
  }
  else {
    plVar15 = plVar25 + 10;
    do {
      iVar18 = (int)*plVar15 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *(int *)plVar15 = iVar18;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 != 0) goto LAB_02818604;
    (**(code **)(*plVar25 + 0x10))(plVar25);
    plVar25 = *(long **)(param_1 + 0xe8);
  }
  if (plVar25 != (long *)0x0) {
    plVar15 = plVar25 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  piVar12 = (int *)(**(code **)(*plVar25 + 0xc0))(plVar25,lVar19,"ScrollStartY");
  if (plVar25 == (long *)0x0) {
LAB_0281865c:
    plVar25 = *(long **)(param_1 + 0xe8);
  }
  else {
    plVar15 = plVar25 + 10;
    do {
      iVar18 = (int)*plVar15 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *(int *)plVar15 = iVar18;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 != 0) goto LAB_0281865c;
    (**(code **)(*plVar25 + 0x10))(plVar25);
    plVar25 = *(long **)(param_1 + 0xe8);
  }
  if (plVar25 != (long *)0x0) {
    plVar15 = plVar25 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  piVar13 = (int *)(**(code **)(*plVar25 + 0xc0))(plVar25,lVar19,"ScrollSpaceX");
  if (plVar25 == (long *)0x0) {
LAB_028186b4:
    plVar25 = *(long **)(param_1 + 0xe8);
  }
  else {
    plVar15 = plVar25 + 10;
    do {
      iVar18 = (int)*plVar15 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *(int *)plVar15 = iVar18;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 != 0) goto LAB_028186b4;
    (**(code **)(*plVar25 + 0x10))(plVar25);
    plVar25 = *(long **)(param_1 + 0xe8);
  }
  if (plVar25 != (long *)0x0) {
    plVar15 = plVar25 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  piVar14 = (int *)(**(code **)(*plVar25 + 0xc0))(plVar25,lVar19,"ScrollSpaceY");
  if (plVar25 != (long *)0x0) {
    plVar15 = plVar25 + 10;
    do {
      iVar18 = (int)*plVar15 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *(int *)plVar15 = iVar18;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
    }
  }
  if ((((piVar11 != (int *)0x0) && (piVar12 != (int *)0x0)) && (piVar13 != (int *)0x0)) &&
     (piVar14 != (int *)0x0)) {
    plVar25 = *(long **)(param_1 + 0xe8);
    *(float *)(param_1 + 0x760) = (float)*piVar11;
    *(float *)(param_1 + 0x764) = (float)*piVar12;
    *(float *)(param_1 + 0x768) = (float)*piVar13;
    *(float *)(param_1 + 0x76c) = (float)*piVar14;
    if (plVar25 != (long *)0x0) {
      plVar15 = plVar25 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar36 = (**(code **)(*plVar25 + 0x48))(plVar25,lVar19);
    if (plVar25 != (long *)0x0) {
      plVar15 = plVar25 + 10;
      do {
        iVar18 = (int)*plVar15 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *(int *)plVar15 = iVar18;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar18 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
      }
    }
    iVar18 = (int)((float)uVar36 / *(float *)(param_1 + 0x768));
    if (iVar18 < 2) {
      iVar18 = 1;
    }
    *(int *)(param_1 + 0x758) = iVar18;
    iVar18 = (int)((float)((ulong)uVar36 >> 0x20) / *(float *)(param_1 + 0x76c));
    if (iVar18 < 2) {
      iVar18 = 1;
    }
    *(int *)(param_1 + 0x75c) = iVar18;
  }
  plVar25 = (long *)(param_1 + 0x838);
  plVar15 = (long *)**(long **)(param_1 + 0x838);
  plVar22 = (long *)(*(long **)(param_1 + 0x838))[1];
  if (plVar15 == plVar22) {
    plVar22 = plVar15;
  }
  else {
    do {
      *(undefined4 *)((long)plVar15 + 0x24) = 0xffffffff;
      *(undefined1 *)(plVar15 + 4) = 1;
      plVar15 = plVar15 + 6;
    } while (plVar22 != plVar15);
    plVar15 = (long *)((long *)*plVar25)[1];
    plVar22 = *(long **)*plVar25;
  }
  lVar33 = *(long *)(param_1 + 0x9a0);
  plVar26 = *(long **)(param_1 + 0x9b8);
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar26 + 0x18))(plVar26);
  }
  if (plVar22 != plVar15) {
    do {
      lVar34 = *plVar22;
      plVar29 = (long *)plVar22[3];
      if (plVar29 != (long *)0x0) {
        (**(code **)(*plVar29 + 0x18))(plVar29);
        (**(code **)(*plVar29 + 0x20))(plVar29);
      }
      if (lVar34 == lVar33) goto LAB_0281886c;
      plVar22 = plVar22 + 6;
    } while (plVar22 != plVar15);
    plVar22 = plVar15;
  }
LAB_0281886c:
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar26 + 0x20))(plVar26);
  }
  plVar15 = (long *)0x0;
  if (*(long **)(*plVar25 + 8) != plVar22) {
    plVar15 = plVar22;
  }
  if (plVar15 == (long *)0x0) {
    plVar15 = (long *)FUN_0282e8a8(plVar25,param_1 + 0x9a0);
  }
  *(undefined4 *)((long)plVar15 + 0x24) = 0xffffffff;
  *(undefined1 *)(plVar15 + 4) = 0;
  ppppppuVar27 = *(undefined8 *******)(param_1 + 0x9a0);
  ppppppuVar32 = *(undefined8 *******)(param_1 + 0x9a8);
  ppppppuVar30 = *(undefined8 *******)(param_1 + 0x9b0);
  plVar25 = *(long **)(param_1 + 0x9b8);
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x18))(plVar25);
  }
  local_138 = (long *******)&local_a0;
  local_a0 = (undefined8 *******)0x0;
  local_130 = ppppppuVar27;
  local_128 = ppppppuVar32;
  local_120 = ppppppuVar30;
  local_118 = plVar25;
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x18))(plVar25);
  }
  FUN_02813244(param_1,&local_138,0);
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  pppppppuVar8 = local_a0;
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x20))(plVar25);
  }
  if (pppppppuVar8 != (undefined8 *******)0x0) {
    local_138 = (long *******)pppppppuVar8[0x15];
    plVar25 = *(long **)(param_1 + 0xe8);
    local_130 = pppppppuVar8[0x16];
    local_128 = pppppppuVar8[0x17];
    local_120 = pppppppuVar8[0x18];
    if (local_120 != (undefined8 ******)0x0) {
      (*(code *)(*local_120)[3])();
    }
    (**(code **)(*plVar25 + 0x50))(plVar25,&local_138,0);
    if (local_120 != (undefined8 ******)0x0) {
      (*(code *)(*local_120)[4])();
    }
  }
  *(undefined1 *)(param_1 + 0x870) = 0;
  *(undefined8 *)(param_1 + 0x868) = 0;
  *(undefined8 *)(param_1 + 0x860) = 0;
  *(undefined8 *)(param_1 + 0x858) = 0;
  if (*(char *)(param_1 + 0x9f5) != '\0') {
    FUN_028200e4(param_1,0);
    *(undefined1 *)(param_1 + 0x9f5) = 0;
  }
  ppppppuVar27 = *(undefined8 *******)(param_1 + 8);
  local_130 = (undefined8 ******)0x1fffffffffffffff;
  local_128 = (undefined8 ******)0x0;
  local_120 = (undefined8 ******)((ulong)local_120 & 0xffffffff00000000);
  local_118 = (long *)0x0;
  local_110 = (undefined1 *)0x0;
  local_108 = (char *)0x0;
  lVar33 = ((*(long **)(param_1 + 0x838))[1] - **(long **)(param_1 + 0x838) >> 4) *
           -0x5555555555555555;
  iVar18 = (int)lVar33;
  local_138 = (long *******)ppppppuVar27;
  if (iVar18 != 0) {
    if (iVar18 < 0) goto LAB_02819868;
    plVar25 = (long *)(*(code *)(*ppppppuVar27)[2])(ppppppuVar27,(lVar33 << 0x20) >> 0x1d,8);
    if (plVar25 == (long *)0x0) {
      (*(code *)(*ppppppuVar27)[0x17])(ppppppuVar27);
    }
    local_118 = plVar25;
    local_108 = (char *)(long)iVar18;
  }
  local_110 = (undefined1 *)0x0;
  local_78 = &local_138;
  local_a0 = &local_78;
  FUN_02820e24(param_1,&local_a0,0);
  if (local_110 != (undefined1 *)0x0) {
    plVar15 = local_118 + (long)local_110;
    plVar25 = local_118;
    do {
      plVar22 = (long *)*plVar25;
      if (plVar22 == (long *)0x0) {
        if (DAT_000000a3 != '\0') {
          DAT_000000a3 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        lVar33 = 0;
        do {
          lVar34 = lVar33;
          lVar33 = *(long *)(lVar34 + 0x88);
        } while (lVar33 != 0);
        FUN_028080bc(lVar34,0);
      }
      else {
        lVar33 = plVar22[0xb];
        if (*(undefined8 **)(lVar33 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar33 + 0x10) == 0) {
          uVar36 = (**(code **)**(undefined8 **)(lVar33 + 0x18))();
          *(undefined8 *)(lVar33 + 0x10) = uVar36;
        }
        piVar11 = (int *)(lVar33 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar5) {
            *piVar11 = *piVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (*(char *)((long)plVar22 + 0xa3) != '\0') {
          *(undefined1 *)((long)plVar22 + 0xa3) = 0;
          (**(code **)(*plVar22 + 0xa0))(plVar22,0);
        }
        plVar26 = plVar22;
        do {
          plVar29 = plVar26;
          plVar26 = (long *)plVar29[0x11];
        } while (plVar26 != (long *)0x0);
        FUN_028080bc(plVar29,0);
        lVar33 = plVar22[0xb];
        piVar11 = (int *)(lVar33 + 0xc);
        do {
          iVar18 = *piVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar5) {
            *piVar11 = iVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar18 + -1 == 0) {
          *(undefined8 *)(lVar33 + 0x18) = 0;
          (**(code **)(*plVar22 + 0x20))(plVar22);
        }
      }
      plVar25 = plVar25 + 1;
    } while (plVar25 != plVar15);
  }
  if (((*(char *)(param_1 + 0x919) != '\0') &&
      (iVar18 = (**(code **)(**(long **)(param_1 + 0x100) + 0x58))(), iVar18 != 0)) &&
     ((plVar25 = *(long **)(param_1 + 0x880), plVar25 != (long *)0x0 &&
      (*(char *)((long)plVar25 + 0xa3) != '\x01')))) {
    *(undefined1 *)((long)plVar25 + 0xa3) = 1;
    (**(code **)(*plVar25 + 0xa0))(plVar25,1);
  }
  if (local_110 != (undefined1 *)0x0) {
    puVar23 = local_110;
    plVar25 = local_118;
    do {
      plVar15 = (long *)*plVar25;
      puVar23 = (undefined1 *)((long)puVar23 + -1);
      if (plVar15 != (long *)0x0) {
        lVar33 = plVar15[0xb];
        piVar11 = (int *)(lVar33 + 0xc);
        do {
          iVar18 = *piVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar5) {
            *piVar11 = iVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar18 + -1 == 0) {
          *(undefined8 *)(lVar33 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))();
        }
      }
      plVar25 = plVar25 + 1;
    } while (puVar23 != (undefined1 *)0x0);
  }
  plVar25 = local_118;
  ppppppplVar7 = local_138;
  if (local_108 != (char *)0x0) {
    lVar33 = (long)local_108 << 3;
    uVar16 = (*(code *)(*local_138)[0x18])(local_138);
    if ((uVar16 & 1) != 0) {
      lVar34 = tpidr_el0;
      if (*(char *)(lVar34 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar34 + 0x38d488) = 1;
        *(undefined8 *)(lVar34 + 0x38d478) = 0;
        *(undefined8 *)(lVar34 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar34 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar34 + 0x38d480)) {
        FUN_02bcc824(ppppppplVar7,plVar25,lVar33,8);
        goto LAB_02818be8;
      }
    }
    (*(code *)(*ppppppplVar7)[3])(ppppppplVar7,plVar25,lVar33,8);
  }
LAB_02818be8:
  *(uint *)(*(long *)(param_1 + 0x8b0) + 0x28) = (uint)(*(int *)(param_1 + 0x710) != 0);
  lVar33 = *(long *)(param_1 + 0x8b0);
  iVar9 = (**(code **)(**(long **)(param_1 + 0x100) + 0x58))();
  uVar36 = *(undefined8 *)(param_1 + 0x758);
  iVar10 = (int)uVar36;
  iVar21 = (int)((ulong)uVar36 >> 0x20);
  iVar18 = iVar10;
  if (*(int *)(lVar33 + 0x28) != 0) {
    iVar18 = iVar21;
  }
  iVar1 = 0;
  if (iVar18 != 0) {
    iVar1 = iVar9 / iVar18;
  }
  *(undefined8 *)(lVar33 + 0x20) = uVar36;
  fVar38 = 0.0;
  iVar2 = 0;
  if (iVar21 != 0) {
    iVar2 = iVar9 / iVar21;
  }
  iVar3 = 0;
  if (iVar10 != 0) {
    iVar3 = iVar9 / iVar10;
  }
  if (*(int *)(lVar33 + 0x28) == 0) {
    iVar2 = iVar3;
    iVar10 = iVar21;
  }
  fVar35 = (float)(int)(((uint)(iVar9 != iVar1 * iVar18) - iVar10) + iVar2);
  if (fVar35 <= 0.0) {
    fVar35 = 0.0;
  }
  *(int *)(lVar33 + 8) = iVar9;
  *(int *)(lVar33 + 0xc) = (int)fVar35;
  lVar33 = *(long *)(param_1 + 0x8b0);
  piVar11 = (int *)(param_1 + 0x75c);
  if (*(int *)(lVar33 + 0x28) != 0) {
    piVar11 = (int *)(param_1 + 0x758);
  }
  iVar10 = *piVar11;
  iVar18 = iVar10;
  if (iVar10 < 0) {
    iVar18 = iVar10 + 1;
  }
  if (*(char *)(param_1 + 0x9e0) != '\0') {
    iVar18 = iVar18 >> 1;
    *(uint *)(lVar33 + 0x18) = iVar18 - (uint)(iVar10 + iVar18 * -2 != 1);
    *(int *)(lVar33 + 0x1c) = iVar18;
    lVar33 = *(long *)(param_1 + 0x8b0);
  }
  *(undefined4 *)(lVar33 + 0x14) = *(undefined4 *)(param_1 + 0x910);
  *(undefined4 *)(*(long *)(param_1 + 0x8b0) + 0x10) = *(undefined4 *)(param_1 + 0x914);
  local_b8 = (long *)0x0;
  local_118 = (long *)0x0;
  local_110 = &DAT_cbf29ce484222645;
  local_108 = "";
  local_100 = 0;
  local_f8 = (long *)0x0;
  local_f0 = &DAT_cbf29ce484222645;
  local_e8 = "";
  local_e0 = 0;
  local_d8 = (long *)0x0;
  local_d0 = &DAT_cbf29ce484222645;
  local_c8 = "";
  local_c0 = 0;
  ppppppuVar27 = *(undefined8 *******)(param_1 + 0xe8);
  if (ppppppuVar27 == (undefined8 ******)0x0) {
    local_138 = (long *******)0x0;
  }
  else {
    ppppppuVar30 = ppppppuVar27 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar30,0x10);
      if (bVar5) {
        *(int *)ppppppuVar30 = *(int *)ppppppuVar30 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar30,0x10);
      if (bVar5) {
        *(int *)ppppppuVar30 = *(int *)ppppppuVar30 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_138 = (long *******)ppppppuVar27;
  }
  local_130 = *(undefined8 *******)(param_1 + 0x770);
  local_128 = *(undefined8 *******)(param_1 + 0x778);
  local_120 = *(undefined8 *******)(param_1 + 0x780);
  plVar25 = *(long **)(param_1 + 0x788);
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x18))(plVar25);
  }
  if (local_118 != (long *)0x0) {
    lVar33 = *local_118;
    local_118 = plVar25;
    (**(code **)(lVar33 + 0x20))();
    plVar25 = local_118;
  }
  local_118 = plVar25;
  local_110 = *(undefined1 **)(param_1 + 2000);
  local_108 = *(char **)(param_1 + 0x7d8);
  local_100 = *(undefined8 *)(param_1 + 0x7e0);
  plVar25 = *(long **)(param_1 + 0x7e8);
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x18))(plVar25);
  }
  if (local_f8 != (long *)0x0) {
    lVar33 = *local_f8;
    local_f8 = plVar25;
    (**(code **)(lVar33 + 0x20))();
    plVar25 = local_f8;
  }
  local_f8 = plVar25;
  local_f0 = *(undefined1 **)(param_1 + 0x790);
  local_e8 = *(char **)(param_1 + 0x798);
  local_e0 = *(undefined8 *)(param_1 + 0x7a0);
  plVar25 = *(long **)(param_1 + 0x7a8);
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x18))(plVar25);
  }
  if (local_d8 != (long *)0x0) {
    lVar33 = *local_d8;
    local_d8 = plVar25;
    (**(code **)(lVar33 + 0x20))();
    plVar25 = local_d8;
  }
  local_d8 = plVar25;
  local_d0 = *(undefined1 **)(param_1 + 0x7b0);
  local_c8 = *(char **)(param_1 + 0x7b8);
  local_c0 = *(undefined8 *)(param_1 + 0x7c0);
  plVar25 = *(long **)(param_1 + 0x7c8);
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x18))(plVar25);
  }
  if (local_b8 != (long *)0x0) {
    lVar33 = *local_b8;
    local_b8 = plVar25;
    (**(code **)(lVar33 + 0x20))();
    plVar25 = local_b8;
  }
  local_b8 = plVar25;
  local_b0 = *(undefined4 *)(*(long *)(param_1 + 0x8b0) + 0xc);
  local_ac = *(undefined4 *)(param_1 + 0x710);
  local_a8 = *(undefined4 *)(param_1 + 0x7f0);
  lVar33 = *(long *)(param_1 + 0x890);
  FUN_0282cef8(lVar33 + 0x10,&local_138);
  if (((*(char *)local_128 == '\0') || (*local_108 == '\0')) ||
     ((*local_e8 == '\0' || (*local_c8 == '\0')))) {
    *(undefined1 *)(lVar33 + 8) = 0;
  }
  else {
    *(undefined1 *)(lVar33 + 8) = 1;
    FUN_0282d0b4(lVar33);
    uVar36 = (**(code **)(**(long **)(lVar33 + 0x10) + 0x30))
                       (*(long **)(lVar33 + 0x10),lVar33 + 0x58);
    *(undefined8 *)(lVar33 + 200) = *(undefined8 *)(lVar33 + 200);
    *(ulong *)(lVar33 + 0xc0) =
         CONCAT44((int)((ulong)uVar36 >> 0x20),(float)uVar36 + *(float *)(lVar33 + 0xb0) * 0.5);
    (**(code **)(**(long **)(lVar33 + 0x10) + 0x50))(*(long **)(lVar33 + 0x10),lVar33 + 0x18,1);
  }
  lVar33 = *(long *)(param_1 + 0x890);
  if (*(char *)(lVar33 + 8) != '\0') {
    fVar39 = (float)*(int *)(*(long *)(param_1 + 0x8b0) + 0x10);
    FUN_0282d0b4(lVar33);
    uVar36 = (**(code **)(**(long **)(lVar33 + 0x10) + 0x30))
                       (*(long **)(lVar33 + 0x10),lVar33 + 0x58);
    uStack_98 = *(undefined8 *)(lVar33 + 200);
    fVar35 = (float)uVar36 + *(float *)(lVar33 + 0xb0) * 0.5;
    uVar40 = (undefined4)((ulong)uVar36 >> 0x20);
    *(undefined8 *)(lVar33 + 200) = uStack_98;
    *(ulong *)(lVar33 + 0xc0) = CONCAT44(uVar40,fVar35);
    if (*(char *)(lVar33 + 0xd4) == '\0') {
      fVar39 = (float)(int)fVar39;
    }
    local_a0 = (undefined8 *******)CONCAT44(uVar40,fVar35 + *(float *)(lVar33 + 0xd0) * fVar39);
    (**(code **)(**(long **)(lVar33 + 0x10) + 0x28))
              (*(long **)(lVar33 + 0x10),lVar33 + 0x38,&local_a0);
  }
  if (ppppppuVar27 != (undefined8 ******)0x0) {
    ppppppuVar30 = ppppppuVar27 + 10;
    do {
      iVar18 = *(int *)ppppppuVar30;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar30,0x10);
      if (bVar5) {
        *(int *)ppppppuVar30 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 == 0) {
      (*(code *)(*ppppppuVar27)[2])(ppppppuVar27);
    }
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  if (local_138 == (long *******)0x0) {
LAB_0281900c:
    plVar25 = *(long **)(param_1 + 0xe8);
  }
  else {
    ppppppuVar27 = local_138 + 10;
    do {
      iVar18 = *(int *)ppppppuVar27;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar27,0x10);
      if (bVar5) {
        *(int *)ppppppuVar27 = iVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 + -1 != 0) goto LAB_0281900c;
    (*(code *)(*local_138)[2])();
    plVar25 = *(long **)(param_1 + 0xe8);
  }
  if (plVar25 != (long *)0x0) {
    plVar15 = plVar25 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar36 = (**(code **)(*plVar25 + 0x30))(plVar25,lVar19);
  if (plVar25 == (long *)0x0) {
LAB_0281905c:
    plVar25 = *(long **)(param_1 + 0xe8);
  }
  else {
    plVar15 = plVar25 + 10;
    do {
      iVar18 = (int)*plVar15 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *(int *)plVar15 = iVar18;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 != 0) goto LAB_0281905c;
    (**(code **)(*plVar25 + 0x10))(plVar25);
    plVar25 = *(long **)(param_1 + 0xe8);
  }
  if (plVar25 != (long *)0x0) {
    plVar15 = plVar25 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar37 = (**(code **)(*plVar25 + 0x48))(plVar25,lVar19);
  if (plVar25 != (long *)0x0) {
    plVar15 = plVar25 + 10;
    do {
      iVar18 = (int)*plVar15 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *(int *)plVar15 = iVar18;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar18 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
    }
  }
  lVar19 = *(long *)(param_1 + 0x818);
  *(undefined8 *)(lVar19 + 8) = uVar36;
  *(undefined8 *)(lVar19 + 0x10) = uVar37;
  *(long *)(*(long *)(param_1 + 0x818) + 0x18) = param_1 + 0xf0;
  plVar25 = *(long **)(param_1 + 8);
  uVar40 = *(undefined4 *)(param_1 + 0x914);
  iVar18 = *(int *)(*(long *)(param_1 + 0x8b0) + 0xc);
  puVar17 = (undefined8 *)(**(code **)(*plVar25 + 0x10))(plVar25,0x1f0,0x10);
  if (puVar17 == (undefined8 *)0x0) {
    plVar25 = (long *)0x0;
    uVar37 = 0;
    uVar36 = 0;
  }
  else {
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar6 = PTR_DAT_04379528;
      if (iVar10 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar19 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar19 + 0x80)) {
LAB_02819868:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar40 = NEON_ucvtf(uVar40);
    uVar36 = 0x10;
    uVar37 = 0x1f0;
    *(long **)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = plVar25;
    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
    *puVar17 = &PTR_LAB_0426ee90;
    puVar17[2] = &PTR_LAB_0426ed30;
    puVar17[4] = 0;
    puVar17[5] = 0;
    puVar17[6] = 0;
    puVar17[7] = 0;
    *(undefined4 *)(puVar17 + 4) = 0xffffffff;
    *(undefined4 *)(puVar17 + 0x22) = 0;
    *(undefined4 *)(puVar17 + 0x34) = 0;
    *(float *)((long)puVar17 + 0x1a4) = (float)iVar18;
    *(undefined4 *)(puVar17 + 0x35) = 0x3d23d70a;
    *(undefined1 *)((long)puVar17 + 0x1ac) = 0;
    *(undefined4 *)(puVar17 + 0x36) = 0;
    *(undefined1 *)((long)puVar17 + 0x1b4) = 0;
    puVar17[0x39] = 0;
    *(undefined4 *)(puVar17 + 0x3a) = 0;
    *(undefined4 *)((long)puVar17 + 0x1d4) = uVar40;
    *(undefined4 *)(puVar17 + 0x3b) = 0;
    *(undefined1 *)((long)puVar17 + 0x1dc) = 0;
    *(undefined4 *)(puVar17 + 0x3c) = 0;
    puVar17[8] = 0;
    puVar17[9] = 0;
    puVar17[10] = 0;
    puVar17[0xb] = 0;
    *(undefined4 *)(puVar17 + 10) = 0xffffffff;
    puVar17[0xc] = 0;
    puVar17[0xd] = 0;
    puVar17[0xe] = 0;
    puVar17[0xf] = 0;
    puVar17[0x10] = 0;
    puVar17[0x11] = 0;
    *(undefined4 *)(puVar17 + 0x10) = 0xffffffff;
    puVar17[0x12] = 0;
    puVar17[0x13] = 0;
    puVar17[0x14] = 0;
    puVar17[0x15] = 0;
    puVar17[0x16] = 0;
    puVar17[0x17] = 0;
    *(undefined4 *)(puVar17 + 0x16) = 0xffffffff;
    puVar17[0x18] = 0;
    puVar17[0x19] = 0;
    puVar17[0x1a] = 0;
    puVar17[0x1b] = 0;
    puVar17[0x1c] = 0;
    puVar17[0x1d] = 0;
    *(undefined4 *)(puVar17 + 0x1c) = 0xffffffff;
    puVar17[0x1e] = 0;
    puVar17[0x1f] = 0;
    puVar17[0x20] = 0;
    puVar17[0x21] = 0;
    puVar17[0x24] = 0;
    puVar17[0x25] = 0;
    puVar17[0x26] = 0;
    puVar17[0x27] = 0;
    puVar17[0x37] = 0;
    puVar17[0x38] = 0;
    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
  }
  puVar28 = *(undefined8 **)(param_1 + 0x7f8);
  *(undefined8 **)(param_1 + 0x7f8) = puVar17;
  if (puVar28 == (undefined8 *)0x0) goto LAB_0281932c;
  FUN_02bcbe58(&local_138,0);
  (**(code **)*puVar28)(puVar28);
  plVar15 = *(long **)(param_1 + 0x800);
  uVar24 = *(undefined8 *)(param_1 + 0x808);
  uVar31 = *(undefined8 *)(param_1 + 0x810);
  uVar16 = (**(code **)(*plVar15 + 0xc0))(plVar15);
  if ((uVar16 & 1) == 0) {
LAB_02819288:
    (**(code **)(*plVar15 + 0x18))(plVar15,puVar28,uVar24,uVar31);
  }
  else {
    lVar19 = tpidr_el0;
    if (*(char *)(lVar19 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar19 + 0x38d488) = 1;
      *(undefined8 *)(lVar19 + 0x38d478) = 0;
      *(undefined8 *)(lVar19 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar19 + 0x38d480) < 1) goto LAB_02819288;
    FUN_02bcc824(plVar15,puVar28,uVar24,uVar31);
  }
  lVar19 = tpidr_el0;
  if (*(char *)(lVar19 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar19 + 0x38d488) = 1;
    *(undefined8 *)(lVar19 + 0x38d478) = 0;
    *(undefined8 *)(lVar19 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar18 = *(int *)(lVar19 + 0x38d480) + -1;
  *(int *)(lVar19 + 0x38d480) = iVar18;
  if (iVar18 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar19 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar19 + 0x38d488) = 1;
      *(undefined8 *)(lVar19 + 0x38d478) = 0;
      *(undefined8 *)(lVar19 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar19 + 0x38d484) = 0;
  }
  puVar17 = *(undefined8 **)(param_1 + 0x7f8);
LAB_0281932c:
  *(long **)(param_1 + 0x800) = plVar25;
  *(undefined8 *)(param_1 + 0x808) = uVar37;
  *(undefined8 *)(param_1 + 0x810) = uVar36;
  pcVar20 = (code *)puVar17[0x25];
  if (pcVar20 != (code *)0x0) {
    puVar17[0x26] = 0;
    puVar17[0x27] = 0;
    puVar17[0x24] = 0;
    puVar17[0x25] = 0;
    (*pcVar20)(puVar17 + 0x28);
  }
  puVar17[0x2a] = 0;
  puVar17[0x28] = param_1;
  puVar17[0x29] = &LAB_0281a540;
  puVar17[0x24] = &LAB_0282163c;
  puVar17[0x25] = &LAB_02821660;
  puVar17[0x26] = &LAB_02821664;
  puVar17[0x27] = &LAB_02821678;
  fVar35 = (float)*(int *)(*(long *)(param_1 + 0x8b0) + 0x10);
  if (*(int *)(param_1 + 0x710) == 0) {
    fVar38 = -(*(float *)(param_1 + 0x76c) * fVar35);
    fVar35 = 0.0;
  }
  else {
    fVar35 = *(float *)(param_1 + 0x768) * fVar35;
  }
  FUN_0282dda8(fVar35,fVar38,*(undefined8 *)(param_1 + 0x818));
  FUN_02819878(param_1,*(undefined4 *)(*(long *)(param_1 + 0x8b0) + 0x14),
               *(undefined4 *)(*(long *)(param_1 + 0x8b0) + 0x10));
  FUN_0280fb78(*(undefined8 *)(param_1 + 0x8d0),*(undefined8 *)(param_1 + 8));
  iVar18 = (**(code **)(**(long **)(param_1 + 0x100) + 0x58))();
  if (((iVar18 == 0) && (plVar25 = *(long **)(param_1 + 0x880), plVar25 != (long *)0x0)) &&
     (*(char *)((long)plVar25 + 0xa3) != '\0')) {
    *(undefined1 *)((long)plVar25 + 0xa3) = 0;
    (**(code **)(*plVar25 + 0xa0))(plVar25,0);
  }
  *(undefined1 *)(param_1 + 0x918) = 1;
  return;
}


