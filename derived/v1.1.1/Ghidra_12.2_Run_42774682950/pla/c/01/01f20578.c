/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f20578; name: FUN_01f20578
 */


void FUN_01f20578(long param_1,ulong param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined1 *puVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  int iVar25;
  char *local_60c0;
  long *local_60b8;
  long *local_60b0;
  undefined8 *local_60a8;
  undefined1 *local_60a0 [4];
  long *local_6080;
  undefined8 local_6078 [11];
  undefined4 local_6020 [6122];
  undefined8 uStack_78;
  
  if ((param_2 & 1) == 0) {
    if (*(long *)(param_1 + 0x68) == 0) {
      local_6080 = (long *)0x0;
    }
    else {
      FUN_019bf828(&local_6080);
      if (local_6080 != (long *)0x0) {
        FUN_01f0abf0(0,local_6080,0,*(undefined8 *)(param_1 + 0x100));
        FUN_01f0abf0(0,local_6080,1,*(undefined8 *)(param_1 + 0x108));
        if (local_6080 != (long *)0x0) {
          lVar20 = local_6080[0xb];
          piVar1 = (int *)(lVar20 + 0xc);
          do {
            iVar25 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar25 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar25 + -1 == 0) {
            *(undefined8 *)(lVar20 + 0x18) = 0;
            (**(code **)(*local_6080 + 0x20))();
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0x1009b8) = 0;
  }
  puVar8 = PTR_DAT_04379d88;
  puVar7 = PTR_DAT_04379d80;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar20 = *(long *)(param_1 + 0x88);
  local_60c0 = (char *)(param_1 + 0x285c1);
  if ((lVar20 == 0) || (*(int *)(lVar20 + 0xc) == 0)) {
LAB_01f205fc:
    local_60b0 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar20 + 0xc);
    iVar25 = *(int *)(lVar20 + 0xc);
    do {
      puVar24 = *(undefined8 **)(lVar20 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar13;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      if (puVar24 == (undefined8 *)0x0) goto LAB_01f205fc;
      while (puVar24 != (undefined8 *)puVar8) {
        puVar24 = (undefined8 *)*puVar24;
        local_60b0 = (long *)0x0;
        if (puVar24 == (undefined8 *)0x0) goto LAB_01f20600;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar25) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar25 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          local_60b0 = (long *)0x0;
          if (*(long *)(lVar20 + 0x18) != 0) {
            local_60b0 = (long *)(*(long *)(lVar20 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      local_60b0 = (long *)0x0;
      iVar25 = iVar10;
    } while (iVar10 != 0);
  }
LAB_01f20600:
  puVar8 = PTR_DAT_0437eee0;
  puVar7 = PTR_DAT_0437eed8;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar20 = *(long *)(param_1 + 0x98);
  if ((lVar20 == 0) || (*(int *)(lVar20 + 0xc) == 0)) {
LAB_01f2061c:
    local_60b8 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar20 + 0xc);
    iVar25 = *(int *)(lVar20 + 0xc);
    do {
      puVar24 = *(undefined8 **)(lVar20 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar13;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      if (puVar24 == (undefined8 *)0x0) goto LAB_01f2061c;
      while (puVar24 != (undefined8 *)puVar8) {
        puVar24 = (undefined8 *)*puVar24;
        local_60b8 = (long *)0x0;
        if (puVar24 == (undefined8 *)0x0) goto LAB_01f20620;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar25) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar25 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          local_60b8 = (long *)0x0;
          if (*(long *)(lVar20 + 0x18) != 0) {
            local_60b8 = (long *)(*(long *)(lVar20 + 0x18) + -0x50);
          }
          if ((local_60b0 != (long *)0x0) && (local_60b8 != (long *)0x0)) {
            if (*(char *)(param_1 + 0x6118) == '\0') {
              uVar9 = 0;
            }
            else {
              uVar9 = FUN_025acbdc(local_60b0);
            }
            *(undefined4 *)(param_1 + 0x611c) = uVar9;
            if (*local_60c0 == '\0') {
              local_60c0[3] = '\0';
              local_60c0[4] = '\0';
              local_60c0[5] = '\0';
              local_60c0[6] = '\0';
            }
            else {
              uVar9 = FUN_025993f4(local_60b8);
              *(undefined4 *)(local_60c0 + 3) = uVar9;
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      local_60b8 = (long *)0x0;
      iVar25 = iVar10;
    } while (iVar10 != 0);
  }
LAB_01f20620:
  puVar19 = (undefined1 *)(param_1 + 0xd6790);
  local_60a0[1] = (undefined1 *)(param_1 + 0x1008a8);
  local_60a0[0] = (undefined1 *)local_6078;
  puVar24 = &uStack_78;
  lVar20 = param_1 + 0xd67f0;
  lVar14 = param_1 + 0xd67e8;
  lVar22 = param_1 + 0xd67d0;
  lVar17 = param_1 + 0xd67c8;
  local_60a8 = puVar24;
  do {
    if (puVar19[0x6021] == '\0') {
      local_60a0[2] = puVar19 + 0x6020;
      *puVar19 = 0;
      *(undefined4 *)(puVar19 + 4) = 0xff;
      *(undefined8 *)(puVar19 + 8) = 0;
      *(undefined8 *)(puVar19 + 0x10) = 0;
      memset(&local_6080,0,0x6008);
      puVar12 = (undefined8 *)local_60a0[0];
      do {
        *puVar12 = &DAT_cbf29ce484222645;
        puVar12[1] = &DAT_03996322;
        puVar12[10] = 0;
        *(undefined4 *)(puVar12 + 0xb) = 0;
        *(undefined4 *)(puVar12 + 0x17) = 0;
        puVar12[0x12] = 0;
        puVar12[0x22] = 0;
        *(undefined4 *)(puVar12 + 0x23) = 0;
        *(undefined4 *)(puVar12 + 0x2f) = 0;
        puVar12[0x2a] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        puVar12[4] = &DAT_cbf29ce484222645;
        puVar12[5] = &DAT_03996322;
        puVar12[6] = 0;
        puVar12[7] = 0;
        puVar12[8] = 0;
        puVar12[9] = 0;
        puVar12[0xc] = &DAT_cbf29ce484222645;
        puVar12[0xd] = &DAT_03996322;
        puVar12[0xe] = 0;
        puVar12[0xf] = 0;
        puVar12[0x10] = &DAT_cbf29ce484222645;
        puVar12[0x11] = &DAT_03996322;
        puVar12[0x15] = 0;
        puVar12[0x16] = 0;
        puVar12[0x13] = 0;
        puVar12[0x14] = 0;
        puVar12[0x18] = &DAT_cbf29ce484222645;
        puVar12[0x19] = &DAT_03996322;
        puVar12[0x1a] = 0;
        puVar12[0x1b] = 0;
        puVar12[0x1c] = &DAT_cbf29ce484222645;
        puVar12[0x1d] = &DAT_03996322;
        puVar12[0x1e] = 0;
        puVar12[0x1f] = 0;
        puVar12[0x20] = 0;
        puVar12[0x21] = 0;
        puVar12[0x24] = &DAT_cbf29ce484222645;
        puVar12[0x25] = &DAT_03996322;
        puVar12[0x26] = 0;
        puVar12[0x27] = 0;
        puVar12[0x28] = &DAT_cbf29ce484222645;
        puVar12[0x29] = &DAT_03996322;
        puVar12[0x2d] = 0;
        puVar12[0x2e] = 0;
        puVar12[0x2b] = 0;
        puVar12[0x2c] = 0;
        puVar12 = puVar12 + 0x30;
      } while (puVar12 != puVar24);
      local_60a0[3] = puVar19;
      *(undefined4 *)(puVar19 + 0x18) = 0;
      lVar18 = 0;
      do {
        puVar24 = (undefined8 *)(lVar22 + lVar18);
        puVar24[-4] = *(undefined8 *)((long)local_6078 + lVar18);
        puVar24[-3] = *(undefined8 *)((long)local_6078 + lVar18 + 8);
        puVar24[-2] = *(undefined8 *)((long)local_6078 + lVar18 + 0x10);
        plVar21 = *(long **)((long)local_6078 + lVar18 + 0x18);
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x18))(plVar21);
        }
        plVar11 = *(long **)(lVar17 + lVar18);
        *(long **)(lVar17 + lVar18) = plVar21;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x20))();
        }
        *puVar24 = *(undefined8 *)((long)local_6078 + lVar18 + 0x20);
        puVar24[1] = *(undefined8 *)((long)local_6078 + lVar18 + 0x28);
        puVar24[2] = *(undefined8 *)((long)local_6078 + lVar18 + 0x30);
        plVar21 = *(long **)((long)local_6078 + lVar18 + 0x38);
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x18))(plVar21);
        }
        plVar11 = *(long **)(lVar14 + lVar18);
        *(long **)(lVar14 + lVar18) = plVar21;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x20))();
        }
        uVar13 = *(undefined8 *)((long)local_6078 + lVar18 + 0x40);
        uVar16 = *(undefined8 *)((long)local_6078 + lVar18 + 0x48);
        puVar24 = (undefined8 *)(lVar20 + lVar18);
        uVar15 = *(undefined8 *)((long)local_6078 + lVar18 + 0x50);
        lVar23 = lVar18 + 0x60;
        *(undefined4 *)(puVar24 + 3) = *(undefined4 *)((long)local_6020 + lVar18);
        *puVar24 = uVar13;
        puVar24[1] = uVar16;
        puVar24[2] = uVar15;
        lVar18 = lVar23;
      } while (lVar23 != 0x6000);
      lVar18 = 0x6000;
      do {
        if (*(long **)((long)local_60a0 + lVar18) != (long *)0x0) {
          (**(code **)(**(long **)((long)local_60a0 + lVar18) + 0x20))();
        }
        plVar21 = *(long **)((long)local_60a0 + lVar18 + -0x20);
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x20))();
        }
        lVar18 = lVar18 + -0x60;
      } while (lVar18 != 0);
      *local_60a0[2] = 0;
      puVar19 = local_60a0[3];
      puVar24 = local_60a8;
    }
    puVar19 = puVar19 + 0x6028;
    lVar20 = lVar20 + 0x6028;
    lVar14 = lVar14 + 0x6028;
    lVar17 = lVar17 + 0x6028;
    lVar22 = lVar22 + 0x6028;
  } while (puVar19 != local_60a0[1]);
  if (3 < *(uint *)(param_1 + 0x611c)) {
switchD_01f20c74_default:
                    /* WARNING: Subroutine does not return */
    FUN_01f22c10();
  }
  lVar17 = (ulong)*(uint *)(param_1 + 0x611c) * 0x6008;
  lVar18 = 0x1e178;
  lVar20 = 0x1e190;
  lVar14 = 0x1e1b0;
  lVar22 = 0x1e1b8;
  lVar23 = 0x100;
  *(undefined4 *)(param_1 + 0x1e170) = *(undefined4 *)(param_1 + lVar17 + 0x6150);
  do {
    lVar2 = param_1 + lVar17;
    puVar24 = (undefined8 *)(param_1 + lVar18);
    *puVar24 = *(undefined8 *)(lVar2 + 0x6158);
    puVar24[1] = *(undefined8 *)(lVar2 + 0x6160);
    puVar24[2] = *(undefined8 *)(lVar2 + 0x6168);
    plVar21 = *(long **)(lVar2 + 0x6170);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
    plVar11 = *(long **)(param_1 + lVar20);
    *(long **)(param_1 + lVar20) = plVar21;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
    }
    puVar24[4] = *(undefined8 *)(lVar2 + 0x6178);
    puVar24[5] = *(undefined8 *)(lVar2 + 0x6180);
    puVar24[6] = *(undefined8 *)(lVar2 + 0x6188);
    plVar21 = *(long **)(lVar2 + 0x6190);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
    plVar11 = *(long **)(param_1 + lVar14);
    *(long **)(param_1 + lVar14) = plVar21;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
    }
    uVar13 = *(undefined8 *)(lVar2 + 0x6198);
    puVar24 = (undefined8 *)(param_1 + lVar22);
    lVar23 = lVar23 + -1;
    lVar17 = lVar17 + 0x60;
    uVar9 = *(undefined4 *)(lVar2 + 0x61b0);
    lVar22 = lVar22 + 0x60;
    uVar16 = *(undefined8 *)(lVar2 + 25000);
    lVar14 = lVar14 + 0x60;
    lVar18 = lVar18 + 0x60;
    lVar20 = lVar20 + 0x60;
    puVar24[1] = *(undefined8 *)(lVar2 + 0x61a0);
    puVar24[2] = uVar16;
    *(undefined4 *)(puVar24 + 3) = uVar9;
    *puVar24 = uVar13;
  } while (lVar23 != 0);
  lVar20 = 0;
  switch(*(undefined4 *)(local_60c0 + 3)) {
  case 0:
    goto switchD_01f20c74_caseD_0;
  case 1:
    break;
  case 2:
    lVar20 = 1;
    break;
  case 3:
    lVar20 = 2;
    break;
  case 4:
    lVar20 = 3;
    break;
  case 5:
    lVar20 = 4;
    break;
  case 6:
    lVar20 = 5;
    break;
  case 7:
    lVar20 = 6;
    break;
  case 8:
    lVar20 = 7;
    break;
  default:
    goto switchD_01f20c74_default;
  }
  lVar14 = param_1 + lVar20 * 0x6008;
  local_60a0[3] = (undefined1 *)(param_1 + 0x58680);
  local_60a0[2] = (undefined1 *)(param_1 + 0x58640);
  *(undefined4 *)(param_1 + 0x58638) = *(undefined4 *)(lVar14 + 0x285f8);
  lVar20 = 0;
  do {
    puVar24 = (undefined8 *)(lVar14 + 0x28620 + lVar20);
    puVar12 = (undefined8 *)(local_60a0[2] + lVar20);
    *puVar12 = puVar24[-4];
    puVar12[1] = puVar24[-3];
    puVar12[2] = puVar24[-2];
    plVar21 = *(long **)(lVar14 + 0x28618 + lVar20);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
    plVar11 = *(long **)(param_1 + 0x58658 + lVar20);
    *(long **)(param_1 + 0x58658 + lVar20) = plVar21;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
    }
    puVar12[4] = *puVar24;
    puVar12[5] = puVar24[1];
    puVar12[6] = puVar24[2];
    plVar21 = *(long **)(lVar14 + 0x28638 + lVar20);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
    plVar11 = *(long **)(param_1 + 0x58678 + lVar20);
    *(long **)(param_1 + 0x58678 + lVar20) = plVar21;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
    }
    puVar24 = (undefined8 *)(lVar14 + 0x28640 + lVar20);
    puVar12 = (undefined8 *)(local_60a0[3] + lVar20);
    uVar13 = *puVar24;
    uVar16 = puVar24[1];
    uVar15 = puVar24[2];
    lVar20 = lVar20 + 0x60;
    *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(puVar24 + 3);
    puVar12[1] = uVar16;
    puVar12[2] = uVar15;
    *puVar12 = uVar13;
  } while (lVar20 != 0x6000);
switchD_01f20c74_caseD_0:
  FUN_01f19e74(param_1);
  FUN_01f1ba38(param_1);
  plVar21 = local_60b0;
  if (local_60b8 != (long *)0x0) {
    lVar20 = local_60b8[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar25 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar25 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_60b8 + 0x20))();
    }
  }
  if (plVar21 != (long *)0x0) {
    lVar20 = plVar21[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar25 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar25 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  return;
}


