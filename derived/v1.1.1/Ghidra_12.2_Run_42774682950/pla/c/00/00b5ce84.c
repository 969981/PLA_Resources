/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b5ce84; name: FUN_00b5ce84
 */


void FUN_00b5ce84(long param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  byte *pbVar19;
  ulong extraout_x9;
  byte *extraout_x10;
  long *plVar20;
  ulong uVar21;
  uint *extraout_x11;
  uint *puVar22;
  ulong uVar23;
  ulong uVar24;
  byte *pbVar25;
  undefined8 uVar26;
  byte *pbVar27;
  undefined8 *puVar28;
  byte *pbVar29;
  long *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  byte *local_70;
  undefined8 local_68;
  undefined8 *local_58;
  
  puVar8 = PTR_DAT_04379498;
  uVar26 = *(undefined8 *)(param_2 + 8);
  if (((*PTR_DAT_04379498 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  puVar10 = PTR_DAT_043794a8;
  puVar9 = PTR_DAT_043794a0;
  uVar13 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar13;
  FUN_02a44e0c(&local_80,uVar13,uVar26);
  puVar28 = *(undefined8 **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (local_80 == (undefined8 *)0x0) {
    if (puVar28 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar28 + 1);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 == 1) {
        puVar28[2] = 0;
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)puVar9;
        *(long *)puVar10 = lVar14;
        local_70 = (byte *)*puVar28;
        FUN_02a44274(lVar14 + 0xd8,&local_70);
      }
    }
    uVar26 = 0;
  }
  else {
    puVar17 = local_80;
    if (puVar28 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar28 + 1);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        puVar28[2] = 0;
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)puVar9;
        *(long *)puVar10 = lVar14;
        local_70 = (byte *)*puVar28;
        FUN_02a44274(lVar14 + 0xd8,&local_70);
      }
      puVar17 = local_80;
    }
    local_80 = (undefined8 *)0x0;
    *(undefined8 **)(param_1 + 0xa0) = puVar17;
  }
  puVar28 = local_80;
  *(undefined8 *)(param_1 + 0xa8) = uVar26;
  if (local_80 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80 + 1);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      local_80[2] = 0;
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar9;
      *(long *)puVar10 = lVar14;
      local_70 = (byte *)*puVar28;
      FUN_02a44274(lVar14 + 0xd8,&local_70);
    }
  }
  FUN_00b6291c(param_1 + 0xb0,param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0x20);
  if (*(char *)(param_1 + 200) == '\0') {
    if (*(char *)(param_2 + 0x28) == '\0') {
      lVar14 = *(long *)(param_1 + 0xa0);
      pbVar29 = PTR_DAT_043795d8;
      pbVar25 = PTR_DAT_0437ad18;
      pbVar19 = PTR_DAT_0437ad20;
    }
    else {
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      FUN_00b62b8c((undefined8 *)(param_1 + 0xd0),param_2 + 0x30);
      *(undefined1 *)(param_1 + 200) = 1;
      lVar14 = *(long *)(param_1 + 0xa0);
      pbVar29 = PTR_DAT_043795d8;
      pbVar25 = PTR_DAT_0437ad18;
      pbVar19 = PTR_DAT_0437ad20;
    }
  }
  else if (*(char *)(param_2 + 0x28) == '\0') {
    puVar28 = *(undefined8 **)(param_1 + 0xd0);
    if (puVar28 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar28 + 1);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        puVar28[2] = 0;
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)puVar9;
        *(long *)puVar10 = lVar14;
        local_70 = (byte *)*puVar28;
        FUN_02a44274(lVar14 + 0xd8,&local_70);
      }
    }
    *(undefined1 *)(param_1 + 200) = 0;
    lVar14 = *(long *)(param_1 + 0xa0);
    pbVar29 = PTR_DAT_043795d8;
    pbVar25 = PTR_DAT_0437ad18;
    pbVar19 = PTR_DAT_0437ad20;
  }
  else {
    FUN_00b62b8c(param_1 + 0xd0,param_2 + 0x30);
    lVar14 = *(long *)(param_1 + 0xa0);
    pbVar29 = PTR_DAT_043795d8;
    pbVar25 = PTR_DAT_0437ad18;
    pbVar19 = PTR_DAT_0437ad20;
  }
  PTR_DAT_043795d8 = pbVar29;
  PTR_DAT_0437ad18 = pbVar25;
  PTR_DAT_0437ad20 = pbVar19;
  if ((lVar14 != 0) && (uVar2 = *(uint *)(lVar14 + 0xc), uVar2 != 0)) {
    puVar22 = (uint *)(lVar14 + 0xc);
    do {
      pbVar27 = *(byte **)(lVar14 + 0x10);
      if ((*pbVar25 & 1) == 0) {
        iVar12 = __cxa_guard_acquire(pbVar25);
        puVar11 = PTR_DAT_043795e0;
        pbVar19 = PTR_DAT_0437ad20;
        if (iVar12 == 0) goto LAB_00b5d23c;
        if (((*pbVar29 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar12 != 0))
        {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
            uVar26 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar26;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar11 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043795d8);
        }
        pbVar19 = PTR_DAT_0437ad20;
        *(undefined **)PTR_DAT_0437ad20 = puVar11;
        __cxa_guard_release(pbVar25);
        uVar18 = (ulong)uVar2;
        pbVar29 = PTR_DAT_043795d8;
      }
      else {
LAB_00b5d23c:
        uVar18 = (ulong)uVar2;
      }
joined_r0x00b5de14:
      if (pbVar27 == (byte *)0x0) {
        return;
      }
      if (pbVar27 != pbVar19) goto LAB_00b5dc98;
      uVar2 = *puVar22;
      if (uVar2 == (uint)uVar18) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar22,0x10);
        if (bVar4) {
          *puVar22 = (uint)uVar18 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x18);
          if (lVar14 == 0) {
            return;
          }
          pbVar25 = (byte *)(lVar14 + -0x50);
          FUN_00b5e544(&local_70,pbVar25,&DAT_03a77a88);
          FUN_00b62dfc(param_1 + 0x200,&local_70);
          pbVar19 = local_70;
          if (local_70 != (byte *)0x0) {
            pbVar27 = local_70 + 8;
            do {
              iVar12 = *(int *)pbVar27;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pbVar27,0x10);
              if (bVar4) {
                *(int *)pbVar27 = iVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar12 + -1 == 0) {
              local_70[0x10] = 0;
              local_70[0x11] = 0;
              local_70[0x12] = 0;
              local_70[0x13] = 0;
              local_70[0x14] = 0;
              local_70[0x15] = 0;
              local_70[0x16] = 0;
              local_70[0x17] = 0;
              if (((*puVar8 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar15 = *(long *)puVar9;
              *(long *)puVar10 = lVar15;
              local_80 = *(undefined8 **)pbVar19;
              FUN_02a44274(lVar15 + 0xd8,&local_80);
            }
          }
          FUN_00b5ea24(&local_70,pbVar25,&DAT_03a77a90);
          FUN_00b630fc(param_1 + 0x210,&local_70);
          pbVar19 = local_70;
          if (local_70 != (byte *)0x0) {
            pbVar27 = local_70 + 8;
            do {
              iVar12 = *(int *)pbVar27;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pbVar27,0x10);
              if (bVar4) {
                *(int *)pbVar27 = iVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar12 + -1 == 0) {
              local_70[0x10] = 0;
              local_70[0x11] = 0;
              local_70[0x12] = 0;
              local_70[0x13] = 0;
              local_70[0x14] = 0;
              local_70[0x15] = 0;
              local_70[0x16] = 0;
              local_70[0x17] = 0;
              if (((*puVar8 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar15 = *(long *)puVar9;
              *(long *)puVar10 = lVar15;
              local_80 = *(undefined8 **)pbVar19;
              FUN_02a44274(lVar15 + 0xd8,&local_80);
            }
          }
          FUN_00b5ef04(&local_70,pbVar25,&DAT_03a77a98);
          FUN_00b633fc(param_1 + 0x220,&local_70);
          pbVar27 = local_70;
          if (local_70 != (byte *)0x0) {
            pbVar19 = local_70 + 8;
            do {
              iVar12 = *(int *)pbVar19;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pbVar19,0x10);
              if (bVar4) {
                *(int *)pbVar19 = iVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar12 + -1 == 0) {
              local_70[0x10] = 0;
              local_70[0x11] = 0;
              local_70[0x12] = 0;
              local_70[0x13] = 0;
              local_70[0x14] = 0;
              local_70[0x15] = 0;
              local_70[0x16] = 0;
              local_70[0x17] = 0;
              if (((*puVar8 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar15 = *(long *)puVar9;
              *(long *)puVar10 = lVar15;
              local_80 = *(undefined8 **)pbVar27;
              FUN_02a44274(lVar15 + 0xd8,&local_80);
            }
          }
          uVar18 = *(ulong *)(lVar14 + 0x1a8);
          if (uVar18 != 0) {
            uVar16 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
            uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
            uVar6 = 0;
            if (uVar18 != 0) {
              uVar6 = 0xc548ae28649ef3b8 / uVar18;
            }
            uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar16 < 2) {
              uVar23 = uVar18 - 1 & 0xc548ae28649ef3b8;
            }
            else {
              uVar23 = 0xc548ae28649ef3b8;
              if (uVar18 < 0xc548ae28649ef3b9) {
                uVar23 = 0xc548ae28649ef3b8 - uVar6 * uVar18;
              }
            }
            lVar15 = *(long *)(lVar14 + 0x1a0);
            plVar20 = *(long **)(lVar15 + uVar23 * 8);
            if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
              uVar21 = uVar18 - 1;
              if (uVar16 < 2) {
                do {
                  if (plVar20[1] == 0xc548ae28649ef3b8) {
                    if (plVar20[2] == -0x3ab751d79b610c48) goto LAB_00b5d464;
                  }
                  else if ((plVar20[1] & uVar21) != uVar23) break;
                  plVar20 = (long *)*plVar20;
                } while (plVar20 != (long *)0x0);
              }
              else {
                do {
                  uVar24 = plVar20[1];
                  if (uVar24 == 0xc548ae28649ef3b8) {
                    if (plVar20[2] == -0x3ab751d79b610c48) goto LAB_00b5d464;
                  }
                  else {
                    if (uVar18 <= uVar24) {
                      uVar7 = 0;
                      if (uVar18 != 0) {
                        uVar7 = uVar24 / uVar18;
                      }
                      uVar24 = uVar24 - uVar7 * uVar18;
                    }
                    if (uVar24 != uVar23) break;
                  }
                  plVar20 = (long *)*plVar20;
                } while (plVar20 != (long *)0x0);
              }
            }
          }
          goto LAB_00b5d608;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (uVar2 != 0);
  }
  return;
LAB_00b5d464:
  if (uVar16 < 2) {
    uVar23 = uVar21 & 0xc548ae28649ef3b8;
    plVar20 = *(long **)(lVar15 + uVar23 * 8);
  }
  else {
    uVar23 = 0xc548ae28649ef3b8;
    if (uVar18 < 0xc548ae28649ef3b9) {
      uVar23 = 0xc548ae28649ef3b8 - uVar6 * uVar18;
    }
    plVar20 = *(long **)(lVar15 + uVar23 * 8);
  }
  if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
    if (uVar16 < 2) {
      do {
        if (plVar20[1] == 0xc548ae28649ef3b8) {
          if (plVar20[2] == -0x3ab751d79b610c48) goto LAB_00b5d4d0;
        }
        else if ((plVar20[1] & uVar21) != uVar23) break;
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
    }
    else {
      do {
        uVar16 = plVar20[1];
        if (uVar16 == 0xc548ae28649ef3b8) {
          if (plVar20[2] == -0x3ab751d79b610c48) goto LAB_00b5d4d0;
        }
        else {
          if (uVar18 <= uVar16) {
            uVar6 = 0;
            if (uVar18 != 0) {
              uVar6 = uVar16 / uVar18;
            }
            uVar16 = uVar16 - uVar6 * uVar18;
          }
          if (uVar16 != uVar23) break;
        }
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
    }
  }
  goto LAB_00b5dc94;
LAB_00b5d4d0:
  FUN_00b68014(&local_88,plVar20 + 3);
  plVar20 = local_88;
  if (local_88 != (long *)0x0) {
    puVar28 = (undefined8 *)(**(code **)local_88[10])(local_88 + 10);
    if ((*PTR_DAT_0437ad28 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(PTR_DAT_0437ad28);
      puVar11 = PTR_DAT_0437ad50;
      if (iVar12 != 0) {
        if (((*PTR_DAT_0437ad48 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_0437ad48), iVar12 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar12 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
              uVar26 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar26;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar11 = PTR_DAT_043795e0;
          __cxa_guard_release(PTR_DAT_0437ad48);
        }
        *(undefined **)PTR_DAT_0437ad30 = puVar11;
        __cxa_guard_release(PTR_DAT_0437ad28);
      }
    }
    if (puVar28 != (undefined8 *)0x0) {
LAB_00b5d514:
      if (puVar28 != (undefined8 *)PTR_DAT_0437ad30) goto LAB_00b5dd7c;
      local_70 = (byte *)0x0;
      local_68 = 0;
      FUN_008802f0(&local_70,plVar20 + 0xb);
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_00880560(&local_80,&local_70);
      pbVar29 = local_70;
      if (local_70 != (byte *)0x0) {
        pbVar19 = local_70 + 8;
        do {
          iVar12 = *(int *)pbVar19;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pbVar19,0x10);
          if (bVar4) {
            *(int *)pbVar19 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          local_70[0x10] = 0;
          local_70[0x11] = 0;
          local_70[0x12] = 0;
          local_70[0x13] = 0;
          local_70[0x14] = 0;
          local_70[0x15] = 0;
          local_70[0x16] = 0;
          local_70[0x17] = 0;
          if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)puVar9;
          *(long *)puVar10 = lVar15;
          local_58 = *(undefined8 **)pbVar29;
          FUN_02a44274(lVar15 + 0xd8,&local_58);
        }
      }
      local_70 = (byte *)0x0;
      local_68 = 0;
      FUN_00b68a9c(&local_70,&local_80);
      puVar28 = local_80;
      if (local_80 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_80 + 1);
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          local_80[2] = 0;
          if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)puVar9;
          *(long *)puVar10 = lVar15;
          local_58 = (undefined8 *)*puVar28;
          FUN_02a44274(lVar15 + 0xd8,&local_58);
        }
      }
      bVar4 = true;
      goto joined_r0x00b5d5e4;
    }
    bVar4 = false;
joined_r0x00b5d5e4:
    if (local_88 != (long *)0x0) {
      lVar15 = local_88[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
      }
    }
    if (bVar4) goto LAB_00b5d60c;
  }
LAB_00b5d608:
  local_70 = (byte *)0x0;
  local_68 = 0;
LAB_00b5d60c:
  do {
    uVar26 = local_68;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(&local_68,0x10);
    if (bVar4) {
      local_68 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  *(undefined8 *)puVar10 = *(undefined8 *)puVar9;
  FUN_02a44e0c(&local_58);
  pbVar29 = local_70;
  local_70 = (byte *)0x0;
  if (pbVar29 != (byte *)0x0) {
    pbVar19 = pbVar29 + 8;
    do {
      iVar12 = *(int *)pbVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar19,0x10);
      if (bVar4) {
        *(int *)pbVar19 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      pbVar29[0x10] = 0;
      pbVar29[0x11] = 0;
      pbVar29[0x12] = 0;
      pbVar29[0x13] = 0;
      pbVar29[0x14] = 0;
      pbVar29[0x15] = 0;
      pbVar29[0x16] = 0;
      pbVar29[0x17] = 0;
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)puVar9;
      *(long *)puVar10 = lVar15;
      local_80 = *(undefined8 **)pbVar29;
      FUN_02a44274(lVar15 + 0xd8,&local_80);
    }
  }
  pbVar19 = *(byte **)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x230) = 0;
  if (local_58 == (undefined8 *)0x0) {
    uVar26 = 0;
    if (pbVar19 != (byte *)0x0) {
      pbVar27 = pbVar19 + 8;
      do {
        iVar12 = *(int *)pbVar27;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbVar27,0x10);
        if (bVar4) {
          *(int *)pbVar27 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 == 1) {
        pbVar19[0x10] = 0;
        pbVar19[0x11] = 0;
        pbVar19[0x12] = 0;
        pbVar19[0x13] = 0;
        pbVar19[0x14] = 0;
        pbVar19[0x15] = 0;
        pbVar19[0x16] = 0;
        pbVar19[0x17] = 0;
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)puVar9;
        *(long *)puVar10 = lVar15;
        local_80 = *(undefined8 **)pbVar19;
        FUN_02a44274(lVar15 + 0xd8,&local_80);
      }
      uVar26 = 0;
    }
  }
  else {
    puVar28 = local_58;
    if (pbVar19 != (byte *)0x0) {
      pbVar29 = pbVar19 + 8;
      do {
        iVar12 = *(int *)pbVar29;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbVar29,0x10);
        if (bVar4) {
          *(int *)pbVar29 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        pbVar19[0x10] = 0;
        pbVar19[0x11] = 0;
        pbVar19[0x12] = 0;
        pbVar19[0x13] = 0;
        pbVar19[0x14] = 0;
        pbVar19[0x15] = 0;
        pbVar19[0x16] = 0;
        pbVar19[0x17] = 0;
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)puVar9;
        *(long *)puVar10 = lVar15;
        local_80 = *(undefined8 **)pbVar19;
        FUN_02a44274(lVar15 + 0xd8,&local_80);
      }
      puVar28 = local_58;
      pbVar29 = pbVar19;
    }
    local_58 = (undefined8 *)0x0;
    *(undefined8 **)(param_1 + 0x230) = puVar28;
  }
  puVar28 = local_58;
  *(undefined8 *)(param_1 + 0x238) = uVar26;
  if (local_58 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_58 + 1);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      local_58[2] = 0;
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)puVar9;
      *(long *)puVar10 = lVar15;
      local_80 = (undefined8 *)*puVar28;
      FUN_02a44274(lVar15 + 0xd8,&local_80);
    }
  }
  pbVar27 = local_70;
  if (local_70 != (byte *)0x0) {
    pbVar19 = local_70 + 8;
    do {
      iVar12 = *(int *)pbVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar19,0x10);
      if (bVar4) {
        *(int *)pbVar19 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      local_70[0x10] = 0;
      local_70[0x11] = 0;
      local_70[0x12] = 0;
      local_70[0x13] = 0;
      local_70[0x14] = 0;
      local_70[0x15] = 0;
      local_70[0x16] = 0;
      local_70[0x17] = 0;
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)puVar9;
      *(long *)puVar10 = lVar15;
      local_80 = *(undefined8 **)pbVar27;
      FUN_02a44274(lVar15 + 0xd8,&local_80);
    }
  }
  uVar18 = *(ulong *)(lVar14 + 0x1a8);
  if (uVar18 != 0) {
    uVar16 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar6 = 0;
    if (uVar18 != 0) {
      uVar6 = 0x7cab6ea22cacc4a7 / uVar18;
    }
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar23 = uVar18 - 1 & 0x7cab6ea22cacc4a7;
    }
    else {
      uVar23 = 0x7cab6ea22cacc4a7;
      if (uVar18 < 0x7cab6ea22cacc4a8) {
        uVar23 = 0x7cab6ea22cacc4a7 - uVar6 * uVar18;
      }
    }
    lVar15 = *(long *)(lVar14 + 0x1a0);
    plVar20 = *(long **)(lVar15 + uVar23 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      uVar21 = uVar18 - 1;
      if (uVar16 < 2) {
        do {
          if (plVar20[1] == 0x7cab6ea22cacc4a7) {
            if (plVar20[2] == 0x7cab6ea22cacc4a7) goto LAB_00b5d844;
          }
          else if ((plVar20[1] & uVar21) != uVar23) goto LAB_00b5d9e8;
          plVar20 = (long *)*plVar20;
          if (plVar20 == (long *)0x0) goto LAB_00b5d9e8;
        } while( true );
      }
      do {
        uVar24 = plVar20[1];
        if (uVar24 == 0x7cab6ea22cacc4a7) {
          if (plVar20[2] == 0x7cab6ea22cacc4a7) goto LAB_00b5d844;
        }
        else {
          if (uVar18 <= uVar24) {
            uVar7 = 0;
            if (uVar18 != 0) {
              uVar7 = uVar24 / uVar18;
            }
            uVar24 = uVar24 - uVar7 * uVar18;
          }
          if (uVar24 != uVar23) break;
        }
        plVar20 = (long *)*plVar20;
        if (plVar20 == (long *)0x0) break;
      } while( true );
    }
  }
  goto LAB_00b5d9e8;
