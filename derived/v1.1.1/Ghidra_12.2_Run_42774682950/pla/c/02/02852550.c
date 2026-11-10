/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02852550; name: FUN_02852550
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02852550(long param_1,uint param_2,ulong param_3)

{
  long *plVar1;
  int *piVar2;
  char *__format;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  byte *pbVar18;
  uint uVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long *local_90;
  undefined8 uStack_88;
  long *local_70;
  long local_68;
  
  plVar21 = *(long **)(*(long *)(param_1 + 8) + 0x1b8);
  if (plVar21 == (long *)0x0) {
    FUN_02c3865c(0,0,param_2 & 0xffff,1);
    plVar21 = *(long **)(param_1 + 0x10);
  }
  else {
    lVar20 = plVar21[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_0285329c;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar12;
    }
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_02c3865c(plVar21,0,param_2 & 0xffff,1);
    lVar20 = plVar21[0xb];
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
      plVar21 = *(long **)(param_1 + 0x10);
    }
    else {
      plVar21 = *(long **)(param_1 + 0x10);
    }
  }
  if (plVar21 != (long *)0x0) {
    plVar23 = plVar21 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar19 = param_2 & 0xffff;
  lVar20 = *(long *)(param_1 + 0x60);
  plVar23 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
  if (plVar23 == (long *)0x0) {
    lVar17 = plVar21[0x16];
    if (lVar17 != 0) {
      plVar23 = *(long **)(lVar17 + 0x270);
      if (plVar23 != *(long **)(lVar17 + 0x278)) {
        iVar10 = 0;
        do {
          plVar22 = (long *)PTR_DAT_04379c88;
          if (*plVar23 != 0) {
            plVar22 = (long *)(*plVar23 + 0x58);
          }
          if (*plVar22 == lVar20) goto LAB_02853004;
          plVar23 = plVar23 + 1;
          iVar10 = iVar10 + 1;
        } while (*(long **)(lVar17 + 0x278) != plVar23);
      }
    }
    iVar10 = 0;
LAB_02853004:
    FUN_02c2e33c(plVar21,iVar10,0);
  }
  else {
    plVar22 = plVar23 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar17 = plVar21[0x16];
    if (lVar17 != 0) {
      plVar15 = *(long **)(lVar17 + 0x270);
      if (plVar15 != *(long **)(lVar17 + 0x278)) {
        iVar10 = 0;
        do {
          plVar16 = (long *)PTR_DAT_04379c88;
          if (*plVar15 != 0) {
            plVar16 = (long *)(*plVar15 + 0x58);
          }
          if (*plVar16 == lVar20) goto LAB_0285268c;
          plVar15 = plVar15 + 1;
          iVar10 = iVar10 + 1;
        } while (*(long **)(lVar17 + 0x278) != plVar15);
      }
    }
    iVar10 = 0;
LAB_0285268c:
    FUN_02c2e33c(plVar21,iVar10,plVar23);
    do {
      iVar10 = (int)*plVar22 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(int *)plVar22 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
    }
  }
  lVar17 = *(long *)(param_1 + 8);
  uVar12 = *(undefined8 *)(lVar17 + 0x1c0);
  lVar20 = *(long *)(lVar17 + 0x1c8);
  lVar24 = *(long *)(lVar17 + 0x1b8);
  *(undefined4 *)(lVar24 + 0x124) = 0;
  *(undefined2 *)(lVar24 + 0x128) = 0;
  *(undefined4 *)(lVar24 + 300) = 0;
  *(undefined4 *)(lVar24 + 0x134) = 0;
  FUN_02c33414(lVar24,uVar12);
  if (*(char *)(lVar20 + 0x7c) != '\0') {
    **(undefined2 **)(lVar20 + 0x58) = 0;
    *(undefined2 *)(lVar20 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar24,lVar20,uVar12,0,0);
  FUN_0283ce7c(lVar17,param_1 + 0xa8,*(undefined8 *)(lVar17 + 0x1c8),10);
  if (plVar21 != (long *)0x0) {
    plVar23 = plVar21 + 10;
    do {
      iVar10 = (int)*plVar23 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *(int *)plVar23 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  __format = "ITEMINFO_%03d";
  if (999 < (param_2 & 0xffff)) {
    __format = "ITEMINFO_%04d";
  }
  snprintf((char *)&local_90,0x20,__format,(ulong)uVar19);
  plVar21 = *(long **)(param_1 + 0x18);
  if (plVar21 != (long *)0x0) {
    plVar23 = plVar21 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar14 = &DAT_cbf29ce484222645;
  if ((byte)local_90 != 0) {
    pbVar18 = (byte *)((ulong)&local_90 | 1);
    bVar9 = (byte)local_90;
    do {
      puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar9) * 0x100000001b3);
      bVar9 = *pbVar18;
      pbVar18 = pbVar18 + 1;
    } while (bVar9 != 0);
  }
  plVar23 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
  if (plVar23 == (long *)0x0) {
    lVar20 = plVar21[0x16];
    if (lVar20 != 0) {
      plVar23 = *(long **)(lVar20 + 0x270);
      if (plVar23 != *(long **)(lVar20 + 0x278)) {
        iVar10 = 0;
        do {
          puVar13 = (undefined8 *)PTR_DAT_04379c88;
          if (*plVar23 != 0) {
            puVar13 = (undefined8 *)(*plVar23 + 0x58);
          }
          if ((undefined1 *)*puVar13 == puVar14) goto LAB_02853068;
          plVar23 = plVar23 + 1;
          iVar10 = iVar10 + 1;
        } while (*(long **)(lVar20 + 0x278) != plVar23);
      }
    }
    iVar10 = 0;
LAB_02853068:
    FUN_02c2e33c(plVar21,iVar10,0);
  }
  else {
    plVar22 = plVar23 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar20 = plVar21[0x16];
    if (lVar20 != 0) {
      plVar15 = *(long **)(lVar20 + 0x270);
      if (plVar15 != *(long **)(lVar20 + 0x278)) {
        iVar10 = 0;
        do {
          puVar13 = (undefined8 *)PTR_DAT_04379c88;
          if (*plVar15 != 0) {
            puVar13 = (undefined8 *)(*plVar15 + 0x58);
          }
          if ((undefined1 *)*puVar13 == puVar14) goto LAB_0285282c;
          plVar15 = plVar15 + 1;
          iVar10 = iVar10 + 1;
        } while (*(long **)(lVar20 + 0x278) != plVar15);
      }
    }
    iVar10 = 0;
LAB_0285282c:
    FUN_02c2e33c(plVar21,iVar10,plVar23);
    do {
      iVar10 = (int)*plVar22 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(int *)plVar22 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
    }
  }
  lVar17 = *(long *)(param_1 + 8);
  uVar12 = *(undefined8 *)(lVar17 + 0x1c0);
  lVar20 = *(long *)(lVar17 + 0x1c8);
  lVar24 = *(long *)(lVar17 + 0x1b8);
  *(undefined4 *)(lVar24 + 0x124) = 0;
  *(undefined2 *)(lVar24 + 0x128) = 0;
  *(undefined4 *)(lVar24 + 300) = 0;
  *(undefined4 *)(lVar24 + 0x134) = 0;
  FUN_02c33414(lVar24,uVar12);
  if (*(char *)(lVar20 + 0x7c) != '\0') {
    **(undefined2 **)(lVar20 + 0x58) = 0;
    *(undefined2 *)(lVar20 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar24,lVar20,uVar12,0,0);
  FUN_0283ce7c(lVar17,param_1 + 200,*(undefined8 *)(lVar17 + 0x1c8),10);
  if (plVar21 == (long *)0x0) {
LAB_028528d0:
    if ((param_3 & 1) == 0) goto LAB_02852da8;
LAB_028528d4:
    FUN_02c4fb44(&local_90,uVar19);
    iVar10 = FUN_02c4fc60(&local_90,0xe);
    if (iVar10 == 2) goto LAB_02852da8;
    FUN_02853488(param_1,param_2,0);
    bVar9 = 1;
    FUN_02853488(param_1,param_2,1);
  }
  else {
    plVar23 = plVar21 + 10;
    do {
      iVar10 = (int)*plVar23 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *(int *)plVar23 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 != 0) goto LAB_028528d0;
    (**(code **)(*plVar21 + 0x10))(plVar21);
    if ((param_3 & 1) != 0) goto LAB_028528d4;
LAB_02852da8:
    bVar9 = 0;
  }
  plVar21 = *(long **)(*(long *)(param_1 + 8) + 0x148);
  lVar20 = *(long *)(*(long *)(param_1 + 8) + 0x150);
  lVar17 = *(long *)(param_1 + 0x128);
  plVar23 = *(long **)(param_1 + 0x140);
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x18))(plVar23);
  }
  plVar22 = plVar21;
  if ((lVar20 != 0) && (*plVar21 != lVar17)) {
    lVar24 = lVar20 * 0x30;
    plVar15 = plVar21 + lVar20 * 6;
    do {
      lVar24 = lVar24 + -0x30;
      plVar22 = plVar15;
      if (lVar24 == 0) break;
      plVar16 = plVar21 + 6;
      plVar21 = plVar21 + 6;
      plVar22 = plVar21;
    } while (*plVar16 != lVar17);
  }
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x20))(plVar23);
  }
  *(byte *)(plVar22[4] + 0x58) = *(byte *)(plVar22[4] + 0x58) & 0xfe | bVar9;
  lVar20 = *(long *)(param_1 + 8);
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar17 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar17;
  plVar21 = *(long **)(lVar17 + 0x260);
  if (plVar21 != (long *)0x0) {
    lVar17 = plVar21[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0285329c;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar12;
    }
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar23 = *(long **)(lVar20 + 0x148);
  lVar20 = *(long *)(lVar20 + 0x150);
  plVar22 = *(long **)(param_1 + 800);
  uVar3 = *(uint *)((long)plVar21 + ((ulong)(param_2 >> 3) & 0x1ffc) + 0x1a8);
  lVar17 = *(long *)(param_1 + 0x308);
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x18))(plVar22);
  }
  plVar15 = plVar23;
  if ((lVar20 != 0) && (*plVar23 != lVar17)) {
    lVar24 = lVar20 * 0x30;
    plVar16 = plVar23 + lVar20 * 6;
    do {
      lVar24 = lVar24 + -0x30;
      plVar15 = plVar16;
      if (lVar24 == 0) break;
      plVar1 = plVar23 + 6;
      plVar23 = plVar23 + 6;
      plVar15 = plVar23;
    } while (*plVar1 != lVar17);
  }
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
  *(byte *)(plVar15[4] + 0x58) =
       *(byte *)(plVar15[4] + 0x58) & 0xfe | (uVar3 & 1 << (ulong)(param_2 & 0x1f)) != 0;
  if (plVar21 != (long *)0x0) {
    lVar20 = plVar21[0xb];
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar20 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar20;
  plVar21 = *(long **)(lVar20 + 0xc0);
  if (plVar21 != (long *)0x0) {
    lVar20 = plVar21[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_0285329c;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar12;
    }
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_68 = plVar21[0x18];
  local_70 = (long *)(local_68 + plVar21[0x19] * 8);
  FUN_02854db0(&local_90,&local_68,&local_70);
  if (local_90 != (long *)(plVar21[0x18] + plVar21[0x19] * 8)) {
    plVar23 = (long *)*local_90;
    puVar13 = (undefined8 *)(**(code **)plVar23[10])(plVar23 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar10 != 0)) {
      uVar12 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar12;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar13 != (undefined8 *)0x0) {
LAB_02852b8c:
      if (puVar13 != (undefined8 *)PTR_DAT_0437c680) goto LAB_02852ea0;
      lVar20 = plVar23[0xb];
      if (*(undefined8 **)(lVar20 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar20 + 0x10) == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
          *(undefined8 *)(lVar20 + 0x10) = uVar12;
        }
        piVar2 = (int *)(lVar20 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          plVar22 = plVar23;
        } while (cVar4 != '\0');
        goto joined_r0x02852bd0;
      }
      goto LAB_0285329c;
    }
  }
  plVar22 = (long *)0x0;
