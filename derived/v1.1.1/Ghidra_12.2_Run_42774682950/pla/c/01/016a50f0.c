/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016a50f0; name: FUN_016a50f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016a50f0(undefined8 *param_1,long param_2,ulong *param_3,long *param_4)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  byte bVar4;
  ushort uVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  undefined1 *puVar26;
  long extraout_x8;
  uint *puVar27;
  ushort *puVar28;
  uint *puVar29;
  uint *puVar30;
  ulong uVar31;
  undefined1 *puVar32;
  long *plVar33;
  long *plVar34;
  ulong uVar35;
  long *plVar36;
  ulong uVar37;
  byte *pbVar38;
  long *plVar39;
  undefined1 *puVar40;
  ulong uVar41;
  uint uVar42;
  long *plVar43;
  ulong uVar44;
  undefined1 *puVar45;
  int *piVar46;
  ulong uVar47;
  uint uVar48;
  long *plVar49;
  long *plVar50;
  undefined1 *local_80;
  char *pcStack_78;
  size_t local_70;
  long *local_68;
  
  puVar7 = PTR_DAT_04379520;
  uVar31 = *(ulong *)(param_2 + 0xa0);
  if (uVar31 != 0) {
    uVar37 = uVar31 - (uVar31 >> 1 & 0x5555555555555555);
    uVar37 = (uVar37 & 0x3333333333333333) + (uVar37 >> 2 & 0x3333333333333333);
    uVar41 = *param_3;
    uVar37 = (uVar37 + (uVar37 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar37 < 2) {
      uVar47 = uVar31 - 1 & uVar41;
    }
    else if (uVar41 < uVar31) {
      uVar47 = uVar41;
    }
    else {
      uVar47 = 0;
      if (uVar31 != 0) {
        uVar47 = uVar41 / uVar31;
      }
      uVar47 = uVar41 - uVar47 * uVar31;
    }
    plVar39 = *(long **)(*(long *)(param_2 + 0x98) + uVar47 * 8);
    if ((plVar39 != (long *)0x0) && (plVar39 = (long *)*plVar39, plVar39 != (long *)0x0)) {
      if (uVar37 < 2) {
        do {
          if (plVar39[1] == uVar41) {
            if (plVar39[2] == uVar41) goto LAB_016a5210;
          }
          else if ((plVar39[1] & uVar31 - 1) != uVar47) break;
          plVar39 = (long *)*plVar39;
        } while (plVar39 != (long *)0x0);
      }
      else {
        do {
          uVar37 = plVar39[1];
          if (uVar37 == uVar41) {
            if (plVar39[2] == uVar41) goto LAB_016a5210;
          }
          else {
            if (uVar31 <= uVar37) {
              uVar44 = 0;
              if (uVar31 != 0) {
                uVar44 = uVar37 / uVar31;
              }
              uVar37 = uVar37 - uVar44 * uVar31;
            }
            if (uVar37 != uVar47) break;
          }
          plVar39 = (long *)*plVar39;
        } while (plVar39 != (long *)0x0);
      }
    }
  }
LAB_016a51c4:
  *param_1 = 0;
  return;
LAB_016a5210:
  puVar45 = (undefined1 *)plVar39[3];
  if (puVar45 == &DAT_cbf29ce484222645) goto LAB_016a51c4;
  lVar25 = plVar39[4];
  piVar46 = (int *)plVar39[5];
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar13 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar8 = PTR_DAT_04379528;
    if (iVar13 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  puVar8 = PTR_DAT_04379528;
  lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar17 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = param_4;
  *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
  plVar39 = (long *)(**(code **)(*param_4 + 0x10))(param_4,400,0x10);
  if (plVar39 == (long *)0x0) {
    (**(code **)(*param_4 + 0xb8))(param_4);
  }
  puVar9 = PTR_DAT_043796d0;
  plVar39[7] = 0;
  *(undefined4 *)(plVar39 + 8) = 0;
  *(undefined4 *)(plVar39 + 6) = 0;
  plVar39[2] = 0;
  plVar39[3] = 0;
  *plVar39 = (long)(puVar9 + 0x10);
  plVar39[4] = 0;
  plVar39[5] = 0;
  if ((*puVar7 & 1) == 0) {
    iVar13 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar9 = PTR_DAT_04379528;
    if (iVar13 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
  if (lVar18 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = 0;
    if (*(long *)(lVar18 + 0x80) != 0) {
      lVar24 = *(long *)(lVar18 + *(long *)(lVar18 + 0x80) * 8 + -8);
    }
  }
  plVar39[1] = lVar24;
  plVar43 = plVar39 + 10;
  *(int *)plVar43 = 0;
  *plVar39 = (long)&PTR_LAB_04224648;
  plVar39[9] = (long)&PTR_LAB_04224680;
  plVar39[0xb] = 0;
  plVar34 = plVar39 + 0xd;
  *plVar34 = 0;
  plVar49 = plVar39 + 0x10;
  *plVar49 = 0;
  plVar39[0xe] = 0;
  plVar39[0x11] = 0;
  plVar39[0x12] = 0;
  plVar39[0x13] = 0;
  plVar39[0x14] = 0;
  plVar39[0x15] = 0;
  plVar39[0x16] = 0;
  plVar39[0x17] = 0;
  plVar39[0x18] = 0;
  plVar39[0x19] = 0;
  plVar39[0x1a] = 0;
  plVar39[0x1b] = 0;
  plVar39[0x1c] = 0;
  if ((*puVar7 & 1) == 0) {
    iVar13 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar7 = PTR_DAT_04379528;
    if (iVar13 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar19 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
  lVar24 = DAT_043f1798;
  lVar18 = tpidr_el0;
  if ((((lVar19 == 0) || (*(long *)(lVar19 + 0x80) == 0)) ||
      (lVar19 = *(long *)(lVar19 + *(long *)(lVar19 + 0x80) * 8 + -8), lVar19 == 0)) &&
     (lVar19 = *(long *)(lVar18 + 0x20), *(long *)(lVar18 + 0x20) == 0)) {
    *(long *)(lVar18 + 0x20) = DAT_043f1798;
    lVar19 = lVar24;
  }
  plVar36 = plVar39 + 0x1d;
  *plVar36 = lVar19;
  *(undefined4 *)(plVar39 + 0x20) = 0;
  *(undefined4 *)(plVar39 + 0x21) = 0;
  plVar39[0x1e] = 0x1fffffffffffffff;
  plVar39[0x1f] = 0;
  plVar39[0x22] = 0;
  *(undefined4 *)(plVar39 + 0x23) = 0;
  *(undefined4 *)(plVar39 + 0x26) = 0;
  *(undefined4 *)(plVar39 + 0x29) = 0;
  plVar39[0x30] = (long)param_4;
  plVar39[0x24] = 0;
  plVar39[0x25] = 0;
  plVar39[0x27] = 0;
  plVar39[0x28] = 0;
  plVar39[0x2a] = 0;
  plVar39[0x2b] = 0;
  lVar24 = FUN_00d48784(&local_80,param_4,&DAT_03a7c4b0);
  if (lVar24 != 0) {
    piVar1 = (int *)(lVar24 + 0x50);
    do {
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar20 = (long *)*plVar34;
  *plVar34 = 0;
  if (plVar20 != (long *)0x0) {
    plVar22 = plVar20 + 10;
    do {
      iVar13 = (int)*plVar22 + -1;
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar10) {
        *(int *)plVar22 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar20 + 0x10))();
    }
  }
  plVar39[0xd] = lVar24;
  lVar24 = FUN_00d48784(&local_80,plVar39[0x30],&DAT_03a7c4b0);
  if (lVar24 != 0) {
    piVar1 = (int *)(lVar24 + 0x50);
    do {
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar20 = (long *)plVar39[0xe];
  plVar39[0xe] = 0;
  if (plVar20 != (long *)0x0) {
    plVar22 = plVar20 + 10;
    do {
      iVar13 = (int)*plVar22 + -1;
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar10) {
        *(int *)plVar22 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar20 + 0x10))();
    }
  }
  plVar39[0xe] = lVar24;
  lVar24 = FUN_00d48784(&local_80,plVar39[0x30],&DAT_03a7c4b0);
  if (lVar24 != 0) {
    piVar1 = (int *)(lVar24 + 0x50);
    do {
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar20 = (long *)plVar39[0x2b];
  plVar39[0x2b] = 0;
  if (plVar20 != (long *)0x0) {
    plVar22 = plVar20 + 10;
    do {
      iVar13 = (int)*plVar22 + -1;
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar10) {
        *(int *)plVar22 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar20 + 0x10))();
    }
  }
  plVar39[0x2b] = lVar24;
  lVar24 = FUN_00d48784(&local_80,plVar39[0x30],&DAT_03a7c4b0);
  if (lVar24 != 0) {
    piVar1 = (int *)(lVar24 + 0x50);
    do {
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar20 = (long *)*plVar49;
  *plVar49 = 0;
  if (plVar20 != (long *)0x0) {
    plVar22 = plVar20 + 10;
    do {
      iVar13 = (int)*plVar22 + -1;
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar10) {
        *(int *)plVar22 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar20 + 0x10))();
    }
  }
  plVar39[0x10] = lVar24;
  lVar24 = FUN_00d48784(&local_80,plVar39[0x30],&DAT_03a7c4b0);
  if (lVar24 != 0) {
    piVar1 = (int *)(lVar24 + 0x50);
    do {
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar20 = (long *)plVar39[0x13];
  plVar39[0x13] = 0;
  if (plVar20 != (long *)0x0) {
    plVar22 = plVar20 + 10;
    do {
      iVar13 = (int)*plVar22 + -1;
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar10) {
        *(int *)plVar22 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar20 + 0x10))();
    }
  }
  plVar39[0x13] = lVar24;
  lVar24 = FUN_00d48784(&local_80,plVar39[0x30],&DAT_03a7c4b0);
  if (lVar24 != 0) {
    piVar1 = (int *)(lVar24 + 0x50);
    do {
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar20 = (long *)plVar39[0x16];
  plVar39[0x16] = 0;
  if (plVar20 != (long *)0x0) {
    plVar22 = plVar20 + 10;
    do {
      iVar13 = (int)*plVar22 + -1;
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar10) {
        *(int *)plVar22 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar20 + 0x10))();
    }
  }
  plVar39[0x16] = lVar24;
  lVar24 = FUN_00d48784(&local_80,plVar39[0x30],&DAT_03a7c4b0);
  if (lVar24 != 0) {
    piVar1 = (int *)(lVar24 + 0x50);
    do {
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar20 = (long *)plVar39[0x19];
  plVar39[0x19] = 0;
  if (plVar20 != (long *)0x0) {
    plVar22 = plVar20 + 10;
    do {
      iVar13 = (int)*plVar22 + -1;
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar10) {
        *(int *)plVar22 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar20 + 0x10))();
    }
  }
  plVar39[0x19] = lVar24;
  *(undefined4 *)(plVar39 + 0xf) = 0;
  plVar39[0xb] = -0x3f15b8ab654a0c27;
  plVar39[0xc] = 0x200000000;
  *(undefined4 *)(plVar39 + 0x2c) = 0;
  *(undefined1 *)((long)plVar39 + 0x164) = 0;
  plVar39[0x2e] = 0;
  plVar39[0x2f] = 0;
  plVar39[1] = (long)param_4;
  plVar39[2] = (long)plVar39;
  plVar39[3] = 400;
  plVar39[4] = 0x10;
  *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
  do {
    cVar6 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar43,0x10);
    if (bVar10) {
      *(int *)plVar43 = (int)*plVar43 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  plVar39[0xb] = (long)puVar45;
  *(int *)(plVar39 + 0xc) = (int)lVar25;
  if (puVar45 == (undefined1 *)0xc0ea47549ab5f3d9) {
    *param_1 = plVar39;
    return;
  }
  if (*(ushort *)((long)piVar46 - (long)*piVar46) < 9) {
    uVar16 = 0;
  }
  else {
    uVar31 = (ulong)((ushort *)((long)piVar46 - (long)*piVar46))[4];
    uVar16 = 0;
    if (uVar31 != 0) {
      uVar16 = *(undefined4 *)((long)piVar46 + uVar31);
    }
  }
  *(undefined4 *)(plVar39 + 0xc) = uVar16;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar25 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar25;
  plVar43 = *(long **)(lVar25 + 0x290);
  if (plVar43 != (long *)0x0) {
    lVar25 = plVar43[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_016a79e4;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar21 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar21;
    }
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puVar32 = (undefined1 *)plVar43[0xe];
  uVar16 = 0;
  if (puVar32 != (undefined1 *)0x0) {
    uVar31 = (long)puVar32 - ((ulong)puVar32 >> 1 & 0x5555555555555555);
    uVar31 = (uVar31 & 0x3333333333333333) + (uVar31 >> 2 & 0x3333333333333333);
    uVar31 = (uVar31 + (uVar31 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar31 < 2) {
      puVar26 = (undefined1 *)((ulong)(puVar32 + -1) & (ulong)puVar45);
    }
    else {
      puVar26 = puVar45;
      if (puVar32 <= puVar45) {
        uVar37 = 0;
        if (puVar32 != (undefined1 *)0x0) {
          uVar37 = (ulong)puVar45 / (ulong)puVar32;
        }
        puVar26 = puVar45 + -(uVar37 * (long)puVar32);
      }
    }
    plVar20 = *(long **)(plVar43[0xd] + (long)puVar26 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar31 < 2) {
        do {
          if ((undefined1 *)plVar20[1] == puVar45) {
            if ((undefined1 *)plVar20[2] == puVar45) goto LAB_016a58c4;
          }
          else if ((undefined1 *)((ulong)plVar20[1] & (ulong)(puVar32 + -1)) != puVar26) {
            uVar16 = 0;
            break;
          }
          plVar20 = (long *)*plVar20;
          uVar16 = 0;
        } while (plVar20 != (long *)0x0);
        goto LAB_016a58f0;
      }
      do {
        puVar40 = (undefined1 *)plVar20[1];
        if (puVar40 == puVar45) {
          if ((undefined1 *)plVar20[2] == puVar45) goto LAB_016a58c4;
        }
        else {
          if (puVar32 <= puVar40) {
            uVar31 = 0;
            if (puVar32 != (undefined1 *)0x0) {
              uVar31 = (ulong)puVar40 / (ulong)puVar32;
            }
            puVar40 = puVar40 + -(uVar31 * (long)puVar32);
          }
          if (puVar40 != puVar26) break;
        }
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
    }
    uVar16 = 0;
  }
  goto LAB_016a58f0;
LAB_016a5c0c:
  puVar27 = (uint *)((long)piVar46 + (ulong)*(ushort *)((long)piVar46 + (0x16 - (long)*piVar46)));
  uVar42 = *(uint *)(plVar33 + 3);
  uVar31 = (ulong)uVar42;
  puVar27 = (uint *)((long)puVar27 + uVar31 * 4 + (ulong)*puVar27 + 4);
  piVar1 = (int *)((long)puVar27 + (ulong)*puVar27);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
     (uVar37 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar37 == 0)) {
    puVar45 = (undefined1 *)0x0;
  }
  else {
    puVar45 = *(undefined1 **)((long)piVar1 + uVar37);
    if (puVar45 == &DAT_cbf29ce484222645) goto LAB_016a5db8;
  }
  lVar25 = plVar50[0x16];
  if (lVar25 == 0) goto LAB_016a5cc0;
  plVar34 = *(long **)(lVar25 + 0x270);
  if (plVar34 == *(long **)(lVar25 + 0x278)) goto LAB_016a5cc0;
  iVar13 = 0;
  goto LAB_016a5c94;
  while( true ) {
    plVar34 = plVar34 + 1;
    iVar13 = iVar13 + 1;
    if (*(long **)(lVar25 + 0x278) == plVar34) break;
LAB_016a5c94:
    puVar23 = (undefined8 *)PTR_DAT_04379c88;
    if (*plVar34 != 0) {
      puVar23 = (undefined8 *)(*plVar34 + 0x58);
    }
    if ((undefined1 *)*puVar23 == puVar45) goto LAB_016a5cc4;
  }
LAB_016a5cc0:
  iVar13 = 0;
LAB_016a5cc4:
  FUN_02c2e33c(plVar50,iVar13,*(undefined8 *)(param_2 + 0x1a8));
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar25 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar25;
  plVar34 = *(long **)(lVar25 + 0x268);
  if (plVar34 != (long *)0x0) {
    lVar25 = plVar34[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_016a79e4;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar21 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar21;
    }
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_010c6160(*(undefined8 *)(param_2 + 0x1a0),0,plVar34);
  lVar25 = *(long *)(param_2 + 0x1a0);
  uVar21 = *(undefined8 *)(param_2 + 0x1a8);
  lVar17 = plVar39[0xe];
  *(undefined4 *)(lVar25 + 0x124) = 0;
  *(undefined2 *)(lVar25 + 0x128) = 0;
  *(undefined4 *)(lVar25 + 300) = 0;
  *(undefined4 *)(lVar25 + 0x134) = 0;
  FUN_02c33414(lVar25,uVar21);
  if (*(char *)(lVar17 + 0x7c) != '\0') {
    **(undefined2 **)(lVar17 + 0x58) = 0;
    *(undefined2 *)(lVar17 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar25,lVar17,uVar21,0,0);
  if (plVar34 != (long *)0x0) {
    lVar25 = plVar34[0xb];
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = iVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*plVar34 + 0x20))(plVar34);
    }
  }
LAB_016a5db8:
  puVar27 = (uint *)((long)piVar46 + (ulong)*(ushort *)((long)piVar46 + (0x1a - (long)*piVar46)));
  puVar27 = (uint *)((long)puVar27 + uVar31 * 4 + (ulong)*puVar27 + 4);
  piVar1 = (int *)((long)puVar27 + (ulong)*puVar27);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
     (uVar37 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar37 == 0)) {
    puVar45 = (undefined1 *)0x0;
LAB_016a5e14:
    lVar25 = plVar50[0x16];
    if (lVar25 != 0) {
      plVar34 = *(long **)(lVar25 + 0x270);
      if (plVar34 != *(long **)(lVar25 + 0x278)) {
        iVar13 = 0;
        do {
          puVar23 = (undefined8 *)PTR_DAT_04379c88;
          if (*plVar34 != 0) {
            puVar23 = (undefined8 *)(*plVar34 + 0x58);
          }
          if ((undefined1 *)*puVar23 == puVar45) goto LAB_016a5e6c;
          plVar34 = plVar34 + 1;
          iVar13 = iVar13 + 1;
        } while (*(long **)(lVar25 + 0x278) != plVar34);
      }
    }
    iVar13 = 0;
LAB_016a5e6c:
    FUN_02c2e33c(plVar50,iVar13,*(undefined8 *)(param_2 + 0x1a8));
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar25 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar25;
    plVar34 = *(long **)(lVar25 + 0x268);
    if (plVar34 != (long *)0x0) {
      lVar25 = plVar34[0xb];
      if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) {
LAB_016a79e4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar25 + 0x10) == 0) {
        uVar21 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
        *(undefined8 *)(lVar25 + 0x10) = uVar21;
      }
      piVar1 = (int *)(lVar25 + 0xc);
      do {
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    FUN_010c6160(*(undefined8 *)(param_2 + 0x1a0),0,plVar34);
    if (*(char *)((long)plVar34 + 0x7d) == '\0') {
      uVar37 = 0x37cd3e912f53;
    }
    else {
      uVar37 = 0x40cd3e913e9e;
    }
    local_80 = (undefined1 *)(uVar37 | 0xa4c0000000000000);
    FUN_010c70c8(*(undefined8 *)(param_2 + 0x1a0),1,&local_80);
    lVar25 = *(long *)(param_2 + 0x1a0);
    uVar21 = *(undefined8 *)(param_2 + 0x1a8);
    lVar17 = *plVar49;
    *(undefined4 *)(lVar25 + 0x124) = 0;
    *(undefined2 *)(lVar25 + 0x128) = 0;
    *(undefined4 *)(lVar25 + 300) = 0;
    *(undefined4 *)(lVar25 + 0x134) = 0;
    FUN_02c33414(lVar25,uVar21);
    if (*(char *)(lVar17 + 0x7c) != '\0') {
      **(undefined2 **)(lVar17 + 0x58) = 0;
      *(undefined2 *)(lVar17 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar25,lVar17,uVar21,0,0);
    lVar25 = plVar34[0xb];
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = iVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*plVar34 + 0x20))(plVar34);
    }
  }
  else {
    puVar45 = *(undefined1 **)((long)piVar1 + uVar37);
    if (puVar45 != &DAT_cbf29ce484222645) goto LAB_016a5e14;
  }
  puVar28 = (ushort *)((long)piVar46 - (long)*piVar46);
  if (*puVar28 < 0x15) {
LAB_016a64c4:
    *param_1 = 0;
    plVar49 = plVar50;
  }
  else {
    lVar25 = 0;
    if ((ulong)puVar28[10] != 0) {
      puVar27 = (uint *)((long)piVar46 + (ulong)puVar28[10]);
      lVar25 = (long)puVar27 + (ulong)*puVar27;
    }
    if (((*puVar28 < 0x19) || ((ulong)puVar28[0xc] == 0)) ||
       (puVar27 = (uint *)((long)piVar46 + (ulong)puVar28[0xc]),
       puVar27 = (uint *)((long)puVar27 + (ulong)*puVar27), puVar27 == (uint *)0x0))
    goto LAB_016a64c4;
    uVar12 = *puVar27;
    iVar13 = 1;
    if (uVar42 < uVar12) {
      uVar42 = 0;
      do {
        while( true ) {
          if (2 < uVar42) goto LAB_016a6608;
          piVar1 = (int *)((long)(puVar27 + uVar31 + 1) + (ulong)puVar27[uVar31 + 1]);
          puVar28 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar5 = *puVar28;
          if ((4 < uVar5) && ((ulong)puVar28[2] != 0)) break;
LAB_016a6084:
          uVar12 = *puVar27;
          uVar31 = uVar31 + 1;
          if (((uVar31 < uVar12) && (*(int *)(lVar25 + 4 + uVar31 * 4) != 0)) || (uVar12 <= uVar31))
          goto LAB_016a6608;
        }
        lVar17 = *(long *)((long)piVar1 + (ulong)puVar28[2]);
        uVar37 = (ulong)uVar42;
        if (lVar17 == 0x4218eeea9bfe8019) {
          if (uVar5 < 9) {
            lVar17 = 0;
          }
          else {
            lVar17 = 0;
            if ((ulong)puVar28[4] != 0) {
              puVar30 = (uint *)((long)piVar1 + (ulong)puVar28[4]);
              lVar17 = (long)puVar30 + (ulong)*puVar30;
            }
          }
          iVar13 = atoi((char *)(lVar17 + 4));
          if (uVar5 < 0xb) {
            lVar17 = 0;
          }
          else {
            lVar17 = 0;
            if ((ulong)puVar28[5] != 0) {
              puVar30 = (uint *)((long)piVar1 + (ulong)puVar28[5]);
              lVar17 = (long)puVar30 + (ulong)*puVar30;
            }
          }
          iVar14 = atoi((char *)(lVar17 + 4));
          *(undefined4 *)(plVar39 + uVar37 * 3 + 0x11) = 0;
          *(int *)((long)plVar39 + uVar37 * 0x18 + 0x8c) = iVar13;
          *(int *)(plVar39 + uVar37 * 3 + 0x12) = iVar14;
          if (((*PTR_DAT_04379558 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_04379558), iVar14 != 0)) {
            FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379558);
          }
          lVar17 = *(long *)PTR_DAT_04379560;
          *(long *)PTR_DAT_04379568 = lVar17;
          plVar49 = *(long **)(lVar17 + 0x280);
          if (plVar49 == (long *)0x0) {
            uVar16 = FUN_010da868(0,iVar13);
          }
          else {
            lVar17 = plVar49[0xb];
            if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_016a79e4;
            if (*(long *)(lVar17 + 0x10) == 0) {
              uVar21 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
              *(undefined8 *)(lVar17 + 0x10) = uVar21;
            }
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              cVar6 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar10) {
                *piVar1 = *piVar1 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            uVar16 = FUN_010da868(plVar49,iVar13);
            lVar17 = plVar49[0xb];
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar6 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar10) {
                *piVar1 = iVar13 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*plVar49 + 0x20))(plVar49);
            }
          }
          *(undefined4 *)((long)plVar39 + uVar37 * 0x18 + 0x94) = uVar16;
          uVar42 = uVar42 + 1;
          goto LAB_016a6084;
        }
        if (lVar17 == 0x56e50d419bfb3a2c) {
          if (uVar5 < 9) {
            lVar17 = 0;
          }
          else {
            lVar17 = 0;
            if ((ulong)puVar28[4] != 0) {
              puVar30 = (uint *)((long)piVar1 + (ulong)puVar28[4]);
              lVar17 = (long)puVar30 + (ulong)*puVar30;
            }
          }
          uVar12 = atoi((char *)(lVar17 + 4));
          if (uVar5 < 0xb) {
            lVar17 = 0;
          }
          else {
            lVar17 = 0;
            if ((ulong)puVar28[5] != 0) {
              puVar30 = (uint *)((long)piVar1 + (ulong)puVar28[5]);
              lVar17 = (long)puVar30 + (ulong)*puVar30;
            }
          }
          iVar13 = atoi((char *)(lVar17 + 4));
          *(undefined4 *)(plVar39 + uVar37 * 3 + 0x11) = 1;
          *(uint *)((long)plVar39 + uVar37 * 0x18 + 0x8c) = uVar12;
          *(int *)(plVar39 + uVar37 * 3 + 0x12) = iVar13;
          if (((*PTR_DAT_04379678 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379678), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379678);
          }
          lVar17 = *(long *)PTR_DAT_04379680;
          *(long *)PTR_DAT_04379688 = lVar17;
          plVar49 = *(long **)(lVar17 + 0xd0);
          if (plVar49 != (long *)0x0) {
            plVar34 = plVar49 + 10;
            do {
              cVar6 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar34,0x10);
              if (bVar10) {
                *(int *)plVar34 = (int)*plVar34 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          plVar34 = (long *)plVar49[0xb];
          if (plVar34 != (long *)0x0) {
            plVar33 = plVar34 + 10;
            do {
              cVar6 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
              if (bVar10) {
                *(int *)plVar33 = (int)*plVar33 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          plVar33 = plVar49 + 10;
          do {
            iVar13 = (int)*plVar33 + -1;
            cVar6 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar10) {
              *(int *)plVar33 = iVar13;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar13 == 0) {
            (**(code **)(*plVar49 + 0x10))();
            if (plVar34 == (long *)0x0) goto LAB_016a652c;
LAB_016a639c:
            bVar4 = *(byte *)(plVar34 + 0x11);
            if (bVar4 == 0) {
              iVar13 = 0;
            }
            else {
              iVar13 = 0;
              uVar48 = 0;
              do {
                lVar17 = (**(code **)(*plVar34 + 0x50))(plVar34,uVar48);
                uVar41 = FUN_02c6cf3c(*(undefined8 *)(lVar17 + 0x98));
                if ((((uVar41 & 1) == 0) &&
                    ((*(ushort *)(*(long *)(*(long *)(lVar17 + 0x98) + 0x10) + 4) >> 2 & 1) == 0))
                   && (uVar11 = FUN_02c6849c(), uVar11 == uVar12)) {
                  iVar13 = iVar13 + 1;
                }
                uVar48 = uVar48 + 1;
              } while (bVar4 != uVar48);
            }
            plVar49 = plVar34 + 10;
            do {
              iVar14 = (int)*plVar49 + -1;
              cVar6 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar49,0x10);
              if (bVar10) {
                *(int *)plVar49 = iVar14;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar14 == 0) {
              (**(code **)(*plVar34 + 0x10))(plVar34);
            }
          }
          else {
            if (plVar34 != (long *)0x0) goto LAB_016a639c;
LAB_016a652c:
            iVar13 = 0;
          }
          if (((*PTR_DAT_04379558 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_04379558), iVar14 != 0)) {
            FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379558);
          }
          lVar17 = *(long *)PTR_DAT_04379560;
          *(long *)PTR_DAT_04379568 = lVar17;
          plVar49 = *(long **)(lVar17 + 0x240);
          if (plVar49 != (long *)0x0) {
            lVar17 = plVar49[0xb];
            if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_016a79e4;
            if (*(long *)(lVar17 + 0x10) == 0) {
              uVar21 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
              *(undefined8 *)(lVar17 + 0x10) = uVar21;
            }
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              cVar6 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar10) {
                *piVar1 = *piVar1 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          if ((int)uVar12 < 0x38b) {
            uVar5 = *(ushort *)((long)plVar49 + (ulong)uVar12 * 2 + 0x54760);
            if (plVar49 != (long *)0x0) {
              lVar17 = plVar49[0xb];
              piVar1 = (int *)(lVar17 + 0xc);
              do {
                iVar14 = *piVar1;
                cVar6 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar10) {
                  *piVar1 = iVar14 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar14 + -1 == 0) {
                *(undefined8 *)(lVar17 + 0x18) = 0;
                (**(code **)(*plVar49 + 0x20))(plVar49);
              }
            }
            *(uint *)((long)plVar39 + uVar37 * 0x18 + 0x94) = iVar13 + (uint)uVar5;
            uVar42 = uVar42 + 1;
            goto LAB_016a6084;
          }
          goto LAB_016a79e4;
        }
        if (lVar17 != 0x2557279b949c81d6) goto LAB_016a6084;
        if (((uVar5 < 7) || ((ulong)puVar28[3] == 0)) ||
           (*(long *)((long)piVar1 + (ulong)puVar28[3]) != -0x1a1cb288238a1d11)) {
          if (((*PTR_DAT_04379558 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379558);
          }
          lVar17 = *(long *)PTR_DAT_04379560;
          *(long *)PTR_DAT_04379568 = lVar17;
          plVar49 = *(long **)(lVar17 + 0x228);
          if (plVar49 != (long *)0x0) {
            lVar17 = plVar49[0xb];
            if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_016a79e4;
            if (*(long *)(lVar17 + 0x10) == 0) {
              uVar21 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
              *(undefined8 *)(lVar17 + 0x10) = uVar21;
            }
            piVar2 = (int *)(lVar17 + 0xc);
            do {
              cVar6 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar10) {
                *piVar2 = *piVar2 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
             (uVar41 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar41 == 0)) {
            lVar17 = 0;
          }
          else {
            puVar30 = (uint *)((long)piVar1 + uVar41);
            lVar17 = (long)puVar30 + (ulong)*puVar30;
          }
          local_70 = strlen((char *)(lVar17 + 4));
          bVar4 = *(byte *)(lVar17 + 4);
          local_80 = &DAT_cbf29ce484222645;
          if (bVar4 != 0) {
            local_80 = &DAT_cbf29ce484222645;
            pbVar38 = (byte *)(lVar17 + 5);
            do {
              local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar4) * 0x100000001b3);
              bVar4 = *pbVar38;
              pbVar38 = pbVar38 + 1;
            } while (bVar4 != 0);
          }
          local_68 = (long *)0x0;
          pcStack_78 = (char *)(lVar17 + 4);
          uVar16 = FUN_010f5878(plVar49,&local_80);
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) {
            lVar17 = 0;
          }
          else {
            uVar41 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5];
            lVar17 = 0;
            if (uVar41 != 0) {
              puVar30 = (uint *)((long)piVar1 + uVar41);
              lVar17 = (long)puVar30 + (ulong)*puVar30;
            }
          }
          iVar13 = atoi((char *)(lVar17 + 4));
          *(undefined4 *)(plVar39 + uVar37 * 3 + 0x11) = 2;
          *(int *)(plVar39 + uVar37 * 3 + 0x12) = iVar13;
          *(undefined4 *)((long)plVar39 + uVar37 * 0x18 + 0x94) = uVar16;
          if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) {
            puVar45 = (undefined1 *)0x0;
LAB_016a740c:
            lVar17 = plVar50[0x16];
            if (lVar17 != 0) {
              plVar34 = *(long **)(lVar17 + 0x270);
              if (plVar34 != *(long **)(lVar17 + 0x278)) {
                iVar13 = 0;
                do {
                  puVar23 = (undefined8 *)PTR_DAT_04379c88;
                  if (*plVar34 != 0) {
                    puVar23 = (undefined8 *)(*plVar34 + 0x58);
                  }
                  if ((undefined1 *)*puVar23 == puVar45) goto LAB_016a7470;
                  plVar34 = plVar34 + 1;
                  iVar13 = iVar13 + 1;
                } while (*(long **)(lVar17 + 0x278) != plVar34);
              }
            }
            iVar13 = 0;
LAB_016a7470:
            FUN_02c2e33c(plVar50,iVar13,plVar39[uVar37 * 3 + 0x13]);
          }
          else {
            uVar41 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7];
            puVar45 = (undefined1 *)0x0;
            if ((uVar41 == 0) ||
               (puVar45 = *(undefined1 **)((long)piVar1 + uVar41), puVar45 != &DAT_cbf29ce484222645)
               ) goto LAB_016a740c;
          }
          uVar42 = uVar42 + 1;
          if (plVar49 != (long *)0x0) {
            lVar17 = plVar49[0xb];
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar6 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar10) {
                *piVar1 = iVar13 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*plVar49 + 0x20))(plVar49);
            }
          }
          goto LAB_016a6084;
        }
        uVar31 = uVar31 + 1;
      } while (uVar31 < uVar12);
