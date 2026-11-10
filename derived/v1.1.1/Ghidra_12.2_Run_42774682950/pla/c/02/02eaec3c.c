/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eaec3c; name: FUN_02eaec3c
 */


undefined8 * FUN_02eaec3c(undefined4 param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  
  puVar4 = (undefined8 *)(*DAT_0442d138)(2,0x78);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar4 + 2) = param_1;
  *(undefined4 *)((long)puVar4 + 0x14) = 1;
  *(undefined1 *)(puVar4 + 4) = 1;
  puVar4[5] = 0;
  *(undefined4 *)(puVar4 + 6) = 0xffffffff;
  *puVar4 = &PTR_FUN_042a9530;
  puVar4[3] = &PTR_LAB_042a9570;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  lVar3 = DAT_0440a120;
  pMVar1 = (MutexType *)(DAT_0440a120 + 0x268);
  nn::os::LockMutex(pMVar1);
  uVar5 = *(uint *)(lVar3 + 0x290);
  if ((uVar5 == 0) ||
     (fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x298)), 0.9 < fVar7 / (float)uVar5)) {
    FUN_02e87758(lVar3 + 0x288);
    uVar5 = *(uint *)(lVar3 + 0x290);
    if (uVar5 == 0) goto LAB_02eaed18;
  }
  uVar2 = 0;
  if (uVar5 != 0) {
    uVar2 = *(uint *)(puVar4 + 2) / uVar5;
  }
  lVar6 = (ulong)(*(uint *)(puVar4 + 2) - uVar2 * uVar5) * 8;
  puVar4[1] = *(undefined8 *)(*(long *)(lVar3 + 0x288) + lVar6);
  *(undefined8 **)(*(long *)(lVar3 + 0x288) + lVar6) = puVar4;
  *(int *)(lVar3 + 0x298) = *(int *)(lVar3 + 0x298) + 1;
LAB_02eaed18:
  nn::os::UnlockMutex(pMVar1);
  return puVar4;
}


