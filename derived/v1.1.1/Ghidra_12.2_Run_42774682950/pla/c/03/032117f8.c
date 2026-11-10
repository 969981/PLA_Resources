/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032117f8; name: FUN_032117f8
 */


void FUN_032117f8(long param_1,long param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  uint local_10c;
  undefined1 auStack_108 [24];
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [24];
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  undefined8 local_70;
  
  local_f0 = 0;
  local_e8 = -0x8000000000000000;
  local_e0 = 0;
  local_d8 = -0x8000000000000000;
  local_b8 = 0;
  local_b0 = -0x8000000000000000;
  local_a8 = 0;
  local_a0 = -0x8000000000000000;
  local_98 = 0;
  local_90 = 0x8000000000000000;
  lVar5 = tpidr_el0;
  lVar12 = *(long *)(lVar5 + 0x38d490);
  if (lVar12 == 0) {
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar12;
  }
  lVar12 = *(long *)(lVar12 + 0x10);
  if (lVar12 != 0) {
    puVar2 = *(undefined8 **)(lVar12 + 8);
    uVar14 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= *(ulong *)(lVar12 + 0x10)) &&
       (*(ulong *)(lVar12 + 8) = uVar14, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "TtProcessPathRequests";
      uVar9 = nn::os::GetSystemTick();
      puVar2[1] = uVar9;
    }
  }
  lVar12 = (long)(*(int *)(param_2 + 0x18) + 1);
