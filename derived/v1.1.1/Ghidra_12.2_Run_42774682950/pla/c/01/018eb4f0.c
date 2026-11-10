/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018eb4f0; name: FUN_018eb4f0
 */


void FUN_018eb4f0(long param_1,long param_2,int *param_3,undefined8 param_4)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  byte *pbVar17;
  char *pcVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  long *local_1a0;
  char *pcStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 *local_180;
  undefined8 uStack_178;
  long *local_170;
  undefined8 uStack_168;
  long *local_160;
  undefined8 uStack_158;
  long *local_150;
  undefined8 uStack_148;
  long *local_140;
  undefined8 uStack_138;
  long *local_130;
  undefined8 uStack_128;
  long local_120;
  long local_118;
  long *local_110 [2];
  long local_a0;
  long local_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  int local_68;
  long local_60;
  byte *pbStack_58;
  
  lVar14 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x260);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x254));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar14;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_018eb564;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_018eb564:
  lVar14 = *(long *)(param_1 + 0x68);
  if (*(char *)(param_1 + 0x210) != '\0') {
    pcVar18 = (char *)(param_1 + 0x211);
    do {
      cVar4 = *pcVar18;
      pcVar18 = pcVar18 + 1;
    } while (cVar4 != '\0');
  }
  local_98 = param_1 + 0x210;
  local_90 = param_1 + 0x230;
  if (*(char *)(param_1 + 0x230) != '\0') {
    pcVar18 = (char *)(param_1 + 0x231);
    do {
      cVar4 = *pcVar18;
      pcVar18 = pcVar18 + 1;
    } while (cVar4 != '\0');
  }
  iVar12 = *param_3;
  uVar21 = *(undefined8 *)(lVar14 + 0x150);
  lVar20 = tpidr_el0;
  if (*(long *)(lVar20 + 0x20) == 0) {
    *(undefined8 *)(lVar20 + 0x20) = DAT_043f1798;
  }
  local_80 = *(undefined8 *)(lVar20 + 0x20);
  local_78 = *(undefined8 *)(lVar20 + 0x28);
  *(undefined8 *)(lVar20 + 0x20) = uVar21;
  *(undefined2 *)(lVar20 + 0x28) = 1;
  local_a0 = lVar14 + 0x158;
  uStack_88 = *(undefined8 *)(param_2 + 8);
  FUN_008c96f8(&local_70,&local_a0);
  lVar16 = local_70;
  if (local_70 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00151e00(local_70,0xfff0b9d8,(long)local_68);
    if (local_70 != lVar16) {
      FUN_0014fe00(local_70,lVar16,1);
    }
  }
  lVar16 = local_70;
  FUN_001514d0(local_70,(long)iVar12);
  pbStack_58 = (byte *)FUN_017bf75c();
  if ((*pbStack_58 & 1) == 0) {
    pbStack_58 = pbStack_58 + 1;
  }
  else {
    pbStack_58 = *(byte **)(pbStack_58 + 0x10);
  }
  local_60 = lVar16;
  if (((DAT_043d1a10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043d1a10), iVar12 != 0)) {
    DAT_043d1a08 = 8;
    __cxa_guard_release(&DAT_043d1a10);
  }
  if (((DAT_043d1a20 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043d1a20), iVar12 != 0)) {
    DAT_043d1a18 = 0xf;
    __cxa_guard_release(&DAT_043d1a20);
  }
  uVar11 = DAT_043d1a08;
  lVar15 = FUN_00153520(lVar16,DAT_043d1a08);
  if ((((ulong)(uint)-(int)lVar15 & 7 | 8) <= uVar11) &&
     (puVar19 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
     puVar19 != (undefined8 *)0x0)) {
LAB_018eb6c0:
    *puVar19 = param_4;
    FUN_018ecf2c(&local_60);
    iVar12 = FUN_0014fef0(local_70);
    if (iVar12 < 4) {
      iVar12 = 3;
    }
    FUN_00152d80(local_70,2,0xffffffff,0,0);
    iVar13 = FUN_0014fef0(local_70);
    if ((local_70 != 0) && (local_68 != -2)) {
      FUN_00155150(local_70,0xfff0b9d8);
    }
    FUN_0014ff10(local_70,~((iVar13 - iVar12) + 3U));
    *(undefined8 *)(lVar20 + 0x20) = local_80;
    *(undefined2 *)(lVar20 + 0x28) = (undefined2)local_78;
    if (*(char *)(lVar14 + 0x192) == '\0') {
      lVar14 = FUN_0107dd34(lVar14);
      lVar16 = nn::os::GetCurrentThread();
      plVar1 = (long *)(lVar14 + 0x50);
      do {
        if (*plVar1 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x44));
            while (*plVar1 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar16;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_018eb840;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar16;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_018eb840:
      lVar16 = *(long *)(lVar14 + 8);
      if (*(long *)(lVar20 + 0x20) == 0) {
        *(undefined8 *)(lVar20 + 0x20) = DAT_043f1798;
      }
      plVar1 = (long *)(lVar20 + 0x20);
      local_a0 = *plVar1;
      local_98 = *(long *)(lVar20 + 0x28);
      *plVar1 = lVar16;
      *(undefined2 *)(lVar20 + 0x28) = 1;
      *(undefined1 *)(lVar14 + 0x58) = 0;
      FUN_001530e0(*(undefined8 *)(*(long *)(lVar14 + 0x10) + 8),5,0x14);
      *plVar1 = local_a0;
      *(undefined2 *)(lVar20 + 0x28) = (undefined2)local_98;
      *(undefined8 *)(lVar14 + 0x50) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x44));
    }
    *(undefined8 *)(param_1 + 0x260) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x254));
    return;
  }
  FUN_0014ff10(lVar16,0xfffffffe);
  uVar11 = DAT_043d1a18;
  lVar15 = FUN_00153520(lVar16,DAT_043d1a18);
  if ((((ulong)(uint)-(int)lVar15 & 7 | 8) <= uVar11) &&
     (puVar19 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
     puVar19 != (undefined8 *)0x0)) goto LAB_018eb6c0;
  FUN_0014ff10(lVar16,0xfffffffe);
  pbVar17 = (byte *)FUN_017c05f0();
  if ((*pbVar17 & 1) == 0) {
    pbVar17 = pbVar17 + 1;
  }
  else {
    pbVar17 = *(byte **)(pbVar17 + 0x10);
  }
  lVar14 = FUN_00154110(lVar16,"cannot properly align memory for \'%s\'",pbVar17);
  if (*(long *)(lVar14 + 0x70) == 0) {
    local_1a0 = (long *)0x0;
  }
  else {
    FUN_018ecc44(&local_1a0);
  }
  plVar1 = local_1a0;
  local_180 = (undefined8 *)0x0;
  uStack_178 = 0;
  FUN_00ac508c(&local_180,local_1a0 + 0x14);
  local_170 = (long *)0x0;
  uStack_168 = 0;
  FUN_00ac3fa4(&local_170,plVar1 + 0x16);
  local_160 = (long *)0x0;
  uStack_158 = 0;
  FUN_00b636fc(&local_160,plVar1 + 0x18);
  local_150 = (long *)0x0;
  uStack_148 = 0;
  FUN_018e559c(&local_150,plVar1 + 0x1a);
  local_140 = (long *)0x0;
  uStack_138 = 0;
  FUN_017db6d4(&local_140,plVar1 + 0x1c);
  local_130 = (long *)0x0;
  uStack_128 = 0;
  FUN_018e5814(&local_130,plVar1 + 0x1e);
  local_118 = plVar1[0x21];
  local_120 = plVar1[0x20];
  if (local_1a0 == (long *)0x0) {
LAB_018eba38:
    if (local_130 == (long *)0x0) goto LAB_018eba40;
LAB_018ebd1c:
    FUN_018ecdb8(local_110);
    if (local_110[0] != (long *)0x0) {
      if (*(char *)(lVar14 + 0xe8) != '\0') {
        local_1a0 = (long *)0x5cbf59782bbbe4a4;
        pcStack_198 = "BuddyStateExit";
        local_190 = 0xe;
        uStack_188 = 0;
        local_1a8 = *(undefined4 *)(lVar14 + 0x68);
        FUN_018eb4f0(local_110[0],&local_1a0,&local_1a8,&local_180);
        *(undefined1 *)(lVar14 + 0xe8) = 0;
        if (local_110[0] == (long *)0x0) goto LAB_018eba44;
      }
      lVar20 = local_110[0][0xb];
      piVar2 = (int *)(lVar20 + 0xc);
      do {
        iVar12 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*local_110[0] + 0x20))();
      }
    }
  }
  else {
    lVar20 = local_1a0[0xb];
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      iVar12 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 != 0) goto LAB_018eba38;
    *(undefined8 *)(lVar20 + 0x18) = 0;
    (**(code **)(*local_1a0 + 0x20))();
    if (local_130 != (long *)0x0) goto LAB_018ebd1c;