LAB_00b5dd7c:
  puVar28 = (undefined8 *)*puVar28;
  bVar4 = false;
  if (puVar28 == (undefined8 *)0x0) goto joined_r0x00b5d5e4;
  goto LAB_00b5d514;
LAB_00b5d844:
  if (uVar16 < 2) {
    uVar23 = uVar21 & 0x7cab6ea22cacc4a7;
    plVar20 = *(long **)(lVar15 + uVar23 * 8);
  }
  else {
    uVar23 = 0x7cab6ea22cacc4a7;
    if (uVar18 < 0x7cab6ea22cacc4a8) {
      uVar23 = 0x7cab6ea22cacc4a7 - uVar6 * uVar18;
    }
    plVar20 = *(long **)(lVar15 + uVar23 * 8);
  }
  if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
    if (uVar16 < 2) {
      do {
        if (plVar20[1] == 0x7cab6ea22cacc4a7) {
          if (plVar20[2] == 0x7cab6ea22cacc4a7) goto LAB_00b5d8b0;
        }
        else if ((plVar20[1] & uVar21) != uVar23) break;
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
    }
    else {
      do {
        uVar16 = plVar20[1];
        if (uVar16 == 0x7cab6ea22cacc4a7) {
          if (plVar20[2] == 0x7cab6ea22cacc4a7) goto LAB_00b5d8b0;
        }
        else {
          if (uVar18 <= uVar16) {
            uVar6 = 0;
            if (uVar18 != 0) {
              uVar6 = uVar16 / uVar18;
            }
            uVar16 = uVar16 - uVar6 * uVar18;
          }
          if (uVar16 != uVar23) break;
        }
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
    }
  }
LAB_00b5dc94:
  FUN_00b68190();
  uVar18 = extraout_x9;
  pbVar19 = extraout_x10;
  puVar22 = extraout_x11;
LAB_00b5dc98:
  pbVar27 = *(byte **)pbVar27;
  goto joined_r0x00b5de14;
LAB_00b5d8b0:
  FUN_00b68014(&local_88,plVar20 + 3);
  plVar20 = local_88;
  if (local_88 == (long *)0x0) goto LAB_00b5d9e8;
  puVar28 = (undefined8 *)(**(code **)local_88[10])(local_88 + 10);
  if (((*PTR_DAT_0437ad38 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_0437ad38), iVar12 != 0)) {
    if (((*PTR_DAT_0437ad48 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_0437ad48), iVar12 != 0)) {
      if (((*PTR_DAT_043795d8 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar12 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
          uVar26 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar26;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043795d8);
      }
      *(undefined **)PTR_DAT_0437ad50 = PTR_DAT_043795e0;
      __cxa_guard_release(PTR_DAT_0437ad48);
    }
    *(undefined **)PTR_DAT_0437ad40 = PTR_DAT_0437ad50;
    __cxa_guard_release(PTR_DAT_0437ad38);
  }
  if (puVar28 != (undefined8 *)0x0) goto LAB_00b5d8f4;
  bVar4 = false;
  goto joined_r0x00b5d9c4;
LAB_00b5d8f4:
  if (puVar28 == (undefined8 *)PTR_DAT_0437ad40) {
    local_70 = (byte *)0x0;
    local_68 = 0;
    FUN_008802f0(&local_70,plVar20 + 0xb);
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_00880560(&local_80,&local_70);
    pbVar29 = local_70;
    if (local_70 != (byte *)0x0) {
      pbVar19 = local_70 + 8;
      do {
        iVar12 = *(int *)pbVar19;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbVar19,0x10);
        if (bVar4) {
          *(int *)pbVar19 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        local_70[0x10] = 0;
        local_70[0x11] = 0;
        local_70[0x12] = 0;
        local_70[0x13] = 0;
        local_70[0x14] = 0;
        local_70[0x15] = 0;
        local_70[0x16] = 0;
        local_70[0x17] = 0;
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)puVar9;
        *(long *)puVar10 = lVar15;
        local_58 = *(undefined8 **)pbVar29;
        FUN_02a44274(lVar15 + 0xd8,&local_58);
      }
    }
    local_70 = (byte *)0x0;
    local_68 = 0;
    FUN_00b68d9c(&local_70,&local_80);
    puVar28 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_80 + 1);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        local_80[2] = 0;
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)puVar9;
        *(long *)puVar10 = lVar15;
        local_58 = (undefined8 *)*puVar28;
        FUN_02a44274(lVar15 + 0xd8,&local_58);
      }
    }
    bVar4 = true;
