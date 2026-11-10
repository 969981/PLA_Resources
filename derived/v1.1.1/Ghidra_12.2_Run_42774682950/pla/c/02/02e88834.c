/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e88834; name: FUN_02e88834
 */


undefined8 * FUN_02e88834(undefined2 param_1,int param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  
  puVar4 = (undefined8 *)(*DAT_0442d138)(1,0x50);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined1 *)((long)puVar4 + 0x36) = 4;
  *puVar4 = &PTR_LAB_042a73e0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  *(int *)(puVar4 + 2) = param_2;
  *(undefined4 *)((long)puVar4 + 0x14) = 1;
  puVar4[5] = 0;
  *(undefined4 *)(puVar4 + 6) = 0;
  *(undefined2 *)((long)puVar4 + 0x34) = param_1;
  *(byte *)(puVar4 + 9) = *(byte *)(puVar4 + 9) & 0xfc;
  puVar4[7] = 0;
  puVar4[8] = 0;
  lVar3 = DAT_0440a120;
  if (param_2 == 0) {
    return puVar4;
  }
  pMVar1 = (MutexType *)(DAT_0440a120 + 0xe0);
  nn::os::LockMutex(pMVar1);
  uVar5 = *(uint *)(lVar3 + 0x108);
  if ((uVar5 == 0) ||
     (fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x110)), 0.9 < fVar7 / (float)uVar5)) {
    FUN_02e87758(lVar3 + 0x100);
    uVar5 = *(uint *)(lVar3 + 0x108);
    if (uVar5 == 0) goto LAB_02e8892c;
  }
  uVar2 = 0;
  if (uVar5 != 0) {
    uVar2 = *(uint *)(puVar4 + 2) / uVar5;
  }
  lVar6 = (ulong)(*(uint *)(puVar4 + 2) - uVar2 * uVar5) * 8;
  puVar4[1] = *(undefined8 *)(*(long *)(lVar3 + 0x100) + lVar6);
  *(undefined8 **)(*(long *)(lVar3 + 0x100) + lVar6) = puVar4;
  *(int *)(lVar3 + 0x110) = *(int *)(lVar3 + 0x110) + 1;
LAB_02e8892c:
  nn::os::UnlockMutex(pMVar1);
  return puVar4;
}


