/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee2654; name: FUN_02ee2654
 */


uint * FUN_02ee2654(long *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  float fVar6;
  
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 != 0) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = param_2 / uVar3;
    }
    for (puVar2 = *(uint **)(*param_1 + (ulong)(param_2 - uVar1 * uVar3) * 8); puVar2 != (uint *)0x0
        ; puVar2 = *(uint **)(puVar2 + 2)) {
      if (*puVar2 == param_2) {
        return puVar2;
      }
    }
  }
  puVar2 = (uint *)(*DAT_0442d138)(0,0x68);
  if (puVar2 == (uint *)0x0) {
    return (uint *)0x0;
  }
  *puVar2 = param_2;
  puVar2[10] = 0;
  *(undefined1 *)(puVar2 + 0xb) = 0;
  *(undefined ***)(puVar2 + 8) = &PTR_LAB_042aaa98;
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  uVar3 = *(uint *)(param_1 + 1);
  puVar4 = puVar2;
  if (uVar3 != 0) {
    puVar4 = (uint *)0x3f666666;
    fVar6 = (float)NEON_ucvtf((int)param_1[2]);
    if (fVar6 / (float)uVar3 <= 0.9) goto LAB_02ee2714;
  }
  FUN_02ee56ac(puVar4,param_1);
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 == 0) {
    return puVar2;
  }
  param_2 = *puVar2;
LAB_02ee2714:
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = param_2 / uVar3;
  }
  lVar5 = (ulong)(param_2 - uVar1 * uVar3) * 8;
  *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(*param_1 + lVar5);
  *(uint **)(*param_1 + lVar5) = puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return puVar2;
}


