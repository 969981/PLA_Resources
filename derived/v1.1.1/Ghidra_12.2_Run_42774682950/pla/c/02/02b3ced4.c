/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b3ced4; name: FUN_02b3ced4
 */


void FUN_02b3ced4(long *param_1,long param_2,long param_3,undefined8 *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  bool bVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  char *pcVar16;
  void *__dest;
  uint uVar17;
  undefined4 uVar18;
  int *piVar19;
  uint *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined1 uVar24;
  long lVar25;
  long *plVar26;
  int iVar27;
  long *plVar28;
  long local_88;
  long *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined1 auStack_68 [8];
  
  if (param_5 == 0) {
    param_5 = *(long *)(param_2 + 8);
  }
  lVar13 = FUN_02b3dc30(&local_80,param_5,param_3);
  *param_1 = lVar13;
  if (lVar13 != 0) {
    piVar19 = (int *)(lVar13 + 0x50);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar12) {
        *piVar19 = *piVar19 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  plVar14 = (long *)(*(long *)(param_2 + 0x58) + 0x58);
  (**(code **)(*plVar14 + 0x10))(plVar14,param_1);
  lVar13 = *param_1;
  uVar4 = *(undefined8 *)(param_3 + 0x68);
  *(undefined8 *)(lVar13 + 0x1c0) = *(undefined8 *)(param_3 + 0x60);
  *(undefined8 *)(lVar13 + 0x1c8) = uVar4;
  *(undefined1 *)(lVar13 + 0x22b) = 1;
  lVar13 = *param_1;
  *(uint *)(lVar13 + 0x178) = *(uint *)(lVar13 + 0x178) | 3;
  FUN_02b3d5a0(lVar13 + 0x128,*(undefined8 *)(param_3 + 0x78));
  FUN_02b3d740(lVar13 + 0x128,*(long *)(param_2 + 0x60) + 0x58,*param_4,0);
  if ((int)((ulong)(*(long *)(param_3 + 0x128) - *(long *)(param_3 + 0x120)) >> 3) * -0x33333333 !=
      0) {
    lVar1 = *(long *)(lVar13 + 0x128);
    lVar13 = *(long *)(lVar13 + 0x130);
    plVar14 = (long *)*param_1;
    if (plVar14 != (long *)0x0) {
      plVar26 = plVar14 + 10;
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar12) {
          *(int *)plVar26 = (int)*plVar26 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    lVar25 = *(long *)(param_2 + 0x60);
    FUN_02b38294(plVar14);
    *(uint *)(plVar14 + 0x2f) = *(uint *)(plVar14 + 0x2f) | 0x20;
    piVar19 = *(int **)(param_3 + 0x120);
    piVar5 = *(int **)(param_3 + 0x128);
    if (piVar19 != piVar5) {
      iVar27 = (int)((ulong)(lVar13 - lVar1) >> 3) * 0x38e38e39;
      lVar13 = 0;
      do {
        iVar10 = *piVar19;
        lVar1 = *(long *)(piVar19 + 2);
        lVar6 = *(long *)(piVar19 + 4);
        lVar2 = *(long *)(piVar19 + 6);
        plVar26 = *(long **)(piVar19 + 8);
        if (plVar26 != (long *)0x0) {
          (**(code **)(*plVar26 + 0x18))(plVar26);
        }
        plVar28 = *(long **)(plVar14[0x3e] + lVar13 * 8);
        if (plVar28 != (long *)0x0) {
          plVar15 = plVar28 + 10;
          do {
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar12) {
              *(int *)plVar15 = (int)*plVar15 + 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
        }
        FUN_02b3d5a0(plVar28 + 0xb,*(long *)(param_3 + 0x78) + (long)iVar10 * 0x70);
        FUN_02b3d740(plVar28 + 0xb,lVar25 + 0x58,*param_4,iVar27);
        plVar28[0x13] = lVar1;
        plVar28[0x14] = lVar6;
        plVar28[0x15] = lVar2;
        if (plVar26 != (long *)0x0) {
          (**(code **)(*plVar26 + 0x18))(plVar26);
        }
        plVar15 = (long *)plVar28[0x16];
        plVar28[0x16] = (long)plVar26;
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x20))();
        }
        iVar27 = iVar27 + (int)((ulong)(plVar28[0xc] - plVar28[0xb]) >> 3) * 0x38e38e39;
        lVar13 = lVar13 + 1;
        plVar15 = plVar28 + 10;
        do {
          iVar10 = (int)*plVar15 + -1;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar12) {
            *(int *)plVar15 = iVar10;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
        }
        if (plVar26 != (long *)0x0) {
          (**(code **)(*plVar26 + 0x20))(plVar26);
        }
        piVar19 = piVar19 + 10;
      } while (piVar19 != piVar5);
    }
    plVar26 = plVar14 + 10;
    do {
      iVar27 = (int)*plVar26 + -1;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar12) {
        *(int *)plVar26 = iVar27;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar27 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  piVar19 = (int *)*param_4;
  puVar20 = (uint *)((long)piVar19 + (ulong)*(ushort *)((long)piVar19 + (4 - (long)*piVar19)));
  puVar20 = (uint *)((long)puVar20 + (ulong)*puVar20 + 4);
  piVar19 = (int *)((long)puVar20 + (ulong)*puVar20);
  puVar20 = (uint *)((long)piVar19 + (ulong)*(ushort *)((long)piVar19 + (4 - (long)*piVar19)));
  plVar26 = (long *)(ulong)*(uint *)((long)puVar20 + (ulong)*puVar20);
  local_88 = *(long *)(*(long *)(param_2 + 0x60) + 0x58);
  local_70 = 0;
  uStack_78 = 4;
  local_80 = plVar26;
  plVar14 = (long *)FUN_01b34908(auStack_68,*(undefined8 *)(local_88 + 8),&local_88);
  if (plVar14 == (long *)0x0) {
    plVar28 = (long *)0x0;
  }
  else {
    plVar28 = plVar14 + 10;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar12) {
        *(int *)plVar28 = (int)*plVar28 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    plVar28 = plVar14;
  }
  FUN_02bbfe84(plVar28,&local_80,1,0,0);
  uVar9 = *(uint *)(plVar28 + 0x14);
  uVar17 = (uint)*(ulong *)(plVar28[0x13] + 0x138);
  if (uVar9 < 3) {
    uVar17 = uVar17 & uVar9 - 1;
  }
  else {
    iVar27 = 0;
    if ((ulong)uVar9 != 0) {
      iVar27 = (int)(*(ulong *)(plVar28[0x13] + 0x138) / (ulong)uVar9);
    }
    uVar17 = uVar17 - iVar27 * uVar9;
  }
  pcVar16 = (char *)FUN_02bc0470((long)(int)uVar17,plVar28 + 0xb);
  if (*pcVar16 == '\0' || *(long *)(pcVar16 + 8) == 0) {
    __dest = (void *)0x0;
  }
  else {
    if (*(long *)(*(long *)(pcVar16 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    __dest = (void *)(*DAT_043f0470)();
  }
  if (*(ushort *)((long)piVar19 - (long)*piVar19) < 5) {
    lVar13 = 0;
  }
  else {
    uVar21 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[2];
    lVar13 = 0;
    if (uVar21 != 0) {
      puVar20 = (uint *)((long)piVar19 + uVar21);
      lVar13 = (long)puVar20 + (ulong)*puVar20;
    }
  }
  memcpy(__dest,(void *)(lVar13 + 4),(size_t)plVar26);
  lVar13 = *param_1;
  plVar26 = *(long **)(lVar13 + 0x168);
  if (plVar26 != plVar14) {
    iVar27 = *(int *)(param_3 + 0x70);
    *(uint *)(lVar13 + 0x178) = *(uint *)(lVar13 + 0x178) | 4;
    if (plVar14 != (long *)0x0) {
      plVar26 = plVar14 + 10;
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar12) {
          *(int *)plVar26 = (int)*plVar26 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      plVar26 = *(long **)(lVar13 + 0x168);
    }
    *(long **)(lVar13 + 0x168) = plVar14;
    if (plVar26 != (long *)0x0) {
      plVar28 = plVar26 + 10;
      do {
        iVar10 = (int)*plVar28 + -1;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar12) {
          *(int *)plVar28 = iVar10;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar26 + 0x10))();
      }
    }
    uVar18 = 0x20;
    if (iVar27 != 2) {
      uVar18 = 0x10;
    }
    *(undefined4 *)(lVar13 + 0x170) = uVar18;
    lVar13 = *param_1;
  }
  *(undefined8 *)(lVar13 + 0x1a0) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(lVar13 + 0x1a8) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(lVar13 + 0x1b0) = *(undefined8 *)(param_3 + 0x30);
  plVar26 = *(long **)(param_3 + 0x38);
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar26 + 0x18))(plVar26);
  }
  plVar28 = *(long **)(lVar13 + 0x1b8);
  *(long **)(lVar13 + 0x1b8) = plVar26;
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x20))();
  }
  if (*(undefined4 **)(param_3 + 0xf0) != *(undefined4 **)(param_3 + 0xe8)) {
    *(undefined4 *)(*param_1 + 0x22c) = **(undefined4 **)(param_3 + 0xe8);
  }
  puVar7 = *(undefined4 **)(param_3 + 0xb8);
  for (puVar3 = *(undefined4 **)(param_3 + 0xb0); puVar3 != puVar7; puVar3 = puVar3 + 0xe) {
    FUN_02b372c0(&local_80,*param_1);
    plVar26 = local_80;
    local_80[0xf] = *(long *)(puVar3 + 4);
    local_80[0x10] = *(long *)(puVar3 + 6);
    local_80[0x11] = *(long *)(puVar3 + 8);
    plVar28 = *(long **)(puVar3 + 10);
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x18))(plVar28);
    }
    plVar15 = (long *)plVar26[0x12];
    plVar26[0x12] = (long)plVar28;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    *(undefined4 *)(local_80 + 0x23) = *puVar3;
    *(undefined4 *)(local_80 + 0x24) = puVar3[1];
    *(undefined4 *)((long)local_80 + 0x11c) = puVar3[2];
    if (local_80 != (long *)0x0) {
      plVar26 = local_80 + 10;
      do {
        iVar27 = (int)*plVar26 + -1;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar12) {
          *(int *)plVar26 = iVar27;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar27 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
  }
  lVar13 = *param_1;
  if (*(int *)(param_3 + 0x160) == 1) {
LAB_02b3d4a0:
    uVar24 = 0;
  }
  else {
    if (*(int *)(param_3 + 0x160) == 0) {
      puVar22 = *(undefined8 **)(lVar13 + 0x128);
      puVar8 = *(undefined8 **)(lVar13 + 0x130);
      if (puVar22 != puVar8) {
        puVar23 = puVar22;
        do {
          piVar19 = (int *)*puVar23;
          while (piVar19 != (int *)puVar23[1]) {
            iVar27 = *piVar19;
            piVar19 = piVar19 + 2;
            if (iVar27 == 0x1c) goto LAB_02b3d47c;
          }
          puVar23 = puVar23 + 9;
          uVar24 = 1;
        } while (puVar23 != puVar8);
        goto LAB_02b3d4a4;
      }
    }
    uVar24 = 1;
  }
  goto LAB_02b3d4a4;
LAB_02b3d47c:
  do {
    piVar19 = (int *)*puVar22;
    while (piVar19 != (int *)puVar22[1]) {
      iVar27 = *piVar19;
      piVar19 = piVar19 + 2;
      if (iVar27 == 0x1d) goto LAB_02b3d4a0;
    }
    puVar22 = puVar22 + 9;
    uVar24 = 1;
  } while (puVar22 != puVar8);
LAB_02b3d4a4:
  *(undefined1 *)(lVar13 + 0x229) = uVar24;
  plVar26 = (long *)(*(long *)(param_2 + 0x58) + 0x58);
  (**(code **)(*plVar26 + 0x20))(plVar26,param_1);
  if (plVar14 != (long *)0x0) {
    plVar26 = plVar14 + 10;
    do {
      iVar27 = (int)*plVar26 + -1;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar12) {
        *(int *)plVar26 = iVar27;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar27 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  return;
}


