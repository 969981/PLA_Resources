/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02673b8c; name: FUN_02673b8c
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_02673b8c(long param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 *puVar22;
  long *plVar23;
  long *plVar24;
  undefined8 in_d3;
  float fVar25;
  float fVar26;
  float fVar27;
  long *local_98;
  long *local_90;
  undefined8 uStack_88;
  long *local_80;
  long local_78;
  
  local_90 = (long *)0x0;
  uStack_88 = 0;
  FUN_00ac3fa4(&local_90,param_1 + 0x248);
  FUN_0099c748(&local_80,&local_90);
  plVar19 = local_90;
  if (local_90 != (long *)0x0) {
    plVar24 = local_90 + 1;
    do {
      iVar11 = (int)*plVar24 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar3) {
        *(int *)plVar24 = iVar11;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 == 0) {
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_78 = *plVar19;
      FUN_02a44274(lVar15 + 0xd8,&local_78);
    }
  }
  if (local_80 == (long *)0x0) goto LAB_02674068;
  uVar13 = (**(code **)(*local_80 + 0x1a8))();
  if ((uVar13 & 1) == 0) {
    local_90 = (long *)0x0;
    uStack_88 = 0;
    FUN_00cf9b38(&local_90,param_1 + 0x5e8);
    if (local_90 == (long *)0x0) {
      local_98 = (long *)0x0;
LAB_02673c68:
      fVar25 = (float)((ulong)in_d3 >> 0x20);
      if (local_98 == (long *)0x0) goto LAB_02673c88;
LAB_02673c70:
      local_90 = (long *)0x0;
      uStack_88 = 0;
      FUN_01affa74(&local_90,local_98 + 0xc1);
      plVar19 = local_90;
      puVar10 = PTR_DAT_0437b0a0;
      puVar9 = PTR_DAT_0437b098;
      puVar8 = PTR_DAT_043795e0;
      puVar7 = PTR_DAT_043794d8;
      puVar6 = PTR_DAT_043794d0;
      fVar25 = (float)((ulong)in_d3 >> 0x20);
      if (local_90 == (long *)0x0) goto LAB_02673c88;
      if (*(int *)((long)local_90 + 0xc) != 0) {
        piVar1 = (int *)((long)local_90 + 0xc);
        iVar11 = *(int *)((long)local_90 + 0xc);
        do {
          plVar24 = (long *)plVar19[2];
          if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar12 != 0)) {
              if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
                uVar14 = FUN_0087f8f0();
                *(undefined8 *)puVar7 = uVar14;
                __cxa_guard_release(puVar6);
              }
              *(undefined **)puVar8 = puVar7;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)puVar10 = puVar8;
            __cxa_guard_release(puVar9);
            fVar25 = (float)((ulong)in_d3 >> 0x20);
          }
          else {
            fVar25 = (float)((ulong)in_d3 >> 0x20);
          }
          while( true ) {
            if (plVar24 == (long *)0x0) goto LAB_02674338;
            fVar25 = (float)((ulong)in_d3 >> 0x20);
            if (plVar24 == (long *)puVar10) break;
            plVar24 = (long *)*plVar24;
          }
          iVar12 = *piVar1;
          if (iVar12 == iVar11) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar15 = plVar19[3];
              plVar19 = (long *)0x0;
              plVar24 = local_90;
              if (lVar15 != 0) {
                plVar19 = (long *)(lVar15 + -0x50);
              }
              goto joined_r0x026741fc;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar12;
        } while (iVar12 != 0);
      }
LAB_02674338:
      plVar19 = (long *)0x0;
      plVar24 = local_90;
joined_r0x026741fc:
      local_90 = plVar24;
      if (plVar24 != (long *)0x0) {
        plVar23 = plVar24 + 1;
        do {
          iVar11 = (int)*plVar23 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar3) {
            *(int *)plVar23 = iVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 0) {
          plVar24[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_78 = *plVar24;
          FUN_02a44274(lVar15 + 0xd8,&local_78);
        }
      }
      if (plVar19 == (long *)0x0) goto LAB_02673c88;
      lVar16 = plVar19[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      lVar15 = plVar19[0x4a];
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar19 + 0x20))(plVar19);
      }
      if ((int)lVar15 < 1) goto LAB_02673c88;
      bVar3 = true;
      if (local_98 != (long *)0x0) goto LAB_02673c94;
