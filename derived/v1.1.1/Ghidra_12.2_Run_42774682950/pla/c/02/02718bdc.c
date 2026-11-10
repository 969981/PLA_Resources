/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02718bdc; name: FUN_02718bdc
 */


undefined4 FUN_02718bdc(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *local_90;
  char *pcStack_88;
  size_t local_80;
  long *local_78;
  undefined1 *local_70;
  char *pcStack_68;
  size_t local_60;
  long *local_58;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x260);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x254));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02718c44;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02718c44:
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  puVar9 = &DAT_cbf29ce484222645;
  local_60 = strlen((char *)(param_1 + 0x210));
  bVar2 = *(byte *)(param_1 + 0x210);
  local_70 = &DAT_cbf29ce484222645;
  if (bVar2 != 0) {
    local_70 = &DAT_cbf29ce484222645;
    pbVar7 = (byte *)(param_1 + 0x211);
    do {
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar2 != 0);
  }
  local_58 = (long *)0x0;
  pcStack_68 = (char *)(param_1 + 0x210);
  local_80 = strlen((char *)(param_1 + 0x230));
  bVar2 = *(byte *)(param_1 + 0x230);
  if (bVar2 != 0) {
    pbVar7 = (byte *)(param_1 + 0x231);
    do {
      puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar2 != 0);
  }
  local_78 = (long *)0x0;
  local_90 = puVar9;
  pcStack_88 = (char *)(param_1 + 0x230);
  uVar5 = FUN_0271b824(uVar8,&local_70,&local_90,param_2,*param_3,param_4);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x260) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x254));
  return uVar5;
}