joined_r0x00b5d9c4:
    if (local_88 != (long *)0x0) {
      lVar15 = local_88[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
      }
    }
    if (!bVar4) {
LAB_00b5d9e8:
      local_70 = (byte *)0x0;
      local_68 = 0;
    }
    do {
      uVar26 = local_68;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(&local_68,0x10);
      if (bVar4) {
        local_68 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    *(undefined8 *)puVar10 = *(undefined8 *)puVar9;
    FUN_02a44e0c(&local_58);
    pbVar29 = local_70;
    local_70 = (byte *)0x0;
    if (pbVar29 != (byte *)0x0) {
      pbVar19 = pbVar29 + 8;
      do {
        iVar12 = *(int *)pbVar19;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbVar19,0x10);
        if (bVar4) {
          *(int *)pbVar19 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        pbVar29[0x10] = 0;
        pbVar29[0x11] = 0;
        pbVar29[0x12] = 0;
        pbVar29[0x13] = 0;
        pbVar29[0x14] = 0;
        pbVar29[0x15] = 0;
        pbVar29[0x16] = 0;
        pbVar29[0x17] = 0;
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)puVar9;
        *(long *)puVar10 = lVar15;
        local_80 = *(undefined8 **)pbVar29;
        FUN_02a44274(lVar15 + 0xd8,&local_80);
      }
    }
    puVar28 = *(undefined8 **)(param_1 + 0x240);
    *(undefined8 *)(param_1 + 0x240) = 0;
    if (local_58 == (undefined8 *)0x0) {
      uVar26 = 0;
      if (puVar28 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar28 + 1);
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 == 1) {
          puVar28[2] = 0;
          if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)puVar9;
          *(long *)puVar10 = lVar15;
          local_80 = (undefined8 *)*puVar28;
          FUN_02a44274(lVar15 + 0xd8,&local_80);
        }
        uVar26 = 0;
      }
    }
    else {
      puVar17 = local_58;
      if (puVar28 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar28 + 1);
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          puVar28[2] = 0;
          if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)puVar9;
          *(long *)puVar10 = lVar15;
          local_80 = (undefined8 *)*puVar28;
          FUN_02a44274(lVar15 + 0xd8,&local_80);
        }
        puVar17 = local_58;
      }
      local_58 = (undefined8 *)0x0;
      *(undefined8 **)(param_1 + 0x240) = puVar17;
    }
    puVar28 = local_58;
    *(undefined8 *)(param_1 + 0x248) = uVar26;
    if (local_58 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_58 + 1);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        local_58[2] = 0;
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)puVar9;
        *(long *)puVar10 = lVar15;
        local_80 = (undefined8 *)*puVar28;
        FUN_02a44274(lVar15 + 0xd8,&local_80);
      }
    }
    pbVar29 = local_70;
    if (local_70 != (byte *)0x0) {
      pbVar19 = local_70 + 8;
      do {
        iVar12 = *(int *)pbVar19;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pbVar19,0x10);
        if (bVar4) {
          *(int *)pbVar19 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        local_70[0x10] = 0;
        local_70[0x11] = 0;
        local_70[0x12] = 0;
        local_70[0x13] = 0;
        local_70[0x14] = 0;
        local_70[0x15] = 0;
        local_70[0x16] = 0;
        local_70[0x17] = 0;
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)puVar9;
        *(long *)puVar10 = lVar15;
        local_80 = *(undefined8 **)pbVar29;
        FUN_02a44274(lVar15 + 0xd8,&local_80);
      }
    }
    lVar14 = *(long *)(lVar14 + 8);
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*(long *)pbVar25 + 0x20))(pbVar25);
      return;
    }
    return;
  }
  puVar28 = (undefined8 *)*puVar28;
  bVar4 = false;
  if (puVar28 == (undefined8 *)0x0) goto joined_r0x00b5d9c4;
  goto LAB_00b5d8f4;
}


