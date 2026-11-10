/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018ec42c; name: FUN_018ec42c
 */


ulong FUN_018ec42c(long param_1,long param_2,int *param_3,undefined8 param_4)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  char *pcVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined4 local_104;
  undefined8 local_100;
  char *pcStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  undefined8 uStack_a8;
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
  
  lVar12 = (long)register0x00000008 + -0x10;
  lVar9 = nn::os::GetCurrentThread();
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
            *plVar1 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_018ec4a0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_018ec4a0:
  lVar9 = *(long *)(param_1 + 0x68);
  if (*(char *)(param_1 + 0x210) != '\0') {
    pcVar15 = (char *)(param_1 + 0x211);
    do {
      cVar4 = *pcVar15;
      pcVar15 = pcVar15 + 1;
    } while (cVar4 != '\0');
  }
  local_98 = param_1 + 0x210;
  local_90 = param_1 + 0x230;
  if (*(char *)(param_1 + 0x230) != '\0') {
    pcVar15 = (char *)(param_1 + 0x231);
    do {
      cVar4 = *pcVar15;
      pcVar15 = pcVar15 + 1;
    } while (cVar4 != '\0');
  }
  iVar7 = *param_3;
  uVar17 = *(undefined8 *)(lVar9 + 0x150);
  lVar13 = tpidr_el0;
  if (*(long *)(lVar13 + 0x20) == 0) {
    *(undefined8 *)(lVar13 + 0x20) = DAT_043f1798;
  }
  local_80 = *(undefined8 *)(lVar13 + 0x20);
  local_78 = *(undefined8 *)(lVar13 + 0x28);
  *(undefined8 *)(lVar13 + 0x20) = uVar17;
  *(undefined2 *)(lVar13 + 0x28) = 1;
  local_a0 = lVar9 + 0x158;
  uStack_88 = *(undefined8 *)(param_2 + 8);
  FUN_008c96f8(&local_70,&local_a0);
  lVar6 = local_70;
  if (local_70 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00151e00(local_70,0xfff0b9d8,(long)local_68);
    if (local_70 != lVar6) {
      FUN_0014fe00(local_70,lVar6,1);
    }
  }
  lVar6 = local_70;
  FUN_001514d0(local_70,(long)iVar7);
  pbStack_58 = (byte *)FUN_017bf75c();
  if ((*pbStack_58 & 1) == 0) {
    pbStack_58 = pbStack_58 + 1;
  }
  else {
    pbStack_58 = *(byte **)(pbStack_58 + 0x10);
  }
  local_60 = lVar6;
  if (((DAT_043d1a30 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043d1a30), iVar7 != 0)) {
    DAT_043d1a28 = 8;
    __cxa_guard_release(&DAT_043d1a30);
  }
  if (((DAT_043d1a40 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043d1a40), iVar7 != 0)) {
    DAT_043d1a38 = 0xf;
    __cxa_guard_release(&DAT_043d1a40);
  }
  uVar11 = DAT_043d1a28;
  lVar10 = FUN_00153520(lVar6,DAT_043d1a28);
  if ((((ulong)(uint)-(int)lVar10 & 7 | 8) <= uVar11) &&
     (puVar16 = (undefined8 *)(lVar10 + ((ulong)(uint)-(int)lVar10 & 7)),
     puVar16 != (undefined8 *)0x0)) {
LAB_018ec5fc:
    *puVar16 = param_4;
    FUN_018ecf2c(&local_60);
    iVar7 = FUN_0014fef0(local_70);
    if (iVar7 < 4) {
      iVar7 = 3;
    }
    FUN_00152d80(local_70,2,0xffffffff,0,0);
    iVar8 = FUN_0014fef0(local_70);
    if ((local_70 != 0) && (local_68 != -2)) {
      FUN_00155150(local_70,0xfff0b9d8);
    }
    FUN_0014ff10(local_70,~((iVar8 - iVar7) + 3U));
    *(undefined8 *)(lVar13 + 0x20) = local_80;
    *(undefined2 *)(lVar13 + 0x28) = (undefined2)local_78;
    if (*(char *)(lVar9 + 0x192) == '\0') {
      lVar12 = FUN_0107dd34(lVar9);
      lVar9 = nn::os::GetCurrentThread();
      plVar1 = (long *)(lVar12 + 0x50);
      do {
        if (*plVar1 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x44));
            while (*plVar1 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar9;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_018ec78c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_018ec78c:
      lVar9 = *(long *)(lVar12 + 8);
      if (*(long *)(lVar13 + 0x20) == 0) {
        *(undefined8 *)(lVar13 + 0x20) = DAT_043f1798;
      }
      plVar1 = (long *)(lVar13 + 0x20);
      local_a0 = *plVar1;
      local_98 = *(long *)(lVar13 + 0x28);
      *plVar1 = lVar9;
      *(undefined2 *)(lVar13 + 0x28) = 1;
      *(undefined1 *)(lVar12 + 0x58) = 0;
      FUN_001530e0(*(undefined8 *)(*(long *)(lVar12 + 0x10) + 8),5,0x14);
      *plVar1 = local_a0;
      *(undefined2 *)(lVar13 + 0x28) = (undefined2)local_98;
      *(undefined8 *)(lVar12 + 0x50) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x44));
    }
    *(undefined8 *)(param_1 + 0x260) = 0;
    uVar11 = nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x254));
    return uVar11;
  }
  FUN_0014ff10(lVar6,0xfffffffe);
  uVar11 = DAT_043d1a38;
  lVar10 = FUN_00153520(lVar6,DAT_043d1a38);
  if ((((ulong)(uint)-(int)lVar10 & 7 | 8) <= uVar11) &&
     (puVar16 = (undefined8 *)(lVar10 + ((ulong)(uint)-(int)lVar10 & 7)),
     puVar16 != (undefined8 *)0x0)) goto LAB_018ec5fc;
  FUN_0014ff10(lVar6,0xfffffffe);
  FUN_018ed4d0();
  if ((DAT_043d1a48 & 1) == 0) {
    puVar14 = &DAT_043d1a49;
  }
  else {
    puVar14 = DAT_043d1a58;
  }
  lVar13 = FUN_00154110(lVar6,"cannot properly align memory for \'%s\'");
  uStack_a8 = 0x18ec8ac;
  local_c0 = lVar9;
  lStack_b8 = param_1;
  local_b0 = lVar12;
  if (*(long *)(puVar14 + 0x20) == 0) {
    local_c8 = (long *)0x0;
    if (*(long *)(puVar14 + 0x40) == 0) goto LAB_018ec8d8;
LAB_018ec9ec:
    FUN_017dca7c(&local_d0);
  }
  else {
    FUN_00cfac20(&local_c8);
    if (*(long *)(puVar14 + 0x40) != 0) goto LAB_018ec9ec;
LAB_018ec8d8:
    local_d0 = (long *)0x0;
  }
  FUN_0099c748(&local_d8,puVar14 + 0x10);
  if (((local_c8 != (long *)0x0) && (local_d0 != (long *)0x0)) && (local_d8 != (long *)0x0)) {
    if (*(long *)(puVar14 + 0x50) == 0) {
      local_e0 = (long *)0x0;
    }
    else {
      FUN_018ecdb8(&local_e0);
      if (local_e0 != (long *)0x0) {
        if (*(char *)(lVar13 + 0xe8) != '\0') {
          local_100 = 0x42cf68c14e63bb47;
          pcStack_f8 = "BuddyStatePostUpdate";
          local_f0 = 0x14;
          uStack_e8 = 0;
          local_104 = *(undefined4 *)(lVar13 + 0x68);
          FUN_018ec42c(local_e0,&local_100,&local_104,puVar14);
          if (local_e0 == (long *)0x0) goto LAB_018ec90c;
        }
        lVar12 = local_e0[0xb];
        piVar2 = (int *)(lVar12 + 0xc);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_e0 + 0x20))();
        }
      }
    }
  }
LAB_018ec90c:
  uVar3 = *(uint *)(lVar13 + 0x6c);
  if (local_d8 != (long *)0x0) {
    lVar12 = local_d8[0xb];
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_d8 + 0x20))();
    }
  }
  if (local_d0 != (long *)0x0) {
    lVar12 = local_d0[0xb];
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_d0 + 0x20))();
    }
  }
  if (local_c8 != (long *)0x0) {
    lVar12 = local_c8[0xb];
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_c8 + 0x20))();
    }
  }
  return (ulong)uVar3;
}


