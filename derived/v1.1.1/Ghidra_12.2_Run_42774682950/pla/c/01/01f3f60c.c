/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f3f60c; name: FUN_01f3f60c
 */


void FUN_01f3f60c(long param_1,undefined8 param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *local_80;
  char *pcStack_78;
  size_t local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  char *pcStack_58;
  size_t local_50;
  undefined8 uStack_48;
  
  lVar5 = nn::os::GetCurrentThread();
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
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01f3f668;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01f3f668:
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  puVar8 = &DAT_cbf29ce484222645;
  local_50 = strlen((char *)(param_1 + 0x210));
  bVar2 = *(byte *)(param_1 + 0x210);
  local_60 = &DAT_cbf29ce484222645;
  if (bVar2 != 0) {
    local_60 = &DAT_cbf29ce484222645;
    pbVar6 = (byte *)(param_1 + 0x211);
    do {
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
  }
  uStack_48 = 0;
  pcStack_58 = (char *)(param_1 + 0x210);
  local_70 = strlen((char *)(param_1 + 0x230));
  bVar2 = *(byte *)(param_1 + 0x230);
  if (bVar2 != 0) {
    pbVar6 = (byte *)(param_1 + 0x231);
    do {
      puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
  }
  uStack_68 = 0;
  local_80 = puVar8;
  pcStack_78 = (char *)(param_1 + 0x230);
  FUN_01f4ac24(uVar7,&local_60,&local_80,param_2);
  *(undefined8 *)(param_1 + 0x260) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x254));
  return;
}


