/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01521388; name: FUN_01521388
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01521388(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long extraout_x8;
  code *pcVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  undefined8 *puVar25;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  long alStack_120 [13];
  long *local_b8;
  long *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined4 local_88;
  long *local_80;
  long *local_78;
  long *local_70 [2];
  
  uVar19 = *(undefined8 *)(param_1 + 8);
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
  FUN_01e654fc(&local_b0);
  if (local_b0 == (long *)0x0) {
    local_78 = (long *)0x0;
    pbVar5 = PTR_DAT_043794d0;
    pbVar6 = PTR_DAT_0437f888;
    puVar7 = (undefined8 *)PTR_DAT_0437f890;
  }
  else {
    FUN_01523304(&local_78);
    pbVar5 = PTR_DAT_043794d0;
    pbVar6 = PTR_DAT_0437f888;
    puVar7 = (undefined8 *)PTR_DAT_0437f890;
    if (local_b0 != (long *)0x0) {
      plVar20 = local_b0 + 1;
      do {
        iVar9 = (int)*plVar20 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar3) {
          *(int *)plVar20 = iVar9;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pbVar5 = PTR_DAT_043794d0;
      pbVar6 = PTR_DAT_0437f888;
      puVar7 = (undefined8 *)PTR_DAT_0437f890;
      if (iVar9 == 0) {
        local_b0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar23 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar23;
        local_70[0] = (long *)*local_b0;
        FUN_02a44274(lVar23 + 0xd8,local_70);
        pbVar5 = PTR_DAT_043794d0;
        pbVar6 = PTR_DAT_0437f888;
        puVar7 = (undefined8 *)PTR_DAT_0437f890;
      }
    }
  }
  if (local_78 == (long *)0x0) {
    PTR_DAT_043794d0 = pbVar5;
    PTR_DAT_0437f888 = pbVar6;
    PTR_DAT_0437f890 = (undefined *)puVar7;
    return;
  }
  local_80 = (long *)0x0;
  lVar23 = *(long *)(param_1 + 0x98);
  plVar20 = (long *)0x0;
  PTR_DAT_043794d0 = pbVar5;
  PTR_DAT_0437f888 = pbVar6;
  PTR_DAT_0437f890 = (undefined *)puVar7;
  if (lVar23 != 0) {
    if (*(int *)(lVar23 + 0xc) == 0) {
LAB_01521b74:
      plVar20 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar23 + 0xc);
      iVar9 = *(int *)(lVar23 + 0xc);
      do {
        puVar25 = *(undefined8 **)(lVar23 + 0x10);
        if (((*pbVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar6), iVar10 != 0)) {
          if (((*pbVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar5), iVar10 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar12;
            __cxa_guard_release(pbVar5);
          }
          *puVar7 = PTR_DAT_043794d8;
          __cxa_guard_release(pbVar6);
        }
        if (puVar25 == (undefined8 *)0x0) goto LAB_01521b74;
        while (puVar25 != puVar7) {
          puVar25 = (undefined8 *)*puVar25;
          plVar20 = (long *)0x0;
          if (puVar25 == (undefined8 *)0x0) goto LAB_01521404;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar9) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar20 = (long *)0x0;
            if (*(long *)(lVar23 + 0x18) != 0) {
              plVar20 = (long *)(*(long *)(lVar23 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar20 = (long *)0x0;
        iVar9 = iVar10;
      } while (iVar10 != 0);
    }
  }
LAB_01521404:
  local_b0 = (long *)plVar20[0x13];
  local_a8 = plVar20[0x14];
  FUN_015222cc(local_70,uVar19,&local_b0);
  plVar18 = local_80;
  local_80 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    lVar23 = plVar18[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) goto LAB_01521524;
  }
  do {
    local_80 = local_70[0];
    local_70[0] = (long *)0x0;
    if (plVar20 != (long *)0x0) {
      lVar23 = plVar20[0xb];
      piVar1 = (int *)(lVar23 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*plVar20 + 0x20))(plVar20);
      }
    }
    uVar15 = local_78[0x79];
    if (uVar15 != 0) {
      uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar13 = *(ulong *)(param_1 + 0x490);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar15 - 1 & uVar13;
      }
      else if (uVar13 < uVar15) {
        uVar17 = uVar13;
      }
      else {
        uVar17 = 0;
        if (uVar15 != 0) {
          uVar17 = uVar13 / uVar15;
        }
        uVar17 = uVar13 - uVar17 * uVar15;
      }
      plVar18 = *(long **)(local_78[0x78] + uVar17 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar16 < 2) {
          do {
            if (plVar18[1] == uVar13) {
              if (plVar18[2] == uVar13) goto LAB_01521644;
            }
            else if ((plVar18[1] & uVar15 - 1) != uVar17) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar18[1];
            if (uVar16 == uVar13) {
              if (plVar18[2] == uVar13) goto LAB_01521644;
            }
            else {
              if (uVar15 <= uVar16) {
                uVar4 = 0;
                if (uVar15 != 0) {
                  uVar4 = uVar16 / uVar15;
                }
                uVar16 = uVar16 - uVar4 * uVar15;
              }
              if (uVar16 != uVar17) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    plVar18 = (long *)FUN_01523590();
    lVar23 = extraout_x8;
LAB_01521524:
    *(undefined8 *)(lVar23 + 0x18) = 0;
    (**(code **)(*plVar18 + 0x20))();
  } while( true );
LAB_01521644:
  plVar24 = (long *)plVar18[4];
  plVar20 = (long *)plVar18[6];
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x18))(plVar20);
  }
  plVar22 = (long *)plVar18[8];
  plVar21 = (long *)plVar18[10];
  if (plVar21 == (long *)0x0) {
    plVar18 = (long *)plVar18[0x11];
  }
  else {
    (**(code **)(*plVar21 + 0x18))(plVar21);
    plVar18 = (long *)plVar18[0x11];
  }
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x18))(plVar18);
  }
  local_70[0] = plVar24;
  FUN_009f1b84(&local_b0,local_70);
  plVar24 = local_80;
  plVar11 = (long *)local_80[0xf];
  local_80[0xf] = 0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))();
  }
  plVar11 = local_b0;
  local_b0 = (long *)0x0;
  plVar24[0xf] = (long)plVar11;
  plVar24[0x10] = local_a8;
  plVar24[0x11] = local_a0;
  plVar11 = (long *)plVar24[0x13];
  plVar24[0x12] = local_98;
  plVar24[0x13] = 0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))();
  }
  lVar23 = local_90;
  local_90 = 0;
  plVar24[0x13] = lVar23;
  *(undefined4 *)(plVar24 + 0x14) = local_88;
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if (*(int *)(param_1 + 0x498) == 1) {
    local_70[0] = plVar22;
    FUN_009f1b84(&local_b0,local_70);
    plVar24 = local_80;
    plVar22 = (long *)local_80[0x15];
    local_80[0x15] = 0;
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x20))();
    }
    plVar22 = local_b0;
    local_b0 = (long *)0x0;
    plVar24[0x15] = (long)plVar22;
    plVar24[0x16] = local_a8;
    plVar24[0x17] = local_a0;
    plVar22 = (long *)plVar24[0x19];
    plVar24[0x18] = local_98;
    plVar24[0x19] = 0;
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x20))();
    }
    lVar23 = local_90;
    local_90 = 0;
    plVar24[0x19] = lVar23;
    *(undefined4 *)(plVar24 + 0x1a) = local_88;
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
  }
  plVar24 = local_80;
  pcVar14 = (code *)local_80[0x23];
  if (pcVar14 != (code *)0x0) {
    local_80[0x24] = 0;
    local_80[0x25] = 0;
    local_80[0x22] = 0;
    local_80[0x23] = 0;
    (*pcVar14)(local_80 + 0x26);
  }
  plVar24[0x22] = (long)&LAB_0152359c;
  plVar24[0x23] = (long)&LAB_015235a4;
  plVar24[0x24] = (long)&LAB_01523644;
  plVar24[0x25] = (long)&LAB_01523648;
  puVar8 = PTR_DAT_0437f890;
  lVar23 = *(long *)(param_1 + 0x98);
  if ((lVar23 != 0) && (*(int *)(lVar23 + 0xc) != 0)) {
    piVar1 = (int *)(lVar23 + 0xc);
    iVar9 = *(int *)(lVar23 + 0xc);
    do {
      plVar24 = *(long **)(lVar23 + 0x10);
      if (((*PTR_DAT_0437f888 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_0437f888), iVar10 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
          uVar19 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar19;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar8 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_0437f888);
      }
      while( true ) {
        if (plVar24 == (long *)0x0) goto joined_r0x01521c5c;
        if (plVar24 == (long *)puVar8) break;
        plVar24 = (long *)*plVar24;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar24 = (long *)0x0;
          if (*(long *)(lVar23 + 0x18) != 0) {
            plVar24 = (long *)(*(long *)(lVar23 + 0x18) + -0x50);
          }
          plVar22 = (long *)plVar24[0x5f];
          goto joined_r0x01521c10;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
joined_r0x01521c5c:
  plVar24 = (long *)0x0;
  plVar22 = _DAT_000002f8;
joined_r0x01521c10:
  if (plVar22 != (long *)0x0) {
    lVar23 = plVar22[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar19 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar19;
    }
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_140 = &LAB_01523e0c;
  local_138 = FUN_015247dc;
  local_130 = &LAB_01524bec;
  local_128 = &LAB_01524bf8;
  alStack_120[0] = param_1;
  FUN_01522350(&local_b8,plVar22,1,&local_80,&local_140,0);
  pcVar14 = local_138;
  if (local_b8 != (long *)0x0) {
    lVar23 = local_b8[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_b8 + 0x20))();
      pcVar14 = local_138;
      local_138 = (code *)0x0;
    }
  }
  if (pcVar14 != (code *)0x0) {
    local_130 = (undefined1 *)0x0;
    local_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar14)(alStack_120);
  }
  if (plVar22 != (long *)0x0) {
    lVar23 = plVar22[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
  }
  if (plVar24 != (long *)0x0) {
    lVar23 = plVar24[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))(plVar24);
    }
  }
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x20))(plVar21);
  }
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
  if (local_80 != (long *)0x0) {
    lVar23 = local_80[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  if (local_78 != (long *)0x0) {
    lVar23 = local_78[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  return;
}


