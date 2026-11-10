/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01612258; name: FUN_01612258
 */


void FUN_01612258(long param_1)

{
  long *plVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  byte *__s;
  uint uVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint *puVar21;
  uint *puVar20;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long *local_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  byte *pbStack_80;
  size_t local_78;
  long *local_70;
  undefined1 auStack_68 [8];
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  *(undefined8 *)PTR_DAT_04379688 = *(undefined8 *)PTR_DAT_04379680;
  FUN_00d8c950(&local_88);
  FUN_016b6208(&local_90,local_88);
  if (local_88 != (long *)0x0) {
    plVar1 = local_88 + 10;
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  FUN_0165dd3c(&local_98,local_90);
  FUN_0165dc80(&local_a0,local_90);
  puVar12 = *(uint **)(*(long *)(param_1 + 8) + 0x250);
  piVar2 = (int *)((long)puVar12 + (ulong)*puVar12);
  if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
     (uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar15 != 0)) {
    uVar16 = (ulong)*(uint *)((long)piVar2 + uVar15);
    puVar3 = (uint *)((long)((long)piVar2 + uVar15) + uVar16);
    if ((puVar3 != (uint *)0x0) && (uVar10 = *puVar3, uVar10 != 0)) {
      uVar19 = 0;
      lVar11 = (long)puVar12 + uVar16 + uVar15 + (ulong)*puVar12 + 0x11;
      do {
        uVar15 = (ulong)puVar3[uVar19 + 1];
        piVar2 = (int *)((long)(puVar3 + uVar19 + 1) + uVar15);
        uVar16 = (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2));
        uVar22 = (ulong)*(uint *)((long)piVar2 + uVar16);
        if (*(int *)((long)((long)piVar2 + uVar16) + uVar22) != 0) {
          uVar24 = 0;
          lVar18 = lVar11 + uVar15;
          do {
            puVar12 = (uint *)((long)piVar2 + uVar24 * 4 + uVar22 + uVar16 + 4);
            uVar15 = (ulong)*puVar12;
            piVar4 = (int *)((long)puVar12 + uVar15);
            if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
              local_a8 = 0;
            }
            else {
              uVar13 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
              local_a8 = 0;
              if (uVar13 != 0) {
                local_a8 = *(undefined8 *)((long)piVar4 + uVar13);
              }
            }
            if ((6 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
               (uVar13 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar13 != 0)) {
              uVar23 = (ulong)*(uint *)((long)piVar4 + uVar13);
              puVar12 = (uint *)((long)((long)piVar4 + uVar13) + uVar23);
              if (puVar12 != (uint *)0x0) {
                local_88 = (long *)&DAT_cbf29ce484222645;
                local_b0 = (long *)FUN_016132ac(auStack_68,
                                                *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x388),
                                                &local_a8,&local_88,&local_a0);
                if (local_b0 != (long *)0x0) {
                  plVar1 = local_b0 + 10;
                  do {
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar8) {
                      *(int *)plVar1 = (int)*plVar1 + 1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                }
                uVar10 = *puVar12;
                if (uVar10 != 0) {
                  plVar1 = local_b0 + 0xf;
                  lVar17 = lVar18 + uVar22 + uVar16 + uVar23 + uVar13 + uVar15;
                  puVar20 = puVar12 + 1;
                  do {
                    puVar21 = puVar20 + 1;
                    uVar5 = *puVar20;
                    __s = (byte *)((long)puVar21 + (ulong)uVar5);
                    local_78 = strlen((char *)__s);
                    bVar6 = *__s;
                    local_88 = (long *)&DAT_cbf29ce484222645;
                    if (bVar6 != 0) {
                      local_88 = (long *)&DAT_cbf29ce484222645;
                      pbVar14 = (byte *)(lVar17 + (ulong)uVar5);
                      do {
                        local_88 = (long *)(((ulong)local_88 ^ (ulong)bVar6) * 0x100000001b3);
                        bVar6 = *pbVar14;
                        pbVar14 = pbVar14 + 1;
                      } while (bVar6 != 0);
                    }
                    local_70 = (long *)0x0;
                    pbStack_80 = __s;
                    FUN_01612704(plVar1,&local_88);
                    if (local_70 != (long *)0x0) {
                      (**(code **)(*local_70 + 0x20))();
                    }
                    lVar17 = lVar17 + 4;
                    puVar20 = puVar21;
                  } while (puVar21 != puVar12 + 1 + uVar10);
                }
                FUN_0163478c(local_98,&local_b0);
                if (local_b0 != (long *)0x0) {
                  plVar1 = local_b0 + 10;
                  do {
                    iVar9 = (int)*plVar1 + -1;
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar8) {
                      *(int *)plVar1 = iVar9;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (iVar9 == 0) {
                    (**(code **)(*local_b0 + 0x10))();
                  }
                }
              }
            }
            uVar16 = (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2));
            uVar22 = (ulong)*(uint *)((long)piVar2 + uVar16);
            uVar24 = uVar24 + 1;
            lVar18 = lVar18 + 4;
          } while (uVar24 < *(uint *)((long)((long)piVar2 + uVar16) + uVar22));
          uVar10 = *puVar3;
        }
        uVar19 = uVar19 + 1;
        lVar11 = lVar11 + 4;
      } while (uVar19 < uVar10);
    }
  }
  if (local_a0 != (long *)0x0) {
    lVar11 = local_a0[0xb];
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar9 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
  if (local_98 != (long *)0x0) {
    plVar1 = local_98 + 10;
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  if (local_90 != (long *)0x0) {
    plVar1 = local_90 + 10;
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  return;
}