LAB_016a6608:
      iVar13 = 1;
      if (uVar42 < 4) {
        iVar13 = uVar42 + 1;
      }
    }
    *(int *)(plVar39 + 0xf) = iVar13;
    if ((0x10 < *(ushort *)((long)piVar46 - (long)*piVar46)) &&
       (uVar31 = (ulong)((ushort *)((long)piVar46 - (long)*piVar46))[8], uVar31 != 0)) {
      uVar37 = (ulong)*(uint *)((long)piVar46 + uVar31);
      puVar27 = (uint *)((long)((long)piVar46 + uVar31) + uVar37);
      if (puVar27 != (uint *)0x0) {
        lVar17 = plVar39[0x1a];
        uVar41 = (ulong)*puVar27;
        plVar49 = (long *)plVar39[0x1b];
        uVar47 = (long)plVar49 - lVar17 >> 3;
        lVar25 = uVar47 - uVar41;
        if (uVar47 < uVar41) {
          uVar44 = uVar41 - uVar47;
          if ((ulong)(plVar39[0x1c] - (long)plVar49 >> 3) < uVar44) {
            uVar35 = plVar39[0x1e];
            if (0x7ffffffffffffffe < uVar35) {
              uVar35 = 0x7fffffffffffffff;
            }
            if (uVar35 < uVar41) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar17 = plVar39[0x1c] - lVar17;
            if ((ulong)(lVar17 >> 3) < uVar35 >> 1) {
              uVar35 = lVar17 >> 2;
              if (uVar41 <= uVar35) goto LAB_016a66bc;
            }
            else {
LAB_016a66bc:
              uVar41 = uVar35;
              if (uVar35 == 0) {
                lVar17 = 0;
                goto LAB_016a66e4;
              }
            }
            lVar17 = (**(code **)(*(long *)*plVar36 + 0x10))((long *)*plVar36,uVar41 << 3,8);
            uVar35 = uVar41;
            if (lVar17 == 0) {
              (**(code **)(*(long *)*plVar36 + 0xb8))();
            }
LAB_016a66e4:
            lVar19 = lVar17 + uVar47 * 8;
            FUN_016ae81c(plVar36,lVar19);
            lVar24 = lVar19 + 8;
            if (uVar44 != 1) {
              FUN_016ae81c(plVar36,lVar24);
              lVar24 = lVar19 + 0x10;
              if (uVar44 != 2) {
                FUN_016ae81c(plVar36,lVar24);
                lVar24 = lVar19 + 0x18;
                if (uVar44 != 3) {
                  FUN_016ae81c(plVar36,lVar24);
                  lVar24 = lVar19 + 0x20;
                  if (uVar44 != 4) {
                    FUN_016ae81c(plVar36,lVar24);
                    lVar24 = lVar19 + 0x28;
                    if (uVar44 != 5) {
                      lVar25 = lVar25 + 5;
                      do {
                        FUN_016ae81c(plVar36,lVar24);
                        lVar24 = lVar24 + 8;
                        bVar10 = lVar25 != -1;
                        lVar25 = lVar25 + 1;
                      } while (bVar10);
                    }
                  }
                }
              }
            }
            plVar49 = (long *)plVar39[0x1a];
            plVar34 = (long *)plVar39[0x1b];
            if (plVar34 == plVar49) {
              plVar34 = plVar49;
            }
            else {
              do {
                lVar19 = lVar19 + -8;
                plVar34 = plVar34 + -1;
                FUN_016ae8e8(plVar36,lVar19,plVar34);
              } while (plVar49 != plVar34);
              plVar34 = (long *)plVar39[0x1a];
              plVar49 = (long *)plVar39[0x1b];
            }
            lVar25 = plVar39[0x1c];
            plVar39[0x1c] = lVar17 + uVar35 * 8;
            plVar39[0x1a] = lVar19;
            plVar39[0x1b] = lVar24;
joined_r0x016a6770:
            if (plVar49 != plVar34) {
              do {
                plVar49 = plVar49 + -1;
                plVar33 = (long *)*plVar49;
                if (plVar33 != (long *)0x0) {
                  plVar3 = plVar33 + 10;
                  do {
                    iVar13 = (int)*plVar3 + -1;
                    cVar6 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                    if (bVar10) {
                      *(int *)plVar3 = iVar13;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar13 == 0) goto LAB_016a7ac8;
                }
                if (plVar49 == plVar34) break;
              } while( true );
            }
            if (plVar34 != (long *)0x0) {
              plVar36 = (long *)*plVar36;
              uVar41 = (**(code **)(*plVar36 + 0xc0))(plVar36);
              if ((uVar41 & 1) != 0) {
                if (*(char *)(lVar18 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar18 + 0x38d488) = 1;
                  *(undefined8 *)(lVar18 + 0x38d478) = 0;
                  *(undefined8 *)(lVar18 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar18 + 0x38d480)) {
                  FUN_02bcc824(plVar36,plVar34,lVar25 - (long)plVar34,8);
                  goto LAB_016a6778;
                }
              }
              (**(code **)(*plVar36 + 0x18))(plVar36,plVar34,lVar25 - (long)plVar34,8);
            }
            goto LAB_016a6778;
          }
          do {
            FUN_016ae81c(plVar36,plVar49);
            plVar49 = (long *)(plVar39[0x1b] + 8);
            bVar10 = lVar25 != -1;
            lVar25 = lVar25 + 1;
            plVar39[0x1b] = (long)plVar49;
          } while (bVar10);
        }
        else if (lVar25 != 0) {
          plVar34 = (long *)(lVar17 + uVar41 * 8);
          if (plVar34 != plVar49) {
            plVar36 = (long *)plVar49[-1];
            if (plVar36 != (long *)0x0) {
              plVar33 = plVar36 + 10;
              do {
                iVar13 = (int)*plVar33 + -1;
                cVar6 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                if (bVar10) {
                  *(int *)plVar33 = iVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar13 == 0) {
                (**(code **)(*plVar36 + 0x10))();
              }
            }
            if (plVar49 + -1 != plVar34) {
              plVar36 = (long *)plVar49[-2];
              if (plVar36 != (long *)0x0) {
                plVar33 = plVar36 + 10;
                do {
                  iVar13 = (int)*plVar33 + -1;
                  cVar6 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                  if (bVar10) {
                    *(int *)plVar33 = iVar13;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar13 == 0) {
                  (**(code **)(*plVar36 + 0x10))();
                }
              }
              if (plVar49 + -2 != plVar34) {
                plVar36 = (long *)plVar49[-3];
                if (plVar36 != (long *)0x0) {
                  plVar33 = plVar36 + 10;
                  do {
                    iVar13 = (int)*plVar33 + -1;
                    cVar6 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                    if (bVar10) {
                      *(int *)plVar33 = iVar13;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar13 == 0) {
                    (**(code **)(*plVar36 + 0x10))();
                  }
                }
                if (plVar49 + -3 != plVar34) {
                  plVar36 = (long *)plVar49[-4];
                  if (plVar36 != (long *)0x0) {
                    plVar33 = plVar36 + 10;
                    do {
                      iVar13 = (int)*plVar33 + -1;
                      cVar6 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                      if (bVar10) {
                        *(int *)plVar33 = iVar13;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (iVar13 == 0) {
                      (**(code **)(*plVar36 + 0x10))();
                    }
                  }
                  if (plVar49 + -4 != plVar34) {
                    plVar36 = (long *)plVar49[-5];
                    if (plVar36 != (long *)0x0) {
                      plVar33 = plVar36 + 10;
                      do {
                        iVar13 = (int)*plVar33 + -1;
                        cVar6 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                        if (bVar10) {
                          *(int *)plVar33 = iVar13;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if (iVar13 == 0) {
                        (**(code **)(*plVar36 + 0x10))();
                      }
                    }
                    if (plVar49 + -5 != plVar34) {
                      plVar49 = plVar49 + -6;
                      plVar36 = (long *)*plVar49;
                      if (plVar36 == (long *)0x0) goto LAB_016a7a9c;
                      plVar33 = plVar36 + 10;
                      do {
                        iVar13 = (int)*plVar33 + -1;
                        cVar6 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                        if (bVar10) {
                          *(int *)plVar33 = iVar13;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      do {
                        if (iVar13 == 0) {
                          (**(code **)(*plVar36 + 0x10))();
                        }
LAB_016a7a9c:
                        do {
                          if (plVar49 == plVar34) goto LAB_016a7128;
                          plVar49 = plVar49 + -1;
                          plVar36 = (long *)*plVar49;
                        } while (plVar36 == (long *)0x0);
                        plVar33 = plVar36 + 10;
                        do {
                          iVar13 = (int)*plVar33 + -1;
                          cVar6 = '\x01';
                          bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                          if (bVar10) {
                            *(int *)plVar33 = iVar13;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                      } while( true );
                    }
                  }
                }
              }
            }
          }
LAB_016a7128:
          plVar39[0x1b] = (long)plVar34;
        }
LAB_016a6778:
        plVar49 = (long *)FUN_010badf8(plVar20 + 0xb,&DAT_03a7c4d0);
        plVar49 = (long *)*plVar49;
        if (plVar49 != (long *)0x0) {
          plVar34 = plVar49 + 10;
          do {
            cVar6 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar10) {
              *(int *)plVar34 = (int)*plVar34 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (plVar49[0xb] == 0) {
          plVar34 = (long *)0x0;
        }
        else {
          plVar34 = *(long **)(plVar49[0xb] + 0x68);
          if (plVar34 != (long *)0x0) {
            plVar36 = plVar34 + 10;
            do {
              cVar6 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar36,0x10);
              if (bVar10) {
                *(int *)plVar36 = (int)*plVar36 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
        }
        plVar36 = plVar49 + 10;
        do {
          iVar13 = (int)*plVar36 + -1;
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar10) {
            *(int *)plVar36 = iVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 == 0) {
          (**(code **)(*plVar49 + 0x10))();
        }
        if (*puVar27 != 0) {
          uVar41 = 0;
          lVar25 = (long)piVar46 + uVar37 + uVar31 + 0xd;
          do {
            uVar31 = (ulong)puVar27[uVar41 + 1];
            piVar1 = (int *)((long)(puVar27 + uVar41 + 1) + uVar31);
            puVar28 = (ushort *)((long)piVar1 - (long)*piVar1);
            if ((4 < *puVar28) && ((ulong)puVar28[2] != 0)) {
              lVar17 = *(long *)((long)piVar1 + (ulong)puVar28[2]);
              uVar37 = (ulong)*(uint *)(plVar39 + 0x21);
              if (lVar17 == 0x6d35e2eab45c0f6e) {
                puVar30 = (uint *)((long)piVar1 + (ulong)puVar28[3]);
                uVar42 = *puVar30;
                puVar29 = (uint *)((long)puVar30 + (ulong)uVar42 + 4);
                iVar13 = atoi((char *)((long)puVar29 + (ulong)*puVar29 + 4));
                puVar30 = (uint *)((long)puVar30 + (ulong)uVar42 + 8);
                iVar14 = atoi((char *)((long)puVar30 + (ulong)*puVar30 + 4));
                *(undefined4 *)(plVar39 + uVar37 * 3 + 0x22) = 0;
                *(int *)((long)plVar39 + uVar37 * 0x18 + 0x114) = iVar13;
                puVar30 = (uint *)((long)piVar1 +
                                  (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
                puVar30 = (uint *)((long)puVar30 + (ulong)*puVar30 + 8);
                iVar15 = atoi((char *)((long)puVar30 + (ulong)*puVar30 + 4));
                *(int *)(plVar39 + uVar37 * 3 + 0x23) = iVar15;
                lVar17 = plVar34[0x16];
                if (lVar17 != 0) {
                  plVar49 = *(long **)(lVar17 + 0x270);
                  if (plVar49 != *(long **)(lVar17 + 0x278)) {
                    iVar15 = 0;
                    do {
                      plVar36 = (long *)PTR_DAT_04379c88;
                      if (*plVar49 != 0) {
                        plVar36 = (long *)(*plVar49 + 0x58);
                      }
                      if (*plVar36 == 0x7a46ecd7a0f8fe20) goto LAB_016a69e4;
                      plVar49 = plVar49 + 1;
                      iVar15 = iVar15 + 1;
                    } while (*(long **)(lVar17 + 0x278) != plVar49);
                  }
                }
                iVar15 = 0;
LAB_016a69e4:
                FUN_02c2e33c(plVar34,iVar15,*(undefined8 *)(param_2 + 0x1a8));
                plVar49 = (long *)FUN_00d48784(&local_80,plVar39[0x30],&DAT_03a7c4b0);
                if (plVar49 != (long *)0x0) {
                  plVar36 = plVar49 + 10;
                  do {
                    cVar6 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(plVar36,0x10);
                    if (bVar10) {
                      *(int *)plVar36 = (int)*plVar36 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                }
                FUN_02c3865c(*(undefined8 *)(param_2 + 0x1a0),0,iVar13,iVar14);
                lVar17 = *(long *)(param_2 + 0x1a0);
                uVar21 = *(undefined8 *)(param_2 + 0x1a8);
                *(undefined4 *)(lVar17 + 0x124) = 0;
                *(undefined2 *)(lVar17 + 0x128) = 0;
                *(undefined4 *)(lVar17 + 300) = 0;
                *(undefined4 *)(lVar17 + 0x134) = 0;
                FUN_02c33414(lVar17,uVar21);
                if (*(char *)((long)plVar49 + 0x7c) != '\0') {
                  *(undefined2 *)plVar49[0xb] = 0;
                  *(undefined2 *)((long)plVar49 + 0x7a) = 0;
                }
                FUN_02c338a4(lVar17,plVar49,uVar21,0,0);
                plVar36 = plVar49 + 10;
                lVar17 = plVar39[0x1a];
                do {
                  cVar6 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar36,0x10);
                  if (bVar10) {
                    *(int *)plVar36 = (int)*plVar36 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                plVar33 = *(long **)(lVar17 + uVar37 * 8);
                *(long **)(lVar17 + uVar37 * 8) = plVar49;
                if (plVar33 != (long *)0x0) {
                  plVar3 = plVar33 + 10;
                  do {
                    iVar13 = (int)*plVar3 + -1;
                    cVar6 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                    if (bVar10) {
                      *(int *)plVar3 = iVar13;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar13 == 0) {
                    (**(code **)(*plVar33 + 0x10))();
                  }
                }
                *(int *)(plVar39 + 0x21) = (int)plVar39[0x21] + 1;
                do {
                  iVar13 = (int)*plVar36 + -1;
                  cVar6 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar36,0x10);
                  if (bVar10) {
                    *(int *)plVar36 = iVar13;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar13 == 0) {
                  lVar17 = *plVar49;
LAB_016a6f54:
                  (**(code **)(lVar17 + 0x10))(plVar49);
                }
              }
              else if (lVar17 == -0xfe51864faeb41cc) {
                plVar49 = (long *)FUN_00d48784(&local_80,plVar39[0x30],&DAT_03a7c4b0);
                if (plVar49 != (long *)0x0) {
                  plVar36 = plVar49 + 10;
                  do {
                    cVar6 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(plVar36,0x10);
                    if (bVar10) {
                      *(int *)plVar36 = (int)*plVar36 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                }
                uVar47 = (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1));
                puVar30 = (uint *)((long)piVar1 + uVar47);
                uVar44 = (ulong)*puVar30;
                puVar30 = (uint *)((long)puVar30 + uVar44 + 4);
                uVar35 = (ulong)*puVar30;
                bVar4 = *(byte *)((long)puVar30 + uVar35 + 4);
                puVar45 = &DAT_cbf29ce484222645;
                if (bVar4 != 0) {
                  puVar45 = &DAT_cbf29ce484222645;
                  pbVar38 = (byte *)(lVar25 + uVar35 + uVar44 + uVar47 + uVar31);
                  do {
                    puVar45 = (undefined1 *)(((ulong)puVar45 ^ (ulong)bVar4) * 0x100000001b3);
                    bVar4 = *pbVar38;
                    pbVar38 = pbVar38 + 1;
                  } while (bVar4 != 0);
                }
                lVar17 = plVar50[0x16];
                if (lVar17 != 0) {
                  plVar36 = *(long **)(lVar17 + 0x270);
                  if (plVar36 != *(long **)(lVar17 + 0x278)) {
                    iVar13 = 0;
                    do {
                      puVar23 = (undefined8 *)PTR_DAT_04379c88;
                      if (*plVar36 != 0) {
                        puVar23 = (undefined8 *)(*plVar36 + 0x58);
                      }
                      if ((undefined1 *)*puVar23 == puVar45) goto LAB_016a6e5c;
                      plVar36 = plVar36 + 1;
                      iVar13 = iVar13 + 1;
                    } while (*(long **)(lVar17 + 0x278) != plVar36);
                  }
                }
                iVar13 = 0;
LAB_016a6e5c:
                FUN_02c2e33c(plVar50,iVar13,plVar49);
                if (plVar49 != (long *)0x0) {
                  plVar36 = plVar49 + 10;
                  do {
                    cVar6 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(plVar36,0x10);
                    if (bVar10) {
                      *(int *)plVar36 = (int)*plVar36 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                }
                plVar36 = (long *)plVar39[uVar37 * 3 + 0x24];
                plVar39[uVar37 * 3 + 0x24] = (long)plVar49;
                if (plVar36 != (long *)0x0) {
                  plVar33 = plVar36 + 10;
                  do {
                    iVar13 = (int)*plVar33 + -1;
                    cVar6 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                    if (bVar10) {
                      *(int *)plVar33 = iVar13;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar13 == 0) {
                    (**(code **)(*plVar36 + 0x10))();
                  }
                }
                *(undefined4 *)(plVar39 + uVar37 * 3 + 0x22) = 1;
                lVar17 = plVar39[0x1a];
                if (plVar49 != (long *)0x0) {
                  plVar36 = plVar49 + 10;
                  do {
                    cVar6 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(plVar36,0x10);
                    if (bVar10) {
                      *(int *)plVar36 = (int)*plVar36 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                }
                plVar36 = *(long **)(lVar17 + uVar37 * 8);
                *(long **)(lVar17 + uVar37 * 8) = plVar49;
                if (plVar36 != (long *)0x0) {
                  plVar33 = plVar36 + 10;
                  do {
                    iVar13 = (int)*plVar33 + -1;
                    cVar6 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                    if (bVar10) {
                      *(int *)plVar33 = iVar13;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar13 == 0) {
                    (**(code **)(*plVar36 + 0x10))();
                  }
                }
                *(int *)(plVar39 + 0x21) = (int)plVar39[0x21] + 1;
                if (plVar49 != (long *)0x0) {
                  plVar36 = plVar49 + 10;
                  do {
                    iVar13 = (int)*plVar36 + -1;
                    cVar6 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(plVar36,0x10);
                    if (bVar10) {
                      *(int *)plVar36 = iVar13;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar13 == 0) {
                    lVar17 = *plVar49;
                    goto LAB_016a6f54;
                  }
                }
              }
            }
            uVar41 = uVar41 + 1;
            lVar25 = lVar25 + 4;
          } while (uVar41 < *puVar27);
        }
        if (plVar34 != (long *)0x0) {
          plVar49 = plVar34 + 10;
          do {
            iVar13 = (int)*plVar49 + -1;
            cVar6 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar49,0x10);
            if (bVar10) {
              *(int *)plVar49 = iVar13;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar13 == 0) {
            (**(code **)(*plVar34 + 0x10))(plVar34);
          }
        }
      }
    }
    puVar23 = (undefined8 *)FUN_010badf8(plVar20 + 0xb,&DAT_03a7c4c8);
    plVar34 = (long *)*puVar23;
    if (plVar34 != (long *)0x0) {
      plVar49 = plVar34 + 10;
      do {
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar49,0x10);
        if (bVar10) {
          *(int *)plVar49 = (int)*plVar49 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (plVar34[0xb] == 0) {
      plVar49 = (long *)0x0;
    }
    else {
      plVar49 = *(long **)(plVar34[0xb] + 0x68);
      if (plVar49 != (long *)0x0) {
        plVar36 = plVar49 + 10;
        do {
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar10) {
            *(int *)plVar36 = (int)*plVar36 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
    if (plVar50 != (long *)0x0) {
      plVar36 = plVar50 + 10;
      do {
        iVar13 = (int)*plVar36 + -1;
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar36,0x10);
        if (bVar10) {
          *(int *)plVar36 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 == 0) {
        (**(code **)(*plVar50 + 0x10))(plVar50);
      }
    }
    plVar36 = plVar34 + 10;
    do {
      iVar13 = (int)*plVar36 + -1;
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar10) {
        *(int *)plVar36 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar34 + 0x10))(plVar34);
    }
    if (*(ushort *)((long)piVar46 - (long)*piVar46) < 0xf) {
      puVar45 = (undefined1 *)0x0;
LAB_016a6c6c:
      lVar25 = plVar49[0x16];
      if (lVar25 != 0) {
        plVar34 = *(long **)(lVar25 + 0x270);
        if (plVar34 != *(long **)(lVar25 + 0x278)) {
          iVar13 = 0;
          do {
            puVar23 = (undefined8 *)PTR_DAT_04379c88;
            if (*plVar34 != 0) {
              puVar23 = (undefined8 *)(*plVar34 + 0x58);
            }
            if ((undefined1 *)*puVar23 == puVar45) goto LAB_016a6cc4;
            plVar34 = plVar34 + 1;
            iVar13 = iVar13 + 1;
          } while (*(long **)(lVar25 + 0x278) != plVar34);
        }
      }
      iVar13 = 0;
LAB_016a6cc4:
      FUN_02c2e33c(plVar49,iVar13,plVar39[0x2b]);
    }
    else {
      uVar31 = (ulong)((ushort *)((long)piVar46 - (long)*piVar46))[7];
      puVar45 = (undefined1 *)0x0;
      if ((uVar31 == 0) ||
         (puVar45 = *(undefined1 **)((long)piVar46 + uVar31), puVar45 != &DAT_cbf29ce484222645))
      goto LAB_016a6c6c;
    }
    *param_1 = plVar39;
    plVar39 = (long *)0x0;
  }
  if (plVar49 != (long *)0x0) {
    plVar34 = plVar49 + 10;
    do {
      iVar13 = (int)*plVar34 + -1;
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar34,0x10);
      if (bVar10) {
        *(int *)plVar34 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar49 + 0x10))(plVar49);
    }
  }
  if (plVar22 != (long *)0x0) {
    plVar49 = plVar22 + 10;
    do {
      iVar13 = (int)*plVar49 + -1;
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar49,0x10);
      if (bVar10) {
        *(int *)plVar49 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar22 + 0x10))();
    }
  }
  goto joined_r0x016a6d18;
LAB_016a7ac8:
  (**(code **)(*plVar33 + 0x10))();
  goto joined_r0x016a6770;
LAB_016a58c4:
  bVar4 = (char)plVar20[3] + 1;
  if (bVar4 < 3) {
    uVar16 = *(undefined4 *)(&DAT_03a7c4e4 + (long)(char)bVar4 * 4);
  }
  else {
    uVar16 = 2;
  }
LAB_016a58f0:
  *(undefined4 *)(plVar39 + 0x2c) = uVar16;
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379678), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar25 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar25;
  plVar20 = _DAT_00000060;
  plVar22 = *(long **)(lVar25 + 0xd0);
  if (plVar22 == (long *)0x0) {
    if (_DAT_00000060 != (long *)0x0) {
      plVar22 = _DAT_00000060 + 10;
      do {
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar10) {
          *(int *)plVar22 = (int)*plVar22 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
  }
  else {
    plVar50 = plVar22 + 10;
    do {
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar50,0x10);
      if (bVar10) {
        *(int *)plVar50 = (int)*plVar50 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar20 = (long *)plVar22[0xc];
    if (plVar20 != (long *)0x0) {
      plVar33 = plVar20 + 10;
      do {
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar10) {
          *(int *)plVar33 = (int)*plVar33 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    do {
      iVar13 = (int)*plVar50 + -1;
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar50,0x10);
      if (bVar10) {
        *(int *)plVar50 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar22 + 0x10))();
    }
  }
  if ((4 < *(ushort *)((long)piVar46 - (long)*piVar46)) &&
     (uVar31 = (ulong)((ushort *)((long)piVar46 - (long)*piVar46))[2], uVar31 != 0)) {
    lVar25 = *(long *)((long)piVar46 + uVar31);
    if (lVar25 != 0x68d97d277752b795) goto LAB_016a5b30;
    puVar23 = (undefined8 *)FUN_010badf8(plVar20 + 0xb,&DAT_03a7c4c0);
    plVar22 = (long *)*puVar23;
    if (plVar22 != (long *)0x0) {
      plVar50 = plVar22 + 10;
      do {
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar50,0x10);
        if (bVar10) {
          *(int *)plVar50 = (int)*plVar50 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    uVar16 = 1;
    do {
      *(undefined4 *)((long)plVar39 + 100) = uVar16;
      if (plVar22[0xb] == 0) {
        plVar50 = (long *)0x0;
      }
      else {
        plVar50 = *(long **)(plVar22[0xb] + 0x68);
        if (plVar50 != (long *)0x0) {
          plVar33 = plVar50 + 10;
          do {
            cVar6 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar10) {
              *(int *)plVar33 = (int)*plVar33 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
      }
      if (*(ushort *)((long)piVar46 - (long)*piVar46) < 0xd) {
        lVar25 = 0;
      }
      else {
        uVar31 = (ulong)((ushort *)((long)piVar46 - (long)*piVar46))[6];
        lVar25 = 0;
        if (uVar31 != 0) {
          lVar25 = *(long *)((long)piVar46 + uVar31);
        }
      }
      lVar17 = plVar50[0x16];
      if (lVar17 != 0) {
        plVar33 = *(long **)(lVar17 + 0x270);
        if (plVar33 != *(long **)(lVar17 + 0x278)) {
          iVar13 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar33 != 0) {
              plVar3 = (long *)(*plVar33 + 0x58);
            }
            if (*plVar3 == lVar25) goto LAB_016a5a70;
            plVar33 = plVar33 + 1;
            iVar13 = iVar13 + 1;
          } while (*(long **)(lVar17 + 0x278) != plVar33);
        }
      }
      iVar13 = 0;
LAB_016a5a70:
      FUN_02c2e33c(plVar50,iVar13,*plVar34);
      puVar32 = *(undefined1 **)(param_2 + 0x140);
      if (puVar32 != (undefined1 *)0x0) {
        uVar31 = (long)puVar32 - ((ulong)puVar32 >> 1 & 0x5555555555555555);
        uVar31 = (uVar31 & 0x3333333333333333) + (uVar31 >> 2 & 0x3333333333333333);
        uVar31 = (uVar31 + (uVar31 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar31 < 2) {
          puVar26 = (undefined1 *)((ulong)(puVar32 + -1) & (ulong)puVar45);
        }
        else {
          puVar26 = puVar45;
          if (puVar32 <= puVar45) {
            uVar37 = 0;
            if (puVar32 != (undefined1 *)0x0) {
              uVar37 = (ulong)puVar45 / (ulong)puVar32;
            }
            puVar26 = puVar45 + -(uVar37 * (long)puVar32);
          }
        }
        plVar33 = *(long **)(*(long *)(param_2 + 0x138) + (long)puVar26 * 8);
        if ((plVar33 != (long *)0x0) && (plVar33 = (long *)*plVar33, plVar33 != (long *)0x0)) {
          if (uVar31 < 2) {
            do {
              if ((undefined1 *)plVar33[1] == puVar45) {
                if ((undefined1 *)plVar33[2] == puVar45) goto LAB_016a5c0c;
              }
              else if ((undefined1 *)((ulong)plVar33[1] & (ulong)(puVar32 + -1)) != puVar26) break;
              plVar33 = (long *)*plVar33;
            } while (plVar33 != (long *)0x0);
          }
          else {
            do {
              puVar40 = (undefined1 *)plVar33[1];
              if (puVar40 == puVar45) {
                if ((undefined1 *)plVar33[2] == puVar45) goto LAB_016a5c0c;
              }
              else {
                if (puVar32 <= puVar40) {
                  uVar31 = 0;
                  if (puVar32 != (undefined1 *)0x0) {
                    uVar31 = (ulong)puVar40 / (ulong)puVar32;
                  }
                  puVar40 = puVar40 + -(uVar31 * (long)puVar32);
                }
                if (puVar40 != puVar26) break;
              }
              plVar33 = (long *)*plVar33;
            } while (plVar33 != (long *)0x0);
          }
        }
      }
      FUN_016ae810();
      lVar25 = extraout_x8;
LAB_016a5b30:
      if (lVar25 != -0x101ce9153310dc68 && lVar25 != -0x1b2f856691a10a18) break;
      puVar23 = (undefined8 *)FUN_010badf8(plVar20 + 0xb,&DAT_03a7c4b8);
      plVar22 = (long *)*puVar23;
      if (plVar22 != (long *)0x0) {
        plVar50 = plVar22 + 10;
        do {
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar50,0x10);
          if (bVar10) {
            *(int *)plVar50 = (int)*plVar50 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      uVar16 = 0;
    } while( true );
  }
  *param_1 = 0;
joined_r0x016a6d18:
  if (plVar20 != (long *)0x0) {
    plVar49 = plVar20 + 10;
    do {
      iVar13 = (int)*plVar49 + -1;
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar49,0x10);
      if (bVar10) {
        *(int *)plVar49 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
  if (plVar43 != (long *)0x0) {
    lVar25 = plVar43[0xb];
    piVar46 = (int *)(lVar25 + 0xc);
    do {
      iVar13 = *piVar46;
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar46,0x10);
      if (bVar10) {
        *piVar46 = iVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*plVar43 + 0x20))(plVar43);
    }
  }
  if (plVar39 == (long *)0x0) {
    return;
  }
  plVar49 = plVar39 + 10;
  do {
    iVar13 = (int)*plVar49 + -1;
    cVar6 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar49,0x10);
    if (bVar10) {
      *(int *)plVar49 = iVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar39 + 0x10))(plVar39);
    return;
  }
  return;
}


