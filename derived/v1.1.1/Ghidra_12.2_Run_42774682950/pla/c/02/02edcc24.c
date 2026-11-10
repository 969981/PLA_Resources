/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edcc24; name: FUN_02edcc24
 */


undefined8
FUN_02edcc24(long *param_1,undefined8 *param_2,long param_3,undefined8 param_4,uint param_5,
            undefined4 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 3));
  puVar2 = (undefined8 *)(*DAT_0442d138)(0,0x70);
  if (puVar2 == (undefined8 *)0x0) {
    uVar6 = 2;
    goto LAB_02edcd34;
  }
  puVar2[4] = 0x100000000;
  puVar2[5] = 0;
  *(undefined4 *)(puVar2 + 5) = param_6;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[6] = *param_2;
  *(undefined4 *)((long)puVar2 + 0x4c) = *(undefined4 *)(param_2 + 1);
  puVar2[8] = param_2[3];
  *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(param_2 + 4);
  piVar4 = (int *)param_2[2];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  puVar2[7] = piVar4;
  puVar2[10] = param_3;
  puVar2[0xb] = param_4;
  if (param_3 == 0) {
    param_5 = param_5 & 0xfff02004;
  }
  *(uint *)(puVar2 + 0xc) = param_5;
  uVar3 = *(uint *)(param_1 + 1);
  if ((uVar3 == 0) || (fVar7 = (float)NEON_ucvtf((int)param_1[2]), 0.9 < fVar7 / (float)uVar3)) {
    FUN_02edde98(param_1);
    uVar3 = *(uint *)(param_1 + 1);
    if (uVar3 != 0) goto LAB_02edcd00;
  }
  else {
LAB_02edcd00:
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = *(uint *)((long)puVar2 + 0x4c) / uVar3;
    }
    lVar5 = (ulong)(*(uint *)((long)puVar2 + 0x4c) - uVar1 * uVar3) * 8;
    puVar2[0xd] = *(undefined8 *)(*param_1 + lVar5);
    *(undefined8 **)(*param_1 + lVar5) = puVar2;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  uVar6 = 1;
LAB_02edcd34:
  nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  return uVar6;
}


