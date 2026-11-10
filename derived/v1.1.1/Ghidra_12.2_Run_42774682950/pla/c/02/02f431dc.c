/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f431dc; name: FUN_02f431dc
 */


undefined8 * FUN_02f431dc(undefined4 param_1)

{
  uint uVar1;
  MutexType *pMVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  
  nn::os::LockMutex((MutexType *)&DAT_0440a210);
  puVar3 = (undefined8 *)(*DAT_0442d138)(2,0x158);
  if (puVar3 == (undefined8 *)0x0) goto LAB_02f43350;
  puVar3[0x13] = 0;
  puVar3[9] = &PTR_FUN_042aac58;
  puVar3[10] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  *(byte *)(puVar3 + 0x18) = *(byte *)(puVar3 + 0x18) & 199;
  *(byte *)((long)puVar3 + 0xc1) = *(byte *)((long)puVar3 + 0xc1) & 0x80;
  *(byte *)((long)puVar3 + 0xf4) = *(byte *)((long)puVar3 + 0xf4) & 0xf0;
  *puVar3 = &PTR_FUN_042ae318;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[3] = &PTR_LAB_042ae5d0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1b] = 0;
  *(undefined4 *)(puVar3 + 2) = param_1;
  *(undefined4 *)((long)puVar3 + 0x14) = 1;
  puVar3[0x1c] = 0;
  puVar3[0x1d] = 0;
  *(undefined1 *)(puVar3 + 4) = 1;
  *(undefined4 *)(puVar3 + 0x14) = 0;
  *(undefined4 *)(puVar3 + 0x1e) = 0;
  *(undefined4 *)(puVar3 + 0x24) = 0;
  puVar3[0x21] = 0;
  *(undefined4 *)(puVar3 + 0x25) = 0;
  puVar3[0x26] = 0;
  *(undefined1 *)((long)puVar3 + 0x13a) = 0;
  *(undefined1 *)(puVar3 + 0x28) = 1;
  *(uint *)((long)puVar3 + 0xaa) = *(uint *)((long)puVar3 + 0xaa) & 0xe0090000 | 0x4000;
  puVar3[0x1f] = 0;
  puVar3[0x20] = 0;
  puVar3[0x29] = 0;
  puVar3[0x2a] = 0;
  puVar3[0x22] = &PTR_LAB_042ae690;
  puVar3[0x23] = 0;
  *(undefined2 *)(puVar3 + 0x27) = 100;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  puVar3[5] = 0;
  puVar3[6] = &PTR_LAB_042ae668;
  pMVar2 = DAT_0440a120;
  nn::os::LockMutex(DAT_0440a120);
  uVar4 = *(uint *)(pMVar2 + 0x28);
  if ((uVar4 == 0) ||
     (fVar6 = (float)NEON_ucvtf(*(undefined4 *)(pMVar2 + 0x30)), 0.9 < fVar6 / (float)uVar4)) {
    FUN_02e87758(pMVar2 + 0x20);
    uVar4 = *(uint *)(pMVar2 + 0x28);
    if (uVar4 != 0) goto LAB_02f43318;
  }
  else {
LAB_02f43318:
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = *(uint *)(puVar3 + 2) / uVar4;
    }
    lVar5 = (ulong)(*(uint *)(puVar3 + 2) - uVar1 * uVar4) * 8;
    puVar3[1] = *(undefined8 *)(*(long *)(pMVar2 + 0x20) + lVar5);
    *(undefined8 **)(*(long *)(pMVar2 + 0x20) + lVar5) = puVar3;
    *(int *)(pMVar2 + 0x30) = *(int *)(pMVar2 + 0x30) + 1;
  }
  nn::os::UnlockMutex(pMVar2);
LAB_02f43350:
  nn::os::UnlockMutex((MutexType *)&DAT_0440a210);
  return puVar3;
}