LAB_018eba40:
    local_110[0] = (long *)0x0;
  }
LAB_018eba44:
  FUN_0099c748(&local_1a8,&local_170);
  lVar20 = CONCAT44(uStack_1a4,local_1a8);
  if (lVar20 == 0) goto LAB_018eba9c;
  *(undefined1 *)(*(long *)(lVar20 + 0x5c0) + 0x9a) = 0;
  local_1a0 = (long *)0x0;
  pcStack_198 = (char *)0x0;
  FUN_01a2bf84(&local_1a0,lVar20 + 0x5c8);
  plVar1 = local_1a0;
  puVar10 = PTR_DAT_0437a3d0;
  puVar9 = PTR_DAT_0437a3c8;
  puVar8 = PTR_DAT_043795e0;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  if (local_1a0 == (long *)0x0) {
LAB_018eba78:
    plVar1 = (long *)CONCAT44(uStack_1a4,local_1a8);
  }
  else {
    if (*(int *)((long)local_1a0 + 0xc) != 0) {
      piVar2 = (int *)((long)local_1a0 + 0xc);
      iVar12 = *(int *)((long)local_1a0 + 0xc);
      do {
        plVar22 = (long *)plVar1[2];
        if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar13 != 0)) {
            if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar6), iVar13 != 0)) {
              uVar21 = FUN_0087f8f0();
              *(undefined8 *)puVar7 = uVar21;
              __cxa_guard_release(puVar6);
            }
            *(undefined **)puVar8 = puVar7;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar10 = puVar8;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar22 == (long *)0x0) goto LAB_018ec0a4;
          if (plVar22 == (long *)puVar10) break;
          plVar22 = (long *)*plVar22;
        }
        iVar13 = *piVar2;
        if (iVar13 == iVar12) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar20 = plVar1[3];
            plVar1 = (long *)0x0;
            plVar22 = local_1a0;
            if (lVar20 != 0) {
              plVar1 = (long *)(lVar20 + -0x50);
            }
            goto joined_r0x018ebfd0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar13;
      } while (iVar13 != 0);
    }
