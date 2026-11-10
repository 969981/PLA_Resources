/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b8d454; name: FUN_01b8d454
 */


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_01b8d454(ulong param_1,undefined2 *param_2,undefined8 *param_3,ulong param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  undefined2 uVar13;
  long lVar14;
  long *plVar15;
  undefined4 uVar16;
  ulong unaff_x24;
  long *local_1e8;
  undefined8 *local_1e0;
  undefined8 uStack_1d8;
  long *local_1d0;
  undefined8 *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined1 auStack_168 [24];
  long *local_150;
  long *local_130;
  long *local_110;
  long *local_f0;
  long *local_d0;
  long *local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x210) == 0) {
    local_1d0 = (long *)0x0;
  }
  else {
    FUN_011a5e18(&local_1d0);
  }
  FUN_009c69bc(&local_1e8,param_1);
  (**(code **)(*local_1e8 + 0x18))(&local_1c8);
  local_1e0 = (undefined8 *)0x0;
  uStack_1d8 = 0;
  FUN_0087f944(&local_1e0,&local_1c8);
  puVar7 = local_1c8;
  if (local_1c8 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_1c8 + 1);
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
      local_1c8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_48 = *puVar7;
      FUN_02a44274(lVar14 + 0xd8,&local_48);
    }
  }
  if (local_1e8 != (long *)0x0) {
    lVar14 = local_1e8[0xb];
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
      (**(code **)(*local_1e8 + 0x20))();
    }
  }
  if (local_1d0 != (long *)0x0) {
    iVar9 = *(int *)(param_1 + 0x714);
    if (*(char *)(param_1 + 0x718) == '\0') {
      bVar4 = false;
      bVar5 = false;
      if (*(char *)(param_1 + 0x724) == '\0') goto LAB_01b8da6c;
LAB_01b8d568:
      param_1 = *(ulong *)(param_1 + 0x728);
      bVar6 = true;
    }
    else {
      unaff_x24 = *(ulong *)(param_1 + 0x71c);
      bVar4 = true;
      bVar5 = bVar4;
      if (*(char *)(param_1 + 0x724) != '\0') goto LAB_01b8d568;
LAB_01b8da6c:
      bVar6 = false;
      bVar5 = bVar4;
    }
    if ((param_4 & 0xff) != 0) {
      iVar9 = (int)(param_4 >> 0x20);
    }
    if (iVar9 == 1) {
      if (((*PTR_DAT_04379578 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379578), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379578);
      }
      lVar14 = *(long *)PTR_DAT_04379580;
      uVar16 = 0;
      *(long *)PTR_DAT_04379588 = lVar14;
      puVar7 = local_1e0;
      if ((!bVar6) || (*(int *)(lVar14 + 0xf8) != 0)) goto joined_r0x01b8dac0;
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar14 = *(long *)PTR_DAT_04379680;
      *(long *)PTR_DAT_04379688 = lVar14;
      plVar12 = *(long **)(lVar14 + 0xd0);
      if (plVar12 != (long *)0x0) {
        plVar15 = plVar12 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *(int *)plVar15 = (int)*plVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar15 = (long *)plVar12[0xb];
      if (plVar15 != (long *)0x0) {
        plVar2 = plVar15 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar2 = plVar12 + 10;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar12 + 0x10))();
        if ((param_1 & 0xff00000000) != 0) goto LAB_01b8d82c;
LAB_01b8da90:
        uVar16 = 0;
joined_r0x01b8da90:
        puVar7 = local_1e0;
        if (plVar15 == (long *)0x0) goto joined_r0x01b8dac0;
      }
      else {
        if ((param_1 & 0xff00000000) == 0) goto LAB_01b8da90;
LAB_01b8d82c:
        if (plVar15 != (long *)0x0) {
          plVar12 = plVar15 + 10;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *(int *)plVar12 = (int)*plVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if ((uint)param_1 < (uint)*(byte *)(plVar15 + 0x11)) {
          lVar14 = (**(code **)(*plVar15 + 0x58))(plVar15,param_1 & 0xffffffff);
          if (*(long *)(*(long *)(lVar14 + 0x98) + 8) == 0) {
            uVar8 = FUN_02c5e31c();
            uVar8 = uVar8 & 0xffff;
          }
          else {
            uVar8 = FUN_02c66b3c(*(long *)(lVar14 + 0x98));
          }
          if (uVar8 == 0) goto LAB_01b8d924;
          bVar4 = true;
        }
        else {
LAB_01b8d924:
          bVar4 = false;
        }
        plVar12 = plVar15 + 10;
        do {
          iVar9 = (int)*plVar12 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *(int *)plVar12 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 != 0) {
          if (!bVar4) goto LAB_01b8da90;
LAB_01b8d89c:
          lVar14 = (**(code **)(*plVar15 + 0x58))(plVar15,param_1 & 0xffffffff);
          iVar9 = FUN_02c73a80(*(undefined8 *)(lVar14 + 0x98));
          if (((*PTR_DAT_043795f8 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_043795f8);
          }
          lVar14 = *(long *)PTR_DAT_04379600;
          *(long *)PTR_DAT_04379608 = lVar14;
          if (iVar9 == 0) {
LAB_01b8d92c:
            uVar13 = 0;
          }
          else {
            lVar14 = *(long *)(lVar14 + 0x80);
            if ((uint)*(byte *)(lVar14 + 0x19) <= (iVar9 - 1U & 0xff)) goto LAB_01b8d92c;
            uVar13 = *(undefined2 *)
                      (lVar14 + (ulong)*(ushort *)(lVar14 + 2) * 2 +
                       (ulong)*(byte *)(lVar14 + 8) * 2 + (ulong)(byte)(iVar9 - 1U) * 2 + 0x36c);
          }
          *(undefined8 *)(param_2 + 0xcc) = param_3[1];
          *(undefined8 *)(param_2 + 200) = *param_3;
          *param_2 = uVar13;
          FUN_01918414(&local_1c8,local_1d0);
          *(undefined8 *)(param_2 + 0xc) = local_1b8;
          *(undefined8 *)(param_2 + 0x10) = uStack_1b0;
          *(undefined8 **)(param_2 + 4) = local_1c8;
          *(undefined8 *)(param_2 + 8) = uStack_1c0;
          *(undefined8 *)(param_2 + 0x1c) = local_198;
          *(undefined8 *)(param_2 + 0x20) = uStack_190;
          *(undefined8 *)(param_2 + 0x14) = local_1a8;
          *(undefined8 *)(param_2 + 0x18) = uStack_1a0;
          *(undefined4 *)(param_2 + 0x30) = local_170;
          *(undefined8 *)(param_2 + 0x28) = uStack_180;
          *(undefined8 *)(param_2 + 0x2c) = local_178;
          *(undefined8 *)(param_2 + 0x24) = local_188;
          FUN_01b926cc(param_2 + 0x34,auStack_168);
          *(undefined8 *)(param_2 + 0x98) = local_a0;
          *(undefined8 *)(param_2 + 0x9c) = uStack_98;
          *(undefined8 *)(param_2 + 0xa8) = local_80;
          *(undefined8 *)(param_2 + 0xac) = uStack_78;
          *(undefined8 *)(param_2 + 0xa0) = local_90;
          *(undefined8 *)(param_2 + 0xa4) = uStack_88;
          *(undefined8 *)(param_2 + 0xb8) = local_60;
          *(undefined8 *)(param_2 + 0xbc) = uStack_58;
          *(undefined8 *)(param_2 + 0xb0) = local_70;
          *(undefined8 *)(param_2 + 0xb4) = uStack_68;
          if (local_b0 != (long *)0x0) {
            (**(code **)(*local_b0 + 0x20))();
          }
          if (local_d0 != (long *)0x0) {
            (**(code **)(*local_d0 + 0x20))();
          }
          if (local_f0 != (long *)0x0) {
            (**(code **)(*local_f0 + 0x20))();
          }
          if (local_110 != (long *)0x0) {
            (**(code **)(*local_110 + 0x20))();
          }
          if (local_130 != (long *)0x0) {
            (**(code **)(*local_130 + 0x20))();
          }
          if (local_150 != (long *)0x0) {
            (**(code **)(*local_150 + 0x20))();
          }
          FUN_008c4b3c(param_2 + 0xc0,&local_1e0);
          uVar16 = 1;
          *(undefined1 *)(param_2 + 0xdc) = 0;
          *(undefined4 *)(param_2 + 0xd2) = 4;
          *(undefined1 *)(param_2 + 0xd0) = 1;
          *(uint *)(param_2 + 0xd4) = (uint)param_1;
          goto joined_r0x01b8da90;
        }
        (**(code **)(*plVar15 + 0x10))(plVar15);
        if (bVar4) goto LAB_01b8d89c;
        uVar16 = 0;
      }
      plVar12 = plVar15 + 10;
      do {
        iVar9 = (int)*plVar12 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar7 = local_1e0;
      if (iVar9 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        puVar7 = local_1e0;
      }
      goto joined_r0x01b8dac0;
    }
    uVar16 = 0;
    puVar7 = local_1e0;
    if ((((iVar9 != 0) || (!bVar5)) || ((unaff_x24 & 0xff00000000) == 0)) ||
       (0x723 < (int)unaff_x24 - 1U)) goto joined_r0x01b8dac0;
    uVar11 = FUN_01918550(local_1d0,unaff_x24 & 0xffffffff);
    if ((uVar11 & 1) != 0) {
      *(undefined8 *)(param_2 + 0xcc) = param_3[1];
      *(undefined8 *)(param_2 + 200) = *param_3;
      *param_2 = (short)unaff_x24;
      FUN_01918414(&local_1c8,local_1d0,unaff_x24 & 0xffffffff);
      *(undefined8 *)(param_2 + 0xc) = local_1b8;
      *(undefined8 *)(param_2 + 0x10) = uStack_1b0;
      *(undefined8 **)(param_2 + 4) = local_1c8;
      *(undefined8 *)(param_2 + 8) = uStack_1c0;
      *(undefined8 *)(param_2 + 0x1c) = local_198;
      *(undefined8 *)(param_2 + 0x20) = uStack_190;
      *(undefined8 *)(param_2 + 0x14) = local_1a8;
      *(undefined8 *)(param_2 + 0x18) = uStack_1a0;
      *(undefined4 *)(param_2 + 0x30) = local_170;
      *(undefined8 *)(param_2 + 0x28) = uStack_180;
      *(undefined8 *)(param_2 + 0x2c) = local_178;
      *(undefined8 *)(param_2 + 0x24) = local_188;
      FUN_01b926cc(param_2 + 0x34,auStack_168);
      *(undefined8 *)(param_2 + 0x98) = local_a0;
      *(undefined8 *)(param_2 + 0x9c) = uStack_98;
      *(undefined8 *)(param_2 + 0xa8) = local_80;
      *(undefined8 *)(param_2 + 0xac) = uStack_78;
      *(undefined8 *)(param_2 + 0xa0) = local_90;
      *(undefined8 *)(param_2 + 0xa4) = uStack_88;
      *(undefined8 *)(param_2 + 0xb8) = local_60;
      *(undefined8 *)(param_2 + 0xbc) = uStack_58;
      *(undefined8 *)(param_2 + 0xb0) = local_70;
      *(undefined8 *)(param_2 + 0xb4) = uStack_68;
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      if (local_d0 != (long *)0x0) {
        (**(code **)(*local_d0 + 0x20))();
      }
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      if (local_110 != (long *)0x0) {
        (**(code **)(*local_110 + 0x20))();
      }
      if (local_130 != (long *)0x0) {
        (**(code **)(*local_130 + 0x20))();
      }
      if (local_150 != (long *)0x0) {
        (**(code **)(*local_150 + 0x20))();
      }
      FUN_008c4b3c(param_2 + 0xc0,&local_1e0);
      *(undefined1 *)(param_2 + 0xdc) = 0;
      uVar16 = 1;
      puVar7 = local_1e0;
      goto joined_r0x01b8dac0;
    }
  }
  uVar16 = 0;
  puVar7 = local_1e0;
joined_r0x01b8dac0:
  local_1e0 = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
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
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_1c8 = (undefined8 *)*puVar7;
      FUN_02a44274(lVar14 + 0xd8,&local_1c8);
    }
  }
  if (local_1d0 != (long *)0x0) {
    lVar14 = local_1d0[0xb];
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
      (**(code **)(*local_1d0 + 0x20))();
    }
  }
  return uVar16;
}


