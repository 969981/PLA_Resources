/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dc480; name: FUN_032dc480
 */


undefined8 FUN_032dc480(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined **local_c0;
  long local_b8;
  int local_b0;
  uint local_ac;
  ulong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  long local_78;
  long lStack_70;
  ulong local_68;
  
  uVar8 = FUN_032e37ec(param_1[1],param_2[1]);
  if ((uVar8 & 1) != 0) {
    puVar12 = (ulong *)param_2[1];
    uVar8 = 0;
    do {
      uVar10 = (uint)uVar8;
      uVar14 = (uint)*puVar12;
      if ((uVar14 >> 0x15 & 1) != 0) {
        uVar10 = (uVar14 & 0x1fffff) - (uVar14 >> 1 & 0x55555);
        uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
        uVar8 = puVar12[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] |
                uVar8;
        uVar10 = (uint)uVar8;
      }
      if ((*puVar12 & 1) != 0) break;
      uVar10 = (uint)uVar8;
      puVar12 = (ulong *)puVar12[1];
    } while (puVar12 != (ulong *)0x0);
    if ((uVar10 >> 3 & 1) == 0) {
      puVar12 = (ulong *)param_1[1];
      while( true ) {
        uVar10 = (uint)*puVar12;
        if ((uVar10 >> 7 & 1) != 0) break;
        if (((*puVar12 & 1) != 0) || (puVar12 = (ulong *)puVar12[1], puVar12 == (ulong *)0x0))
        goto LAB_032dc59c;
      }
      if ((puVar12 != (ulong *)0x0) &&
         (uVar10 = (uVar10 & 0x7f) - (uVar10 >> 1 & 0x15),
         uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
         (code *)puVar12[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] !=
         (code *)0x0)) {
        (*(code *)puVar12[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2])
                  (*param_1,*param_2,(ulong *)param_1[1],1);
        return 0;
      }
    }
LAB_032dc59c:
    local_78 = *param_1;
    lStack_70 = param_1[1];
    local_68 = param_1[2];
    if ((local_68 & 1) != 0) {
      FUN_032e0c28(local_68 & 0xfffffffffffffffe);
    }
    local_90 = *param_2;
    uStack_88 = param_2[1];
    local_80 = param_2[2];
    if ((local_80 & 1) != 0) {
      FUN_032e0c28(local_80 & 0xfffffffffffffffe);
    }
    FUN_032dcb78(&local_c0,&local_90);
    FUN_033095d0(&local_78,&local_90,&local_c0);
    local_c0 = &PTR_LAB_0434afe8;
    if (local_78 != 0) {
      if ((local_98 & 1) != 0) {
        plVar9 = (long *)(local_98 & 0xfffffffffffffffe);
        plVar1 = plVar9 + 1;
        do {
          lVar5 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar5 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      lVar5 = local_b8;
      local_c0 = &PTR_LAB_0434e538;
      if (local_b0 != 0) {
        lVar16 = local_b8 + (long)local_b0 * 0x18;
        do {
          while( true ) {
            puVar12 = (ulong *)(lVar16 + -8);
            lVar16 = lVar16 + -0x18;
            if ((*puVar12 & 1) != 0) break;
LAB_032dc950:
            if (lVar16 == lVar5) goto LAB_032dc614;
          }
          plVar9 = (long *)(*puVar12 & 0xfffffffffffffffe);
          plVar1 = plVar9 + 1;
          do {
            lVar6 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = (int)lVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((plVar9 == (long *)0x0) || ((int)lVar6 != 1)) goto LAB_032dc950;
          (**(code **)(*plVar9 + 8))();
        } while (lVar16 != lVar5);
      }
LAB_032dc614:
      local_b0 = 0;
      if ((-1 < (int)local_ac) && (local_b8 != 0)) {
        (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                  (PTR_PTR_0434a080,local_b8,((ulong)local_ac & 0x3fffffff) * 0x18);
      }
      if ((local_80 & 1) != 0) {
        plVar9 = (long *)(local_80 & 0xfffffffffffffffe);
        plVar1 = plVar9 + 1;
        do {
          lVar5 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar5 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      if ((local_68 & 1) == 0) {
        return 0;
      }
      plVar9 = (long *)(local_68 & 0xfffffffffffffffe);
      plVar1 = plVar9 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (plVar9 == (long *)0x0) {
        return 0;
      }
      if ((int)lVar5 == 1) {
        (**(code **)(*plVar9 + 8))();
        return 0;
      }
      return 0;
    }
    if ((local_98 & 1) != 0) {
      plVar9 = (long *)(local_98 & 0xfffffffffffffffe);
      plVar1 = plVar9 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar5 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    lVar5 = local_b8;
    local_c0 = &PTR_LAB_0434e538;
    if (local_b0 != 0) {
      lVar16 = local_b8 + (long)local_b0 * 0x18;
      do {
        while( true ) {
          puVar12 = (ulong *)(lVar16 + -8);
          lVar16 = lVar16 + -0x18;
          if ((*puVar12 & 1) != 0) break;
LAB_032dc974:
          if (lVar16 == lVar5) goto LAB_032dc674;
        }
        plVar9 = (long *)(*puVar12 & 0xfffffffffffffffe);
        plVar1 = plVar9 + 1;
        do {
          lVar6 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar9 == (long *)0x0) || ((int)lVar6 != 1)) goto LAB_032dc974;
        (**(code **)(*plVar9 + 8))();
      } while (lVar16 != lVar5);
    }
LAB_032dc674:
    local_b0 = 0;
    if ((-1 < (int)local_ac) && (local_b8 != 0)) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,local_b8,((ulong)local_ac & 0x3fffffff) * 0x18);
    }
    if ((local_80 & 1) != 0) {
      plVar9 = (long *)(local_80 & 0xfffffffffffffffe);
      plVar1 = plVar9 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar5 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    if ((local_68 & 1) != 0) {
      plVar9 = (long *)(local_68 & 0xfffffffffffffffe);
      plVar1 = plVar9 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar5 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  lVar5 = *param_1;
  puVar12 = (ulong *)param_1[1];
  puVar11 = puVar12;
  while( true ) {
    uVar10 = (uint)*puVar11;
    if ((uVar10 >> 6 & 1) != 0) break;
    if (((*puVar11 & 1) != 0) || (puVar11 = (ulong *)puVar11[1], puVar11 == (ulong *)0x0))
    goto LAB_032dc734;
  }
  if ((puVar11 != (ulong *)0x0) &&
     (uVar10 = (uVar10 & 0x3f) - (uVar10 >> 1 & 0x15),
     uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
     (code *)puVar11[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] !=
     (code *)0x0)) {
    (*(code *)puVar11[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2])
              (lVar5,puVar12,1);
    goto LAB_032dc6fc;
  }
LAB_032dc734:
  uVar8 = *puVar12;
  uVar10 = (uint)uVar8;
  puVar11 = puVar12;
  if ((uVar8 & 1) == 0) {
    puVar11 = (ulong *)puVar12[1];
    bVar2 = (byte)*puVar11;
    while ((bVar2 & 1) == 0) {
      puVar11 = (ulong *)puVar11[1];
      bVar2 = (byte)*puVar11;
    }
  }
  if ((puVar12 == (ulong *)0x0) || (3 < ((uint)puVar11[2] & 0x1f) - 2)) {
    puVar11 = puVar12;
    if ((uVar8 & 1) == 0) {
      puVar11 = (ulong *)puVar12[1];
      bVar2 = (byte)*puVar11;
      while ((bVar2 & 1) == 0) {
        puVar11 = (ulong *)puVar11[1];
        bVar2 = (byte)*puVar11;
      }
    }
    if (puVar12 == (ulong *)0x0) {
      return 0x80040200;
    }
    if ((puVar11[2] & 0x1f) != 6) {
      return 0x80040200;
    }
  }
  puVar13 = puVar12;
  uVar14 = uVar10;
  puVar11 = puVar12;
  if ((uVar10 >> 0x16 & 1) == 0) {
    uVar15 = uVar8;
    do {
      if (((uVar15 & 1) != 0) || (puVar13 = (ulong *)puVar13[1], puVar13 == (ulong *)0x0))
      goto joined_r0x032dc8c8;
      uVar15 = *puVar13;
      uVar14 = (uint)uVar15;
    } while ((uVar14 >> 0x16 & 1) == 0);
  }
  uVar14 = (uVar14 & 0x3fffff) - (uVar14 >> 1 & 0x155555);
  uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
  pcVar18 = (code *)puVar13[(ulong)((uVar14 + (uVar14 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
  if (pcVar18 == (code *)0x0) {
joined_r0x032dc8c8:
    while ((uVar10 >> 6 & 1) == 0) {
      if ((uVar8 & 1) != 0) {
        return 0x80040200;
      }
      puVar11 = (ulong *)puVar11[1];
      if (puVar11 == (ulong *)0x0) {
        return 0x80040200;
      }
      uVar8 = *puVar11;
      uVar10 = (uint)uVar8;
    }
    if (puVar11 == (ulong *)0x0) {
      return 0x80040200;
    }
    uVar10 = (uVar10 & 0x3f) - (uVar10 >> 1 & 0x15);
    uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
    pcVar18 = (code *)puVar11[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2]
    ;
    if (pcVar18 == (code *)0x0) {
      return 0x80040200;
    }
  }
  uVar8 = FUN_032e225c(puVar12,&DAT_043568f0);
  if ((uVar8 & 1) == 0) {
    (*pcVar18)(lVar5,puVar12,1);
  }
  else {
    uVar17 = *(undefined8 *)(lVar5 + 8);
    (*pcVar18)(lVar5,puVar12,1);
    *(undefined8 *)(lVar5 + 8) = uVar17;
  }
LAB_032dc6fc:
  iVar7 = FUN_032e65a4(param_1,param_2);
  if (-1 < iVar7) {
    return 0;
  }
  puVar12 = (ulong *)param_1[1];
  do {
    uVar10 = (uint)*puVar12;
    if ((uVar10 >> 8 & 1) != 0) {
      if (puVar12 == (ulong *)0x0) {
        return 0x80040200;
      }
      uVar10 = (uVar10 & 0xff) - (uVar10 >> 1 & 0x55);
      uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
      if ((code *)puVar12[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] ==
          (code *)0x0) {
        return 0x80040200;
      }
      (*(code *)puVar12[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2])
                (*param_1,(ulong *)param_1[1],1);
      return 0x80040200;
    }
    if ((*puVar12 & 1) != 0) {
      return 0x80040200;
    }
    puVar12 = (ulong *)puVar12[1];
  } while (puVar12 != (ulong *)0x0);
  return 0x80040200;
}


