/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02de7774; name: FUN_02de7774
 */


void FUN_02de7774(long param_1,int *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  uint *puVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *local_80;
  char *pcStack_78;
  size_t local_70;
  long *local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x260));
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar3 == 0)) {
    lVar5 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar3);
    lVar5 = (long)puVar1 + (ulong)*puVar1;
  }
  puVar7 = &DAT_cbf29ce484222645;
  local_70 = strlen((char *)(lVar5 + 4));
  bVar2 = *(byte *)(lVar5 + 4);
  local_80 = &DAT_cbf29ce484222645;
  if (bVar2 != 0) {
    local_80 = &DAT_cbf29ce484222645;
    pbVar4 = (byte *)(lVar5 + 5);
    do {
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar2 != 0);
  }
  local_68 = (long *)0x0;
  pcStack_78 = (char *)(lVar5 + 4);
  FUN_02de7ba4(param_1 + 0xa0,param_3,&local_80,param_4,param_5);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 7) ||
     (uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar3 == 0)) {
    lVar5 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar3);
    lVar5 = (long)puVar1 + (ulong)*puVar1;
  }
  local_70 = strlen((char *)(lVar5 + 4));
  bVar2 = *(byte *)(lVar5 + 4);
  local_80 = &DAT_cbf29ce484222645;
  if (bVar2 != 0) {
    local_80 = &DAT_cbf29ce484222645;
    pbVar4 = (byte *)(lVar5 + 5);
    do {
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar2 != 0);
  }
  local_68 = (long *)0x0;
  pcStack_78 = (char *)(lVar5 + 4);
  FUN_02de7ba4(param_1 + 0xd0,param_3,&local_80,param_4,param_5);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 9) ||
     (uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar3 == 0)) {
    lVar5 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar3);
    lVar5 = (long)puVar1 + (ulong)*puVar1;
  }
  local_70 = strlen((char *)(lVar5 + 4));
  bVar2 = *(byte *)(lVar5 + 4);
  local_80 = &DAT_cbf29ce484222645;
  if (bVar2 != 0) {
    local_80 = &DAT_cbf29ce484222645;
    pbVar4 = (byte *)(lVar5 + 5);
    do {
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar2 != 0);
  }
  local_68 = (long *)0x0;
  pcStack_78 = (char *)(lVar5 + 4);
  FUN_02de7ba4(param_1 + 0x100,param_3,&local_80,param_4,param_5);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xb) ||
     (uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar3 == 0)) {
    lVar5 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar3);
    lVar5 = (long)puVar1 + (ulong)*puVar1;
  }
  local_70 = strlen((char *)(lVar5 + 4));
  bVar2 = *(byte *)(lVar5 + 4);
  local_80 = &DAT_cbf29ce484222645;
  if (bVar2 != 0) {
    local_80 = &DAT_cbf29ce484222645;
    pbVar4 = (byte *)(lVar5 + 5);
    do {
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar2 != 0);
  }
  local_68 = (long *)0x0;
  pcStack_78 = (char *)(lVar5 + 4);
  FUN_02de7ba4(param_1 + 0x130,param_3,&local_80,param_4,param_5);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xd) ||
     (uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6], uVar3 == 0)) {
    lVar5 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar3);
    lVar5 = (long)puVar1 + (ulong)*puVar1;
  }
  local_70 = strlen((char *)(lVar5 + 4));
  bVar2 = *(byte *)(lVar5 + 4);
  local_80 = &DAT_cbf29ce484222645;
  if (bVar2 != 0) {
    local_80 = &DAT_cbf29ce484222645;
    pbVar4 = (byte *)(lVar5 + 5);
    do {
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar2 != 0);
  }
  local_68 = (long *)0x0;
  pcStack_78 = (char *)(lVar5 + 4);
  FUN_02de7ba4(param_1 + 0x160,param_3,&local_80,param_4,param_5);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if ((0xe < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7], uVar3 != 0)) {
    uVar6 = (ulong)*(uint *)((long)param_2 + uVar3);
    lVar5 = (long)((long)param_2 + uVar3) + uVar6;
    if (lVar5 != 0) {
      local_70 = strlen((char *)(lVar5 + 4));
      bVar2 = *(byte *)(lVar5 + 4);
      if (bVar2 != 0) {
        pbVar4 = (byte *)((long)param_2 + uVar6 + uVar3 + 5);
        do {
          puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar2) * 0x100000001b3);
          bVar2 = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (bVar2 != 0);
      }
      local_68 = (long *)0x0;
      local_80 = puVar7;
      pcStack_78 = (char *)(lVar5 + 4);
      FUN_02de7ba4(param_1 + 400,param_3,&local_80,param_4,param_5);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
    }
  }
  *(undefined1 *)(param_1 + 0x98) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x260));
  return;
}


