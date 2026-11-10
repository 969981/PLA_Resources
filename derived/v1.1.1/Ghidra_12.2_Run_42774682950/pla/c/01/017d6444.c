/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017d6444; name: FUN_017d6444
 */


byte FUN_017d6444(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  byte bVar14;
  long lVar15;
  float fVar16;
  float extraout_var;
  float extraout_var_00;
  undefined8 in_d3;
  undefined8 uVar17;
  undefined8 local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined1 *local_c8;
  char *local_c0;
  undefined8 local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0 [2];
  long *local_88;
  
  if (*(long *)(param_1 + 0xd0) == 0) {
    bVar14 = 0;
  }
  else {
    FUN_00cfac20(local_a0);
    if (local_a0[0] == (long *)0x0) {
      bVar14 = 0;
    }
    else {
      (**(code **)(*local_a0[0] + 0x140))();
      puVar8 = PTR_LAB_043796b0;
      puVar7 = PTR_DAT_04379670;
      puVar6 = PTR_DAT_04379668;
      puVar5 = PTR_DAT_04379660;
      lVar15 = *(long *)(param_1 + 0xf0);
      if (lVar15 == param_1 + 0xe8) {
LAB_017d67cc:
        bVar14 = 0;
      }
      else {
        bVar14 = 0;
        do {
          if (*(long *)(lVar15 + 0x18) == 0) {
            local_a8 = (long *)0x0;
          }
          else {
            FUN_017dca7c(&local_a8);
            if (local_a8 != (long *)0x0) {
              lVar12 = local_a8[0x35];
              piVar1 = (int *)(lVar12 + 0xc);
              iVar10 = *(int *)(lVar12 + 0xc);
              uVar17 = in_d3;
              do {
                iVar4 = iVar10;
                while( true ) {
                  plVar13 = *(long **)(lVar12 + 0x10);
                  if (((*PTR_DAT_043794b0 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_043794b0), iVar10 != 0)) {
                    if (((*PTR_DAT_043794c0 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar10 != 0)) {
                      if (((*PTR_DAT_043794d0 & 1) == 0) &&
                         (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
                        uVar11 = FUN_0087f8f0();
                        *(undefined8 *)PTR_DAT_043794d8 = uVar11;
                        __cxa_guard_release(PTR_DAT_043794d0);
                      }
                      *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
                      __cxa_guard_release(PTR_DAT_043794c0);
                    }
                    *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
                    __cxa_guard_release(PTR_DAT_043794b0);
                  }
                  for (; plVar13 != (long *)PTR_DAT_043794b8; plVar13 = (long *)*plVar13) {
                  }
                  iVar10 = *piVar1;
                  if (iVar10 != iVar4) break;
                  cVar2 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar9) {
                    *piVar1 = iVar4 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  iVar4 = iVar10;
                  if (cVar2 == '\0') {
                    lVar12 = *(long *)(lVar12 + 0x18);
                    plVar13 = (long *)0x0;
                    if (lVar12 != 0) {
                      plVar13 = (long *)(lVar12 + -0x50);
                    }
                    (**(code **)(*plVar13 + 0x40))();
                    in_d3 = uVar17;
                    if (lVar12 != 0) {
                      lVar12 = plVar13[0xb];
                      piVar1 = (int *)(lVar12 + 0xc);
                      do {
                        iVar10 = *piVar1;
                        cVar2 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar9) {
                          *piVar1 = iVar10 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (iVar10 + -1 == 0) {
                        *(undefined8 *)(lVar12 + 0x18) = 0;
                        (**(code **)(*plVar13 + 0x20))();
                      }
                    }
                    local_c0 = "EffOverHead01";
                    local_c8 = &DAT_dd91a0edd6764c0b;
                    local_b8 = 0xd;
                    local_b0 = (long *)0x0;
                    FUN_01b39890(local_a8,&local_c8);
                    if (local_b0 != (long *)0x0) {
                      (**(code **)(*local_b0 + 0x20))();
                    }
                    local_c0 = "npc_talk_table_config";
                    local_d8 = 0x1a;
                    local_d0 = (long *)0x0;
                    local_c8 = (undefined1 *)0x2bad96d73d0678db;
                    local_b8 = 0x15;
                    local_b0 = (long *)0x0;
                    local_e8 = 0xb86770d9bab22d2f;
                    pcStack_e0 = "player_middle_waist_height";
                    if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0))
                    {
                      FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
                      __cxa_guard_release(puVar5);
                    }
                    uVar11 = *(undefined8 *)puVar6;
                    *(undefined8 *)puVar7 = uVar11;
                    FUN_00d7d9e4(&local_88,uVar11,&local_c8);
                    fVar16 = 0.0;
                    if ((local_88 != (long *)0x0) &&
                       (fVar16 = (float)FUN_00d7905c(local_88,&local_e8), local_88 != (long *)0x0))
                    {
                      plVar13 = local_88 + 10;
                      do {
                        iVar10 = (int)*plVar13 + -1;
                        cVar2 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                        if (bVar9) {
                          *(int *)plVar13 = iVar10;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (iVar10 == 0) {
                        (**(code **)(*local_88 + 0x10))();
                      }
                    }
                    if (local_d0 != (long *)0x0) {
                      (**(code **)(*local_d0 + 0x20))();
                    }
                    if (local_b0 != (long *)0x0) {
                      (**(code **)(*local_b0 + 0x20))();
                    }
                    if (extraout_var_00 - (float)((ulong)uVar17 >> 0x20) < fVar16) {
                      bVar9 = extraout_var_00 - extraout_var < fVar16;
                      if (!bVar9) {
                        bVar14 = bVar14 | bVar9;
                        goto LAB_017d6798;
                      }
                      bVar9 = false;
                      bVar14 = 1;
                      bVar3 = false;
                      if (local_a8 != (long *)0x0) goto LAB_017d67a8;
LAB_017d67c4:
                      if (!bVar9) goto LAB_017d6534;
                      goto LAB_017d67cc;
                    }
LAB_017d6798:
                    bVar9 = true;
                    bVar3 = true;
                    if (local_a8 == (long *)0x0) goto LAB_017d67c4;
LAB_017d67a8:
                    bVar9 = bVar3;
                    lVar12 = local_a8[0xb];
                    piVar1 = (int *)(lVar12 + 0xc);
                    do {
                      iVar10 = *piVar1;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar3) {
                        *piVar1 = iVar10 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (iVar10 + -1 != 0) goto LAB_017d67c4;
                    *(undefined8 *)(lVar12 + 0x18) = 0;
                    (**(code **)(*local_a8 + 0x20))();
                    if (bVar9) goto LAB_017d67cc;
                    goto LAB_017d6534;
                  }
                }
                ClearExclusiveLocal();
              } while( true );
            }
          }
LAB_017d6534:
          lVar15 = *(long *)(lVar15 + 8);
        } while (lVar15 != param_1 + 0xe8);
      }
      if (local_a0[0] != (long *)0x0) {
        lVar15 = local_a0[0][0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar9) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_a0[0] + 0x20))();
        }
      }
    }
  }
  return bVar14;
}


