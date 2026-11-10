/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f188c4; name: FUN_01f188c4
 */


void FUN_01f188c4(long param_1)

{
  int *piVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined4 uVar7;
  char cVar8;
  bool bVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 *puVar28;
  long lVar29;
  long lVar30;
  long *local_68;
  
  FUN_01f19078();
  if (*(long *)(param_1 + 0x68) == 0) {
    local_68 = (long *)0x0;
LAB_01f18904:
    lVar26 = *(long *)(param_1 + 0x88);
    pbVar10 = PTR_DAT_043794d0;
    puVar4 = (undefined8 *)PTR_DAT_043794d8;
    pbVar11 = PTR_DAT_04379d80;
    puVar5 = (undefined8 *)PTR_DAT_04379d88;
  }
  else {
    FUN_019bf828(&local_68);
    if ((local_68 == (long *)0x0) || (FUN_01f0a590(), local_68 == (long *)0x0)) goto LAB_01f18904;
    lVar26 = local_68[0xb];
    piVar1 = (int *)(lVar26 + 0xc);
    do {
      iVar17 = *piVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = iVar17 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar17 + -1 != 0) goto LAB_01f18904;
    *(undefined8 *)(lVar26 + 0x18) = 0;
    (**(code **)(*local_68 + 0x20))();
    lVar26 = *(long *)(param_1 + 0x88);
    pbVar10 = PTR_DAT_043794d0;
    puVar4 = (undefined8 *)PTR_DAT_043794d8;
    pbVar11 = PTR_DAT_04379d80;
    puVar5 = (undefined8 *)PTR_DAT_04379d88;
  }
  PTR_DAT_043794d0 = pbVar10;
  PTR_DAT_043794d8 = (undefined *)puVar4;
  PTR_DAT_04379d80 = pbVar11;
  PTR_DAT_04379d88 = (undefined *)puVar5;
  if ((lVar26 != 0) && (*(int *)(lVar26 + 0xc) != 0)) {
    piVar1 = (int *)(lVar26 + 0xc);
    iVar17 = *(int *)(lVar26 + 0xc);
    do {
      puVar28 = *(undefined8 **)(lVar26 + 0x10);
      if (((*pbVar11 & 1) == 0) && (iVar18 = __cxa_guard_acquire(pbVar11), iVar18 != 0)) {
        if (((*pbVar10 & 1) == 0) && (iVar18 = __cxa_guard_acquire(pbVar10), iVar18 != 0)) {
          uVar20 = FUN_0087f8f0();
          *puVar4 = uVar20;
          __cxa_guard_release(pbVar10);
        }
        *puVar5 = puVar4;
        __cxa_guard_release(pbVar11);
      }
      while( true ) {
        if (puVar28 == (undefined8 *)0x0) goto LAB_01f1890c;
        if (puVar28 == puVar5) break;
        puVar28 = (undefined8 *)*puVar28;
      }
      iVar18 = *piVar1;
      if (iVar18 == iVar17) {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar17 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_01f18a24;
        lVar26 = *(long *)(lVar26 + 0x18);
        if (lVar26 != 0) {
          plVar24 = (long *)(lVar26 + -0x50);
          uVar16 = FUN_025acbdc(plVar24);
          *(uint *)(param_1 + 0x611c) = uVar16;
          lVar26 = *(long *)(lVar26 + 8);
          if (3 < uVar16) {
            uVar16 = 0xffffffff;
          }
          piVar1 = (int *)(lVar26 + 0xc);
          do {
            iVar17 = *piVar1;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar9) {
              *piVar1 = iVar17 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar17 + -1 == 0) {
            *(undefined8 *)(lVar26 + 0x18) = 0;
            (**(code **)(*plVar24 + 0x20))(plVar24);
          }
          goto LAB_01f18914;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01f18a24:
      iVar17 = iVar18;
    } while (iVar18 != 0);
  }
LAB_01f1890c:
  uVar16 = 0;
  *(undefined4 *)(param_1 + 0x611c) = 0;
LAB_01f18914:
  uVar6 = 0;
  if (*(char *)(param_1 + 0x6118) != '\0') {
    uVar6 = (long)(int)uVar16;
  }
  if (3 < uVar6) {
LAB_01f18cd4:
                    /* WARNING: Subroutine does not return */
    FUN_01f22c10();
  }
  lVar25 = uVar6 * 0x6008;
  pcVar2 = (char *)(param_1 + 0x285c1);
  lVar30 = 0x1e178;
  lVar26 = 0x1e190;
  lVar21 = 0x1e1b0;
  *(undefined4 *)(param_1 + 0x1e170) = *(undefined4 *)(param_1 + lVar25 + 0x6150);
  lVar29 = 0x1e1b8;
  lVar27 = 0x100;
  do {
    lVar3 = param_1 + lVar25;
    puVar4 = (undefined8 *)(param_1 + lVar30);
    *puVar4 = *(undefined8 *)(lVar3 + 0x6158);
    puVar4[1] = *(undefined8 *)(lVar3 + 0x6160);
    puVar4[2] = *(undefined8 *)(lVar3 + 0x6168);
    plVar24 = *(long **)(lVar3 + 0x6170);
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
    plVar19 = *(long **)(param_1 + lVar26);
    *(long **)(param_1 + lVar26) = plVar24;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x20))();
    }
    puVar4[4] = *(undefined8 *)(lVar3 + 0x6178);
    puVar4[5] = *(undefined8 *)(lVar3 + 0x6180);
    puVar4[6] = *(undefined8 *)(lVar3 + 0x6188);
    plVar24 = *(long **)(lVar3 + 0x6190);
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
    plVar19 = *(long **)(param_1 + lVar21);
    *(long **)(param_1 + lVar21) = plVar24;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x20))();
    }
    uVar20 = *(undefined8 *)(lVar3 + 0x6198);
    puVar4 = (undefined8 *)(param_1 + lVar29);
    lVar27 = lVar27 + -1;
    lVar25 = lVar25 + 0x60;
    uVar7 = *(undefined4 *)(lVar3 + 0x61b0);
    lVar29 = lVar29 + 0x60;
    uVar22 = *(undefined8 *)(lVar3 + 25000);
    lVar21 = lVar21 + 0x60;
    lVar30 = lVar30 + 0x60;
    lVar26 = lVar26 + 0x60;
    puVar4[1] = *(undefined8 *)(lVar3 + 0x61a0);
    puVar4[2] = uVar22;
    *(undefined4 *)(puVar4 + 3) = uVar7;
    *puVar4 = uVar20;
    puVar15 = PTR_DAT_0437eee0;
    puVar14 = PTR_DAT_0437eed8;
    puVar13 = PTR_DAT_043794d8;
    puVar12 = PTR_DAT_043794d0;
  } while (lVar27 != 0);
  lVar26 = *(long *)(param_1 + 0x98);
  if ((lVar26 != 0) && (*(int *)(lVar26 + 0xc) != 0)) {
    piVar1 = (int *)(lVar26 + 0xc);
    iVar17 = *(int *)(lVar26 + 0xc);
    do {
      plVar24 = *(long **)(lVar26 + 0x10);
      if (((*puVar14 & 1) == 0) && (iVar18 = __cxa_guard_acquire(puVar14), iVar18 != 0)) {
        if (((*puVar12 & 1) == 0) && (iVar18 = __cxa_guard_acquire(puVar12), iVar18 != 0)) {
          uVar20 = FUN_0087f8f0();
          *(undefined8 *)puVar13 = uVar20;
          __cxa_guard_release(puVar12);
        }
        *(undefined **)puVar15 = puVar13;
        __cxa_guard_release(puVar14);
      }
      while( true ) {
        if (plVar24 == (long *)0x0) goto LAB_01f18be4;
        if (plVar24 == (long *)puVar15) break;
        plVar24 = (long *)*plVar24;
      }
      iVar18 = *piVar1;
      if (iVar18 == iVar17) {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar17 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_01f18cdc;
        lVar26 = *(long *)(lVar26 + 0x18);
        if (lVar26 != 0) {
          plVar24 = (long *)(lVar26 + -0x50);
          iVar17 = FUN_025993f4(plVar24);
          uVar16 = iVar17 - 1;
          *(int *)(param_1 + 0x285c4) = iVar17;
          if (7 < uVar16) {
            uVar16 = 0xffffffff;
            *pcVar2 = '\0';
          }
          lVar26 = *(long *)(lVar26 + 8);
          piVar1 = (int *)(lVar26 + 0xc);
          do {
            iVar17 = *piVar1;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar9) {
              *piVar1 = iVar17 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar17 + -1 == 0) {
            *(undefined8 *)(lVar26 + 0x18) = 0;
            (**(code **)(*plVar24 + 0x20))(plVar24);
          }
          cVar8 = *pcVar2;
          goto joined_r0x01f18d6c;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01f18cdc:
      iVar17 = iVar18;
    } while (iVar18 != 0);
  }
LAB_01f18be4:
  uVar16 = 0;
  *(undefined4 *)(param_1 + 0x285c4) = 1;
  cVar8 = *pcVar2;
joined_r0x01f18d6c:
  if (cVar8 == '\0') {
    *(undefined4 *)(param_1 + 0x58638) = *(undefined4 *)(param_1 + 0x285f8);
    lVar26 = 0;
    do {
      puVar4 = (undefined8 *)(param_1 + 0x28600 + lVar26);
      puVar5 = (undefined8 *)(param_1 + 0x58640 + lVar26);
      *puVar5 = *puVar4;
      puVar5[1] = puVar4[1];
      puVar5[2] = puVar4[2];
      plVar24 = *(long **)(param_1 + 0x28618 + lVar26);
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x18))(plVar24);
      }
      plVar19 = *(long **)(param_1 + 0x58658 + lVar26);
      *(long **)(param_1 + 0x58658 + lVar26) = plVar24;
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x20))();
      }
      puVar5[4] = puVar4[4];
      puVar5[5] = puVar4[5];
      puVar5[6] = puVar4[6];
      plVar24 = *(long **)(param_1 + 0x28638 + lVar26);
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x18))(plVar24);
      }
      plVar19 = *(long **)(param_1 + 0x58678 + lVar26);
      *(long **)(param_1 + 0x58678 + lVar26) = plVar24;
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x20))();
      }
      puVar4 = (undefined8 *)(param_1 + 0x28640 + lVar26);
      uVar20 = *puVar4;
      uVar22 = puVar4[1];
      uVar23 = puVar4[2];
      puVar5 = (undefined8 *)(param_1 + 0x58680 + lVar26);
      lVar26 = lVar26 + 0x60;
      *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar4 + 3);
      *puVar5 = uVar20;
      puVar5[1] = uVar22;
      puVar5[2] = uVar23;
    } while (lVar26 != 0x6000);
    *(undefined4 *)(param_1 + 0x285c4) = 0;
  }
  else {
    if (7 < uVar16) goto LAB_01f18cd4;
    lVar21 = param_1 + (long)(int)uVar16 * 0x6008;
    *(undefined4 *)(param_1 + 0x58638) = *(undefined4 *)(lVar21 + 0x285f8);
    lVar26 = 0;
    do {
      puVar4 = (undefined8 *)(lVar21 + 0x28620 + lVar26);
      puVar5 = (undefined8 *)(param_1 + 0x58640 + lVar26);
      *puVar5 = puVar4[-4];
      puVar5[1] = puVar4[-3];
      puVar5[2] = puVar4[-2];
      plVar24 = *(long **)(lVar21 + 0x28618 + lVar26);
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x18))(plVar24);
      }
      plVar19 = *(long **)(param_1 + 0x58658 + lVar26);
      *(long **)(param_1 + 0x58658 + lVar26) = plVar24;
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x20))();
      }
      puVar5[4] = *puVar4;
      puVar5[5] = puVar4[1];
      puVar5[6] = puVar4[2];
      plVar24 = *(long **)(lVar21 + 0x28638 + lVar26);
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x18))(plVar24);
      }
      plVar19 = *(long **)(param_1 + 0x58678 + lVar26);
      *(long **)(param_1 + 0x58678 + lVar26) = plVar24;
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x20))();
      }
      puVar4 = (undefined8 *)(lVar21 + 0x28640 + lVar26);
      uVar20 = *puVar4;
      uVar22 = puVar4[1];
      uVar23 = puVar4[2];
      puVar5 = (undefined8 *)(param_1 + 0x58680 + lVar26);
      lVar26 = lVar26 + 0x60;
      *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar4 + 3);
      *puVar5 = uVar20;
      puVar5[1] = uVar22;
      puVar5[2] = uVar23;
    } while (lVar26 != 0x6000);
  }
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x1e170);
  if (*(char *)(param_1 + 0x5e651) != '\0') {
    *(char *)(param_1 + 0x6118) = '\0';
    *pcVar2 = '\0';
    FUN_01f19e74(param_1);
  }
  *(undefined1 *)(param_1 + 0xf8) = 1;
  return;
}


