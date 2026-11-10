/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0272479c; name: FUN_0272479c
 */


void FUN_0272479c(long param_1,long param_2,int *param_3,undefined8 param_4)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  char *pcVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 local_1ec;
  long *local_1e8;
  char *pcStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  long *local_1c8;
  undefined1 auStack_1c0 [72];
  long local_178;
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
  plVar1 = (long *)(param_1 + 0x260);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x254));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02724810;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02724810:
  lVar8 = *(long *)(param_1 + 0x68);
  if (*(char *)(param_1 + 0x210) != '\0') {
    pcVar12 = (char *)(param_1 + 0x211);
    do {
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
  }
  local_98 = param_1 + 0x210;
  local_90 = param_1 + 0x230;
  if (*(char *)(param_1 + 0x230) != '\0') {
    pcVar12 = (char *)(param_1 + 0x231);
    do {
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
  }
  iVar6 = *param_3;
  uVar15 = *(undefined8 *)(lVar8 + 0x150);
  lVar14 = tpidr_el0;
  if (*(long *)(lVar14 + 0x20) == 0) {
    *(undefined8 *)(lVar14 + 0x20) = DAT_043f1798;
  }
  local_80 = *(undefined8 *)(lVar14 + 0x20);
  local_78 = *(undefined8 *)(lVar14 + 0x28);
  *(undefined8 *)(lVar14 + 0x20) = uVar15;
  *(undefined2 *)(lVar14 + 0x28) = 1;
  local_a0 = lVar8 + 0x158;
  uStack_88 = *(undefined8 *)(param_2 + 8);
  FUN_008c96f8(&local_70,&local_a0);
  lVar10 = local_70;
  if (local_70 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00151e00(local_70,0xfff0b9d8,(long)local_68);
    if (local_70 != lVar10) {
      FUN_0014fe00(local_70,lVar10,1);
    }
  }
  lVar10 = local_70;
  FUN_001514d0(local_70,(long)iVar6);
  pbStack_58 = (byte *)FUN_0250bf84();
  if ((*pbStack_58 & 1) == 0) {
    pbStack_58 = pbStack_58 + 1;
  }
  else {
    pbStack_58 = *(byte **)(pbStack_58 + 0x10);
  }
  local_60 = lVar10;
  if (((DAT_043ea420 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043ea420), iVar6 != 0)) {
    DAT_043ea418 = 8;
    __cxa_guard_release(&DAT_043ea420);
  }
  if (((DAT_043ea430 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043ea430), iVar6 != 0)) {
    DAT_043ea428 = 0xf;
    __cxa_guard_release(&DAT_043ea430);
  }
  uVar5 = DAT_043ea418;
  lVar9 = FUN_00153520(lVar10,DAT_043ea418);
  if ((uVar5 < ((ulong)(uint)-(int)lVar9 & 7 | 8)) ||
     (puVar13 = (undefined8 *)(lVar9 + ((ulong)(uint)-(int)lVar9 & 7)), puVar13 == (undefined8 *)0x0
     )) {
    FUN_0014ff10(lVar10,0xfffffffe);
    uVar5 = DAT_043ea428;
    lVar9 = FUN_00153520(lVar10,DAT_043ea428);
    if ((uVar5 < ((ulong)(uint)-(int)lVar9 & 7 | 8)) ||
       (puVar13 = (undefined8 *)(lVar9 + ((ulong)(uint)-(int)lVar9 & 7)),
       puVar13 == (undefined8 *)0x0)) {
      FUN_0014ff10(lVar10,0xfffffffe);
      pbVar11 = (byte *)FUN_0250cde0();
      if ((*pbVar11 & 1) == 0) {
        pbVar11 = pbVar11 + 1;
      }
      else {
        pbVar11 = *(byte **)(pbVar11 + 0x10);
      }
      lVar8 = FUN_00154110(lVar10,"cannot properly align memory for \'%s\'",pbVar11);
      if (*(long *)(lVar8 + 0x70) == 0) {
        local_1e8 = (long *)0x0;
      }
      else {
        FUN_02725898(&local_1e8);
      }
      FUN_026a6030(auStack_1c0,local_1e8 + 0x12);
      if (local_1e8 != (long *)0x0) {
        lVar14 = local_1e8[0xb];
        piVar2 = (int *)(lVar14 + 0xc);
        do {
          iVar6 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_1e8 + 0x20))();
        }
      }
      if (local_178 == 0) {
        local_1c8 = (long *)0x0;
      }
      else {
        FUN_018ecdb8(&local_1c8);
        if (local_1c8 != (long *)0x0) {
          local_1e8 = (long *)0x33bf4d59b7e5e8e0;
          pcStack_1e0 = "RideWhooguruStateExit";
          local_1d8 = 0x15;
          uStack_1d0 = 0;
          local_1ec = *(undefined4 *)(lVar8 + 0x68);
          FUN_0272479c(local_1c8,&local_1e8,&local_1ec,auStack_1c0);
          if (local_1c8 != (long *)0x0) {
            lVar14 = local_1c8[0xb];
            piVar2 = (int *)(lVar14 + 0xc);
            do {
              iVar6 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*local_1c8 + 0x20))();
            }
          }
        }
      }
      *(undefined4 *)(lVar8 + 0x6c) = *(undefined4 *)(lVar8 + 0x68);
      FUN_0251127c(auStack_1c0);
      return;
    }
  }
  *puVar13 = param_4;
  FUN_02725a0c(&local_60);
  iVar6 = FUN_0014fef0(local_70);
  if (iVar6 < 4) {
    iVar6 = 3;
  }
  FUN_00152d80(local_70,2,0xffffffff,0,0);
  iVar7 = FUN_0014fef0(local_70);
  if ((local_70 != 0) && (local_68 != -2)) {
    FUN_00155150(local_70,0xfff0b9d8);
  }
  FUN_0014ff10(local_70,~((iVar7 - iVar6) + 3U));
  *(undefined8 *)(lVar14 + 0x20) = local_80;
  *(undefined2 *)(lVar14 + 0x28) = (undefined2)local_78;
  if (*(char *)(lVar8 + 0x192) == '\0') {
    lVar8 = FUN_0107dd34(lVar8);
    lVar10 = nn::os::GetCurrentThread();
    plVar1 = (long *)(lVar8 + 0x50);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x44));
          while (*plVar1 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_02724aec;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_02724aec:
    lVar10 = *(long *)(lVar8 + 8);
    if (*(long *)(lVar14 + 0x20) == 0) {
      *(undefined8 *)(lVar14 + 0x20) = DAT_043f1798;
    }
    plVar1 = (long *)(lVar14 + 0x20);
    local_a0 = *plVar1;
    local_98 = *(long *)(lVar14 + 0x28);
    *plVar1 = lVar10;
    *(undefined2 *)(lVar14 + 0x28) = 1;
    *(undefined1 *)(lVar8 + 0x58) = 0;
    FUN_001530e0(*(undefined8 *)(*(long *)(lVar8 + 0x10) + 8),5,0x14);
    *plVar1 = local_a0;
    *(undefined2 *)(lVar14 + 0x28) = (undefined2)local_98;
    *(undefined8 *)(lVar8 + 0x50) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x44));
  }
  *(undefined8 *)(param_1 + 0x260) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x254));
  return;
}


