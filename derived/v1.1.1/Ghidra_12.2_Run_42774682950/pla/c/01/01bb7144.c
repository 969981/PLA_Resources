/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bb7144; name: FUN_01bb7144
 */


void FUN_01bb7144(long param_1)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  puVar11 = PTR_DAT_04379e80;
  puVar10 = PTR_DAT_04379e78;
  lVar19 = *(long *)(param_1 + 0x208);
  if ((lVar19 != 0) && (*(int *)(lVar19 + 0xc) != 0)) {
    piVar1 = (int *)(lVar19 + 0xc);
    iVar12 = *(int *)(lVar19 + 0xc);
    do {
      plVar21 = *(long **)(lVar19 + 0x10);
      if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
        uVar14 = FUN_0095a420();
        *(undefined8 *)puVar11 = uVar14;
        __cxa_guard_release(puVar10);
      }
      while( true ) {
        if (plVar21 == (long *)0x0) goto LAB_01bb716c;
        if (plVar21 == (long *)puVar11) break;
        plVar21 = (long *)*plVar21;
      }
      iVar13 = *piVar1;
      if (iVar13 == iVar12) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar19 = *(long *)(lVar19 + 0x18);
          if (lVar19 != 0) {
            local_70 = (long *)0xceb55565e3ed015a;
            pcStack_68 = "visibility_off_dither_frame";
            local_60 = 0x1b;
            local_58 = (long *)0x0;
            plVar21 = (long *)(lVar19 + -0x50);
            if (((*PTR_DAT_04379660 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379660);
            }
            lVar15 = *(long *)PTR_DAT_04379668;
            *(long *)PTR_DAT_04379670 = lVar15;
            uVar16 = *(ulong *)(lVar15 + 0x60);
            if (uVar16 == 0) goto LAB_01bb7458;
            uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
            uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
            uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar17 < 2) {
              uVar18 = uVar16 - 1 & 0xc6a9fa08d7874415;
            }
            else if (uVar16 < 0xc6a9fa08d7874416) {
              uVar18 = 0;
              if (uVar16 != 0) {
                uVar18 = 0xc6a9fa08d7874415 / uVar16;
              }
              uVar18 = 0xc6a9fa08d7874415 - uVar18 * uVar16;
            }
            else {
              uVar18 = 0xc6a9fa08d7874415;
            }
            plVar20 = *(long **)(*(long *)(lVar15 + 0x58) + uVar18 * 8);
            if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
            goto LAB_01bb7458;
            if (1 < uVar17) goto LAB_01bb7374;
            goto LAB_01bb7550;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar13;
    } while (iVar13 != 0);
  }
  goto LAB_01bb716c;
LAB_01bb7374:
  do {
    uVar17 = plVar20[1];
    if (uVar17 == 0xc6a9fa08d7874415) {
      if (plVar20[2] == -0x395605f72878bbeb) goto LAB_01bb738c;
    }
    else {
      if (uVar16 <= uVar17) {
        uVar7 = 0;
        if (uVar16 != 0) {
          uVar7 = uVar17 / uVar16;
        }
        uVar17 = uVar17 - uVar7 * uVar16;
      }
      if (uVar17 != uVar18) break;
    }
    plVar20 = (long *)*plVar20;
  } while (plVar20 != (long *)0x0);
LAB_01bb7458:
  iVar12 = 0;
  goto LAB_01bb73cc;
