/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02711d4c; name: FUN_02711d4c
 */


ulong FUN_02711d4c(long param_1,long param_2,int *param_3,undefined8 param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined4 local_fc;
  long *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
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
  
  lVar8 = nn::os::GetCurrentThread();
  plVar16 = (long *)(param_1 + 0x260);
  do {
    if (*plVar16 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x254));
        while (*plVar16 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02711dc0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *plVar16 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02711dc0:
  lVar8 = *(long *)(param_1 + 0x68);
  if (*(char *)(param_1 + 0x210) != '\0') {
    pcVar13 = (char *)(param_1 + 0x211);
    do {
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
  }
  local_98 = param_1 + 0x210;
  local_90 = param_1 + 0x230;
  if (*(char *)(param_1 + 0x230) != '\0') {
    pcVar13 = (char *)(param_1 + 0x231);
    do {
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
  }
  iVar6 = *param_3;
  uVar15 = *(undefined8 *)(lVar8 + 0x150);
  lVar12 = tpidr_el0;
  if (*(long *)(lVar12 + 0x20) == 0) {
    *(undefined8 *)(lVar12 + 0x20) = DAT_043f1798;
  }
  local_80 = *(undefined8 *)(lVar12 + 0x20);
  local_78 = *(undefined8 *)(lVar12 + 0x28);
  *(undefined8 *)(lVar12 + 0x20) = uVar15;
  *(undefined2 *)(lVar12 + 0x28) = 1;
  local_a0 = lVar8 + 0x158;
  uStack_88 = *(undefined8 *)(param_2 + 8);
  FUN_008c96f8(&local_70,&local_a0);
  lVar11 = local_70;
  if (local_70 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00151e00(local_70,0xfff0b9d8,(long)local_68);
    if (local_70 != lVar11) {
      FUN_0014fe00(local_70,lVar11,1);
    }
  }
  lVar11 = local_70;
  FUN_001514d0(local_70,(long)iVar6);
  pbStack_58 = (byte *)FUN_023c5624();
  if ((*pbStack_58 & 1) == 0) {
    pbStack_58 = pbStack_58 + 1;
  }
  else {
    pbStack_58 = *(byte **)(pbStack_58 + 0x10);
  }
  local_60 = lVar11;
  if (((DAT_043ea0d0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043ea0d0), iVar6 != 0)) {
    DAT_043ea0c8 = 8;
    __cxa_guard_release(&DAT_043ea0d0);
  }
  if (((DAT_043ea0e0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043ea0e0), iVar6 != 0)) {
    DAT_043ea0d8 = 0xf;
    __cxa_guard_release(&DAT_043ea0e0);
  }
  uVar10 = DAT_043ea0c8;
  lVar9 = FUN_00153520(lVar11,DAT_043ea0c8);
  if ((((ulong)(uint)-(int)lVar9 & 7 | 8) <= uVar10) &&
     (puVar14 = (undefined8 *)(lVar9 + ((ulong)(uint)-(int)lVar9 & 7)), puVar14 != (undefined8 *)0x0
     )) {
LAB_02711f1c:
    *puVar14 = param_4;
    FUN_02712c70(&local_60);
    iVar6 = FUN_0014fef0(local_70);
    if (iVar6 < 4) {
      iVar6 = 3;
    }
    FUN_00152d80(local_70,2,0xffffffff,0,0);
    iVar7 = FUN_0014fef0(local_70);
    if ((local_70 != 0) && (local_68 != -2)) {
      FUN_00155150(local_70,0xfff0b9d8);
    }
    uVar10 = FUN_00150ba0(local_70,iVar6 + -2,0);
    FUN_0014ff10(local_70,~((iVar7 - iVar6) + 3U));
    *(undefined8 *)(lVar12 + 0x20) = local_80;
    *(undefined2 *)(lVar12 + 0x28) = (undefined2)local_78;
    if (*(char *)(lVar8 + 0x192) == '\0') {
      lVar8 = FUN_0107dd34(lVar8);
      lVar11 = nn::os::GetCurrentThread();
      plVar16 = (long *)(lVar8 + 0x50);
      do {
        if (*plVar16 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x44));
            while (*plVar16 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar4) {
                *plVar16 = lVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_027120c8;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = lVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_027120c8:
      lVar11 = *(long *)(lVar8 + 8);
      if (*(long *)(lVar12 + 0x20) == 0) {
        *(undefined8 *)(lVar12 + 0x20) = DAT_043f1798;
      }
      plVar16 = (long *)(lVar12 + 0x20);
      local_a0 = *plVar16;
      local_98 = *(long *)(lVar12 + 0x28);
      *plVar16 = lVar11;
      *(undefined2 *)(lVar12 + 0x28) = 1;
      *(undefined1 *)(lVar8 + 0x58) = 0;
      FUN_001530e0(*(undefined8 *)(*(long *)(lVar8 + 0x10) + 8),5,0x14);
      *plVar16 = local_a0;
      *(undefined2 *)(lVar12 + 0x28) = (undefined2)local_98;
      *(undefined8 *)(lVar8 + 0x50) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x44));
    }
    *(undefined8 *)(param_1 + 0x260) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x254));
    return uVar10 & 0xffffffff;
  }
  FUN_0014ff10(lVar11,0xfffffffe);
  uVar10 = DAT_043ea0d8;
  lVar9 = FUN_00153520(lVar11,DAT_043ea0d8);
  if ((((ulong)(uint)-(int)lVar9 & 7 | 8) <= uVar10) &&
     (puVar14 = (undefined8 *)(lVar9 + ((ulong)(uint)-(int)lVar9 & 7)), puVar14 != (undefined8 *)0x0
     )) goto LAB_02711f1c;
  FUN_0014ff10(lVar11,0xfffffffe);
  FUN_02713210();
  if ((DAT_043ea0e8 & 1) == 0) {
    plVar16 = &DAT_043ea0e9;
  }
  else {
    plVar16 = DAT_043ea0f8;
  }
  lVar12 = FUN_00154110(lVar11,"cannot properly align memory for \'%s\'");
  local_d0 = 0xfff0b9d8;
  uStack_a8 = 0x27121e8;
  if ((*plVar16 != 0) &&
     (uStack_c8 = param_4, local_c0 = lVar8, lStack_b8 = param_1,
     local_b0 = (long)register0x00000008 + -0x10, FUN_018ecdb8(&local_d8,*plVar16),
     local_d8 != (long *)0x0)) {
    local_f8 = (long *)&DAT_109d4e89d265e45a;
    pcStack_f0 = "RideBasuraoStatePostUpdate";
    local_e8 = 0x1a;
    uStack_e0 = 0;
    local_fc = *(undefined4 *)(lVar12 + 0x68);
    iVar6 = FUN_02711d4c(local_d8,&local_f8,&local_fc,plVar16);
    if (iVar6 == 0) {
      FUN_027125d4(&local_f8,*(undefined8 *)(lVar12 + 0x70));
      plVar5 = local_f8;
      if (1 < *(uint *)(local_f8 + 0xf)) {
        FUN_027135b0();
LAB_02712404:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      plVar16 = (long *)local_f8[(ulong)*(uint *)(local_f8 + 0xf) + 0xd];
      if (plVar16 != (long *)0x0) {
        lVar8 = plVar16[0xb];
        if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_02712404;
        if (*(long *)(lVar8 + 0x10) == 0) {
          uVar15 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
          *(undefined8 *)(lVar8 + 0x10) = uVar15;
        }
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      iVar6 = FUN_026241ac(plVar5,1);
      (**(code **)(*plVar16 + 0x70))(plVar16,1,iVar6 == 3);
      if (plVar16 != (long *)0x0) {
        lVar8 = plVar16[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar16 + 0x20))(plVar16);
        }
      }
      if (local_f8 != (long *)0x0) {
        lVar8 = local_f8[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_f8 + 0x20))();
        }
      }
      if (iVar6 != 3) goto LAB_02712288;
      plVar16 = (long *)(ulong)*(uint *)(lVar12 + 0x6c);
      bVar4 = true;
    }
    else {
LAB_02712288:
      bVar4 = false;
    }
    if (local_d8 != (long *)0x0) {
      lVar8 = local_d8[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar2) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_d8 + 0x20))();
      }
    }
    if (bVar4) goto LAB_0271220c;
  }
  plVar16 = (long *)(ulong)*(uint *)(lVar12 + 0x6c);
LAB_0271220c:
  return (ulong)plVar16 & 0xffffffff;
}