LAB_018ec0a4:
    plVar1 = (long *)0x0;
    plVar22 = local_1a0;
joined_r0x018ebfd0:
    local_1a0 = plVar22;
    if (plVar22 != (long *)0x0) {
      plVar3 = plVar22 + 1;
      do {
        iVar12 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 == 0) {
        plVar22[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar20 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar20;
        local_110[0] = (long *)*plVar22;
        FUN_02a44274(lVar20 + 0xd8,local_110);
      }
    }
    if (plVar1 == (long *)0x0) goto LAB_018eba78;
    FUN_01a5728c(plVar1,1);
    lVar20 = plVar1[0xb];
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      iVar12 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 != 0) goto LAB_018eba78;
    *(undefined8 *)(lVar20 + 0x18) = 0;
    (**(code **)(*plVar1 + 0x20))(plVar1);
    plVar1 = (long *)CONCAT44(uStack_1a4,local_1a8);
  }
  if (plVar1 != (long *)0x0) {
    lVar20 = plVar1[0xb];
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      iVar12 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar1 + 0x20))();
    }
  }
LAB_018eba9c:
  plVar1 = local_130;
  *(undefined4 *)(lVar14 + 0x6c) = *(undefined4 *)(lVar14 + 0x68);
  if (local_130 != (long *)0x0) {
    plVar22 = local_130 + 1;
    do {
      iVar12 = (int)*plVar22 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(int *)plVar22 = iVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 == 0) {
      local_130[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_1a0 = (long *)*plVar1;
      FUN_02a44274(lVar14 + 0xd8,&local_1a0);
    }
  }
  plVar1 = local_140;
  if (local_140 != (long *)0x0) {
    plVar22 = local_140 + 1;
    do {
      iVar12 = (int)*plVar22 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(int *)plVar22 = iVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 == 0) {
      local_140[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_1a0 = (long *)*plVar1;
      FUN_02a44274(lVar14 + 0xd8,&local_1a0);
    }
  }
  plVar1 = local_150;
  if (local_150 != (long *)0x0) {
    plVar22 = local_150 + 1;
    do {
      iVar12 = (int)*plVar22 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(int *)plVar22 = iVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 == 0) {
      local_150[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_1a0 = (long *)*plVar1;
      FUN_02a44274(lVar14 + 0xd8,&local_1a0);
    }
  }
  plVar1 = local_160;
  if (local_160 != (long *)0x0) {
    plVar22 = local_160 + 1;
    do {
      iVar12 = (int)*plVar22 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(int *)plVar22 = iVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 == 0) {
      local_160[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_1a0 = (long *)*plVar1;
      FUN_02a44274(lVar14 + 0xd8,&local_1a0);
    }
  }
  plVar1 = local_170;
  if (local_170 != (long *)0x0) {
    plVar22 = local_170 + 1;
    do {
      iVar12 = (int)*plVar22 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(int *)plVar22 = iVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 == 0) {
      local_170[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_1a0 = (long *)*plVar1;
      FUN_02a44274(lVar14 + 0xd8,&local_1a0);
    }
  }
  puVar19 = local_180;
  if (local_180 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_180 + 1);
    do {
      iVar12 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      local_180[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_1a0 = (long *)*puVar19;
      FUN_02a44274(lVar14 + 0xd8,&local_1a0);
    }
  }
  return;
}


