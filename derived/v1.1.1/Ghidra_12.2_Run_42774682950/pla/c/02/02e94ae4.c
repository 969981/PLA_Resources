/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e94ae4; name: FUN_02e94ae4
 */


int FUN_02e94ae4(long param_1,undefined8 *param_2,int param_3,uint param_4,uint param_5)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  uint *puVar10;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  uVar3 = *(uint *)((long)param_2 + 4);
  plVar1 = (long *)(param_1 + 0xa8);
  nn::os::LockMutex((MutexType *)&DAT_0440a350);
  nn::os::LockMutex((MutexType *)&DAT_0440a350);
  uVar4 = *(uint *)(param_1 + 0xb0);
  if (uVar4 != 0) {
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar7 = uVar3 / uVar4;
    }
    for (puVar10 = *(uint **)(*plVar1 + (ulong)(uVar3 - uVar7 * uVar4) * 8); puVar10 != (uint *)0x0;
        puVar10 = *(uint **)(puVar10 + 4)) {
      if ((*puVar10 == uVar3) && (*(long *)(puVar10 + 2) == 0)) {
        nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
        puVar2 = puVar10 + 0x19;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = *puVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        puVar10[0x1c] = puVar10[0x1c] + 1;
        if ((param_3 == 2) || (((byte)puVar10[0x1a] >> 2 & 1) != 0)) {
          nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
          return 1;
        }
        param_3 = 3;
        goto LAB_02e94b5c;
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
LAB_02e94b5c:
  nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
  local_a0 = *param_2;
  local_98 = param_2[1];
  uStack_90 = param_2[2];
  local_88 = param_2[3];
  uStack_80 = param_2[4];
  local_78 = param_2[5];
  local_70 = param_2[6];
  uStack_68 = param_2[7];
  local_60 = param_2[8];
  local_58 = 0;
  iVar9 = FUN_02e90504(param_1,&local_a0,&local_58,param_3,param_4 & 1,param_5 & 1);
  lVar8 = local_58;
  if (iVar9 == 1) {
    FUN_02e97894(plVar1,uVar3,0,local_58);
  }
  else if ((iVar9 != 0x45) && (local_58 != 0)) {
    FUN_02e97998(plVar1,uVar3,0);
    FUN_02e8e9ac(lVar8,0);
  }
  return iVar9;
}


