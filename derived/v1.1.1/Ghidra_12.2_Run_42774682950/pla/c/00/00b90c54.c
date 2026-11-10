/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b90c54; name: FUN_00b90c54
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_00b90c54(long param_1,char param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  undefined1 *puVar16;
  int iVar17;
  long *plVar18;
  undefined8 in_d3;
  undefined8 local_b0 [3];
  undefined1 *local_98 [3];
  long *local_80;
  long local_78 [2];
  long *local_68;
  
  if (param_2 == '\x02') {
    return (undefined1 *)0xb5e5580a0b10d570;
  }
  if (param_2 == '\x01') {
    return (undefined1 *)0xaed26a0b1a71f2be;
  }
  FUN_00b5f5a4(local_98,*(undefined8 *)(param_1 + 0xa0));
  puVar16 = local_98[0];
  puVar10 = PTR_DAT_04379e90;
  puVar9 = PTR_DAT_04379e88;
  puVar8 = PTR_DAT_043795e0;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  if (local_98[0] == (undefined1 *)0x0) {
    plVar15 = (long *)0x0;
  }
  else {
    if (*(int *)(local_98[0] + 0xc) != 0) {
      piVar1 = (int *)(local_98[0] + 0xc);
      iVar17 = *(int *)(local_98[0] + 0xc);
      do {
        plVar15 = *(long **)(puVar16 + 0x10);
        if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar11 != 0)) {
            if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
              uVar13 = FUN_0087f8f0();
              *(undefined8 *)puVar7 = uVar13;
              __cxa_guard_release(puVar6);
            }
            *(undefined **)puVar8 = puVar7;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar10 = puVar8;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_00b90df8;
          if (plVar15 == (long *)puVar10) break;
          plVar15 = (long *)*plVar15;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar17) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar17 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plVar15 = (long *)0x0;
            if (*(long *)(puVar16 + 0x18) != 0) {
              plVar15 = (long *)(*(long *)(puVar16 + 0x18) + -0x50);
            }
            goto joined_r0x00b90dc4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar17 = iVar11;
      } while (iVar11 != 0);
    }
LAB_00b90df8:
    plVar15 = (long *)0x0;
joined_r0x00b90dc4:
    if (local_98[0] != (undefined1 *)0x0) {
      FUN_02a43934();
    }
    if (plVar15 != (long *)0x0) {
      FUN_01a82194(local_98,plVar15);
      if (local_98[0] == (undefined1 *)0x0) {
        local_68 = (long *)0x0;
LAB_00b90e24:
        if (local_68 == (long *)0x0) goto LAB_00b90e74;
LAB_00b90e2c:
        FUN_00b5f47c(local_78,*(undefined8 *)(param_1 + 0xa0));
        if (local_78[0] == 0) goto LAB_00b90e74;
        uVar12 = FUN_02a43a8c();
        lVar14 = local_78[0];
        puVar8 = PTR_DAT_043794d0;
        puVar7 = PTR_DAT_043794b8;
        puVar6 = PTR_DAT_043794b0;
        if ((uVar12 & 1) == 0) {
          if (local_78[0] == 0) goto LAB_00b90e74;
          if (*(int *)(local_78[0] + 0xc) != 0) {
            piVar1 = (int *)(local_78[0] + 0xc);
            iVar17 = *(int *)(local_78[0] + 0xc);
            do {
              plVar18 = *(long **)(lVar14 + 0x10);
              plVar5 = local_68;
              if (((*puVar6 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(puVar6), plVar5 = local_68, iVar11 != 0)) {
                if (((*PTR_DAT_043794c0 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar11 != 0)) {
                  if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
                    uVar13 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar13;
                    __cxa_guard_release(puVar8);
                  }
                  *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_043794c0);
                }
                *(undefined **)puVar7 = PTR_DAT_043794c8;
                __cxa_guard_release(puVar6);
                plVar5 = local_68;
              }
              while( true ) {
                local_68 = plVar5;
                if (plVar18 == (long *)0x0) goto LAB_00b90e4c;
                if (plVar18 == (long *)puVar7) break;
                plVar18 = (long *)*plVar18;
              }
              iVar11 = *piVar1;
              if (iVar11 == iVar17) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar17 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  lVar14 = *(long *)(lVar14 + 0x18);
                  plVar18 = (long *)(lVar14 + -0x50);
                  if (lVar14 != 0) {
                    (**(code **)(*plVar18 + 0x40))(plVar18);
                    local_b0[0] = in_d3;
                    FUN_01c3aa24(local_98,plVar5,local_b0,2);
                    if (local_80 != (long *)0x0) {
                      (**(code **)(*local_80 + 0x20))();
                    }
                    uVar12 = FUN_02a43a5c(*(undefined8 *)(lVar14 + 8));
                    if ((uVar12 & 1) != 0) {
                      (**(code **)(*plVar18 + 0x20))(plVar18);
                    }
                    bVar4 = true;
                    puVar16 = local_98[0];
                    goto joined_r0x00b91060;
                  }
                  break;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar17 = iVar11;
            } while (iVar11 != 0);
          }
        }
LAB_00b90e4c:
        bVar4 = false;
joined_r0x00b91060:
        if (local_78[0] != 0) {
          FUN_02a43934();
        }
        if (!bVar4) goto LAB_00b90e74;
        bVar4 = true;
        plVar18 = local_68;
      }
      else {
        FUN_00b91400(&local_68);
        if (local_98[0] == (undefined1 *)0x0) goto LAB_00b90e24;
        FUN_02a43934();
        if (local_68 != (long *)0x0) goto LAB_00b90e2c;
LAB_00b90e74:
        bVar4 = false;
        plVar18 = local_68;
      }
      local_68 = plVar18;
      if ((plVar18 != (long *)0x0) && (uVar12 = FUN_02a43a5c(plVar18[0xb]), (uVar12 & 1) != 0)) {
        (**(code **)(*plVar18 + 0x20))(plVar18);
      }
      if (bVar4) {
        bVar4 = true;
        goto joined_r0x00b90e94;
      }
    }
  }
  bVar4 = false;
joined_r0x00b90e94:
  if ((plVar15 != (long *)0x0) && (uVar12 = FUN_02a43a5c(plVar15[0xb]), (uVar12 & 1) != 0)) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  puVar2 = &DAT_cbf29ce484222645;
  if (bVar4) {
    puVar2 = puVar16;
  }
  return puVar2;
}


