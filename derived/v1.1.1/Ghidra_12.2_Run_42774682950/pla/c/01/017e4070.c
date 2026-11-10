/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017e4070; name: FUN_017e4070
 */


/* WARNING: Removing unreachable block (ram,0x017e463c) */
/* WARNING: Removing unreachable block (ram,0x017e4640) */
/* WARNING: Removing unreachable block (ram,0x017e4648) */
/* WARNING: Removing unreachable block (ram,0x017e4650) */
/* WARNING: Removing unreachable block (ram,0x017e4654) */

void FUN_017e4070(undefined8 *param_1,long param_2,int param_3,long *param_4,undefined8 *param_5,
                 undefined8 *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  char cVar21;
  bool bVar22;
  int iVar23;
  int iVar24;
  undefined8 uVar25;
  long *plVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined4 uVar29;
  long lVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  long *plVar33;
  long lVar34;
  long *local_1a0;
  long *local_198;
  undefined1 local_190;
  char local_180;
  undefined8 local_170;
  undefined1 local_168;
  undefined4 local_167;
  undefined3 uStack_163;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined2 local_144;
  undefined2 local_142;
  undefined2 local_140;
  undefined2 local_13e;
  undefined2 local_13c;
  undefined2 local_13a;
  undefined1 local_138;
  undefined1 local_137;
  undefined8 local_136;
  undefined4 local_12e;
  undefined8 local_12a;
  undefined8 local_122;
  undefined8 local_11a;
  undefined2 local_112;
  undefined4 local_110;
  undefined1 local_10c;
  undefined1 local_10b;
  undefined2 local_10a;
  undefined2 local_108;
  undefined2 local_106;
  undefined1 local_104;
  undefined1 local_103;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a0;
  undefined3 uStack_9c;
  long *local_98;
  long *local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 local_78 [3];
  
  FUN_017e9e98(&local_90,*(undefined8 *)(param_2 + 0x88));
  lVar34 = local_90[0x23];
  local_98 = (long *)FUN_017ea00c(lVar34);
  if (local_98 != (long *)0x0) {
    lVar30 = local_98[0xb];
    if (*(undefined8 **)(lVar30 + 0x18) == (undefined8 *)0x0) goto LAB_017e48cc;
    if (*(long *)(lVar30 + 0x10) == 0) {
      uVar25 = (**(code **)**(undefined8 **)(lVar30 + 0x18))();
      *(undefined8 *)(lVar30 + 0x10) = uVar25;
    }
    piVar1 = (int *)(lVar30 + 0xc);
    do {
      cVar21 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar22) {
        *piVar1 = *piVar1 + 1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
  }
  lVar34 = FUN_017ea4e4(&local_1a0,lVar34);
  if (lVar34 != 0) {
    lVar30 = *(long *)(lVar34 + 0x58);
    if (*(undefined8 **)(lVar30 + 0x18) == (undefined8 *)0x0) goto LAB_017e48cc;
    if (*(long *)(lVar30 + 0x10) == 0) {
      uVar25 = (**(code **)**(undefined8 **)(lVar30 + 0x18))();
      *(undefined8 *)(lVar30 + 0x10) = uVar25;
    }
    piVar1 = (int *)(lVar30 + 0xc);
    do {
      cVar21 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar22) {
        *piVar1 = *piVar1 + 1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
  }
  plVar33 = local_98;
  plVar26 = (long *)local_98[0xd];
  local_98[0xd] = 0;
  if (plVar26 != (long *)0x0) {
    lVar30 = plVar26[0xb];
    piVar1 = (int *)(lVar30 + 0xc);
    do {
      iVar23 = *piVar1;
      cVar21 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar22) {
        *piVar1 = iVar23 + -1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    if (iVar23 + -1 == 0) {
      *(undefined8 *)(lVar30 + 0x18) = 0;
      (**(code **)(*plVar26 + 0x20))();
    }
  }
  plVar33[0xd] = lVar34;
  *(int *)(local_98 + 0xf) = param_3;
  uStack_a0 = *(undefined4 *)((long)param_5 + 9);
  uVar28 = *param_5;
  uVar4 = *(undefined1 *)(param_5 + 1);
  uStack_9c = (undefined3)((uint)*(undefined4 *)((long)param_5 + 0xc) >> 8);
  uVar11 = *(undefined2 *)((long)param_5 + 0x2c);
  local_b0 = *(undefined8 *)((long)param_5 + 0x3a);
  local_a8 = *(undefined4 *)((long)param_5 + 0x42);
  uVar25 = param_5[2];
  uVar2 = param_5[3];
  uVar12 = *(undefined2 *)((long)param_5 + 0x2e);
  uVar32 = param_5[4];
  uVar29 = *(undefined4 *)(param_5 + 5);
  uVar13 = *(undefined2 *)(param_5 + 6);
  uVar14 = *(undefined2 *)((long)param_5 + 0x32);
  uVar15 = *(undefined2 *)((long)param_5 + 0x34);
  uVar16 = *(undefined2 *)((long)param_5 + 0x36);
  uVar5 = *(undefined1 *)(param_5 + 7);
  uVar6 = *(undefined1 *)((long)param_5 + 0x39);
  local_c8 = *(undefined8 *)((long)param_5 + 0x46);
  local_c0 = *(undefined8 *)((long)param_5 + 0x4e);
  local_b8 = *(undefined8 *)((long)param_5 + 0x56);
  uVar7 = *(undefined1 *)((long)param_5 + 0x6d);
  uVar17 = *(undefined2 *)((long)param_5 + 0x5e);
  uVar3 = *(undefined4 *)(param_5 + 0xc);
  uVar8 = *(undefined1 *)((long)param_5 + 100);
  uVar9 = *(undefined1 *)((long)param_5 + 0x65);
  uVar18 = *(undefined2 *)((long)param_5 + 0x66);
  uVar19 = *(undefined2 *)(param_5 + 0xd);
  uVar20 = *(undefined2 *)((long)param_5 + 0x6a);
  uVar10 = *(undefined1 *)((long)param_5 + 0x6c);
  local_180 = '\0';
  local_190 = 0;
  local_198 = (long *)0x0;
  local_d8 = (undefined4)*param_6;
  uStack_d4 = (undefined4)((ulong)*param_6 >> 0x20);
  uStack_d0 = (undefined4)param_6[1];
  local_cc = (undefined4)((ulong)param_6[1] >> 0x20);
  if (param_4 != (long *)0x0) {
    plVar33 = param_4 + 10;
    do {
      cVar21 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar22) {
        *(int *)plVar33 = (int)*plVar33 + 1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
  }
  plVar33 = (long *)local_98[0xd];
  local_1a0 = param_4;
  if (plVar33 != (long *)0x0) {
    lVar34 = plVar33[0xb];
    if (*(undefined8 **)(lVar34 + 0x18) == (undefined8 *)0x0) {
LAB_017e48cc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar34 + 0x10) == 0) {
      uVar27 = (**(code **)**(undefined8 **)(lVar34 + 0x18))();
      *(undefined8 *)(lVar34 + 0x10) = uVar27;
    }
    piVar1 = (int *)(lVar34 + 0xc);
    do {
      cVar21 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar22) {
        *piVar1 = *piVar1 + 1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
  }
  if (local_198 != (long *)0x0) {
    lVar34 = local_198[0xb];
    piVar1 = (int *)(lVar34 + 0xc);
    do {
      iVar23 = *piVar1;
      cVar21 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar22) {
        *piVar1 = iVar23 + -1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    if (iVar23 + -1 == 0) {
      *(undefined8 *)(lVar34 + 0x18) = 0;
      lVar34 = *local_198;
      local_198 = plVar33;
      (**(code **)(lVar34 + 0x20))();
      plVar33 = local_198;
    }
  }
  local_198 = plVar33;
  local_167 = uStack_a0;
  uStack_163 = uStack_9c;
  local_190 = 1;
  local_136 = local_b0;
  local_12e = local_a8;
  local_12a = local_c8;
  local_11a = local_b8;
  local_e4 = local_cc;
  local_ec = CONCAT44(uStack_d0,uStack_d4);
  local_122 = local_c0;
  local_f4 = CONCAT44(local_d8,uStack_dc);
  if (local_180 == '\0') {
    local_180 = '\x01';
  }
  *(undefined1 *)((long)local_98 + 0x71) = 1;
  local_170 = uVar28;
  local_168 = uVar4;
  local_160 = uVar25;
  uStack_158 = uVar2;
  local_150 = uVar32;
  local_148 = uVar29;
  local_144 = uVar11;
  local_142 = uVar12;
  local_140 = uVar13;
  local_13e = uVar14;
  local_13c = uVar15;
  local_13a = uVar16;
  local_138 = uVar5;
  local_137 = uVar6;
  local_112 = uVar17;
  local_110 = uVar3;
  local_10c = uVar8;
  local_10b = uVar9;
  local_10a = uVar18;
  local_108 = uVar19;
  local_106 = uVar20;
  local_104 = uVar10;
  local_103 = uVar7;
  local_100 = param_7;
  local_fc = param_8;
  local_f8 = param_9;
  lVar34 = nn::os::GetCurrentThread();
  plVar33 = (long *)(param_2 + 400);
  do {
    if (*plVar33 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x184));
        while (*plVar33 == 0) {
          cVar21 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar22) {
            *plVar33 = lVar34;
            cVar21 = ExclusiveMonitorsStatus();
          }
          if (cVar21 == '\0') goto LAB_017e4388;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar21 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(plVar33,0x10);
    if (bVar22) {
      *plVar33 = lVar34;
      cVar21 = ExclusiveMonitorsStatus();
    }
  } while (cVar21 != '\0');
LAB_017e4388:
  lVar34 = *(long *)(param_2 + 0xc0);
joined_r0x017e4394:
  if (lVar34 == param_2 + 0xb8) {
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
  }
  else {
    if ((*(int *)(*(long *)(lVar34 + 0x10) + 0x7c) == 0) ||
       (*(int *)(*(long *)(lVar34 + 0x10) + 0x78) != param_3)) goto LAB_017e439c;
    FUN_017e62ec(&local_88);
    puVar31 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      iVar23 = *(int *)((long)local_88 + 0xc);
      if (local_88 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_88 + 1);
        do {
          iVar24 = *piVar1;
          cVar21 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar22) {
            *piVar1 = iVar24 + -1;
            cVar21 = ExclusiveMonitorsStatus();
          }
        } while (cVar21 != '\0');
        if (iVar24 + -1 == 0) {
          local_88[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar24 = __cxa_guard_acquire(PTR_DAT_04379498), iVar24 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar34 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar34;
          local_78[0] = *puVar31;
          FUN_02a44274(lVar34 + 0xd8,local_78);
        }
      }
      plVar33 = local_98;
      if (iVar23 != 0) {
        FUN_017e3e5c(local_98 + 0x10,&local_1a0);
        uVar29 = 0;
        goto LAB_017e446c;
      }
    }
  }
  FUN_017e2bb4(param_2,&local_1a0);
  uVar29 = 2;
  plVar33 = local_98;
LAB_017e446c:
  *(undefined4 *)((long)plVar33 + 0x7c) = uVar29;
  puVar31 = (undefined8 *)(param_2 + 0xd0);
  plVar33 = (long *)(**(code **)(*(long *)*puVar31 + 0x10))((long *)*puVar31,0x18,8);
  if (plVar33 == (long *)0x0) {
    (**(code **)(*(long *)*puVar31 + 0xb8))();
  }
  *plVar33 = 0;
  FUN_017eb490(puVar31,plVar33 + 2,&local_98);
  plVar33[1] = param_2 + 0xb8;
  lVar34 = *(long *)(param_2 + 0xb8);
  *plVar33 = lVar34;
  *(long **)(lVar34 + 8) = plVar33;
  *(long *)(param_2 + 200) = *(long *)(param_2 + 200) + 1;
  *(long **)(param_2 + 0xb8) = plVar33;
  *(undefined8 *)(param_2 + 400) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x184));
  (**(code **)(*(long *)local_98[0xd] + 0x10))(&local_88);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_017e80a4(param_1,&local_88);
  puVar31 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_88 + 1);
    do {
      iVar23 = *piVar1;
      cVar21 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar22) {
        *piVar1 = iVar23 + -1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    if (iVar23 + -1 == 0) {
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar23 = __cxa_guard_acquire(PTR_DAT_04379498), iVar23 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar34 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar34;
      local_78[0] = *puVar31;
      FUN_02a44274(lVar34 + 0xd8,local_78);
    }
  }
  if (local_180 != '\0') {
    local_180 = '\0';
  }
  if (local_198 != (long *)0x0) {
    lVar34 = local_198[0xb];
    piVar1 = (int *)(lVar34 + 0xc);
    do {
      iVar23 = *piVar1;
      cVar21 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar22) {
        *piVar1 = iVar23 + -1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    if (iVar23 + -1 == 0) {
      *(undefined8 *)(lVar34 + 0x18) = 0;
      (**(code **)(*local_198 + 0x20))();
    }
  }
  if (local_1a0 != (long *)0x0) {
    plVar33 = local_1a0 + 10;
    do {
      iVar23 = (int)*plVar33 + -1;
      cVar21 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar22) {
        *(int *)plVar33 = iVar23;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    if (iVar23 == 0) {
      (**(code **)(*local_1a0 + 0x10))();
    }
  }
  if (local_98 != (long *)0x0) {
    lVar34 = local_98[0xb];
    piVar1 = (int *)(lVar34 + 0xc);
    do {
      iVar23 = *piVar1;
      cVar21 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar22) {
        *piVar1 = iVar23 + -1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    if (iVar23 + -1 == 0) {
      *(undefined8 *)(lVar34 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
  if (local_90 != (long *)0x0) {
    lVar34 = local_90[0xb];
    piVar1 = (int *)(lVar34 + 0xc);
    do {
      iVar23 = *piVar1;
      cVar21 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar22) {
        *piVar1 = iVar23 + -1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    if (iVar23 + -1 == 0) {
      *(undefined8 *)(lVar34 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  return;
LAB_017e439c:
  lVar34 = *(long *)(lVar34 + 8);
  goto joined_r0x017e4394;
}


