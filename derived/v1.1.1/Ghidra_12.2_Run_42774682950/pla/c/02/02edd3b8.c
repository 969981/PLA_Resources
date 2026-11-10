/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edd3b8; name: FUN_02edd3b8
 */


void FUN_02edd3b8(long *param_1,long param_2,undefined4 *param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  code *pcVar6;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  
  pMVar1 = (MutexType *)(param_1 + 3);
  nn::os::LockMutex(pMVar1);
  local_48 = *(uint *)(param_2 + 0x210);
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 == 0) {
    lVar5 = 0;
    bVar3 = DAT_00000060;
  }
  else {
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = local_48 / uVar2;
    }
    for (lVar5 = *(long *)(*param_1 + (ulong)(local_48 - uVar4 * uVar2) * 8);
        (lVar5 != 0 && (*(uint *)(lVar5 + 0x4c) != local_48)); lVar5 = *(long *)(lVar5 + 0x68)) {
    }
    bVar3 = *(byte *)(lVar5 + 0x60);
  }
  if (((bVar3 >> 2 & 1) == 0) || (pcVar6 = *(code **)(lVar5 + 0x50), pcVar6 == (code *)0x0)) {
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  local_58 = *(undefined8 *)(lVar5 + 0x58);
  local_50 = *(undefined8 *)(lVar5 + 0x30);
  local_44 = *(undefined4 *)(lVar5 + 0x28);
  local_40 = *param_3;
  local_3c = param_3[1];
  local_38 = *(undefined8 *)(param_3 + 2);
  nn::os::ClearEvent((EventType *)(param_1 + 7));
  nn::os::UnlockMutex(pMVar1);
  (*pcVar6)(4,&local_58);
  nn::os::SignalEvent((EventType *)(param_1 + 7));
  return;
}


