/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e52380; name: FUN_02e52380
 */


void FUN_02e52380(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 uint param_5,long param_6,long param_7,long param_8,long param_9,
                 undefined4 *param_10,uint *param_11)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 local_80;
  undefined4 local_78;
  
  if (*(int *)(param_2 + 0xa0) == 0) {
    uVar10 = 0;
  }
  else {
    lVar7 = *(long *)(param_2 + 0x98);
    uVar2 = *param_11;
    if ((param_5 >> 3 & 1) == 0) {
      uVar10 = 0x7f7fffff;
      do {
        uVar5 = *(undefined8 *)(lVar7 + 0x6c);
        puVar3 = (undefined8 *)(param_6 + (ulong)uVar2 * 0x28);
        *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(lVar7 + 0x74);
        puVar3[3] = uVar5;
        uVar5 = *param_1;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_1 + 1);
        *puVar3 = uVar5;
        uVar5 = *(undefined8 *)((long)param_1 + 0xc);
        *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)((long)param_1 + 0x14);
        *(undefined8 *)((long)puVar3 + 0xc) = uVar5;
        *(undefined4 *)(param_6 + (ulong)*param_11 * 0x28 + 0x24) = 0xffffffff;
        local_80 = *param_3;
        local_78 = *(undefined4 *)(param_3 + 1);
        if (1 < *(uint *)(lVar7 + 0x78)) {
          lVar4 = lVar7 + (ulong)(*(uint *)(lVar7 + 0x78) - 2) * 0xc;
          local_80 = *(undefined8 *)(lVar4 + 0xc);
          local_78 = *(undefined4 *)(lVar4 + 0x14);
        }
        fVar9 = (float)FUN_02e543f0(param_2,&local_80,param_4);
        *(float *)(param_7 + (ulong)*param_11 * 4) = fVar9 * 15.915494;
        *(undefined4 *)(param_8 + (ulong)*param_11 * 4) = 0;
        *(undefined4 *)(param_9 + (ulong)*param_11 * 8) = *(undefined4 *)(param_2 + 0xb8);
        fVar9 = *(float *)(param_2 + 0xb4);
        if (((param_5 >> 1 & 1) != 0) && (fVar9 <= *(float *)(lVar7 + 0x7c))) {
          fVar9 = *(float *)(lVar7 + 0x7c);
        }
        *(float *)(param_9 + (ulong)*param_11 * 8 + 4) = fVar9;
        uVar2 = *param_11 + 1;
        uVar8 = *(undefined4 *)(lVar7 + 0x7c);
        *param_11 = uVar2;
        uVar10 = NEON_fminnm(uVar8,uVar10);
        lVar7 = lVar7 + 0x158;
      } while (lVar7 != *(long *)(param_2 + 0x98) + (ulong)*(uint *)(param_2 + 0xa0) * 0x158);
    }
    else {
      uVar10 = 0x7f7fffff;
      do {
        puVar3 = (undefined8 *)(param_6 + (ulong)uVar2 * 0x28);
        *puVar3 = *(undefined8 *)(lVar7 + 0x130);
        uVar5 = *(undefined8 *)(lVar7 + 0x138);
        uVar1 = *(undefined8 *)(lVar7 + 0x140);
        uVar6 = *(undefined8 *)(lVar7 + 0x148);
        *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(lVar7 + 0x150);
        puVar3[1] = uVar5;
        puVar3[2] = uVar1;
        puVar3[3] = uVar6;
        *(undefined4 *)(param_6 + (ulong)*param_11 * 0x28 + 0x24) = 0xffffffff;
        local_80 = *param_3;
        local_78 = *(undefined4 *)(param_3 + 1);
        if (1 < *(uint *)(lVar7 + 0x78)) {
          lVar4 = lVar7 + (ulong)(*(uint *)(lVar7 + 0x78) - 2) * 0xc;
          local_80 = *(undefined8 *)(lVar4 + 0xc);
          local_78 = *(undefined4 *)(lVar4 + 0x14);
        }
        fVar9 = (float)FUN_02e543f0(param_2,&local_80,param_4);
        *(float *)(param_7 + (ulong)*param_11 * 4) = fVar9 * 15.915494;
        *(undefined4 *)(param_8 + (ulong)*param_11 * 4) = 0;
        *(undefined4 *)(param_9 + (ulong)*param_11 * 8) = *(undefined4 *)(param_2 + 0xb8);
        fVar9 = *(float *)(param_2 + 0xb4);
        if (((param_5 >> 1 & 1) != 0) && (fVar9 <= *(float *)(lVar7 + 0x7c))) {
          fVar9 = *(float *)(lVar7 + 0x7c);
        }
        *(float *)(param_9 + (ulong)*param_11 * 8 + 4) = fVar9;
        uVar2 = *param_11 + 1;
        uVar8 = *(undefined4 *)(lVar7 + 0x7c);
        *param_11 = uVar2;
        uVar10 = NEON_fminnm(uVar8,uVar10);
        lVar7 = lVar7 + 0x158;
      } while (lVar7 != *(long *)(param_2 + 0x98) + (ulong)*(uint *)(param_2 + 0xa0) * 0x158);
    }
  }
  *(undefined4 *)(param_2 + 0xb0) = uVar10;
  *param_10 = uVar10;
  return;
}