joined_r0x02852bd0:
  if (plVar21 != (long *)0x0) {
    lVar20 = plVar21[0xb];
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  if (plVar22 == (long *)0x0) {
    plVar21 = *(long **)(*(long *)(param_1 + 8) + 0x148);
    lVar20 = *(long *)(*(long *)(param_1 + 8) + 0x150);
    lVar17 = *(long *)(param_1 + 0x328);
    plVar23 = *(long **)(param_1 + 0x340);
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
    plVar22 = plVar21;
    if ((lVar20 != 0) && (*plVar21 != lVar17)) {
      lVar24 = lVar20 * 0x30;
      plVar15 = plVar21 + lVar20 * 6;
      do {
        lVar24 = lVar24 + -0x30;
        plVar22 = plVar15;
        if (lVar24 == 0) break;
        plVar16 = plVar21 + 6;
        plVar21 = plVar21 + 6;
        plVar22 = plVar21;
      } while (*plVar16 != lVar17);
    }
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
    *(byte *)(plVar22[4] + 0x58) = *(byte *)(plVar22[4] + 0x58) & 0xfe;
    return;
  }
  if (plVar22[0x1a] == 0) {
    local_90 = (long *)0x0;
    uStack_88 = 0;
  }
  else {
    local_90 = (long *)0x0;
    uStack_88 = 0;
    FUN_019d08dc(&local_90,plVar22[0x1a] + 0x1c0);
    plVar21 = local_90;
    puVar8 = PTR_DAT_0437c670;
    puVar7 = PTR_DAT_0437c668;
    puVar6 = PTR_DAT_043794d0;
    if (local_90 != (long *)0x0) {
      if (*(int *)((long)local_90 + 0xc) != 0) {
        piVar2 = (int *)((long)local_90 + 0xc);
        iVar10 = *(int *)((long)local_90 + 0xc);
        do {
          plVar23 = (long *)plVar21[2];
          if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
            if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
              uVar12 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar12;
              __cxa_guard_release(puVar6);
            }
            *(undefined **)puVar8 = PTR_DAT_043794d8;
            __cxa_guard_release(puVar7);
          }
          while( true ) {
            if (plVar23 == (long *)0x0) goto LAB_02853350;
            if (plVar23 == (long *)puVar8) break;
            plVar23 = (long *)*plVar23;
          }
          iVar11 = *piVar2;
          if (iVar11 == iVar10) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar20 = plVar21[3];
              plVar21 = (long *)0x0;
              plVar23 = local_90;
              if (lVar20 != 0) {
                plVar21 = (long *)(lVar20 + -0x50);
              }
              goto joined_r0x028530f0;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = iVar11;
        } while (iVar11 != 0);
      }
LAB_02853350:
      plVar21 = (long *)0x0;
      plVar23 = local_90;
joined_r0x028530f0:
      local_90 = plVar23;
      if (plVar23 != (long *)0x0) {
        plVar15 = plVar23 + 1;
        do {
          iVar10 = (int)*plVar15 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *(int *)plVar15 = iVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 == 0) {
          plVar23[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar20 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar20;
          local_68 = *plVar23;
          FUN_02a44274(lVar20 + 0xd8,&local_68);
        }
      }
      if (plVar21 == (long *)0x0) {
        bVar9 = 0;
      }
      else {
        plVar23 = (long *)plVar21[0xe];
        if (plVar23 == (long *)0x0) {
          bVar9 = 0;
        }
        else {
          lVar20 = plVar23[0xb];
          if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) {
LAB_0285329c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar20 + 0x10) == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
            *(undefined8 *)(lVar20 + 0x10) = uVar12;
          }
          piVar2 = (int *)(lVar20 + 0xc);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = *piVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          FUN_0199d60c(&local_90,plVar23);
          if (local_90 == (long *)0x0) {
            local_70 = (long *)0x0;
LAB_028531a8:
            if (local_70 != (long *)0x0) goto LAB_028531b0;
LAB_0285340c:
            bVar9 = 0;
          }
          else {
            FUN_011a5e18(&local_70);
            plVar15 = local_90;
            if (local_90 == (long *)0x0) goto LAB_028531a8;
            plVar16 = local_90 + 1;
            do {
              iVar10 = (int)*plVar16 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar5) {
                *(int *)plVar16 = iVar10;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 != 0) goto LAB_028531a8;
            local_90[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar20 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar20;
            local_68 = *plVar15;
            FUN_02a44274(lVar20 + 0xd8,&local_68);
            if (local_70 == (long *)0x0) goto LAB_0285340c;
LAB_028531b0:
            bVar9 = FUN_01918550(local_70,uVar19);
            if (local_70 != (long *)0x0) {
              lVar20 = local_70[0xb];
              piVar2 = (int *)(lVar20 + 0xc);
              do {
                iVar10 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = iVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar20 + 0x18) = 0;
                (**(code **)(*local_70 + 0x20))();
              }
            }
          }
          lVar20 = plVar23[0xb];
          piVar2 = (int *)(lVar20 + 0xc);
          do {
            iVar10 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar20 + 0x18) = 0;
            (**(code **)(*plVar23 + 0x20))(plVar23);
          }
        }
        lVar20 = plVar21[0xb];
        piVar2 = (int *)(lVar20 + 0xc);
        do {
          iVar10 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar20 + 0x18) = 0;
          (**(code **)(*plVar21 + 0x20))(plVar21);
        }
      }
      plVar21 = *(long **)(*(long *)(param_1 + 8) + 0x148);
      lVar20 = *(long *)(*(long *)(param_1 + 8) + 0x150);
      lVar17 = *(long *)(param_1 + 0x328);
      plVar23 = *(long **)(param_1 + 0x340);
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x18))(plVar23);
      }
      plVar15 = plVar21;
      if ((lVar20 != 0) && (*plVar21 != lVar17)) {
        lVar24 = lVar20 * 0x30;
        plVar16 = plVar21 + lVar20 * 6;
        do {
          lVar24 = lVar24 + -0x30;
          plVar15 = plVar16;
          if (lVar24 == 0) break;
          plVar1 = plVar21 + 6;
          plVar21 = plVar21 + 6;
          plVar15 = plVar21;
        } while (*plVar1 != lVar17);
      }
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x20))(plVar23);
      }
      lVar20 = plVar15[4];
      bVar9 = *(byte *)(lVar20 + 0x58) & 0xfe | bVar9 & 1;
      goto LAB_02852c88;
    }
  }
  plVar21 = *(long **)(*(long *)(param_1 + 8) + 0x148);
  lVar20 = *(long *)(*(long *)(param_1 + 8) + 0x150);
  lVar17 = *(long *)(param_1 + 0x328);
  plVar23 = *(long **)(param_1 + 0x340);
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x18))(plVar23);
  }
  plVar15 = plVar21;
  if ((lVar20 != 0) && (*plVar21 != lVar17)) {
    lVar24 = lVar20 * 0x30;
    plVar16 = plVar21 + lVar20 * 6;
    do {
      lVar24 = lVar24 + -0x30;
      plVar15 = plVar16;
      if (lVar24 == 0) break;
      plVar1 = plVar21 + 6;
      plVar21 = plVar21 + 6;
      plVar15 = plVar21;
    } while (*plVar1 != lVar17);
  }
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x20))(plVar23);
  }
  lVar20 = plVar15[4];
  bVar9 = *(byte *)(lVar20 + 0x58) & 0xfe;
LAB_02852c88:
  *(byte *)(lVar20 + 0x58) = bVar9;
  lVar20 = plVar22[0xb];
  piVar2 = (int *)(lVar20 + 0xc);
  do {
    iVar10 = *piVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar10 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar20 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
  return;
LAB_02852ea0:
  puVar13 = (undefined8 *)*puVar13;
  plVar22 = (long *)0x0;
  if (puVar13 == (undefined8 *)0x0) goto joined_r0x02852bd0;
  goto LAB_02852b8c;
}


