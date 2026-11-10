/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f8b264; name: FUN_01f8b264
 */


void FUN_01f8b264(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  size_t __n;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  code *pcVar19;
  long lVar20;
  int *piVar21;
  long *plVar22;
  long lVar23;
  undefined8 *puVar24;
  long *plVar25;
  long *local_78 [2];
  long local_68;
  
  piVar21 = *(int **)(param_1 + 0x228);
  if (piVar21 != *(int **)(param_1 + 0x230)) {
    do {
      bVar11 = *(int *)(param_1 + 0x210) == 1;
      if (*piVar21 == 0) {
        if (bVar11) {
          if (*(long *)(param_1 + 0x218) == 0) {
            local_78[0] = (long *)0x0;
            FUN_01f822b0();
          }
          else {
            FUN_01f8c868(local_78);
            plVar15 = local_78[0];
            FUN_01f822b0(local_78[0]);
            if (plVar15 != (long *)0x0) {
              lVar23 = plVar15[0xb];
              piVar1 = (int *)(lVar23 + 0xc);
              do {
                bVar12 = *piVar1 + -1 == 0;
                cVar3 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = *piVar1 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              goto LAB_01f8b370;
            }
          }
        }
        else {
          if (*(long *)(param_1 + 0x218) == 0) {
            local_78[0] = (long *)0x0;
          }
          else {
            FUN_01f8c868(local_78);
          }
          *(int *)(local_78[0] + 0x60) = (int)local_78[0][0x60] + 1;
          *(undefined1 *)((long)local_78[0] + 0x32c) = 0;
          if (local_78[0] != (long *)0x0) {
            lVar23 = local_78[0][0xb];
            piVar1 = (int *)(lVar23 + 0xc);
            do {
              iVar14 = *piVar1;
              cVar3 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = iVar14 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar23 + 0x18) = 0;
              pcVar19 = *(code **)(*local_78[0] + 0x20);
              plVar15 = local_78[0];
LAB_01f8b43c:
              (*pcVar19)(plVar15);
            }
          }
        }
      }
      else if (bVar11) {
        if (*(long *)(param_1 + 0x218) == 0) {
          local_78[0] = (long *)0x0;
          FUN_01f828ec();
        }
        else {
          FUN_01f8c868(local_78);
          plVar15 = local_78[0];
          FUN_01f828ec(local_78[0]);
          if (plVar15 != (long *)0x0) {
            lVar23 = plVar15[0xb];
            piVar1 = (int *)(lVar23 + 0xc);
            do {
              bVar12 = *piVar1 + -1 == 0;
              cVar3 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = *piVar1 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            goto LAB_01f8b370;
          }
        }
      }
      else {
        if (*(long *)(param_1 + 0x218) == 0) {
          local_78[0] = (long *)0x0;
        }
        else {
          FUN_01f8c868(local_78);
        }
        plVar15 = local_78[0];
        *(undefined1 *)((long)local_78[0] + 0x32c) = 0;
        *(int *)(local_78[0] + 0x60) = (int)local_78[0][0x60] + -1;
        FUN_01f822c4(local_78[0]);
        if (plVar15 != (long *)0x0) {
          lVar23 = plVar15[0xb];
          piVar1 = (int *)(lVar23 + 0xc);
          do {
            bVar12 = *piVar1 + -1 == 0;
            cVar3 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = *piVar1 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_01f8b370:
          if (bVar12) {
            *(undefined8 *)(lVar23 + 0x18) = 0;
            pcVar19 = *(code **)(*plVar15 + 0x20);
            goto LAB_01f8b43c;
          }
        }
      }
      __n = *(long *)(param_1 + 0x230) - (long)(piVar21 + 1);
      if (__n == 0) goto LAB_01f8b388;
      memmove(piVar21,piVar21 + 1,__n);
      *(int **)(param_1 + 0x230) = piVar21 + ((long)__n >> 2);
    } while( true );
  }
  lVar23 = *(long *)(param_1 + 0x260);
  pbVar4 = PTR_DAT_043794d0;
  pbVar5 = PTR_DAT_043795d8;
  puVar6 = (undefined8 *)PTR_DAT_043795e0;
  pbVar7 = PTR_DAT_0437af70;
  puVar8 = (undefined8 *)PTR_DAT_0437af78;
joined_r0x01f8b394:
  PTR_DAT_043794d0 = pbVar4;
  PTR_DAT_043795d8 = pbVar5;
  PTR_DAT_043795e0 = (undefined *)puVar6;
  PTR_DAT_0437af70 = pbVar7;
  PTR_DAT_0437af78 = (undefined *)puVar8;
  if ((lVar23 != 0) && (*(int *)(lVar23 + 0xc) != 0)) {
    piVar21 = (int *)(lVar23 + 0xc);
    iVar14 = *(int *)(lVar23 + 0xc);
    do {
      puVar24 = *(undefined8 **)(lVar23 + 0x10);
      if (((*pbVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar7), iVar13 != 0)) {
        if (((*pbVar5 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar5), iVar13 != 0)) {
          if (((*pbVar4 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar4), iVar13 != 0)) {
            uVar17 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar17;
            __cxa_guard_release(pbVar4);
          }
          *puVar6 = PTR_DAT_043794d8;
          __cxa_guard_release(pbVar5);
        }
        *puVar8 = puVar6;
        __cxa_guard_release(pbVar7);
      }
      while( true ) {
        if (puVar24 == (undefined8 *)0x0) {
          return;
        }
        if (puVar24 == puVar8) break;
        puVar24 = (undefined8 *)*puVar24;
      }
      iVar13 = *piVar21;
      if (iVar13 == iVar14) {
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar11) {
          *piVar21 = iVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar23 = *(long *)(lVar23 + 0x18);
          if (lVar23 == 0) {
            return;
          }
          plVar22 = (long *)(lVar23 + -0x50);
          FUN_02be8e60(local_78,plVar22,0);
          plVar15 = local_78[0];
          puVar10 = PTR_DAT_0437a590;
          puVar9 = PTR_DAT_0437a580;
          if (local_78[0] == (long *)0x0) goto LAB_01f8b51c;
          if (*(int *)((long)local_78[0] + 0xc) == 0) goto LAB_01f8b7bc;
          piVar21 = (int *)((long)local_78[0] + 0xc);
          iVar14 = *(int *)((long)local_78[0] + 0xc);
          goto LAB_01f8b5f8;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar14 = iVar13;
    } while (iVar13 != 0);
  }
  return;
LAB_01f8b388:
  *(int **)(param_1 + 0x230) = piVar21;
  lVar23 = *(long *)(param_1 + 0x260);
  pbVar4 = PTR_DAT_043794d0;
  pbVar5 = PTR_DAT_043795d8;
  puVar6 = (undefined8 *)PTR_DAT_043795e0;
  pbVar7 = PTR_DAT_0437af70;
  puVar8 = (undefined8 *)PTR_DAT_0437af78;
  goto joined_r0x01f8b394;
LAB_01f8b5f8:
  do {
    plVar25 = (long *)plVar15[2];
    if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
      if (((*PTR_DAT_0437a598 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar13 != 0)) {
        if (((*pbVar4 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar4), iVar13 != 0)) {
          uVar17 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar17;
          __cxa_guard_release(pbVar4);
        }
        *(undefined **)PTR_DAT_0437a588 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_0437a598);
      }
      *(undefined **)puVar10 = PTR_DAT_0437a588;
      __cxa_guard_release(puVar9);
    }
    while( true ) {
      if (plVar25 == (long *)0x0) goto LAB_01f8b7bc;
      if (plVar25 == (long *)puVar10) break;
      plVar25 = (long *)*plVar25;
    }
    iVar13 = *piVar21;
    if (iVar13 == iVar14) {
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar11) {
        *piVar21 = iVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar20 = plVar15[3];
        plVar15 = (long *)0x0;
        plVar25 = local_78[0];
        if (lVar20 != 0) {
          plVar15 = (long *)(lVar20 + -0x50);
        }
        goto joined_r0x01f8b63c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar14 = iVar13;
  } while (iVar13 != 0);
LAB_01f8b7bc:
  plVar15 = (long *)0x0;
  plVar25 = local_78[0];
joined_r0x01f8b63c:
  local_78[0] = plVar25;
  if (plVar25 != (long *)0x0) {
    plVar2 = plVar25 + 1;
    do {
      iVar14 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *(int *)plVar2 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      plVar25[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_68 = *plVar25;
      FUN_02a44274(lVar20 + 0xd8,&local_68);
    }
  }
  if (plVar15 == (long *)0x0) goto LAB_01f8b51c;
  iVar14 = *(int *)(param_1 + 0x270);
  if (iVar14 == 1) {
    if (((char)plVar15[0xf] == '\0') && (uVar16 = FUN_01f8bbc4(param_1), (uVar16 & 1) != 0)) {
      uVar18 = 2;
LAB_01f8b724:
      *(undefined4 *)(param_1 + 0x270) = uVar18;
    }
  }
  else if (iVar14 == 2) {
    if (((char)plVar15[0xf] != '\0') && (uVar16 = FUN_01f8bd2c(param_1), (uVar16 & 1) != 0)) {
      uVar18 = 1;
      goto LAB_01f8b724;
    }
  }
  else if (iVar14 == 0) {
    FUN_01f8b818(param_1);
  }
  lVar20 = plVar15[0xb];
  piVar21 = (int *)(lVar20 + 0xc);
  do {
    iVar14 = *piVar21;
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(piVar21,0x10);
    if (bVar11) {
      *piVar21 = iVar14 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar14 + -1 == 0) {
    *(undefined8 *)(lVar20 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
LAB_01f8b51c:
  lVar23 = *(long *)(lVar23 + 8);
  piVar21 = (int *)(lVar23 + 0xc);
  do {
    iVar14 = *piVar21;
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(piVar21,0x10);
    if (bVar11) {
      *piVar21 = iVar14 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar14 + -1 == 0) {
    *(undefined8 *)(lVar23 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
    return;
  }
  return;
}


