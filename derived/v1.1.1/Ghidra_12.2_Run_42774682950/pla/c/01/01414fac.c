/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01414fac; name: FUN_01414fac
 */


void FUN_01414fac(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  ushort uVar17;
  byte *pbVar18;
  ulong uVar19;
  ushort *puVar20;
  undefined1 *puVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  char *pcVar26;
  long lVar27;
  long *plVar28;
  uint *puVar29;
  byte *pbVar30;
  long lVar31;
  long lVar32;
  undefined4 local_80;
  undefined4 uStack_7c;
  long *local_78;
  undefined1 *local_70;
  long *local_68;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148cdc(&local_80);
    uVar9 = FUN_01123ce8(CONCAT44(uStack_7c,local_80));
    plVar28 = (long *)CONCAT44(uStack_7c,local_80);
    if (plVar28 != (long *)0x0) {
      lVar13 = plVar28[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar28 + 0x20))();
      }
    }
    puVar14 = *(uint **)(*(long *)(param_1 + 0x70) + 0x250);
    piVar1 = (int *)((long)puVar14 + (ulong)*puVar14);
    if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar19 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar19 != 0)) {
      uVar23 = (ulong)*(uint *)((long)piVar1 + uVar19);
      puVar3 = (uint *)((long)((long)piVar1 + uVar19) + uVar23);
      if (puVar3 != (uint *)0x0) {
        puVar29 = puVar3 + 1;
        if ((ulong)*puVar3 != 0) {
          puVar3 = puVar29 + *puVar3;
          puVar2 = (undefined8 *)(param_1 + 0xb0);
          lVar13 = (long)puVar14 + uVar23 + uVar19 + (ulong)*puVar14 + 9;
          pbVar30 = PTR_DAT_04379cd0;
          do {
            puVar21 = &DAT_cbf29ce484222645;
            uVar4 = *puVar29;
            piVar1 = (int *)((long)puVar29 + (ulong)uVar4);
            if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
              uVar12 = 0;
            }
            else {
              uVar19 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
              uVar12 = 0;
              if (uVar19 != 0) {
                uVar12 = *(uint *)((long)piVar1 + uVar19);
              }
            }
            if ((uVar9 & 0xff) == (uVar12 & 0xff)) {
              local_78 = (long *)0x0;
              local_70 = &DAT_cbf29ce484222645;
              if (*(ushort *)((long)piVar1 - (long)*piVar1) < 7) {
                local_80 = 0;
              }
              else {
                uVar19 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3];
                local_80 = 0;
                if (uVar19 != 0) {
                  local_80 = *(undefined4 *)((long)piVar1 + uVar19);
                }
              }
              puVar20 = (ushort *)((long)piVar1 - (long)*piVar1);
              uVar17 = *puVar20;
              if (8 < uVar17) {
                uVar19 = (ulong)puVar20[4];
                lVar15 = -(long)*piVar1;
                if ((uVar19 != 0) &&
                   (puVar14 = (uint *)((long)piVar1 + uVar19),
                   lVar16 = (long)puVar14 + (ulong)*puVar14, lVar16 != 0)) {
                  pcVar26 = (char *)(lVar16 + 4);
                  if (*pcVar26 == '\0') {
                    plVar28 = (long *)FUN_00938550();
                    if (plVar28 != (long *)0x0) {
                      (**(code **)(*plVar28 + 0x18))(plVar28);
                    }
                  }
                  else {
                    if (((*pbVar30 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(pbVar30), iVar10 != 0)) {
                      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
                      __cxa_guard_release(pbVar30);
                    }
                    uVar11 = *(undefined8 *)PTR_DAT_04379cd8;
                    *(undefined8 *)PTR_DAT_04379ce0 = uVar11;
                    FUN_02a47cd8(&local_68,uVar11,pcVar26);
                    plVar28 = local_68;
                    plVar8 = local_78;
                    local_78 = (long *)0x0;
                    if (plVar8 != (long *)0x0) {
                      (**(code **)(*plVar8 + 0x20))();
                    }
                  }
                  lVar15 = -(long)*piVar1;
                  uVar17 = *(ushort *)((long)piVar1 - (long)*piVar1);
                  local_78 = plVar28;
                }
                if ((10 < uVar17) &&
                   (uVar19 = (ulong)*(ushort *)((long)piVar1 + lVar15 + 10), uVar19 != 0)) {
                  uVar23 = (ulong)*(uint *)((long)piVar1 + uVar19);
                  lVar15 = (long)((long)piVar1 + uVar19) + uVar23;
                  if (lVar15 != 0) {
                    bVar5 = *(byte *)(lVar15 + 4);
                    if (bVar5 != 0) {
                      pbVar18 = (byte *)(lVar13 + uVar23 + uVar19 + (ulong)uVar4);
                      do {
                        puVar21 = (undefined1 *)(((ulong)puVar21 ^ (ulong)bVar5) * 0x100000001b3);
                        bVar5 = *pbVar18;
                        pbVar18 = pbVar18 + 1;
                      } while (bVar5 != 0);
                    }
                    local_70 = puVar21;
                  }
                }
              }
              lVar15 = *(long *)(param_1 + 0xa0);
              if (lVar15 == *(long *)(param_1 + 0xa8)) {
                uVar19 = *(ulong *)(param_1 + 0xb8);
                lVar15 = lVar15 - *(long *)(param_1 + 0x98) >> 3;
                if (0x7ffffffffffffffe < uVar19) {
                  uVar19 = 0x7fffffffffffffff;
                }
                uVar23 = lVar15 * -0x5555555555555555 + 1;
                if (uVar19 < uVar23) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar16 = *(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0x98) >> 3;
                uVar22 = lVar16 * 0x5555555555555556;
                if (uVar23 <= uVar22) {
                  uVar23 = uVar22;
                }
                if ((ulong)(lVar16 * -0x5555555555555555) < uVar19 >> 1) {
                  uVar19 = uVar23;
                }
                if (uVar19 == 0) {
                  lVar16 = 0;
                }
                else {
                  lVar16 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar19 * 0x18,8);
                  if (lVar16 == 0) {
                    (**(code **)(*(long *)*puVar2 + 0xb8))();
                  }
                }
                lVar31 = lVar16 + lVar15 * 8;
                FUN_0141575c(puVar2,lVar31,&local_80);
                lVar24 = *(long *)(param_1 + 0x98);
                lVar25 = *(long *)(param_1 + 0xa0);
                lVar27 = lVar31 + 0x18;
                if (lVar25 == lVar24) {
                  pbVar30 = PTR_DAT_04379cd0;
                  lVar15 = lVar24;
                }
                else {
                  lVar32 = lVar31 + -0x18;
                  FUN_0141575c(puVar2,lVar32,lVar25 + -0x18);
                  if (lVar25 + -0x18 == lVar24) {
LAB_01415464:
                    pbVar30 = PTR_DAT_04379cd0;
                  }
                  else {
                    lVar32 = lVar31 + -0x30;
                    FUN_0141575c(puVar2,lVar32,lVar25 + -0x30);
                    if (lVar25 + -0x30 == lVar24) goto LAB_01415464;
                    lVar32 = lVar31 + -0x48;
                    FUN_0141575c(puVar2,lVar32,lVar25 + -0x48);
                    pbVar30 = PTR_DAT_04379cd0;
                    if (lVar25 + -0x48 != lVar24) {
                      lVar32 = lVar31 + -0x60;
                      FUN_0141575c(puVar2,lVar32,lVar25 + -0x60);
                      if (lVar25 + -0x60 != lVar24) {
                        lVar32 = lVar31 + -0x78;
                        FUN_0141575c(puVar2,lVar32,lVar25 + -0x78);
                        if (lVar25 + -0x78 != lVar24) {
                          lVar15 = lVar16 + lVar15 * 8 + -0x90;
                          do {
                            lVar32 = lVar15;
                            FUN_0141575c(puVar2,lVar32,lVar25 + -0x90);
                            lVar25 = lVar25 + -0x18;
                            lVar15 = lVar32 + -0x18;
                          } while (lVar24 + 0x78 != lVar25);
                        }
                      }
                    }
                  }
                  lVar24 = *(long *)(param_1 + 0x98);
                  lVar15 = *(long *)(param_1 + 0xa0);
                  lVar31 = lVar32;
                }
                *(long *)(param_1 + 0x98) = lVar31;
                *(long *)(param_1 + 0xa0) = lVar27;
                lVar27 = *(long *)(param_1 + 0xa8);
                *(ulong *)(param_1 + 0xa8) = lVar16 + uVar19 * 0x18;
                if (lVar15 != lVar24) {
                  if (*(long **)(lVar15 + -0x10) != (long *)0x0) {
                    (**(code **)(**(long **)(lVar15 + -0x10) + 0x20))();
                  }
                  if (lVar15 + -0x18 != lVar24) {
                    if (*(long **)(lVar15 + -0x28) != (long *)0x0) {
                      (**(code **)(**(long **)(lVar15 + -0x28) + 0x20))();
                    }
                    if (lVar15 + -0x30 != lVar24) {
                      if (*(long **)(lVar15 + -0x40) != (long *)0x0) {
                        (**(code **)(**(long **)(lVar15 + -0x40) + 0x20))();
                      }
                      if (lVar15 + -0x48 != lVar24) {
                        if (*(long **)(lVar15 + -0x58) != (long *)0x0) {
                          (**(code **)(**(long **)(lVar15 + -0x58) + 0x20))();
                        }
                        if (lVar15 + -0x60 != lVar24) {
                          if (*(long **)(lVar15 + -0x70) != (long *)0x0) {
                            (**(code **)(**(long **)(lVar15 + -0x70) + 0x20))();
                          }
                          if (lVar15 + -0x78 != lVar24) {
                            plVar28 = *(long **)(lVar15 + -0x88);
                            while( true ) {
                              if (plVar28 != (long *)0x0) {
                                (**(code **)(*plVar28 + 0x20))();
                              }
                              if (lVar24 + 0x78 == lVar15 + -0x18) break;
                              plVar28 = *(long **)(lVar15 + -0xa0);
                              lVar15 = lVar15 + -0x18;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                if (lVar24 != 0) {
                  lVar27 = lVar27 - lVar24;
                  plVar28 = (long *)*puVar2;
                  uVar19 = (**(code **)(*plVar28 + 0xc0))(plVar28);
                  if ((uVar19 & 1) != 0) {
                    lVar15 = tpidr_el0;
                    if (*(char *)(lVar15 + 0x38d488) == '\0') {
                      *(undefined1 *)(lVar15 + 0x38d488) = 1;
                      *(undefined8 *)(lVar15 + 0x38d478) = 0;
                      *(undefined8 *)(lVar15 + 0x38d480) = 0;
                      __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
                    }
                    if (0 < *(int *)(lVar15 + 0x38d480)) {
                      FUN_02bcc824(plVar28,lVar24,lVar27,8);
                      goto joined_r0x014155bc;
                    }
                  }
                  (**(code **)(*plVar28 + 0x18))(plVar28,lVar24,lVar27,8);
                }
              }
              else {
                FUN_0141575c(puVar2,lVar15,&local_80);
                *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 0x18;
              }
joined_r0x014155bc:
              if (local_78 != (long *)0x0) {
                (**(code **)(*local_78 + 0x20))();
              }
            }
            puVar29 = puVar29 + 1;
            lVar13 = lVar13 + 4;
          } while (puVar29 != puVar3);
        }
      }
    }
  }
  return;
}