LAB_02673cb0:
      if (bVar3) goto LAB_02673cb4;
    }
    else {
      FUN_00cfac20(&local_98);
      plVar19 = local_90;
      if (local_90 == (long *)0x0) goto LAB_02673c68;
      plVar24 = local_90 + 1;
      do {
        iVar11 = (int)*plVar24 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar3) {
          *(int *)plVar24 = iVar11;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 != 0) goto LAB_02673c68;
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_78 = *plVar19;
      FUN_02a44274(lVar15 + 0xd8,&local_78);
      fVar25 = (float)((ulong)in_d3 >> 0x20);
      if (local_98 != (long *)0x0) goto LAB_02673c70;
LAB_02673c88:
      bVar3 = false;
      if (local_98 == (long *)0x0) goto LAB_02673cb0;
LAB_02673c94:
      lVar15 = local_98[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 != 0) goto LAB_02673cb0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
      if (bVar3) goto LAB_02673cb4;
    }
    if ((6 < param_2) || ((1 << (ulong)(param_2 & 0x1f) & 0x74U) == 0)) {
LAB_02673d20:
      fVar26 = *(float *)(local_80 + 0x138);
      FUN_009c69bc(&local_90);
      (**(code **)(*local_90 + 0x40))();
      if (local_90 != (long *)0x0) {
        lVar15 = local_90[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_90 + 0x20))();
        }
      }
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar15 = *(long *)PTR_DAT_04379668;
      fVar27 = 0.0;
      *(long *)PTR_DAT_04379670 = lVar15;
      puVar17 = *(undefined1 **)(lVar15 + 0x60);
      if (puVar17 != (undefined1 *)0x0) {
        uVar13 = (long)puVar17 - ((ulong)puVar17 >> 1 & 0x5555555555555555);
        uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
        uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar13 < 2) {
          puVar18 = (undefined1 *)((ulong)(puVar17 + -1) & 0x7c08eae870e235e0);
        }
        else if (&DAT_7c08eae870e235e0 < puVar17) {
          puVar18 = &DAT_7c08eae870e235e0;
        }
        else {
          uVar20 = 0;
          if (puVar17 != (undefined1 *)0x0) {
            uVar20 = 0x7c08eae870e235e0 / (ulong)puVar17;
          }
          puVar18 = &DAT_7c08eae870e235e0 + -(uVar20 * (long)puVar17);
        }
        plVar19 = *(long **)(*(long *)(lVar15 + 0x58) + (long)puVar18 * 8);
        if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
          if (uVar13 < 2) {
            do {
              if ((undefined1 *)plVar19[1] == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar19[2] == &DAT_7c08eae870e235e0) goto LAB_02673f28;
              }
              else if ((undefined1 *)((ulong)plVar19[1] & (ulong)(puVar17 + -1)) != puVar18) break;
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
          else {
            do {
              puVar22 = (undefined1 *)plVar19[1];
              if (puVar22 == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar19[2] == &DAT_7c08eae870e235e0) goto LAB_02673f28;
              }
              else {
                if (puVar17 <= puVar22) {
                  uVar13 = 0;
                  if (puVar17 != (undefined1 *)0x0) {
                    uVar13 = (ulong)puVar22 / (ulong)puVar17;
                  }
                  puVar22 = puVar22 + -(uVar13 * (long)puVar17);
                }
                if (puVar22 != puVar18) break;
              }
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
      }
      goto joined_r0x026740cc;
    }
    uVar13 = (**(code **)(*local_80 + 0x1b0))();
    if ((uVar13 & 1) == 0) {
      bVar3 = true;
      if (*(int *)((long)local_80 + 0x914) == 1) goto LAB_02674070;
      if (*(int *)((long)local_80 + 0x914) != 2) goto LAB_02673d20;
    }
  }
  goto LAB_02673cb4;
LAB_02673f28:
  plVar19 = (long *)plVar19[3];
  if (plVar19 != (long *)0x0) {
    plVar24 = plVar19 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar3) {
        *(int *)plVar24 = (int)*plVar24 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar13 = plVar19[0x21];
    fVar27 = 0.0;
    if (uVar13 != 0) {
      uVar20 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar21 = uVar13 - 1 & 0x362826f40c530894;
      }
      else if (uVar13 < 0x362826f40c530895) {
        uVar21 = 0;
        if (uVar13 != 0) {
          uVar21 = 0x362826f40c530894 / uVar13;
        }
        uVar21 = 0x362826f40c530894 - uVar21 * uVar13;
      }
      else {
        uVar21 = 0x362826f40c530894;
      }
      plVar23 = *(long **)(plVar19[0x20] + uVar21 * 8);
      if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
        if (uVar20 < 2) {
          do {
            if (plVar23[1] == 0x362826f40c530894) {
              if (plVar23[2] == 0x362826f40c530894) goto LAB_02674048;
            }
            else if ((plVar23[1] & uVar13 - 1) != uVar21) break;
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar23[1];
            if (uVar20 == 0x362826f40c530894) {
              if (plVar23[2] == 0x362826f40c530894) goto LAB_02674048;
            }
            else {
              if (uVar13 <= uVar20) {
                uVar5 = 0;
                if (uVar13 != 0) {
                  uVar5 = uVar20 / uVar13;
                }
                uVar20 = uVar20 - uVar5 * uVar13;
              }
              if (uVar20 != uVar21) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
      }
    }
    goto LAB_0267404c;
  }
  goto joined_r0x026740cc;
LAB_02674048:
  fVar27 = *(float *)(plVar23 + 6);
LAB_0267404c:
  do {
    iVar11 = (int)*plVar24 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar3) {
      *(int *)plVar24 = iVar11;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar11 == 0) {
    (**(code **)(*plVar19 + 0x10))();
  }
joined_r0x026740cc:
  if (fVar27 < fVar26 - fVar25) {
LAB_02673cb4:
    bVar3 = true;
  }
  else {
LAB_02674068:
    bVar3 = false;
  }
LAB_02674070:
  if (local_80 != (long *)0x0) {
    lVar15 = local_80[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  return !bVar3;
}


