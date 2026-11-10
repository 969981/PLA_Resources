/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016ab434; name: FUN_016ab434
 */


void FUN_016ab434(long param_1,ulong *param_2)

{
  int *piVar1;
  long *plVar2;
  uint *puVar3;
  uint *puVar4;
  byte *__s;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  ulong uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  ulong uVar18;
  undefined1 *puVar19;
  ushort *puVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  byte *pbVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  uint *puVar28;
  uint *puVar27;
  int *piVar29;
  ulong uVar30;
  long *plVar31;
  long *local_a8;
  undefined1 *local_a0;
  long *local_98;
  long *local_90;
  undefined1 *local_88;
  byte *pbStack_80;
  size_t local_78;
  long *local_70;
  undefined1 auStack_68 [8];
  
  uVar18 = *(ulong *)(param_1 + 0xa0);
  if (uVar18 == 0) {
    return;
  }
  uVar21 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
  uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
  uVar14 = *param_2;
  uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar21 < 2) {
    uVar30 = uVar18 - 1 & uVar14;
  }
  else if (uVar14 < uVar18) {
    uVar30 = uVar14;
  }
  else {
    uVar30 = 0;
    if (uVar18 != 0) {
      uVar30 = uVar14 / uVar18;
    }
    uVar30 = uVar14 - uVar30 * uVar18;
  }
  plVar22 = *(long **)(*(long *)(param_1 + 0x98) + uVar30 * 8);
  if (plVar22 == (long *)0x0) {
    return;
  }
  plVar22 = (long *)*plVar22;
  if (plVar22 == (long *)0x0) {
    return;
  }
  if (uVar21 < 2) {
    do {
      if (plVar22[1] == uVar14) {
        if (plVar22[2] == uVar14) goto LAB_016ab550;
      }
      else if ((plVar22[1] & uVar18 - 1) != uVar30) {
        return;
      }
      plVar22 = (long *)*plVar22;
      if (plVar22 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    uVar21 = plVar22[1];
    if (uVar21 == uVar14) {
      if (plVar22[2] == uVar14) goto LAB_016ab550;
    }
    else {
      if (uVar18 <= uVar21) {
        uVar10 = 0;
        if (uVar18 != 0) {
          uVar10 = uVar21 / uVar18;
        }
        uVar21 = uVar21 - uVar10 * uVar18;
      }
      if (uVar21 != uVar30) {
        return;
      }
    }
    plVar22 = (long *)*plVar22;
    if (plVar22 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_016ab6e0:
  if ((char)plVar23[3] == -1) goto joined_r0x016aba84;
  goto LAB_016ab6ec;
LAB_016ab550:
  puVar26 = (undefined1 *)plVar22[3];
  if (puVar26 == (undefined1 *)0xc0ea47549ab5f3d9) {
    return;
  }
  if (puVar26 == &DAT_cbf29ce484222645) {
    return;
  }
  piVar29 = (int *)plVar22[5];
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379558), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar15 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar15;
  plVar22 = *(long **)(lVar15 + 0x290);
  if (plVar22 != (long *)0x0) {
    lVar15 = plVar22[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_016abc40:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = *piVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  puVar16 = (undefined1 *)plVar22[0xe];
  if (puVar16 != (undefined1 *)0x0) {
    uVar18 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      puVar19 = (undefined1 *)((ulong)(puVar16 + -1) & (ulong)puVar26);
    }
    else if (puVar26 < puVar16) {
      puVar19 = puVar26;
    }
    else {
      uVar21 = 0;
      if (puVar16 != (undefined1 *)0x0) {
        uVar21 = (ulong)puVar26 / (ulong)puVar16;
      }
      puVar19 = puVar26 + -(uVar21 * (long)puVar16);
    }
    plVar23 = *(long **)(plVar22[0xd] + (long)puVar19 * 8);
    if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if ((undefined1 *)plVar23[1] == puVar26) {
            if ((undefined1 *)plVar23[2] == puVar26) goto LAB_016ab6e0;
          }
          else if ((undefined1 *)((ulong)plVar23[1] & (ulong)(puVar16 + -1)) != puVar19) break;
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      else {
        do {
          puVar25 = (undefined1 *)plVar23[1];
          if (puVar25 == puVar26) {
            if ((undefined1 *)plVar23[2] == puVar26) goto LAB_016ab6e0;
          }
          else {
            if (puVar16 <= puVar25) {
              uVar18 = 0;
              if (puVar16 != (undefined1 *)0x0) {
                uVar18 = (ulong)puVar25 / (ulong)puVar16;
              }
              puVar25 = puVar25 + -(uVar18 * (long)puVar16);
            }
            if (puVar25 != puVar19) break;
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
    }
  }
LAB_016ab6ec:
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar15 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar15;
  plVar23 = *(long **)(lVar15 + 0x100);
  if (plVar23 != (long *)0x0) {
    plVar31 = plVar23 + 10;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar9) {
        *(int *)plVar31 = (int)*plVar31 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  plVar31 = (long *)plVar23[0x20];
  if (plVar31 == (long *)0x0) {
    FUN_0165dd3c(&local_90,0);
  }
  else {
    plVar2 = plVar31 + 10;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    FUN_0165dd3c(&local_90,plVar31);
    plVar2 = plVar31 + 10;
    do {
      iVar11 = (int)*plVar2 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *(int *)plVar2 = iVar11;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
    }
  }
  plVar31 = plVar23 + 10;
  do {
    iVar11 = (int)*plVar31 + -1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar31,0x10);
    if (bVar9) {
      *(int *)plVar31 = iVar11;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar11 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
  }
  if ((0x10 < *(ushort *)((long)piVar29 - (long)*piVar29)) &&
     (uVar18 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[8], uVar18 != 0)) {
    uVar21 = (ulong)*(uint *)((long)piVar29 + uVar18);
    puVar3 = (uint *)((long)((long)piVar29 + uVar18) + uVar21);
    if ((puVar3 != (uint *)0x0) && (*puVar3 != 0)) {
      uVar14 = 0;
      lVar15 = (long)piVar29 + uVar21 + uVar18 + 0xd;
      do {
        uVar18 = (ulong)puVar3[uVar14 + 1];
        piVar29 = (int *)((long)(puVar3 + uVar14 + 1) + uVar18);
        puVar20 = (ushort *)((long)piVar29 - (long)*piVar29);
        if ((*puVar20 < 7) || (uVar21 = (ulong)puVar20[3], uVar21 == 0)) break;
        uVar30 = (ulong)*(uint *)((long)piVar29 + uVar21);
        puVar4 = (uint *)((long)((long)piVar29 + uVar21) + uVar30);
        if (puVar4 == (uint *)0x0) break;
        uVar12 = *(undefined8 *)(param_1 + 8);
        if ((ulong)puVar20[2] == 0) {
          local_88 = (undefined1 *)0x0;
        }
        else {
          local_88 = *(undefined1 **)((long)piVar29 + (ulong)puVar20[2]);
        }
        local_a0 = &DAT_cbf29ce484222645;
        if (((*PTR_DAT_04379678 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379678);
        }
        lVar17 = *(long *)PTR_DAT_04379680;
        *(long *)PTR_DAT_04379688 = lVar17;
        plVar23 = *(long **)(lVar17 + 0x100);
        if (plVar23 != (long *)0x0) {
          plVar31 = plVar23 + 10;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar31,0x10);
            if (bVar9) {
              *(int *)plVar31 = (int)*plVar31 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        plVar31 = (long *)plVar23[0x20];
        if (plVar31 != (long *)0x0) {
          plVar2 = plVar31 + 10;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        local_a8 = (long *)plVar31[0xf];
        if (local_a8 != (long *)0x0) {
          lVar17 = local_a8[0xb];
          if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_016abc40;
          if (*(long *)(lVar17 + 0x10) == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
            *(undefined8 *)(lVar17 + 0x10) = uVar13;
          }
          piVar29 = (int *)(lVar17 + 0xc);
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar29,0x10);
            if (bVar9) {
              *piVar29 = *piVar29 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        local_98 = (long *)FUN_016971e0(auStack_68,uVar12,&local_88,&local_a0,&local_a8);
        if (local_98 != (long *)0x0) {
          plVar2 = local_98 + 10;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        if (local_a8 != (long *)0x0) {
          lVar17 = local_a8[0xb];
          piVar29 = (int *)(lVar17 + 0xc);
          do {
            iVar11 = *piVar29;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar29,0x10);
            if (bVar9) {
              *piVar29 = iVar11 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*local_a8 + 0x20))();
          }
        }
        plVar2 = plVar31 + 10;
        do {
          iVar11 = (int)*plVar2 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *(int *)plVar2 = iVar11;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*plVar31 + 0x10))(plVar31);
        }
        plVar31 = plVar23 + 10;
        do {
          iVar11 = (int)*plVar31 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar31,0x10);
          if (bVar9) {
            *(int *)plVar31 = iVar11;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
          uVar5 = *puVar4;
        }
        else {
          uVar5 = *puVar4;
        }
        if (uVar5 != 0) {
          plVar23 = local_98 + 0xf;
          lVar17 = lVar15 + uVar30 + uVar21 + uVar18;
          puVar27 = puVar4 + 1;
          do {
            puVar28 = puVar27 + 1;
            uVar6 = *puVar27;
            __s = (byte *)((long)puVar28 + (ulong)uVar6);
            local_78 = strlen((char *)__s);
            bVar7 = *__s;
            local_88 = &DAT_cbf29ce484222645;
            if (bVar7 != 0) {
              local_88 = &DAT_cbf29ce484222645;
              pbVar24 = (byte *)(lVar17 + (ulong)uVar6);
              do {
                local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar7) * 0x100000001b3);
                bVar7 = *pbVar24;
                pbVar24 = pbVar24 + 1;
              } while (bVar7 != 0);
            }
            local_70 = (long *)0x0;
            pbStack_80 = __s;
            FUN_016ae07c(plVar23,&local_88);
            if (local_70 != (long *)0x0) {
              (**(code **)(*local_70 + 0x20))();
            }
            lVar17 = lVar17 + 4;
            puVar27 = puVar28;
          } while (puVar28 != puVar4 + 1 + uVar5);
        }
        FUN_0163478c(local_90,&local_98);
        if (local_98 != (long *)0x0) {
          plVar23 = local_98 + 10;
          do {
            iVar11 = (int)*plVar23 + -1;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar9) {
              *(int *)plVar23 = iVar11;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar11 == 0) {
            (**(code **)(*local_98 + 0x10))();
          }
        }
        uVar5 = (int)uVar14 + 1;
        uVar14 = (ulong)uVar5;
        lVar15 = lVar15 + 4;
      } while (uVar5 < *puVar3);
    }
  }
  if (local_90 != (long *)0x0) {
    plVar23 = local_90 + 10;
    do {
      iVar11 = (int)*plVar23 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar9) {
        *(int *)plVar23 = iVar11;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
joined_r0x016aba84:
  if (plVar22 != (long *)0x0) {
    lVar15 = plVar22[0xb];
    piVar29 = (int *)(lVar15 + 0xc);
    do {
      iVar11 = *piVar29;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar9) {
        *piVar29 = iVar11 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
  }
  return;
}


