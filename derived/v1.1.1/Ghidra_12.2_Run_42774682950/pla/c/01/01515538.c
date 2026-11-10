/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01515538; name: FUN_01515538
 */


void FUN_01515538(long *param_1,long param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  byte *pbVar16;
  long *plVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  undefined *puVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  undefined *puVar27;
  undefined4 uVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined *puVar31;
  undefined1 *puVar32;
  long *plVar33;
  undefined1 *puVar34;
  long *plVar35;
  undefined1 *puVar36;
  undefined8 *puVar37;
  undefined1 *puVar38;
  long *local_158;
  long *local_150;
  undefined8 local_108;
  undefined *puStack_100;
  undefined8 local_f8;
  long *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  
  local_108 = 0x183c3362cd1f99b6;
  puStack_100 = &DAT_0393ab50;
  local_f8 = 4;
  local_f0 = (long *)0x0;
  local_88 = (undefined1 *)0xcda2c0d1b699e6a4;
  pcStack_80 = "is_particle_group_drawer_share";
  local_78 = 0x1e;
  local_70 = (long *)0x0;
  uVar11 = FUN_00e9e50c(&local_108,&local_88);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  lVar12 = nn::os::GetCurrentThread();
  plVar13 = (long *)(param_2 + 0x468);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x45c));
        while (*plVar13 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0151562c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = lVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0151562c:
  puVar31 = PTR_DAT_0437f890;
  puVar18 = PTR_DAT_0437f888;
  puVar27 = PTR_DAT_043794d8;
  puVar23 = PTR_DAT_043794d0;
  if ((uVar11 & 1) == 0) {
    if (param_3 < 0) {
      param_3 = *(int *)(param_2 + 0x68);
    }
  }
  else {
    param_3 = 0;
  }
  lVar12 = *(long *)(param_2 + 0x98);
  if (lVar12 == 0) {
    plVar13 = (long *)0x0;
  }
  else if (*(int *)(lVar12 + 0xc) == 0) {
LAB_01516d50:
    plVar13 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar9 = *(int *)(lVar12 + 0xc);
    do {
      puVar37 = *(undefined8 **)(lVar12 + 0x10);
      if (((*puVar18 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar18), iVar10 != 0)) {
        if (((*puVar23 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar23), iVar10 != 0)) {
          uVar15 = FUN_0087f8f0();
          *(undefined8 *)puVar27 = uVar15;
          __cxa_guard_release(puVar23);
        }
        *(undefined **)puVar31 = puVar27;
        __cxa_guard_release(puVar18);
      }
      if (puVar37 == (undefined8 *)0x0) goto LAB_01516d50;
      while (puVar37 != (undefined8 *)puVar31) {
        puVar37 = (undefined8 *)*puVar37;
        plVar13 = (long *)0x0;
        if (puVar37 == (undefined8 *)0x0) goto LAB_01515648;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          plVar13 = (long *)0x0;
          if (*(long *)(lVar12 + 0x18) != 0) {
            plVar13 = (long *)(*(long *)(lVar12 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar13 = (long *)0x0;
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
LAB_01515648:
  puVar27 = (undefined *)(long)param_3;
  puVar23 = (undefined *)plVar13[0x40];
  if (puVar23 != (undefined *)0x0) {
    uVar11 = (long)puVar23 - ((ulong)puVar23 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      puVar18 = (undefined *)((ulong)(puVar23 + -1) & (ulong)puVar27);
    }
    else {
      puVar18 = puVar27;
      if (puVar23 <= puVar27) {
        uVar19 = 0;
        if (puVar23 != (undefined *)0x0) {
          uVar19 = (ulong)puVar27 / (ulong)puVar23;
        }
        puVar18 = puVar27 + -(uVar19 * (long)puVar23);
      }
    }
    plVar24 = *(long **)(plVar13[0x3f] + (long)puVar18 * 8);
    if ((plVar24 == (long *)0x0) || (plVar24 = (long *)*plVar24, plVar24 == (long *)0x0)) {
      plVar24 = (long *)0x0;
      goto LAB_015156b8;
    }
    if (uVar11 < 2) {
      do {
        if ((undefined *)plVar24[1] == puVar27) {
          if ((int)plVar24[2] == param_3) goto LAB_01515c84;
        }
        else if ((undefined *)((ulong)plVar24[1] & (ulong)(puVar23 + -1)) != puVar18) break;
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
    }
    else {
      do {
        puVar31 = (undefined *)plVar24[1];
        if (puVar31 == puVar27) {
          if ((int)plVar24[2] == param_3) goto LAB_01515c84;
        }
        else {
          if (puVar23 <= puVar31) {
            uVar11 = 0;
            if (puVar23 != (undefined *)0x0) {
              uVar11 = (ulong)puVar31 / (ulong)puVar23;
            }
            puVar31 = puVar31 + -(uVar11 * (long)puVar23);
          }
          if (puVar31 != puVar18) break;
        }
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
    }
  }
  plVar24 = (long *)0x0;
  if (plVar13 == (long *)0x0) goto LAB_015156d4;
LAB_015156b8:
  lVar12 = plVar13[0xb];
  piVar1 = (int *)(lVar12 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 + -1 != 0) goto LAB_015156d4;
  *(undefined8 *)(lVar12 + 0x18) = 0;
  (**(code **)(*plVar13 + 0x20))();
  lVar12 = *(long *)(param_2 + 0x98);
  pbVar16 = PTR_DAT_043794d0;
  pbVar6 = PTR_DAT_0437f888;
  puVar37 = (undefined8 *)PTR_DAT_0437f890;
joined_r0x015156d8:
  PTR_DAT_043794d0 = pbVar16;
  PTR_DAT_0437f888 = pbVar6;
  PTR_DAT_0437f890 = (undefined *)puVar37;
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar9 = *(int *)(lVar12 + 0xc);
    do {
      plVar13 = *(long **)(lVar12 + 0x10);
      if (((*pbVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar6), iVar10 != 0)) {
        if (((*pbVar16 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar16), iVar10 != 0)) {
          uVar15 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar15;
          __cxa_guard_release(pbVar16);
        }
        *puVar37 = PTR_DAT_043794d8;
        __cxa_guard_release(pbVar6);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto joined_r0x01516e84;
        if (plVar13 == puVar37) break;
        plVar13 = (long *)*plVar13;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 != 0) {
            lVar14 = *(long *)(lVar12 + 8);
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))();
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
joined_r0x01516e84:
  if (plVar24 != (long *)0x0) {
    lVar12 = plVar24[3];
    *param_1 = lVar12;
    if (lVar12 != 0) {
      lVar12 = *(long *)(lVar12 + 0x58);
      if (*(undefined8 **)(lVar12 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar12 + 0x10) == 0) {
          uVar15 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
          *(undefined8 *)(lVar12 + 0x10) = uVar15;
        }
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_01516114;
      }
      goto LAB_01516e58;
    }
    goto LAB_01516114;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  local_f0 = (long *)0x0;
  local_108 = 0;
  puStack_100 = (undefined *)0x0;
  snprintf((char *)&local_108,0x80,"demo_%d",param_3);
  plVar13 = *(long **)(param_2 + 8);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar23 = PTR_DAT_04379528;
    if (iVar9 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar23,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_01516c1c;
  *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar13;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,200,8);
  if (lVar14 == 0) {
    (**(code **)(*plVar13 + 0xb8))(plVar13);
  }
  local_88 = &DAT_cbf29ce484222645;
  if ((byte)local_108 != 0) {
    local_88 = &DAT_cbf29ce484222645;
    pbVar16 = (byte *)((ulong)&local_108 | 1);
    bVar2 = (byte)local_108;
    do {
      local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar16;
      pbVar16 = pbVar16 + 1;
    } while (bVar2 != 0);
  }
  pcStack_80 = (char *)&local_108;
  local_78 = 0x7f;
  local_70 = (long *)0x0;
  FUN_02c8e698(lVar14,&local_88);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  *(long **)(lVar14 + 8) = plVar13;
  *(long *)(lVar14 + 0x10) = lVar14;
  *(undefined8 *)(lVar14 + 0x18) = 200;
  *(undefined8 *)(lVar14 + 0x20) = 8;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  *param_1 = lVar14;
  if (lVar14 != 0) {
    lVar12 = *(long *)(lVar14 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01516e58;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_88 = &DAT_462237f7b07aa897;
  pcStack_80 = "vfx2";
  local_78 = 4;
  local_70 = (long *)0x0;
  pbVar16 = (byte *)(**(code **)(*DAT_043ef740 + 0x38))(DAT_043ef740,&local_88,0);
  puVar18 = PTR_DAT_0437a0d8;
  puVar23 = PTR_DAT_0437a0d0;
  if (pbVar16 == (byte *)0x0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar9 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar30 = *(undefined1 **)puVar18;
    plVar13 = *(long **)(puVar18 + 0x18);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  else {
    bVar2 = *pbVar16;
    if (bVar2 == 0) {
      plVar13 = (long *)0x0;
      puVar30 = &DAT_cbf29ce484222645;
    }
    else {
      puVar30 = &DAT_cbf29ce484222645;
      plVar13 = (long *)0x0;
      do {
        pbVar16 = pbVar16 + 1;
        puVar30 = (undefined1 *)(((ulong)puVar30 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar16;
      } while (bVar2 != 0);
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_88 = &DAT_462237f7b07aa897;
  pcStack_80 = "vfx2";
  local_78 = 4;
  local_70 = (long *)0x0;
  pbVar16 = (byte *)(**(code **)(*DAT_043ef740 + 0x38))(DAT_043ef740,&local_88,1);
  if (pbVar16 == (byte *)0x0) {
    if (((*puVar23 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar9 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar32 = *(undefined1 **)puVar18;
    plVar24 = *(long **)(puVar18 + 0x18);
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
  }
  else {
    bVar2 = *pbVar16;
    if (bVar2 == 0) {
      plVar24 = (long *)0x0;
      puVar32 = &DAT_cbf29ce484222645;
    }
    else {
      puVar32 = &DAT_cbf29ce484222645;
      plVar24 = (long *)0x0;
      do {
        pbVar16 = pbVar16 + 1;
        puVar32 = (undefined1 *)(((ulong)puVar32 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar16;
      } while (bVar2 != 0);
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_88 = &DAT_462237f7b07aa897;
  pcStack_80 = "vfx2";
  local_78 = 4;
  local_70 = (long *)0x0;
  pbVar16 = (byte *)(**(code **)(*DAT_043ef740 + 0x38))(DAT_043ef740,&local_88,2);
  if (pbVar16 == (byte *)0x0) {
    if (((*puVar23 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar9 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar38 = *(undefined1 **)puVar18;
    plVar33 = *(long **)(puVar18 + 0x18);
    if (plVar33 != (long *)0x0) {
      (**(code **)(*plVar33 + 0x18))(plVar33);
    }
  }
  else {
    bVar2 = *pbVar16;
    if (bVar2 == 0) {
      plVar33 = (long *)0x0;
      puVar38 = &DAT_cbf29ce484222645;
    }
    else {
      puVar38 = &DAT_cbf29ce484222645;
      plVar33 = (long *)0x0;
      do {
        pbVar16 = pbVar16 + 1;
        puVar38 = (undefined1 *)(((ulong)puVar38 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar16;
      } while (bVar2 != 0);
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_88 = &DAT_462237f7b07aa897;
  pcStack_80 = "vfx2";
  local_78 = 4;
  local_70 = (long *)0x0;
  pbVar16 = (byte *)(**(code **)(*DAT_043ef740 + 0x38))(DAT_043ef740,&local_88,3);
  if (pbVar16 == (byte *)0x0) {
    if (((*puVar23 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar9 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar34 = *(undefined1 **)puVar18;
    plVar35 = *(long **)(puVar18 + 0x18);
    if (plVar35 != (long *)0x0) {
      (**(code **)(*plVar35 + 0x18))(plVar35);
    }
  }
  else {
    bVar2 = *pbVar16;
    if (bVar2 == 0) {
      plVar35 = (long *)0x0;
      puVar34 = &DAT_cbf29ce484222645;
    }
    else {
      puVar34 = &DAT_cbf29ce484222645;
      plVar35 = (long *)0x0;
      do {
        pbVar16 = pbVar16 + 1;
        puVar34 = (undefined1 *)(((ulong)puVar34 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar16;
      } while (bVar2 != 0);
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_88 = &DAT_462237f7b07aa897;
  pcStack_80 = "vfx2";
  local_78 = 4;
  local_70 = (long *)0x0;
  pbVar16 = (byte *)(**(code **)(*DAT_043ef740 + 0x38))(DAT_043ef740,&local_88,4);
  if (pbVar16 == (byte *)0x0) {
    if (((*puVar23 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar9 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar36 = *(undefined1 **)puVar18;
    local_150 = *(long **)(puVar18 + 0x18);
    if (local_150 == (long *)0x0) goto LAB_01515a20;
    (**(code **)(*local_150 + 0x18))();
  }
  else {
    bVar2 = *pbVar16;
    if (bVar2 == 0) {
      local_150 = (long *)0x0;
      puVar36 = &DAT_cbf29ce484222645;
    }
    else {
      puVar36 = &DAT_cbf29ce484222645;
      do {
        pbVar16 = pbVar16 + 1;
        puVar36 = (undefined1 *)(((ulong)puVar36 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar16;
      } while (bVar2 != 0);
LAB_01515a20:
      local_150 = (long *)0x0;
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_88 = &DAT_462237f7b07aa897;
  pcStack_80 = "vfx2";
  local_78 = 4;
  local_70 = (long *)0x0;
  pbVar16 = (byte *)(**(code **)(*DAT_043ef740 + 0x38))(DAT_043ef740,&local_88,5);
  if (pbVar16 == (byte *)0x0) {
    if (((*puVar23 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar9 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar29 = *(undefined1 **)puVar18;
    local_158 = *(long **)(puVar18 + 0x18);
    if (local_158 == (long *)0x0) goto LAB_01515a84;
    (**(code **)(*local_158 + 0x18))();
  }
  else {
    bVar2 = *pbVar16;
    puVar29 = &DAT_cbf29ce484222645;
    if (bVar2 == 0) {
      local_158 = (long *)0x0;
    }
    else {
      do {
        pbVar16 = pbVar16 + 1;
        puVar29 = (undefined1 *)(((ulong)puVar29 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar16;
      } while (bVar2 != 0);
LAB_01515a84:
      local_158 = (long *)0x0;
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar12 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar12;
  uVar11 = *(ulong *)(lVar12 + 0x60);
  if (uVar11 == 0) {
LAB_01515cbc:
    uVar28 = 0;
  }
  else {
    uVar19 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar20 = uVar11 - 1 & 0x183c3362cd1f99b6;
    }
    else {
      uVar20 = 0x183c3362cd1f99b6;
      if (uVar11 < 0x183c3362cd1f99b7) {
        uVar20 = 0;
        if (uVar11 != 0) {
          uVar20 = 0x183c3362cd1f99b6 / uVar11;
        }
        uVar20 = 0x183c3362cd1f99b6 - uVar20 * uVar11;
      }
    }
    plVar25 = *(long **)(*(long *)(lVar12 + 0x58) + uVar20 * 8);
    if ((plVar25 == (long *)0x0) || (plVar25 = (long *)*plVar25, plVar25 == (long *)0x0))
    goto LAB_01515cbc;
    if (1 < uVar19) {
      do {
        uVar19 = plVar25[1];
        if (uVar19 == 0x183c3362cd1f99b6) {
          if (plVar25[2] == 0x183c3362cd1f99b6) goto LAB_01515b5c;
        }
        else {
          if (uVar11 <= uVar19) {
            uVar5 = 0;
            if (uVar11 != 0) {
              uVar5 = uVar19 / uVar11;
            }
            uVar19 = uVar19 - uVar5 * uVar11;
          }
          if (uVar19 != uVar20) break;
        }
        plVar25 = (long *)*plVar25;
      } while (plVar25 != (long *)0x0);
      goto LAB_01515cbc;
    }
    do {
      if (plVar25[1] == 0x183c3362cd1f99b6) {
        if (plVar25[2] == 0x183c3362cd1f99b6) goto LAB_01515b5c;
      }
      else if ((plVar25[1] & uVar11 - 1) != uVar20) goto LAB_01515cbc;
      plVar25 = (long *)*plVar25;
      uVar28 = 0;
    } while (plVar25 != (long *)0x0);
  }
LAB_01515d24:
  puVar23 = PTR_DAT_0437b6f0;
  puVar18 = (undefined *)*param_1;
  if (((*PTR_DAT_0437b6f0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b6f0), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_0437f8b0,PTR_DAT_0437b6f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b6f0);
  }
  puVar7 = PTR_DAT_0437b700;
  puVar31 = PTR_DAT_0437b6f8;
  lVar21 = *(long *)PTR_DAT_0437b6f8;
  *(long *)PTR_DAT_0437b700 = lVar21;
  lVar12 = 0;
  lVar14 = *(long *)(lVar21 + 0x468) - *(long *)(lVar21 + 0x460);
  if (lVar14 != 0) {
    uVar11 = 0;
    puVar37 = (undefined8 *)(*(long *)(lVar21 + 0x460) + 0x140);
    do {
      if ((undefined1 *)*puVar37 == puVar30) {
        lVar12 = lVar12 >> 0x20;
        goto LAB_01515d68;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x100000000;
      puVar37 = puVar37 + 0x2f;
    } while (uVar11 < (ulong)((lVar14 >> 3) * 0x51b3bea3677d46cf));
    lVar12 = 0;
  }
LAB_01515d68:
  *(undefined4 *)(*(long *)(*(long *)(puVar18 + 0x78) + lVar12 * 0x10) + 0x90) = uVar28;
  if (((*puVar23 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b6f0), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_0437f8b0,PTR_DAT_0437b6f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b6f0);
  }
  lVar21 = *(long *)puVar31;
  *(long *)puVar7 = lVar21;
  lVar12 = 0;
  lVar14 = *(long *)(lVar21 + 0x468) - *(long *)(lVar21 + 0x460);
  if (lVar14 != 0) {
    uVar11 = 0;
    puVar37 = (undefined8 *)(*(long *)(lVar21 + 0x460) + 0x140);
    do {
      if ((undefined1 *)*puVar37 == puVar32) {
        lVar12 = lVar12 >> 0x20;
        goto LAB_01515d9c;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x100000000;
      puVar37 = puVar37 + 0x2f;
    } while (uVar11 < (ulong)((lVar14 >> 3) * 0x51b3bea3677d46cf));
    lVar12 = 0;
  }
LAB_01515d9c:
  *(undefined4 *)(*(long *)(*(long *)(puVar18 + 0x78) + lVar12 * 0x10) + 0x90) = uVar28;
  if (((*puVar23 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b6f0), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_0437f8b0,PTR_DAT_0437b6f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b6f0);
  }
  lVar21 = *(long *)puVar31;
  *(long *)puVar7 = lVar21;
  lVar12 = 0;
  lVar14 = *(long *)(lVar21 + 0x468) - *(long *)(lVar21 + 0x460);
  if (lVar14 != 0) {
    uVar11 = 0;
    puVar37 = (undefined8 *)(*(long *)(lVar21 + 0x460) + 0x140);
    do {
      if ((undefined1 *)*puVar37 == puVar38) {
        lVar12 = lVar12 >> 0x20;
        goto LAB_01515dd0;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x100000000;
      puVar37 = puVar37 + 0x2f;
    } while (uVar11 < (ulong)((lVar14 >> 3) * 0x51b3bea3677d46cf));
    lVar12 = 0;
  }
LAB_01515dd0:
  *(undefined4 *)(*(long *)(*(long *)(puVar18 + 0x78) + lVar12 * 0x10) + 0x90) = uVar28;
  if (((*puVar23 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b6f0), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_0437f8b0,PTR_DAT_0437b6f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b6f0);
  }
  lVar21 = *(long *)puVar31;
  *(long *)puVar7 = lVar21;
  lVar12 = 0;
  lVar14 = *(long *)(lVar21 + 0x468) - *(long *)(lVar21 + 0x460);
  if (lVar14 != 0) {
    uVar11 = 0;
    puVar37 = (undefined8 *)(*(long *)(lVar21 + 0x460) + 0x140);
    do {
      if ((undefined1 *)*puVar37 == puVar34) {
        lVar12 = lVar12 >> 0x20;
        goto LAB_01515e08;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x100000000;
      puVar37 = puVar37 + 0x2f;
    } while (uVar11 < (ulong)((lVar14 >> 3) * 0x51b3bea3677d46cf));
    lVar12 = 0;
  }
LAB_01515e08:
  *(undefined4 *)(*(long *)(*(long *)(puVar18 + 0x78) + lVar12 * 0x10) + 0x90) = uVar28;
  if (((*puVar23 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b6f0), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_0437f8b0,PTR_DAT_0437b6f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b6f0);
  }
  lVar21 = *(long *)puVar31;
  *(long *)puVar7 = lVar21;
  lVar12 = 0;
  lVar14 = *(long *)(lVar21 + 0x468) - *(long *)(lVar21 + 0x460);
  if (lVar14 != 0) {
    uVar11 = 0;
    puVar37 = (undefined8 *)(*(long *)(lVar21 + 0x460) + 0x140);
    do {
      if ((undefined1 *)*puVar37 == puVar36) {
        lVar12 = lVar12 >> 0x20;
        goto LAB_01515e3c;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x100000000;
      puVar37 = puVar37 + 0x2f;
    } while (uVar11 < (ulong)((lVar14 >> 3) * 0x51b3bea3677d46cf));
    lVar12 = 0;
  }
LAB_01515e3c:
  *(undefined4 *)(*(long *)(*(long *)(puVar18 + 0x78) + lVar12 * 0x10) + 0x90) = uVar28;
  if (((*puVar23 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b6f0), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_0437f8b0,PTR_DAT_0437b6f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b6f0);
  }
  lVar21 = *(long *)puVar31;
  *(long *)puVar7 = lVar21;
  lVar12 = 0;
  lVar14 = *(long *)(lVar21 + 0x468) - *(long *)(lVar21 + 0x460);
  if (lVar14 != 0) {
    uVar11 = 0;
    puVar37 = (undefined8 *)(*(long *)(lVar21 + 0x460) + 0x140);
    do {
      if ((undefined1 *)*puVar37 == puVar29) {
        lVar12 = lVar12 >> 0x20;
        goto LAB_01515e70;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x100000000;
      puVar37 = puVar37 + 0x2f;
    } while (uVar11 < (ulong)((lVar14 >> 3) * 0x51b3bea3677d46cf));
    lVar12 = 0;
  }
LAB_01515e70:
  *(undefined4 *)(*(long *)(*(long *)(puVar18 + 0x78) + lVar12 * 0x10) + 0x90) = uVar28;
  puVar8 = PTR_DAT_0437f890;
  puVar7 = PTR_DAT_0437f888;
  puVar31 = PTR_DAT_043794d8;
  puVar23 = PTR_DAT_043794d0;
  lVar12 = *(long *)(param_2 + 0x98);
  if (lVar12 == 0) {
LAB_01515e8c:
    plVar25 = (long *)0x0;
    puVar31 = puVar18;
  }
  else {
    if (*(int *)(lVar12 + 0xc) == 0) goto LAB_01515e8c;
    piVar1 = (int *)(lVar12 + 0xc);
    iVar9 = *(int *)(lVar12 + 0xc);
    do {
      puVar37 = *(undefined8 **)(lVar12 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
        if (((*puVar23 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar23), iVar10 != 0)) {
          uVar15 = FUN_0087f8f0();
          *(undefined8 *)puVar31 = uVar15;
          __cxa_guard_release(puVar23);
        }
        *(undefined **)puVar8 = puVar31;
        __cxa_guard_release(puVar7);
      }
      puVar18 = puVar31;
      if (puVar37 == (undefined8 *)0x0) goto LAB_01515e8c;
      while (puVar37 != (undefined8 *)puVar8) {
        puVar37 = (undefined8 *)*puVar37;
        plVar25 = (long *)0x0;
        if (puVar37 == (undefined8 *)0x0) goto LAB_01515e90;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          plVar25 = (long *)0x0;
          if (*(long *)(lVar12 + 0x18) != 0) {
            plVar25 = (long *)(*(long *)(lVar12 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar25 = (long *)0x0;
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
LAB_01515e90:
  puVar23 = (undefined *)plVar25[0x40];
  plVar17 = plVar25 + 0x3f;
  if (puVar23 == (undefined *)0x0) {
LAB_01515efc:
    plVar26 = (long *)(**(code **)(*(long *)plVar25[0x46] + 0x10))((long *)plVar25[0x46],0x20,8);
    if (plVar26 == (long *)0x0) {
      (**(code **)(*(long *)plVar25[0x46] + 0xb8))();
    }
    lVar12 = plVar25[0x46];
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar18 = PTR_DAT_04379528;
      if (iVar9 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar18,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (lVar14 == 0) {
      *(int *)(plVar26 + 2) = param_3;
      plVar26[3] = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar14 + 0x80)) {
LAB_01516c1c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = lVar12;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
      *(int *)(plVar26 + 2) = param_3;
      plVar26[3] = 0;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    }
    *plVar26 = 0;
    plVar26[1] = (long)puVar27;
    if ((puVar23 == (undefined *)0x0) ||
       (*(float *)(plVar25 + 0x4b) * (float)puVar23 < (float)(plVar25[0x4a] + 1))) {
      uVar11 = (ulong)(puVar23 < (undefined *)0x3 || ((ulong)puVar23 & (ulong)(puVar23 + -1)) != 0)
               | (long)puVar23 << 1;
      uVar19 = (ulong)((float)(plVar25[0x4a] + 1) / *(float *)(plVar25 + 0x4b));
      if (uVar19 <= uVar11) {
        uVar19 = uVar11;
      }
      FUN_01519e58(plVar17,uVar19);
      puVar23 = (undefined *)plVar25[0x40];
      if (((ulong)puVar23 & (ulong)(puVar23 + -1)) == 0) {
        puVar31 = (undefined *)((ulong)(puVar23 + -1) & (ulong)puVar27);
      }
      else if (puVar27 < puVar23) {
        puVar31 = puVar27;
      }
      else {
        uVar11 = 0;
        if (puVar23 != (undefined *)0x0) {
          uVar11 = (ulong)puVar27 / (ulong)puVar23;
        }
        puVar31 = puVar27 + -(uVar11 * (long)puVar23);
      }
    }
    plVar22 = *(long **)(*plVar17 + (long)puVar31 * 8);
    if (plVar22 == (long *)0x0) {
      *plVar26 = plVar25[0x45];
      plVar25[0x45] = (long)plVar26;
      *(long **)(plVar25[0x3f] + (long)puVar31 * 8) = plVar25 + 0x45;
      if (*plVar26 != 0) {
        puVar27 = *(undefined **)(*plVar26 + 8);
        if (((ulong)puVar23 & (ulong)(puVar23 + -1)) == 0) {
          puVar27 = (undefined *)((ulong)puVar27 & (ulong)(puVar23 + -1));
        }
        else if (puVar23 <= puVar27) {
          uVar11 = 0;
          if (puVar23 != (undefined *)0x0) {
            uVar11 = (ulong)puVar27 / (ulong)puVar23;
          }
          puVar27 = puVar27 + -(uVar11 * (long)puVar23);
        }
        plVar22 = (long *)(*plVar17 + (long)puVar27 * 8);
        goto LAB_01515ff0;
      }
    }
    else {
      *plVar26 = *plVar22;
LAB_01515ff0:
      *plVar22 = (long)plVar26;
    }
    plVar25[0x4a] = plVar25[0x4a] + 1;
  }
  else {
    uVar11 = (long)puVar23 - ((ulong)puVar23 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      puVar31 = (undefined *)((ulong)(puVar23 + -1) & (ulong)puVar27);
    }
    else {
      puVar31 = puVar27;
      if (puVar23 <= puVar27) {
        uVar19 = 0;
        if (puVar23 != (undefined *)0x0) {
          uVar19 = (ulong)puVar27 / (ulong)puVar23;
        }
        puVar31 = puVar27 + -(uVar19 * (long)puVar23);
      }
    }
    plVar26 = *(long **)(*plVar17 + (long)puVar31 * 8);
    if (plVar26 == (long *)0x0) goto LAB_01515efc;
    if (uVar11 < 2) {
      do {
        plVar26 = (long *)*plVar26;
        if ((plVar26 == (long *)0x0) ||
           ((undefined *)plVar26[1] != puVar27 &&
            (undefined *)((ulong)plVar26[1] & (ulong)(puVar23 + -1)) != puVar31)) goto LAB_01515efc;
      } while ((int)plVar26[2] != param_3);
    }
    else {
      do {
        plVar26 = (long *)*plVar26;
        if (plVar26 == (long *)0x0) goto LAB_01515efc;
        puVar18 = (undefined *)plVar26[1];
        if (puVar18 != puVar27) {
          if (puVar23 <= puVar18) {
            uVar11 = 0;
            if (puVar23 != (undefined *)0x0) {
              uVar11 = (ulong)puVar18 / (ulong)puVar23;
            }
            puVar18 = puVar18 + -(uVar11 * (long)puVar23);
          }
          if (puVar18 != puVar31) goto LAB_01515efc;
        }
      } while ((int)plVar26[2] != param_3);
    }
  }
  lVar12 = *param_1;
  if (lVar12 != 0) {
    lVar14 = *(long *)(lVar12 + 0x58);
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_01516e58:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar17 = (long *)plVar26[3];
  plVar26[3] = lVar12;
  if (plVar17 != (long *)0x0) {
    lVar12 = plVar17[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))();
    }
  }
  if (plVar25 != (long *)0x0) {
    lVar12 = plVar25[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar25 + 0x20))(plVar25);
    }
  }
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x20))();
  }
  if (plVar35 != (long *)0x0) {
    (**(code **)(*plVar35 + 0x20))(plVar35);
  }
  if (plVar33 != (long *)0x0) {
    (**(code **)(*plVar33 + 0x20))(plVar33);
  }
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x20))(plVar24);
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
LAB_01516114:
  *(undefined8 *)(param_2 + 0x468) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x45c));
  return;
LAB_01515c84:
  if (plVar13 != (long *)0x0) goto LAB_015156b8;
LAB_015156d4:
  lVar12 = *(long *)(param_2 + 0x98);
  pbVar16 = PTR_DAT_043794d0;
  pbVar6 = PTR_DAT_0437f888;
  puVar37 = (undefined8 *)PTR_DAT_0437f890;
  goto joined_r0x015156d8;
LAB_01515b5c:
  plVar25 = (long *)plVar25[3];
  if (plVar25 != (long *)0x0) {
    plVar17 = plVar25 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar11 = plVar25[0x14];
    if (uVar11 == 0) {
      uVar28 = 0;
    }
    else {
      uVar19 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        uVar20 = uVar11 - 1 & 0xc7ff9d4e860f68b8;
      }
      else if (uVar11 < 0xc7ff9d4e860f68b9) {
        uVar20 = 0;
        if (uVar11 != 0) {
          uVar20 = 0xc7ff9d4e860f68b8 / uVar11;
        }
        uVar20 = 0xc7ff9d4e860f68b8 - uVar20 * uVar11;
      }
      else {
        uVar20 = 0xc7ff9d4e860f68b8;
      }
      plVar26 = *(long **)(plVar25[0x13] + uVar20 * 8);
      if (plVar26 == (long *)0x0) {
        uVar28 = 0;
      }
      else {
        plVar26 = (long *)*plVar26;
        if (plVar26 == (long *)0x0) {
          uVar28 = 0;
        }
        else if (uVar19 < 2) {
          do {
            if (plVar26[1] == 0xc7ff9d4e860f68b8) {
              if (plVar26[2] == -0x380062b179f09748) goto LAB_01515d0c;
            }
            else if ((plVar26[1] & uVar11 - 1) != uVar20) {
              uVar28 = 0;
              break;
            }
            plVar26 = (long *)*plVar26;
            uVar28 = 0;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar19 = plVar26[1];
            if (uVar19 == 0xc7ff9d4e860f68b8) {
              if (plVar26[2] == -0x380062b179f09748) goto LAB_01515d0c;
            }
            else {
              if (uVar11 <= uVar19) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar19 / uVar11;
                }
                uVar19 = uVar19 - uVar5 * uVar11;
              }
              if (uVar19 != uVar20) {
                uVar28 = 0;
                goto LAB_01515d10;
              }
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
          uVar28 = 0;
        }
      }
    }
    goto LAB_01515d10;
  }
  goto LAB_01515cbc;
LAB_01515d0c:
  uVar28 = (undefined4)plVar26[6];
LAB_01515d10:
  do {
    iVar9 = (int)*plVar17 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar4) {
      *(int *)plVar17 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar25 + 0x10))();
  }
  goto LAB_01515d24;
}


