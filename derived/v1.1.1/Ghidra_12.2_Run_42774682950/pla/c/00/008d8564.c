/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d8564; name: FUN_008d8564
 */


void FUN_008d8564(long param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  undefined1 *puVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  long *plVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  long local_268;
  int local_260;
  undefined4 local_254;
  long local_250;
  byte *local_248;
  
  uVar14 = *(undefined8 *)(param_1 + 0x150);
  lVar5 = tpidr_el0;
  if (*(long *)(lVar5 + 0x20) == 0) {
    *(undefined8 *)(lVar5 + 0x20) = DAT_043f1798;
  }
  local_278 = *(undefined8 *)(lVar5 + 0x20);
  local_270 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x20) = uVar14;
  *(undefined2 *)(lVar5 + 0x28) = 1;
  local_298 = param_1 + 0x158;
  uStack_290 = *(undefined8 *)(param_2 + 8);
  local_288 = *(undefined8 *)(param_3 + 8);
  uStack_280 = *(undefined8 *)(param_4 + 8);
  FUN_008c96f8(&local_268,&local_298);
  lVar15 = local_268;
  if (local_268 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00151e00(local_268,0xfff0b9d8,(long)local_260);
    if (local_268 != lVar15) {
      FUN_0014fe00(local_268,lVar15,1);
    }
  }
  lVar15 = local_268;
  pbVar8 = (byte *)FUN_008c986c();
  local_248 = *(byte **)(pbVar8 + 0x10);
  if ((*pbVar8 & 1) == 0) {
    local_248 = pbVar8 + 1;
  }
  local_250 = lVar15;
  if (param_5 == 0) goto LAB_008d89e0;
  plVar9 = (long *)FUN_008c9a50(lVar15);
  *plVar9 = param_5;
  FUN_008c9b98(&local_250);
  while( true ) {
    pbVar10 = (byte *)FUN_008d8d9c();
    pbVar8 = *(byte **)(pbVar10 + 0x10);
    if ((*pbVar10 & 1) == 0) {
      pbVar8 = pbVar10 + 1;
    }
    if (((DAT_043a7b50 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043a7b50), iVar6 != 0)) {
      DAT_043a7b48 = 8;
      __cxa_guard_release(&DAT_043a7b50);
    }
    if (((DAT_043a7b60 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043a7b60), iVar6 != 0)) {
      DAT_043a7b58 = 0xf;
      __cxa_guard_release(&DAT_043a7b60);
    }
    uVar2 = DAT_043a7b48;
    lVar11 = FUN_00153520(lVar15,DAT_043a7b48);
    if ((((ulong)(uint)-(int)lVar11 & 7 | 8) <= uVar2) &&
       (puVar13 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
       puVar13 != (undefined8 *)0x0)) break;
    FUN_0014ff10(lVar15,0xfffffffe);
    uVar2 = DAT_043a7b58;
    lVar11 = FUN_00153520(lVar15,DAT_043a7b58);
    if ((((ulong)(uint)-(int)lVar11 & 7 | 8) <= uVar2) &&
       (puVar13 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
       puVar13 != (undefined8 *)0x0)) break;
    FUN_0014ff10(lVar15,0xfffffffe);
    FUN_008d8f80();
    puVar1 = DAT_043a7b78;
    if ((DAT_043a7b68 & 1) == 0) {
      puVar1 = &DAT_043a7b69;
    }
    FUN_00154110(lVar15,"cannot properly align memory for \'%s\'",puVar1);
LAB_008d89e0:
    FUN_00151490();
  }
  *puVar13 = param_6;
  iVar6 = FUN_00154450(lVar15,pbVar8);
  if (iVar6 == 1) {
    memset(&local_250,0,0x200);
    local_254 = 0;
    FUN_008d9480(&local_250,&local_254);
    FUN_00155a20(lVar15,&local_250,0);
    FUN_00151fe0(lVar15,0,2);
    pbVar10 = (byte *)FUN_008d93b0();
    uVar2 = *(ulong *)(pbVar10 + 8);
    pbVar8 = *(byte **)(pbVar10 + 0x10);
    if ((*pbVar10 & 1) == 0) {
      pbVar8 = pbVar10 + 1;
      uVar2 = (ulong)(*pbVar10 >> 1);
    }
    FUN_001514f0(lVar15,pbVar8,uVar2);
    FUN_00152550(lVar15,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(lVar15,&LAB_008d9430,0);
    FUN_00152550(lVar15,0xfffffffe,&DAT_0397bfcb);
    lVar12 = FUN_008cca50();
    lVar11 = lVar12 + 0x2d1;
    if ((*(byte *)(lVar12 + 0x2d0) & 1) != 0) {
      lVar11 = *(long *)(lVar12 + 0x2e0);
    }
    FUN_00152550(lVar15,0xfffffffe,lVar11);
  }
  FUN_00152ae0(lVar15,0xfffffffe);
  iVar6 = FUN_0014fef0(local_268);
  if (iVar6 < 4) {
    iVar6 = 3;
  }
  FUN_00152d80(local_268,2,0xffffffff,0,0);
  iVar7 = FUN_0014fef0(local_268);
  if ((local_268 != 0) && (local_260 != -2)) {
    FUN_00155150(local_268,0xfff0b9d8);
  }
  FUN_0014ff10(local_268,~((iVar7 - iVar6) + 3U));
  *(undefined8 *)(lVar5 + 0x20) = local_278;
  *(undefined2 *)(lVar5 + 0x28) = (undefined2)local_270;
  if (*(char *)(param_1 + 0x192) == '\0') {
    lVar15 = *(long *)(param_1 + 0x110);
    if (lVar15 == 0) {
      lVar15 = *(long *)(param_1 + 0x128);
    }
    lVar11 = nn::os::GetCurrentThread();
    plVar9 = (long *)(lVar15 + 0x50);
    do {
      if (*plVar9 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x44));
          while (*plVar9 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = lVar11;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_008d87ec;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_008d87ec:
    lVar11 = *(long *)(lVar15 + 8);
    if (*(long *)(lVar5 + 0x20) == 0) {
      *(undefined8 *)(lVar5 + 0x20) = DAT_043f1798;
    }
    plVar9 = (long *)(lVar5 + 0x20);
    local_250 = *plVar9;
    local_248 = *(byte **)(lVar5 + 0x28);
    *plVar9 = lVar11;
    *(undefined2 *)(lVar5 + 0x28) = 1;
    *(undefined1 *)(lVar15 + 0x58) = 0;
    FUN_001530e0(*(undefined8 *)(*(long *)(lVar15 + 0x10) + 8),5,0x14);
    *plVar9 = local_250;
    *(undefined2 *)(lVar5 + 0x28) = local_248._0_2_;
    *(undefined8 *)(lVar15 + 0x50) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x44));
  }
  return;
}


