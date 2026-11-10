/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120e4bc; name: FUN_0120e4bc
 */


void FUN_0120e4bc(long param_1,uint param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  long lVar19;
  int iVar20;
  uint local_78;
  uint uStack_74;
  undefined8 local_70;
  uint local_68;
  undefined1 local_64;
  
  lVar17 = *(long *)(*(long *)(param_1 + 0x5d0) + 0xb0);
  if (lVar17 != 0) {
    *(long *)(*(long *)(param_1 + 0x5d0) + 0xb0) = lVar17 + (lVar17 * 6 >> 1) * 0x5555555555555555;
  }
  puVar10 = PTR_DAT_04379568;
  puVar9 = PTR_DAT_04379560;
  puVar8 = PTR_DAT_04379558;
  if (7 < param_2) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x5d0);
  switch(param_2) {
  case 0:
    local_70 = 0;
    uVar15 = FUN_0121148c(param_1,*(undefined2 *)(param_1 + 0x5ea),(long)&local_70 + 4,&local_70);
    if ((uVar15 & 1) != 0) {
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379558), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
      FUN_01148f20(&local_78);
      for (uVar12 = local_70._4_4_; uVar12 <= (uint)local_70; uVar12 = uVar12 + 1) {
        uVar11 = FUN_01211544(param_1,uVar12);
        iVar14 = FUN_0112ec0c(CONCAT44(uStack_74,local_78),uVar11 & 0xffff);
        if (iVar14 != 0) {
          local_68 = uVar11 & 0xffff | 0x10000;
          local_64 = 0;
          FUN_012140e0(*plVar1 + 0x88,&local_68);
        }
      }
      plVar1 = (long *)CONCAT44(uStack_74,local_78);
      if (plVar1 == (long *)0x0) {
        return;
      }
      lVar17 = plVar1[0xb];
      piVar2 = (int *)(lVar17 + 0xc);
      do {
        iVar14 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*plVar1 + 0x20))();
        return;
      }
      return;
    }
    goto LAB_0120eca0;
  case 1:
    local_78 = 0x10012;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x10000;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x10001;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x10002;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x10003;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x10004;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x10005;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x10006;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x10007;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x10008;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x10009;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x1000a;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x1000b;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x1000c;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x1000d;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x1000e;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x1000f;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x10010;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    lVar17 = *plVar1;
    local_78 = 0x10011;
    break;
  case 2:
    local_70 = local_70 & 0xffffffff;
    local_68 = 0;
    uVar15 = FUN_0121148c(param_1,*(undefined2 *)(param_1 + 0x5ea),&local_68,(long)&local_70 + 4);
    if ((uVar15 & 1) != 0) {
      for (uVar12 = local_68; uVar12 <= local_70._4_4_; uVar12 = uVar12 + 1) {
        uVar11 = FUN_01211544(param_1,uVar12);
        uVar15 = FUN_0284d2dc(*(undefined8 *)(param_1 + 0x5c0),uVar11 & 0xffff);
        if ((uVar15 & 1) == 0) {
          local_78 = uVar11 & 0xffff | 0x10000;
          uStack_74 = uStack_74 & 0xffffff00;
          FUN_012140e0(*plVar1 + 0x88,&local_78);
        }
      }
      return;
    }
