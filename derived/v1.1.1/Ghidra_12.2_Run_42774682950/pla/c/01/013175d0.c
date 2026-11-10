/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013175d0; name: FUN_013175d0
 */


undefined8 FUN_013175d0(long param_1,uint param_2,int param_3,undefined1 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (6 < (int)param_2) {
    return 0;
  }
  if (param_4 == (undefined1 *)0x0) {
    return 0;
  }
  puVar4 = *(uint **)(param_1 + 0x1dc0);
  if (*puVar4 != 0) {
    uVar5 = 0;
    puVar6 = puVar4 + 6;
    while( true ) {
      if (uVar5 == 0x28) {
        FUN_01307f60(0);
        goto LAB_01317784;
      }
      if ((puVar6[-4] == param_2) &&
         (*(long *)(puVar6 + -2) == *(long *)(PTR_DAT_0437ee48 + (long)param_3 * 0x18))) break;
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x44;
      if (*puVar4 == uVar5) {
        return 0;
      }
    }
    uVar7 = 3;
    uVar1 = 3;
    while (uVar3 = uVar1, uVar3 != 0xffffffffffffffff) {
      if (3 < (uint)uVar3) {
LAB_01317784:
                    /* WARNING: Subroutine does not return */
        FUN_01318f20();
      }
      uVar2 = FUN_01307a60(puVar6 + uVar7 * 0x10);
      uVar7 = (ulong)((int)uVar7 - 1);
      uVar1 = uVar3 - 1;
      if ((uVar2 & 1) != 0) {
        uVar3 = uVar3 & 0xffffffff;
        *param_4 = *(undefined1 *)((long)puVar4 + uVar3 * 0x40 + uVar5 * 0x110 + 0x19);
        if (*(char *)(param_1 + 0x1e08) == '\0') {
          fVar9 = *(float *)(param_1 + 0x1e30);
          fVar8 = *(float *)(param_1 + 0xd64);
          fVar11 = (float)puVar4[uVar5 * 0x44 + uVar3 * 0x10 + 0x12] - fVar8;
          fVar10 = *(float *)(param_1 + 0xd60) +
                   ((float)puVar4[uVar5 * 0x44 + uVar3 * 0x10 + 0x11] - *(float *)(param_1 + 0xd60))
                   * fVar9;
        }
        else {
          fVar10 = *(float *)(param_1 + 0x1e28) + *(float *)(param_1 + 0xd60);
          fVar8 = *(float *)(param_1 + 0x1e2c) + *(float *)(param_1 + 0xd64);
          fVar9 = *(float *)(param_1 + 0x1e30);
          fVar11 = ((float)puVar4[uVar5 * 0x44 + uVar3 * 0x10 + 0x14] + *(float *)(param_1 + 0x1e2c)
                   ) - fVar8;
          fVar10 = fVar10 + fVar9 * (((float)puVar4[uVar5 * 0x44 + uVar3 * 0x10 + 0x13] +
                                     *(float *)(param_1 + 0x1e28)) - fVar10);
        }
        *(ulong *)(param_4 + 0x18) = uVar3;
        *(float *)(param_4 + 4) = fVar10;
        *(float *)(param_4 + 8) = fVar8 + fVar11 * fVar9;
        *(undefined2 *)(param_4 + 1) = 0;
        param_4[3] = 1;
        *(undefined8 *)(param_4 + 0x20) = *(undefined8 *)(puVar4 + uVar5 * 0x44 + uVar3 * 0x10 + 8);
        *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(puVar4 + uVar5 * 0x44 + uVar3 * 0x10 + 10)
        ;
        return 1;
      }
    }
  }
  return 0;
}


