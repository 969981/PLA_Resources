/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011954e0; name: FUN_011954e0
 */


void FUN_011954e0(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined2 uVar4;
  char cVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  undefined2 uVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uVar18;
  ushort uVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  uint uVar24;
  undefined5 local_138;
  undefined3 uStack_133;
  undefined5 uStack_130;
  undefined8 local_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 auStack_100 [16];
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  long *local_d8;
  long local_d0;
  code *local_c8;
  undefined8 uStack_c0;
  
  lVar20 = *(long *)(param_1 + 0x1a8);
  uVar2 = *(undefined4 *)(lVar20 + 0x16ac);
  uVar19 = *(ushort *)(lVar20 + 0x16b0);
  uVar4 = *(undefined2 *)(lVar20 + 0x16b2);
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar20 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar20;
  plVar21 = *(long **)(lVar20 + 0x280);
  if (plVar21 != (long *)0x0) {
    lVar20 = plVar21[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_01196034;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar14;
    }
    piVar17 = (int *)(lVar20 + 0xc);
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar8) {
        *piVar17 = *piVar17 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379678), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar20 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar20;
  plVar15 = *(long **)(lVar20 + 0xd0);
  if (plVar15 != (long *)0x0) {
    plVar22 = plVar15 + 10;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar8) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar22 = (long *)plVar15[0xb];
  if (plVar22 != (long *)0x0) {
    plVar1 = plVar22 + 10;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar1 = plVar15 + 10;
  do {
    iVar12 = (int)*plVar1 + -1;
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *(int *)plVar1 = iVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar15 + 0x10))();
  }
  lVar20 = (**(code **)(*plVar22 + 0x58))(plVar22,uVar4);
  uVar14 = FUN_011945c8(param_1);
  uVar16 = FUN_02c62900(lVar20,2);
  if ((uVar16 & 1) != 0) {
    local_c8 = (code *)&LAB_01196318;
    uStack_c0 = 0;
    local_f0 = &LAB_011997dc;
    local_e8 = FUN_011997f8;
    local_e0 = &LAB_011997fc;
    local_d8 = (long *)&LAB_01199810;
    local_d0 = param_1;
    FUN_0119541c(param_1,0xcf39f8ca2348b32d,&local_f0,1,0,1);
    pcVar7 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      local_d8 = (long *)0x0;
      local_f0 = (undefined1 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar7)(&local_d0);
    }
    goto LAB_0119575c;
  }
  iVar12 = *(int *)(*(long *)(param_1 + 0x1a8) + 0x16c4);
  uVar11 = FUN_010dac08(uVar16,iVar12);
  if (iVar12 == 0) {
    plVar15 = plVar21 + 0xd;
joined_r0x01195f44:
    if (uVar11 <= uVar19) goto LAB_01195f48;
LAB_01195648:
    uVar11 = *(uint *)((long)plVar15 + (ulong)uVar19 * 4);
    uVar24 = uVar11 >> 0x10;
  }
  else {
    if (iVar12 == 1) {
      plVar15 = (long *)((long)plVar21 + 0xaf4);
      if (uVar19 < uVar11) goto LAB_01195648;
    }
    else if (iVar12 == 2) {
      plVar15 = (long *)((long)plVar21 + 0xc84);
      goto joined_r0x01195f44;
    }
LAB_01195f48:
    uVar24 = 0;
    uVar11 = 0;
  }
  uVar11 = uVar11 & 0xffff;
  FUN_02c4fb44(auStack_100,uVar11);
  piVar17 = (int *)FUN_0118f90c(uVar14);
  if (*piVar17 == 0) {
    *(undefined4 *)(param_1 + 0x278) = 1;
    iVar12 = FUN_02c4fc60(auStack_100,0x11);
    if ((iVar12 == 1) && (iVar12 = FUN_02c4fc60(auStack_100,0x29), 0 < iVar12)) {
      local_110 = 0;
      local_108 = 0;
      local_128 = 0;
      local_138 = 0;
      uStack_133 = 0;
      uStack_130 = 0;
      local_120 = (long *)0x0;
      uStack_118 = 0;
      FUN_0109aad0(&local_138);
      uVar16 = FUN_02c647f0(DAT_04407c28,(long)&local_108 + 4,&local_108,lVar20,&local_138,uVar11);
      if ((uVar16 & 1) == 0) {
        uVar14 = 0xcf39f8ca2348b32d;
      }
      else {
        uVar16 = FUN_01196838(param_1,uVar4);
        if ((uVar16 & 1) != 0) {
          local_c8 = FUN_0119687c;
          uStack_c0 = 0;
          local_f0 = &LAB_01199824;
          local_e8 = FUN_01199844;
          local_e0 = &LAB_01199848;
          local_d8 = (long *)&LAB_0119985c;
          local_d0 = param_1;
          FUN_01196a58(param_1,uVar4,local_108._4_4_,local_108 & 0xffffffff,&local_f0);
          pcVar7 = local_e8;
          goto joined_r0x01195f24;
        }
        uVar14 = 0xcf5869ca236270bf;
      }
LAB_01195c18:
      local_c8 = (code *)&LAB_01196318;
      uVar18 = 1;
LAB_01195c24:
      uStack_c0 = 0;
      local_d8 = (long *)&LAB_01199810;
      local_e0 = &LAB_011997fc;
      local_e8 = FUN_011997f8;
      local_f0 = &LAB_011997dc;
      local_d0 = param_1;
      FUN_0119541c(param_1,uVar14,&local_f0,uVar18,0,1);
      pcVar7 = local_e8;
    }
    else {
      uVar16 = FUN_02c502b4(auStack_100);
      if ((uVar16 & 1) != 0) {
        iVar12 = FUN_02c500bc(auStack_100);
        if (iVar12 != 0x1b) {
LAB_01196034:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
LAB_01195b60:
        local_c8 = (code *)&LAB_01196c3c;
        uVar14 = 0xcf366aca23458c0c;
        uVar18 = 0;
        goto LAB_01195c24;
      }
      uVar16 = FUN_0108f43c(plVar22,uVar11,uVar4,0);
      if ((uVar16 & 1) == 0) {
        uVar16 = FUN_0119f7b4(*(undefined8 *)(param_1 + 0x1a8),uVar11);
        if ((uVar16 & 1) == 0) {
          uVar16 = FUN_0119f7c8(*(undefined8 *)(param_1 + 0x1a8),uVar11);
          if ((uVar16 & 1) == 0) {
            uVar16 = FUN_0119f7dc(*(undefined8 *)(param_1 + 0x1a8),uVar11);
            if (((uVar16 & 1) != 0) &&
               (uVar16 = FUN_011a3754(*(undefined8 *)(param_1 + 0x1a8),lVar20,uVar11),
               (uVar16 & 1) != 0)) {
              uVar16 = FUN_01196838(param_1,uVar4);
              if ((uVar16 & 1) == 0) {
                uVar14 = 0xcf5869ca236270bf;
                goto LAB_01195c18;
              }
              uVar14 = 9;
              goto LAB_01195750;
            }
            goto LAB_01195bcc;
          }
          FUN_01196348(param_1);
          *(undefined4 *)(param_1 + 0x284) = 0;
          goto LAB_01195754;
        }
        local_c8 = (code *)&LAB_01197510;
        uStack_c0 = 0;
        local_f0 = &LAB_01199824;
        local_e8 = FUN_01199844;
        local_e0 = &LAB_01199848;
        local_d8 = (long *)&LAB_0119985c;
        local_d0 = param_1;
        FUN_00d59260(*(undefined8 *)(param_1 + 0x1a8),uVar2,uVar4,0);
        FUN_01196698(param_1,&local_f0);
        pcVar7 = local_e8;
      }
      else {
        uVar13 = FUN_02c500bc(auStack_100);
        if ((uVar13 | 1) == 0xb) {
          uVar9 = FUN_02c5fbd4(lVar20);
          *(undefined2 *)(param_1 + 0x260) = uVar9;
          FUN_0108fb84(plVar22,uVar11,uVar4,0,0);
          uVar9 = FUN_02c5fbd4(lVar20);
          *(undefined2 *)(param_1 + 0x262) = uVar9;
          FUN_011aa4fc(*(undefined8 *)(param_1 + 0x1b0),uVar4);
          FUN_011ab11c(*(undefined8 *)(param_1 + 0x1b0),uVar4);
          FUN_02a4754c(&local_f0,&DAT_041f4aa0);
          FUN_028354b0(&local_f0);
          if (local_d8 != (long *)0x0) {
            (**(code **)(*local_d8 + 0x20))();
          }
          uVar14 = 3;
          goto LAB_01195750;
        }
        lVar23 = 0;
        switch(uVar13) {
        case 2:
          lVar23 = 4;
          break;
        case 3:
          break;
        case 4:
          lVar23 = 2;
          break;
        case 5:
          lVar23 = 3;
          break;
        case 6:
          lVar23 = 1;
          break;
        default:
          iVar12 = FUN_011a43c8(*(undefined8 *)(param_1 + 0x1a8),uVar11);
          if (iVar12 == -1) {
            iVar12 = FUN_02c5fb2c(lVar20);
            uVar11 = 100 - iVar12;
          }
          else {
            if (iVar12 == 0) goto LAB_01195bcc;
            uVar11 = FUN_02c68e44(*(undefined8 *)(lVar20 + 0x98));
            uVar13 = FUN_02c6849c(*(undefined8 *)(lVar20 + 0x98));
            uVar10 = FUN_02c6f924(*(undefined8 *)(lVar20 + 0x98));
            bVar8 = (uVar13 | 1) != 0x38b;
            uVar19 = 0;
            if ((int)uVar13 < 0x38a && bVar8) {
              uVar19 = uVar10;
            }
            if (uVar19 < 0x1c) {
              uVar16 = 0;
              if ((int)uVar13 < 0x38a && bVar8) {
                uVar16 = (ulong)uVar13;
              }
              lVar20 = *(&DAT_043f23a0)[uVar16 * 4];
              uVar16 = (&DAT_043f23a0)[uVar16 * 4][1] - lVar20 >> 3;
              if ((uVar16 <= uVar19) || (*(long *)(lVar20 + (ulong)uVar19 * 8) == 0))
              goto LAB_01195934;
            }
            else {
LAB_01195934:
              uVar19 = 0;
              lVar20 = *DAT_043f23a0;
              uVar16 = DAT_043f23a0[1] - lVar20 >> 3;
            }
            if (uVar16 <= uVar19) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            piVar17 = *(int **)(lVar20 + (ulong)uVar19 * 8);
            if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 0x23) ||
               (uVar16 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[0x11], uVar16 == 0)) {
              uVar16 = 0;
            }
            else {
              bVar3 = *(byte *)((long)piVar17 + uVar16);
              uVar13 = 0;
              if (bVar3 < 6) {
                uVar13 = (uint)bVar3;
              }
              uVar16 = (ulong)uVar13;
            }
            uVar13 = *(uint *)(*(long *)((&DAT_0428ab10)[uVar16 * 6] + 0x250) + 400);
            uVar6 = uVar13 - uVar11;
            if (uVar13 < uVar11 || uVar6 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = (uint)((float)uVar6 / (float)iVar12);
            }
          }
          if (uVar11 <= uVar24) {
            uVar24 = uVar11;
          }
          *(uint *)(param_1 + 0x278) = uVar24;
          if ((uVar24 & 0xffff) == 1) {
            FUN_01196c4c(param_1);
          }
          else {
            if ((uVar24 & 0xffff) == 0) goto LAB_01195bcc;
            FUN_011971d0(param_1);
          }
          goto LAB_01195754;
        case 8:
          lVar23 = 5;
          break;
        case 0x1b:
          local_c8 = FUN_01196054;
          uStack_c0 = 0;
          local_f0 = &LAB_011997dc;
          local_e8 = FUN_011997f8;
          local_e0 = &LAB_011997fc;
          local_d8 = (long *)&LAB_01199810;
          local_d0 = param_1;
          FUN_0119541c(param_1,0xcf366cca23458f72,&local_f0,1,0,1);
          FUN_0108fb84(plVar22,uVar11,uVar4,0,0);
          FUN_02a4754c(&local_138,&DAT_041f4aa0);
          FUN_028354b0(&local_138);
          pcVar7 = local_e8;
          if (local_120 != (long *)0x0) {
            (**(code **)(*local_120 + 0x20))();
            pcVar7 = local_e8;
          }
          goto joined_r0x01195f24;
        }
        local_c8 = FUN_01196054;
        uStack_c0 = 0;
        local_f0 = &LAB_011997dc;
        local_e8 = FUN_011997f8;
        local_e0 = &LAB_011997fc;
        local_d8 = (long *)&LAB_01199810;
        local_d0 = param_1;
        FUN_00d59260(*(undefined8 *)(param_1 + 0x1a8),uVar2,uVar4,0);
        FUN_0119541c(param_1,*(undefined8 *)(&UNK_03a793d8 + lVar23 * 0x10),&local_f0,1,0,1);
        FUN_0108fb84(plVar22,uVar11,uVar4,0,0);
        FUN_011ab11c(*(undefined8 *)(param_1 + 0x1b0),uVar4);
        pcVar7 = local_e8;
      }
    }
