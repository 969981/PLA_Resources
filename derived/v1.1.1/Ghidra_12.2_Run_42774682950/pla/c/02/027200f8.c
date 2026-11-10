/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027200f8; name: FUN_027200f8
 */


void FUN_027200f8(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *local_90;
  char *pcStack_88;
  size_t local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  char *pcStack_68;
  size_t local_60;
  undefined8 uStack_58;
  
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
          if (cVar3 == '\0') goto LAB_02720160;
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
LAB_02720160:
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  puVar8 = &DAT_cbf29ce484222645;
  local_60 = strlen((char *)(param_1 + 0x210));
  bVar2 = *(byte *)(param_1 + 0x210);
  local_70 = &DAT_cbf29ce484222645;
  if (bVar2 != 0) {
    local_70 = &DAT_cbf29ce484222645;
    pbVar6 = (byte *)(param_1 + 0x211);
    do {
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
  }
  uStack_58 = 0;
  pcStack_68 = (char *)(param_1 + 0x210);
  local_80 = strlen((char *)(param_1 + 0x230));
  bVar2 = *(byte *)(param_1 + 0x230);
  if (bVar2 != 0) {
    pbVar6 = (byte *)(param_1 + 0x231);
    do {
      puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
  }
  uStack_78 = 0;
  local_90 = puVar8;
  pcStack_88 = (char *)(param_1 + 0x230);
  FUN_02721028(uVar7,&local_70,&local_90,param_2,*param_3,param_4);
  *(undefined8 *)(param_1 + 0x260) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x254));
  return;
}