LAB_01bb738c:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_01bb7458;
  plVar2 = plVar20 + 10;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  iVar12 = FUN_00d78f50(plVar20,&local_70);
  do {
    iVar13 = (int)*plVar2 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *(int *)plVar2 = iVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  goto LAB_01bb73cc;
  while( true ) {
    plVar20 = (long *)*plVar20;
    iVar12 = 0;
    if (plVar20 == (long *)0x0) break;
LAB_01bb7550:
    if (plVar20[1] == 0xc6a9fa08d7874415) {
      if (plVar20[2] == -0x395605f72878bbeb) goto LAB_01bb738c;
    }
    else if ((plVar20[1] & uVar16 - 1) != uVar18) goto LAB_01bb7458;
  }
LAB_01bb73cc:
  uVar3 = *(uint *)(lVar19 + 0x1c4);
  uVar4 = uVar3 | 4;
  if (((uVar4 == uVar3) || (*(int *)(lVar19 + 0x1cc) == 0)) || (*(int *)(lVar19 + 0x1d4) == iVar12))
  {
    if (uVar3 != 0) goto LAB_01bb73e0;
LAB_01bb7498:
    if (iVar12 < 1) {
      FUN_01bdbf3c(plVar21,uVar4);
    }
    else {
      FUN_01bdbe50(plVar21,2,iVar12);
    }
    *(uint *)(lVar19 + 0x1c4) = uVar4;
  }
  else {
    if ((uVar3 == 0) || (*(int *)(lVar19 + 0x1cc) == 2)) goto LAB_01bb7498;
LAB_01bb73e0:
    *(uint *)(lVar19 + 0x1c4) = uVar4;
    if ((*(uint *)(lVar19 + 0x1c0) != uVar4) && (*(int *)(lVar19 + 0x1cc) == 0)) {
      *(uint *)(lVar19 + 0x1c0) = uVar4;
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  lVar19 = *(long *)(lVar19 + 8);
  piVar1 = (int *)(lVar19 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar19 + 0x18) = 0;
    (**(code **)(*plVar21 + 0x20))(plVar21);
  }
LAB_01bb716c:
  FUN_016c24d0(&local_70,param_1 + 0x540);
  plVar21 = local_70;
  if (local_70 != (long *)0x0) {
    plVar20 = (long *)local_70[0x58];
    if (plVar20 != (long *)0x0) {
      do {
        *(uint *)(plVar20 + 3) = *(uint *)(plVar20 + 3) | 0x10;
        FUN_01839500(plVar21);
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
      if (local_70 == (long *)0x0) goto LAB_01bb71cc;
    }
    lVar19 = local_70[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))(local_70);
      lVar19 = *(long *)(param_1 + 0x570);
      pbVar8 = PTR_DAT_0437a6d8;
      puVar9 = (undefined8 *)PTR_DAT_0437a6e0;
      goto joined_r0x01bb7210;
    }
  }
LAB_01bb71cc:
  lVar19 = *(long *)(param_1 + 0x570);
  pbVar8 = PTR_DAT_0437a6d8;
  puVar9 = (undefined8 *)PTR_DAT_0437a6e0;
joined_r0x01bb7210:
  PTR_DAT_0437a6d8 = pbVar8;
  PTR_DAT_0437a6e0 = (undefined *)puVar9;
  if ((lVar19 != 0) && (*(int *)(lVar19 + 0xc) != 0)) {
    piVar1 = (int *)(lVar19 + 0xc);
    iVar12 = *(int *)(lVar19 + 0xc);
    do {
      plVar21 = *(long **)(lVar19 + 0x10);
      if (((*pbVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar8), iVar13 != 0)) {
        uVar14 = FUN_00ad3750();
        *puVar9 = uVar14;
        __cxa_guard_release(pbVar8);
      }
      while( true ) {
        if (plVar21 == (long *)0x0) goto LAB_01bb71d4;
        if (plVar21 == puVar9) break;
        plVar21 = (long *)*plVar21;
      }
      iVar13 = *piVar1;
      if (iVar13 == iVar12) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar19 = *(long *)(lVar19 + 0x18);
          if (lVar19 != 0) {
            lVar15 = *(long *)(lVar19 + 0x298);
            if ((*(long *)(lVar15 + 0xe8) != 0) &&
               (*(int *)(lVar15 + 0xf0) == *(int *)(*(long *)(lVar15 + 0xe8) + 0x2c))) {
              FUN_002669c8(lVar15 + 0xe8);
              FUN_002667b4();
            }
            lVar15 = *(long *)(lVar19 + 8);
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar15 + 0x18) = 0;
              (**(code **)(*(long *)(lVar19 + -0x50) + 0x20))((long *)(lVar19 + -0x50));
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar13;
    } while (iVar13 != 0);
  }
LAB_01bb71d4:
  *(undefined1 *)(param_1 + 0x5b8) = 1;
  return;
}