joined_r0x01195f24:
    local_e8 = pcVar7;
    if (pcVar7 != (code *)0x0) {
      local_d8 = (long *)0x0;
      local_e0 = (undefined1 *)0x0;
      local_f0 = (undefined1 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar7)(&local_d0);
    }
  }
  else {
    iVar12 = FUN_02c4fc60(auStack_100,0x12);
    if (iVar12 == 4) {
      uVar16 = FUN_01190b70(uVar14,uVar4);
    }
    else {
      uVar16 = FUN_02c502b4(auStack_100);
      if ((uVar16 & 1) != 0) goto LAB_01195b60;
      uVar16 = FUN_0108f43c(plVar22,uVar11,uVar4,0);
    }
    if ((uVar16 & 1) == 0) {
LAB_01195bcc:
      uVar14 = 0xcf39f8ca2348b32d;
      goto LAB_01195c18;
    }
    FUN_0118fb1c(uVar14,uVar11,1,(ulong)uVar19);
    FUN_0118fb50(uVar14,uVar4);
    FUN_0118fb34(uVar14,1);
    uVar14 = 6;
LAB_01195750:
    *(undefined8 *)(param_1 + 0x1d0) = uVar14;
  }
LAB_01195754:
  FUN_02c4fc5c(auStack_100);
LAB_0119575c:
  plVar15 = plVar22 + 10;
  do {
    iVar12 = (int)*plVar15 + -1;
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar8) {
      *(int *)plVar15 = iVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar22 + 0x10))(plVar22);
  }
  if (plVar21 != (long *)0x0) {
    lVar20 = plVar21[0xb];
    piVar17 = (int *)(lVar20 + 0xc);
    do {
      iVar12 = *piVar17;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar8) {
        *piVar17 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  return;
}


