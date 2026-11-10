/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c6694; name: FUN_010c6694
 */


void FUN_010c6694(long param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 extraout_x1;
  undefined4 uVar12;
  undefined4 uVar13;
  long lVar14;
  
  FUN_02c71490(*(undefined8 *)(param_3 + 0x98),*(undefined8 *)(param_1 + 0x170));
  iVar9 = FUN_02c74104(*(undefined8 *)(param_3 + 0x98));
  puVar5 = PTR_DAT_0437b180;
  if (((*PTR_DAT_0437b180 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b180), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b180);
  }
  puVar7 = PTR_DAT_0437b190;
  puVar6 = PTR_DAT_0437b188;
  *(undefined8 *)PTR_DAT_0437b190 = *(undefined8 *)PTR_DAT_0437b188;
  lVar14 = *(long *)(param_3 + 0x98);
  lVar11 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar14 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x24));
        while (*plVar1 == 0) {
          cVar8 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar11;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_010c674c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar8 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar11;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_010c674c:
  cVar8 = FUN_02c69ba8(lVar14);
  *(undefined8 *)(lVar14 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x24));
  if ((byte)(cVar8 - 1U) < 10) {
    uVar12 = *(undefined4 *)(&DAT_03a78cc8 + (long)(char)(cVar8 - 1U) * 4);
    bVar2 = *puVar5;
  }
  else {
    uVar12 = 2;
    bVar2 = *puVar5;
  }
  if (((bVar2 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b180,extraout_x1,uVar12), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b180);
  }
  lVar11 = *(long *)puVar6;
  *(long *)puVar7 = lVar11;
  uVar4 = *(byte *)(lVar11 + 0x50) - 1;
  if (uVar4 < 10) {
    uVar13 = *(undefined4 *)(&DAT_03a78cc8 + (long)(char)uVar4 * 4);
  }
  else {
    uVar13 = 2;
  }
  FUN_010b40e8(*(undefined8 *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x170),uVar12,uVar13);
  FUN_02c36128(param_1,param_2,*(undefined8 *)(*(long *)(param_1 + 0x178) + 0x58),iVar9 == 1,0);
  return;
}


