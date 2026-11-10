/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8d36c; name: FUN_02e8d36c
 */


undefined8 * FUN_02e8d36c(undefined2 param_1,int param_2,long *param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  
  puVar3 = (undefined8 *)(*DAT_0442d138)(1,0x120);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined1 *)((long)puVar3 + 0x36) = 4;
  *(int *)(puVar3 + 2) = param_2;
  *(undefined4 *)((long)puVar3 + 0x14) = 1;
  puVar3[5] = 0;
  *(undefined4 *)(puVar3 + 6) = 0;
  *(undefined2 *)((long)puVar3 + 0x34) = param_1;
  *(undefined4 *)(puVar3 + 7) = 0;
  *puVar3 = &PTR_FUN_042a7d58;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  lVar5 = *param_3;
  puVar3[0xc] = lVar5;
  if (lVar5 != 0) {
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
    param_2 = *(int *)(puVar3 + 2);
  }
  *(undefined4 *)(puVar3 + 0x1a) = 1;
  *(undefined2 *)((long)puVar3 + 0xc4) = 1;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = 0x400000000;
  *(undefined8 *)((long)puVar3 + 0xbc) = 0;
  *(undefined8 *)((long)puVar3 + 0xb4) = 0;
  *(undefined8 *)((long)puVar3 + 0xac) = 0;
  *(undefined4 *)(puVar3 + 0x19) = 0;
  *(undefined4 *)(puVar3 + 0x1d) = 0;
  *(undefined1 *)(puVar3 + 0x20) = 0;
  *(byte *)((long)puVar3 + 0xcc) = *(byte *)((long)puVar3 + 0xcc) & 0xfe;
  *(undefined2 *)((long)puVar3 + 0x104) = 0xff00;
  *(undefined4 *)(puVar3 + 0xd) = 0;
  puVar3[10] = 0;
  *(undefined4 *)(puVar3 + 0xb) = 0;
  puVar3[0x21] = 0;
  puVar3[0x1b] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x22] = 0;
  puVar3[0x23] = 0;
  lVar5 = DAT_0440a120;
  if (param_2 == 0) {
    return puVar3;
  }
  pMVar1 = (MutexType *)(DAT_0440a120 + 0xe0);
  nn::os::LockMutex(pMVar1);
  uVar4 = *(uint *)(lVar5 + 0x108);
  if ((uVar4 == 0) ||
     (fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x110)), 0.9 < fVar7 / (float)uVar4)) {
    FUN_02e87758(lVar5 + 0x100);
    uVar4 = *(uint *)(lVar5 + 0x108);
    if (uVar4 == 0) goto LAB_02e8d4dc;
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = *(uint *)(puVar3 + 2) / uVar4;
  }
  lVar6 = (ulong)(*(uint *)(puVar3 + 2) - uVar2 * uVar4) * 8;
  puVar3[1] = *(undefined8 *)(*(long *)(lVar5 + 0x100) + lVar6);
  *(undefined8 **)(*(long *)(lVar5 + 0x100) + lVar6) = puVar3;
  *(int *)(lVar5 + 0x110) = *(int *)(lVar5 + 0x110) + 1;
LAB_02e8d4dc:
  nn::os::UnlockMutex(pMVar1);
  return puVar3;
}