LAB_032118a4:
  do {
    puVar1 = (ulong *)(*(long *)(param_1 + 0x4c0) +
                      (long)*(int *)(*(long *)(param_1 + 0x70) + lVar12 * 0x40) * 0x40);
    do {
      uVar14 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uint)uVar14 < (uint)(uVar14 >> 0x20)) {
      local_10c = (uint)uVar14;
    }
    else {
      iVar8 = FUN_0332bfc4(param_1 + 0x30,lVar12,1,&local_10c);
      if (iVar8 == 0) {
        lVar12 = *(long *)(lVar5 + 0x38d490);
        if (lVar12 == 0) {
          lVar12 = FUN_0333d16c(0,1);
          *(long *)(lVar5 + 0x38d490) = lVar12;
          lVar13 = *(long *)(lVar12 + 0x10);
        }
        else {
          lVar13 = *(long *)(lVar12 + 0x10);
        }
        if (lVar13 != 0) {
          puVar2 = *(undefined8 **)(lVar13 + 8);
          uVar14 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
          if ((uVar14 <= *(ulong *)(lVar13 + 0x10)) &&
             (*(ulong *)(lVar13 + 8) = uVar14, puVar2 != (undefined8 *)0x0)) {
            *puVar2 = "EtProcessPathRequests";
            uVar9 = nn::os::GetSystemTick();
            puVar2[1] = uVar9;
            lVar12 = *(long *)(lVar5 + 0x38d490);
          }
        }
        lVar13 = (long)DAT_0444b53c;
        if (lVar12 == 0) {
          lVar12 = FUN_0333d16c(0,1);
          *(long *)(lVar5 + 0x38d490) = lVar12;
        }
        if (*(long *)(lVar12 + lVar13 * 8 + 0x18) != 0) {
          FUN_0332a954();
        }
        lVar12 = local_e8;
        puVar6 = PTR_PTR_0434a090;
        uVar11 = local_e8._4_4_;
        local_e8 = (ulong)local_e8._4_4_ << 0x20;
        if ((-1 < lVar12) && (local_f0 != 0)) {
          (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))
                    (PTR_PTR_0434a090,local_f0,uVar11 & 0x3fffffff);
        }
        lVar13 = (long)DAT_0444b53c;
        local_f0 = 0;
        local_e8 = CONCAT44(0x80000000,(undefined4)local_e8);
        lVar12 = *(long *)(lVar5 + 0x38d490);
        if (lVar12 == 0) {
          lVar12 = FUN_0333d16c(0,1);
          *(long *)(lVar5 + 0x38d490) = lVar12;
        }
        if (*(long *)(lVar12 + lVar13 * 8 + 0x18) != 0) {
          FUN_0332a954();
        }
        lVar12 = local_d8;
        uVar11 = local_d8._4_4_;
        local_d8 = (ulong)local_d8._4_4_ << 0x20;
        if ((-1 < lVar12) && (local_e0 != 0)) {
          (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_e0,uVar11 & 0x3fffffff);
        }
        lVar13 = (long)DAT_0444b53c;
        local_e0 = 0;
        local_d8 = CONCAT44(0x80000000,(undefined4)local_d8);
        lVar12 = *(long *)(lVar5 + 0x38d490);
        if (lVar12 == 0) {
          lVar12 = FUN_0333d16c(0,1);
          *(long *)(lVar5 + 0x38d490) = lVar12;
        }
        if (*(long *)(lVar12 + lVar13 * 8 + 0x18) != 0) {
          FUN_0332a954();
        }
        lVar12 = local_b0;
        uVar11 = local_b0._4_4_;
        local_b0 = (ulong)local_b0._4_4_ << 0x20;
        if ((-1 < lVar12) && (local_b8 != 0)) {
          (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_b8,uVar11 & 0x3fffffff);
        }
        lVar13 = (long)DAT_0444b53c;
        local_b8 = 0;
        local_b0 = CONCAT44(0x80000000,(undefined4)local_b0);
        lVar12 = *(long *)(lVar5 + 0x38d490);
        if (lVar12 == 0) {
          lVar12 = FUN_0333d16c(0,1);
          *(long *)(lVar5 + 0x38d490) = lVar12;
        }
        if (*(long *)(lVar12 + lVar13 * 8 + 0x18) != 0) {
          FUN_0332a954();
        }
        lVar12 = local_a0;
        uVar11 = local_a0._4_4_;
        local_a0 = (ulong)local_a0._4_4_ << 0x20;
        if ((-1 < lVar12) && (local_a8 != 0)) {
          (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_a8,uVar11 & 0x3fffffff);
        }
        lVar13 = (long)DAT_0444b53c;
        local_a8 = 0;
        local_a0 = CONCAT44(0x80000000,(undefined4)local_a0);
        lVar12 = *(long *)(lVar5 + 0x38d490);
        if (lVar12 == 0) {
          lVar12 = FUN_0333d16c(0,1);
          *(long *)(lVar5 + 0x38d490) = lVar12;
        }
        if (*(long *)(lVar12 + lVar13 * 8 + 0x18) != 0) {
          FUN_0332a954();
        }
        lVar12 = local_98;
        puVar7 = PTR_PTR_0434a080;
        if ((int)local_90 != 0) {
          lVar13 = (long)(int)local_90 << 5;
          do {
            lVar17 = lVar12 + lVar13;
            *(undefined4 *)(lVar17 + -8) = 0;
            if ((-1 < *(int *)(lVar17 + -4)) && (*(long *)(lVar17 + -0x10) != 0)) {
              (**(code **)(*(long *)puVar7 + 0x18))
                        (puVar7,*(long *)(lVar17 + -0x10),*(int *)(lVar17 + -4) << 2);
            }
            lVar13 = lVar13 + -0x20;
            *(undefined8 *)(lVar17 + -0x10) = 0;
            *(undefined4 *)(lVar17 + -4) = 0x80000000;
          } while (lVar13 != 0);
        }
        uVar14 = local_90;
        uVar15 = (ulong)local_90._4_4_;
        local_90 = (ulong)local_90._4_4_ << 0x20;
        if ((-1 < (long)uVar14) && (local_98 != 0)) {
          (**(code **)(*(long *)puVar7 + 0x18))(puVar7,local_98,(uVar15 & 0x3fffffff) << 5);
        }
        lVar13 = (long)DAT_0444b53c;
        local_98 = 0;
        local_90 = CONCAT44(0x80000000,(int)local_90);
        lVar12 = *(long *)(lVar5 + 0x38d490);
        if (lVar12 == 0) {
          lVar12 = FUN_0333d16c(0,1);
          *(long *)(lVar5 + 0x38d490) = lVar12;
        }
        if (*(long *)(lVar12 + lVar13 * 8 + 0x18) == 0) {
          lVar5 = local_98;
        }
        else {
          FUN_0332a954();
          lVar5 = local_98;
        }
        local_98 = lVar5;
        if ((int)local_90 != 0) {
          lVar12 = (long)(int)local_90 << 5;
          do {
            lVar13 = lVar5 + lVar12;
            *(undefined4 *)(lVar13 + -8) = 0;
            if ((-1 < *(int *)(lVar13 + -4)) && (*(long *)(lVar13 + -0x10) != 0)) {
              (**(code **)(*(long *)puVar7 + 0x18))
                        (puVar7,*(long *)(lVar13 + -0x10),*(int *)(lVar13 + -4) << 2);
            }
            lVar12 = lVar12 + -0x20;
            *(undefined8 *)(lVar13 + -0x10) = 0;
            *(undefined4 *)(lVar13 + -4) = 0x80000000;
          } while (lVar12 != 0);
        }
        lVar5 = local_90;
        uVar14 = (ulong)local_90._4_4_;
        local_90 = (ulong)local_90._4_4_ << 0x20;
        if ((-1 < lVar5) && (local_98 != 0)) {
          (**(code **)(*(long *)puVar7 + 0x18))(puVar7,local_98,(uVar14 & 0x3fffffff) << 5);
        }
        lVar5 = local_a0;
        uVar11 = local_a0._4_4_;
        local_98 = 0;
        local_90 = CONCAT44(0x80000000,(int)local_90);
        local_a0 = (ulong)local_a0._4_4_ << 0x20;
        if ((-1 < lVar5) && (local_a8 != 0)) {
          (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_a8,uVar11 & 0x3fffffff);
        }
        lVar5 = local_b0;
        uVar11 = local_b0._4_4_;
        local_a8 = 0;
        local_a0 = CONCAT44(0x80000000,(undefined4)local_a0);
        local_b0 = (ulong)local_b0._4_4_ << 0x20;
        if ((-1 < lVar5) && (local_b8 != 0)) {
          (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_b8,uVar11 & 0x3fffffff);
        }
        lVar5 = local_d8;
        uVar11 = local_d8._4_4_;
        local_b8 = 0;
        local_b0 = CONCAT44(0x80000000,(undefined4)local_b0);
        local_d8 = (ulong)local_d8._4_4_ << 0x20;
        if ((-1 < lVar5) && (local_e0 != 0)) {
          (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_e0,uVar11 & 0x3fffffff);
        }
        lVar5 = local_e8;
        uVar11 = local_e8._4_4_;
        local_e0 = 0;
        local_d8 = CONCAT44(0x80000000,(undefined4)local_d8);
        local_e8 = (ulong)local_e8._4_4_ << 0x20;
        if ((-1 < lVar5) && (local_f0 != 0)) {
          (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_f0,uVar11 & 0x3fffffff);
        }
        return;
      }
      uVar14 = (ulong)local_10c;
    }
    lVar13 = *(long *)(lVar5 + 0x38d490);
    if (lVar13 == 0) {
      lVar13 = FUN_0333d16c(0,1);
      *(long *)(lVar5 + 0x38d490) = lVar13;
    }
    lVar17 = *(long *)(lVar13 + 0x10);
    if (lVar17 != 0) {
      puVar2 = *(undefined8 **)(lVar17 + 8);
      uVar15 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar15 <= *(ulong *)(lVar17 + 0x10)) &&
         (*(ulong *)(lVar17 + 8) = uVar15, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = "TtProcessPathRequestsTask";
        uVar9 = nn::os::GetSystemTick();
        puVar2[1] = uVar9;
        lVar13 = *(long *)(lVar5 + 0x38d490);
      }
    }
    lVar16 = (long)DAT_0444b53c;
    if (lVar13 == 0) {
      lVar13 = FUN_0333d16c(0,1);
      *(long *)(lVar5 + 0x38d490) = lVar13;
    }
    if (*(long *)(lVar13 + lVar16 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    DAT_04444d70 = 0;
    DAT_04444d68 = 0xffffffffffff;
    lVar13 = *(long *)(param_1 + 0x918);
    puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x48) + (long)(int)uVar14 * 0x10);
    iVar8 = *(int *)(puVar2 + 1);
    if (iVar8 == 1) {
      local_78 = 0;
      local_70 = -0x8000000000000000;
      plVar10 = (long *)0x0;
      local_88 = 0xffffffffffffffff;
      local_80 = 0xffffffff;
      if (*(char *)(lVar13 + 0x58) != '\0') {
        plVar10 = &local_78;
      }
      FUN_031c2190(*puVar2,*(undefined8 *)(lVar13 + 0x28),0xffffffff,auStack_108,auStack_d0,plVar10,
                   &local_88);
      puVar6 = PTR_PTR_0434a080;
      if ((*(char *)(*(long *)(param_1 + 0x918) + 0x58) == '\0') || ((int)local_70 == 0)) {
LAB_032119a0:
        lVar13 = local_70;
        uVar11 = local_70._4_4_;
        local_70 = (ulong)local_70._4_4_ << 0x20;
        if (lVar13 < 0) goto LAB_032119ac;
      }
      else {
        iVar8 = (int)local_90 + 1;
        if ((int)(local_90._4_4_ & 0x3fffffff) <= (int)local_90) {
          local_98 = FUN_03210de0(PTR_PTR_0434a080,iVar8,local_98,local_90 & 0xffffffff,
                                  (long)&local_90 + 4);
        }
        puVar2 = (undefined8 *)(local_98 + (long)(int)local_90 * 0x20);
        local_90 = CONCAT44(local_90._4_4_,iVar8);
        *puVar2 = 0xffffffffffffffff;
        *(undefined4 *)(puVar2 + 1) = 0xffffffff;
        plVar10 = puVar2 + 2;
        *plVar10 = 0;
        puVar2[3] = 0x8000000000000000;
        *puVar2 = local_88;
        *(undefined4 *)(puVar2 + 1) = local_80;
        if (&local_78 == plVar10) goto LAB_032119a0;
        FUN_032bcf84(puVar6,plVar10,4);
        if (local_70 < 0) {
          FUN_032bcf84(puVar6,&local_78,4);
        }
        lVar13 = *plVar10;
        *plVar10 = local_78;
        *(int *)(puVar2 + 3) = (int)local_70;
        uVar11 = *(uint *)((long)puVar2 + 0x1c);
        *(uint *)((long)puVar2 + 0x1c) = (uint)((ulong)local_70 >> 0x20);
        local_70 = (ulong)uVar11 << 0x20;
        local_78 = lVar13;
        if ((int)uVar11 < 0) goto LAB_032119ac;
      }
      if (local_78 != 0) {
        (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,local_78,uVar11 << 2);
      }
    }
    else if (iVar8 == 0) {
      local_78 = 0;
      local_70 = -0x8000000000000000;
      local_88 = 0xffffffffffffffff;
      local_80 = 0xffffffff;
      plVar10 = (long *)0x0;
      if (*(char *)(lVar13 + 0x58) != '\0') {
        plVar10 = &local_78;
      }
      FUN_031c30ec(*puVar2,*(undefined8 *)(lVar13 + 0x28),0xffffffff,auStack_108,auStack_d0,plVar10,
                   &local_88);
      puVar6 = PTR_PTR_0434a080;
      if ((*(char *)(*(long *)(param_1 + 0x918) + 0x58) == '\0') || ((int)local_70 == 0)) {
LAB_03212190:
        lVar13 = local_70;
        uVar11 = local_70._4_4_;
        local_70 = (ulong)local_70._4_4_ << 0x20;
        if (lVar13 < 0) goto LAB_032119ac;
      }
      else {
        iVar8 = (int)local_90 + 1;
        if ((int)(local_90._4_4_ & 0x3fffffff) <= (int)local_90) {
          local_98 = FUN_03210de0(PTR_PTR_0434a080,iVar8,local_98,local_90 & 0xffffffff,
                                  (long)&local_90 + 4);
        }
        puVar2 = (undefined8 *)(local_98 + (long)(int)local_90 * 0x20);
        local_90 = CONCAT44(local_90._4_4_,iVar8);
        *puVar2 = 0xffffffffffffffff;
        *(undefined4 *)(puVar2 + 1) = 0xffffffff;
        plVar10 = puVar2 + 2;
        *plVar10 = 0;
        puVar2[3] = 0x8000000000000000;
        *puVar2 = local_88;
        *(undefined4 *)(puVar2 + 1) = local_80;
        if (&local_78 == plVar10) goto LAB_03212190;
        FUN_032bcf84(puVar6,plVar10,4);
        if (local_70 < 0) {
          FUN_032bcf84(puVar6,&local_78,4);
        }
        lVar13 = *plVar10;
        *plVar10 = local_78;
        *(int *)(puVar2 + 3) = (int)local_70;
        uVar11 = *(uint *)((long)puVar2 + 0x1c);
        *(uint *)((long)puVar2 + 0x1c) = (uint)((ulong)local_70 >> 0x20);
        local_70 = (ulong)uVar11 << 0x20;
        local_78 = lVar13;
        if ((int)uVar11 < 0) goto LAB_032119ac;
      }
      if (local_78 != 0) {
        (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,local_78,uVar11 << 2);
      }
    }
    else if (iVar8 == 2) {
      FUN_031c33d4(*puVar2,*(undefined8 *)(lVar13 + 0x28),0xffffffff,auStack_108);
    }
    else {
      if (iVar8 != 3) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      FUN_031c2574(*puVar2,*(undefined8 *)(lVar13 + 0x28),0xffffffff,auStack_108);
    }
LAB_032119ac:
    lVar16 = (long)DAT_0444b53c;
    lVar13 = *(long *)(lVar5 + 0x38d490);
    if (lVar13 == 0) {
      lVar13 = FUN_0333d16c(0,1);
      *(long *)(lVar5 + 0x38d490) = lVar13;
    }
    if (*(long *)(lVar13 + lVar16 * 8 + 0x18) == 0) goto code_r0x032119d4;
    FUN_0332a954();
  } while (lVar17 == 0);
  goto LAB_032119d8;
code_r0x032119d4:
  if (lVar17 != 0) {
LAB_032119d8:
    puVar2 = *(undefined8 **)(lVar17 + 8);
    uVar14 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= *(ulong *)(lVar17 + 0x10)) &&
       (*(ulong *)(lVar17 + 8) = uVar14, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_0390f40e;
      uVar9 = nn::os::GetSystemTick();
      puVar2[1] = uVar9;
    }
  }
  goto LAB_032118a4;
}


