/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b0960; name: FUN_016b0960
 */


void FUN_016b0960(long param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  byte *__s;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  byte *pbVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar22;
  uint *puVar21;
  ulong uVar23;
  long *local_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined1 *local_88;
  byte *pbStack_80;
  size_t local_78;
  long *local_70;
  undefined1 auStack_68 [8];
  
  local_90 = param_2;
  lVar9 = FUN_01675fe0(param_1 + 0x78,&local_90);
  if (lVar9 != 0) {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379678), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar11 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar11;
    plVar10 = *(long **)(lVar11 + 0x100);
    if (plVar10 != (long *)0x0) {
      plVar15 = plVar10 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar7) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    plVar15 = (long *)plVar10[0x20];
    if (plVar15 != (long *)0x0) {
      plVar1 = plVar15 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    plVar1 = plVar10 + 10;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    FUN_0165dd3c(&local_98,plVar15);
    FUN_0165dc80(&local_a0,plVar15);
    piVar18 = *(int **)(lVar9 + 0x18);
    uVar17 = (ulong)*(ushort *)((long)piVar18 + (8 - (long)*piVar18));
    uVar23 = (ulong)*(uint *)((long)piVar18 + uVar17);
    if (*(int *)((long)((long)piVar18 + uVar17) + uVar23) != 0) {
      uVar19 = 0;
      lVar9 = (long)piVar18 + 0xd;
      do {
        puVar12 = (uint *)((long)piVar18 + uVar19 * 4 + uVar23 + uVar17 + 4);
        uVar20 = (ulong)*puVar12;
        piVar2 = (int *)((long)puVar12 + uVar20);
        if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
          local_a8 = 0;
        }
        else {
          uVar13 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
          local_a8 = 0;
          if (uVar13 != 0) {
            local_a8 = *(undefined8 *)((long)piVar2 + uVar13);
          }
        }
        if ((6 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
           (uVar13 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar13 != 0)) {
          uVar16 = (ulong)*(uint *)((long)piVar2 + uVar13);
          puVar12 = (uint *)((long)((long)piVar2 + uVar13) + uVar16);
          if (puVar12 != (uint *)0x0) {
            local_88 = &DAT_cbf29ce484222645;
            local_b0 = (long *)FUN_016132ac(auStack_68,
                                            *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x388),
                                            &local_a8,&local_88,&local_a0);
            if (local_b0 != (long *)0x0) {
              plVar10 = local_b0 + 10;
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar7) {
                  *(int *)plVar10 = (int)*plVar10 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            uVar3 = *puVar12;
            if (uVar3 != 0) {
              plVar10 = local_b0 + 0xf;
              lVar11 = lVar9 + uVar23 + uVar17 + uVar16 + uVar13 + uVar20;
              puVar21 = puVar12 + 1;
              do {
                puVar22 = puVar21 + 1;
                uVar4 = *puVar21;
                __s = (byte *)((long)puVar22 + (ulong)uVar4);
                local_78 = strlen((char *)__s);
                bVar5 = *__s;
                local_88 = &DAT_cbf29ce484222645;
                if (bVar5 != 0) {
                  local_88 = &DAT_cbf29ce484222645;
                  pbVar14 = (byte *)(lVar11 + (ulong)uVar4);
                  do {
                    local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
                    bVar5 = *pbVar14;
                    pbVar14 = pbVar14 + 1;
                  } while (bVar5 != 0);
                }
                local_70 = (long *)0x0;
                pbStack_80 = __s;
                FUN_016b0f74(plVar10,&local_88);
                if (local_70 != (long *)0x0) {
                  (**(code **)(*local_70 + 0x20))();
                }
                lVar11 = lVar11 + 4;
                puVar21 = puVar22;
              } while (puVar22 != puVar12 + 1 + uVar3);
            }
            FUN_0163478c(local_98,&local_b0);
            if (local_b0 != (long *)0x0) {
              plVar10 = local_b0 + 10;
              do {
                iVar8 = (int)*plVar10 + -1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar7) {
                  *(int *)plVar10 = iVar8;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar8 == 0) {
                (**(code **)(*local_b0 + 0x10))();
              }
            }
          }
        }
        uVar17 = (ulong)*(ushort *)((long)piVar18 + (8 - (long)*piVar18));
        uVar23 = (ulong)*(uint *)((long)piVar18 + uVar17);
        uVar19 = uVar19 + 1;
        lVar9 = lVar9 + 4;
      } while (uVar19 < *(uint *)((long)((long)piVar18 + uVar17) + uVar23));
    }
    if (local_a0 != (long *)0x0) {
      lVar9 = local_a0[0xb];
      piVar18 = (int *)(lVar9 + 0xc);
      do {
        iVar8 = *piVar18;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar7) {
          *piVar18 = iVar8 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_a0 + 0x20))();
      }
    }
    if (local_98 != (long *)0x0) {
      plVar10 = local_98 + 10;
      do {
        iVar8 = (int)*plVar10 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar7) {
          *(int *)plVar10 = iVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_98 + 0x10))();
      }
    }
    if (plVar15 != (long *)0x0) {
      plVar10 = plVar15 + 10;
      do {
        iVar8 = (int)*plVar10 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar7) {
          *(int *)plVar10 = iVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  return;
}