LAB_0120eca0:
    lVar17 = *plVar1;
    local_78 = 0;
    break;
  case 3:
    iVar14 = 0;
    do {
      local_78 = 0x10019;
      if (iVar14 != 0) {
        local_78 = iVar14 - 1U & 0xffff | 0x10000;
      }
      uStack_74 = uStack_74 & 0xffffff00;
      FUN_012140e0(*plVar1 + 0x88,&local_78);
      iVar14 = iVar14 + 1;
    } while (iVar14 != 0x1a);
    return;
  case 4:
    local_78 = 0x10003;
    uStack_74 = (uint)uStack_74._1_3_ << 8;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x10000;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x10001;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    lVar17 = *plVar1;
    local_78 = 0x10002;
    break;
  case 5:
    local_78 = 0x10000;
    uStack_74 = (uint)uStack_74._1_3_ << 8;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x10001;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x10002;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x10003;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    local_78 = 0x10004;
    uStack_74 = uStack_74 & 0xffffff00;
    FUN_012140e0(*plVar1 + 0x88,&local_78);
    lVar17 = *plVar1;
    local_78 = 0x10005;
    break;
  case 6:
    if (((*PTR_DAT_0437b180 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_0437b180), iVar14 != 0)) {
      FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b180);
    }
    *(undefined8 *)PTR_DAT_0437b190 = *(undefined8 *)PTR_DAT_0437b188;
    uVar12 = FUN_00d15d74();
    puVar9 = PTR_DAT_04379568;
    puVar8 = PTR_DAT_04379560;
    if (uVar12 < 2) {
      lVar17 = 0xc;
      puVar18 = &DAT_03a79dc8;
LAB_0120ea08:
      lVar19 = 0;
      uVar12 = *puVar18;
      if (uVar12 == 0) goto LAB_0120ea5c;
LAB_0120ea24:
      do {
        uVar11 = 0x10000;
        while( true ) {
          do {
            local_78 = uVar11 | uVar12 & 0xffff;
            uStack_74 = uStack_74 & 0xffffff00;
            FUN_012140e0(*plVar1 + 0x88,&local_78);
            lVar19 = lVar19 + 1;
            if (lVar19 == lVar17) {
              return;
            }
            uVar12 = puVar18[lVar19];
            if (uVar12 != 0) goto LAB_0120ea24;
LAB_0120ea5c:
            local_70 = local_70 & 0xffffffff;
            local_68 = 0;
            uVar15 = FUN_0121148c(param_1,0,&local_68,(long)&local_70 + 4);
            uVar11 = 0;
          } while ((uVar15 & 1) == 0);
          if (*(int *)(param_1 + 0x5d8) != 0) break;
          if (((*PTR_DAT_04379558 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_04379558), iVar14 != 0)) {
            FUN_00100250(PTR_LAB_04379700,puVar8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379558);
          }
          *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
          FUN_01148f20(&local_78);
          uVar11 = local_68;
          if (local_68 <= local_70._4_4_) {
            do {
              uVar13 = FUN_01211544(param_1,uVar11);
              iVar14 = FUN_0112ec0c(CONCAT44(uStack_74,local_78),uVar13);
              if (iVar14 != 0) {
                uVar11 = 0x10000;
                plVar7 = (long *)CONCAT44(uStack_74,local_78);
                goto joined_r0x0120eb24;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 <= local_70._4_4_);
          }
          uVar11 = 0;
          plVar7 = (long *)CONCAT44(uStack_74,local_78);
joined_r0x0120eb24:
          if (plVar7 != (long *)0x0) {
            lVar16 = plVar7[0xb];
            piVar2 = (int *)(lVar16 + 0xc);
            do {
              iVar14 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*plVar7 + 0x20))();
            }
          }
        }
      } while( true );
    }
    uVar11 = uVar12 - 7;
    if (uVar11 < 3) {
      uVar15 = -(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar11 << 3;
      puVar18 = *(uint **)((long)&PTR_DAT_041fc320 + uVar15);
      lVar17 = *(long *)(&DAT_03a79fa0 + uVar15);
    }
    else {
      lVar17 = 0x1c;
      puVar18 = &DAT_03a79f30;
      if (uVar12 < 2) goto LAB_0120ea08;
    }
    lVar19 = 0;
    do {
      uVar12 = puVar18[lVar19];
      if (uVar12 < 0x24) {
        local_70 = local_70 & 0xffffffff;
        local_68 = 0;
        uVar15 = FUN_0121148c(param_1,uVar12,&local_68,(long)&local_70 + 4);
        uVar11 = 0;
        if ((uVar15 & 1) != 0) {
          if (*(int *)(param_1 + 0x5d8) != 0) goto LAB_0120edfc;
          if (((*PTR_DAT_04379558 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_04379558), iVar14 != 0)) {
            FUN_00100250(PTR_LAB_04379700,puVar8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379558);
          }
          *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
          FUN_01148f20(&local_78);
          uVar11 = local_68;
          if (local_68 <= local_70._4_4_) {
            do {
              uVar13 = FUN_01211544(param_1,uVar11);
              iVar14 = FUN_0112ec0c(CONCAT44(uStack_74,local_78),uVar13);
              if (iVar14 != 0) {
                uVar11 = 0x10000;
                plVar7 = (long *)CONCAT44(uStack_74,local_78);
                goto joined_r0x0120eef0;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 <= local_70._4_4_);
          }
          uVar11 = 0;
          plVar7 = (long *)CONCAT44(uStack_74,local_78);
joined_r0x0120eef0:
          if (plVar7 != (long *)0x0) {
            lVar16 = plVar7[0xb];
            piVar2 = (int *)(lVar16 + 0xc);
            do {
              iVar14 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*plVar7 + 0x20))();
            }
          }
        }
      }
      else {
LAB_0120edfc:
        uVar11 = 0x10000;
      }
      local_78 = uVar11 | uVar12 & 0xffff;
      uStack_74 = uStack_74 & 0xffffff00;
      FUN_012140e0(*plVar1 + 0x88,&local_78);
      lVar19 = lVar19 + 1;
      if (lVar19 == lVar17) {
        return;
      }
    } while( true );
  case 7:
    uVar4 = *(ushort *)(param_1 + 0x5e8);
    local_68 = 0;
    local_70 = local_70 & 0xffffffff;
    iVar14 = 5;
    if (uVar4 == 0x2c) {
      iVar14 = 1;
    }
    iVar20 = 0;
    iVar3 = 3;
    if (uVar4 != 0x24) {
      iVar3 = iVar14;
    }
    do {
      uVar12 = (uint)uVar4 + iVar20 & 0xffff;
      uVar15 = FUN_0121148c(param_1,uVar12,&local_68,(long)&local_70 + 4);
      if ((uVar15 & 1) == 0) {
        uVar11 = 0;
      }
      else if (*(int *)(param_1 + 0x5d8) == 0) {
        if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_04379700,puVar9,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar8);
        }
        *(undefined8 *)puVar10 = *(undefined8 *)puVar9;
        FUN_01148f20(&local_78);
        uVar11 = local_68;
        if (local_68 <= local_70._4_4_) {
          do {
            uVar13 = FUN_01211544(param_1,uVar11);
            iVar14 = FUN_0112ec0c(CONCAT44(uStack_74,local_78),uVar13);
            if (iVar14 != 0) {
              uVar11 = 0x10000;
              plVar7 = (long *)CONCAT44(uStack_74,local_78);
              goto joined_r0x0120ec98;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 <= local_70._4_4_);
        }
        uVar11 = 0;
        plVar7 = (long *)CONCAT44(uStack_74,local_78);
joined_r0x0120ec98:
        if (plVar7 != (long *)0x0) {
          lVar17 = plVar7[0xb];
          piVar2 = (int *)(lVar17 + 0xc);
          do {
            iVar14 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar14 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*plVar7 + 0x20))();
          }
        }
      }
      else {
        uVar11 = 0x10000;
      }
      local_78 = uVar11 | uVar12;
      uStack_74 = uStack_74 & 0xffffff00;
      FUN_012140e0(*plVar1 + 0x88,&local_78);
      iVar20 = iVar20 + 1;
      if (iVar20 == iVar3) {
        return;
      }
      uVar4 = *(ushort *)(param_1 + 0x5e8);
    } while( true );
  }
  uStack_74 = uStack_74 & 0xffffff00;
  FUN_012140e0(lVar17 + 0x88,&local_78);
  return;
}


