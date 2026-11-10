/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0c974; name: FUN_02f0c974
 */


void FUN_02f0c974(long *param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 != 0) {
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = param_2 / uVar4;
    }
    for (puVar3 = *(uint **)(*param_1 + (ulong)(param_2 - uVar2 * uVar4) * 8); puVar3 != (uint *)0x0
        ; puVar3 = *(uint **)(puVar3 + 2)) {
      if (*puVar3 == param_2) {
        return;
      }
    }
  }
  puVar3 = (uint *)(*DAT_0442d138)(2,0x58);
  if (puVar3 != (uint *)0x0) {
    *puVar3 = param_2;
    puVar3[0x10] = 0;
    *(undefined1 *)(puVar3 + 0x11) = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar1 = PTR_DAT_043887c0 + 0x10;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    *(undefined **)(puVar3 + 0xe) = puVar1;
    uVar4 = *(uint *)(param_1 + 1);
    if ((uVar4 == 0) || (fVar6 = (float)NEON_ucvtf((int)param_1[2]), 0.9 < fVar6 / (float)uVar4)) {
      FUN_02f0d9e8(param_1);
      uVar4 = *(uint *)(param_1 + 1);
      if (uVar4 == 0) {
        return;
      }
      param_2 = *puVar3;
    }
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = param_2 / uVar4;
    }
    lVar5 = (ulong)(param_2 - uVar2 * uVar4) * 8;
    *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(*param_1 + lVar5);
    *(uint **)(*param_1 + lVar5) = puVar3;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}


