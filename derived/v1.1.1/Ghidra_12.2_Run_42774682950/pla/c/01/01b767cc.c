/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b767cc; name: FUN_01b767cc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01b767cc(long param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_68;
  
  puVar11 = PTR_DAT_0437a130;
  puVar10 = PTR_DAT_0437a128;
  puVar9 = PTR_DAT_043795e0;
  puVar8 = PTR_DAT_043795d8;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  uStack_88 = _UNK_03889a88;
  local_90 = _DAT_03889a80;
  lVar16 = *(long *)(param_1 + 0x360);
  if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
    piVar1 = (int *)(lVar16 + 0xc);
    iVar14 = *(int *)(lVar16 + 0xc);
    do {
      plVar18 = *(long **)(lVar16 + 0x10);
      if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
        if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar6), iVar13 != 0)) {
            uVar15 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar15;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        *(undefined **)puVar11 = puVar9;
        __cxa_guard_release(puVar10);
      }
      while( true ) {
        if (plVar18 == (long *)0x0) goto LAB_01b76810;
        if (plVar18 == (long *)puVar11) break;
        plVar18 = (long *)*plVar18;
      }
      iVar13 = *piVar1;
      if (iVar13 == iVar14) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar16 = *(long *)(lVar16 + 0x18);
          plVar18 = (long *)(lVar16 + -0x50);
          if (lVar16 != 0) {
            FUN_028a17c4(&local_68,local_90,plVar18);
            plVar17 = local_68;
            if (local_68 == (long *)0x0) {
              uStack_88 = _UNK_03889a88;
              local_90 = _DAT_03889a80;
            }
            else {
              if (((*PTR_DAT_0437a570 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar14 != 0)) {
                FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_0437a570);
              }
              puVar3 = (undefined8 *)PTR_DAT_0437a578;
              if (plVar17[0x19] != 0) {
                puVar3 = (undefined8 *)(plVar17[0x19] + 0x88);
              }
              plVar17 = (long *)*puVar3;
              if (plVar17 == (long *)0x0) {
                uStack_88 = _UNK_03889a88;
                local_90 = _DAT_03889a80;
              }
              else {
                plVar2 = plVar17 + 10;
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar5) {
                    *(int *)plVar2 = (int)*plVar2 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                sVar12 = FUN_02b68184(plVar17,param_2);
                if (sVar12 < 0) {
                  uStack_88 = _UNK_03889a88;
                  local_90 = _DAT_03889a80;
                }
                else {
                  auVar19 = FUN_02b6a984(plVar17);
                  local_90 = CONCAT17(auVar19[7] & (byte)((ulong)_DAT_038897c0 >> 0x38),
                                      CONCAT16(auVar19[6] & (byte)((ulong)_DAT_038897c0 >> 0x30),
                                               CONCAT15(auVar19[5] &
                                                        (byte)((ulong)_DAT_038897c0 >> 0x28),
                                                        CONCAT14(auVar19[4] &
                                                                 (byte)((ulong)_DAT_038897c0 >> 0x20
                                                                       ),CONCAT13(auVar19[3] &
                                                                                  (byte)((ulong)
                                                  _DAT_038897c0 >> 0x18),
                                                  CONCAT12(auVar19[2] &
                                                           (byte)((ulong)_DAT_038897c0 >> 0x10),
                                                           CONCAT11(auVar19[1] &
                                                                    (byte)((ulong)_DAT_038897c0 >> 8
                                                                          ),auVar19[0] &
                                                                            (byte)_DAT_038897c0)))))
                                              ));
                  uStack_88 = CONCAT17(auVar19[0xf] & (byte)((ulong)_UNK_038897c8 >> 0x38),
                                       CONCAT16(auVar19[0xe] & (byte)((ulong)_UNK_038897c8 >> 0x30),
                                                CONCAT15(auVar19[0xd] &
                                                         (byte)((ulong)_UNK_038897c8 >> 0x28),
                                                         CONCAT14(auVar19[0xc] &
                                                                  (byte)((ulong)_UNK_038897c8 >>
                                                                        0x20),
                                                                  CONCAT13(auVar19[0xb] &
                                                                           (byte)((ulong)
                                                  _UNK_038897c8 >> 0x18),
                                                  CONCAT12(auVar19[10] &
                                                           (byte)((ulong)_UNK_038897c8 >> 0x10),
                                                           CONCAT11(auVar19[9] &
                                                                    (byte)((ulong)_UNK_038897c8 >> 8
                                                                          ),auVar19[8] &
                                                                            (byte)_UNK_038897c8)))))
                                               ));
                }
                do {
                  iVar14 = (int)*plVar2 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar5) {
                    *(int *)plVar2 = iVar14;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar14 == 0) {
                  (**(code **)(*plVar17 + 0x10))(plVar17);
                }
              }
              if (local_68 != (long *)0x0) {
                plVar17 = local_68 + 10;
                do {
                  iVar14 = (int)*plVar17 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar5) {
                    *(int *)plVar17 = iVar14;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar14 == 0) {
                  (**(code **)(*local_68 + 0x10))();
                }
              }
            }
            lVar16 = *(long *)(lVar16 + 8);
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar14 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*plVar18 + 0x20))(plVar18);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar14 = iVar13;
    } while (iVar13 != 0);
  }
LAB_01b76810:
  auVar19._8_8_ = uStack_88;
  auVar19._0_8_ = local_90;
  return auVar19;
}


