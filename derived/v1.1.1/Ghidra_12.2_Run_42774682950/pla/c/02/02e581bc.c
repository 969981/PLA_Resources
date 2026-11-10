/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e581bc; name: FUN_02e581bc
 */


/* WARNING: Removing unreachable block (ram,0x02e58430) */

void FUN_02e581bc(undefined8 *param_1,long param_2,uint param_3,undefined4 *param_4,ulong param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  puVar1 = param_1;
  if (*(int *)(param_1 + 0xf) != 0) {
    puVar1 = (undefined8 *)((long)param_1 + (ulong)(*(int *)(param_1 + 0xf) - 1) * 0xc + 0xc);
  }
  local_50 = *puVar1;
  local_48 = *(undefined4 *)(puVar1 + 1);
  uVar6 = (ulong)param_3;
  if (param_3 < *(int *)(param_2 + 0x80) - 1U) {
    if ((param_5 & 1) == 0) {
      do {
        plVar7 = (long *)(param_2 + uVar6 * 8);
        local_60 = 0;
        local_58 = 0;
        uVar6 = uVar6 + 1;
        FUN_02e54120(*plVar7,&local_50,plVar7[1] + 0x50,&local_60);
        uVar2 = *(uint *)(param_1 + 0xf);
        if (uVar2 < 8) {
          uVar4 = *(undefined8 *)(*plVar7 + 0x40);
          uVar5 = *(undefined8 *)(plVar7[8] + 0x40);
          *(undefined4 *)((long)param_1 + (ulong)uVar2 * 0xc + 0xc) = (undefined4)local_60;
          *(undefined4 *)((long)param_1 + (ulong)uVar2 * 0xc + 0x10) = local_60._4_4_;
          *(undefined4 *)((long)param_1 + (ulong)uVar2 * 0xc + 0x14) = local_58;
          uVar2 = *(uint *)(param_1 + 0xf);
          param_1[(ulong)uVar2 + 0x16] = uVar5;
          param_1[(ulong)uVar2 + 0x1e] = uVar4;
          *(uint *)(param_1 + 0xf) = uVar2 + 1;
        }
        local_50 = local_60;
        local_48 = local_58;
      } while (uVar6 < *(int *)(param_2 + 0x80) - 1);
    }
    else {
      plVar7 = (long *)(param_2 + uVar6 * 8);
      do {
        uVar6 = uVar6 + 1;
        lVar3 = FUN_02e52b20(plVar7[9],*plVar7,plVar7[1]);
        if (lVar3 == 0) {
          local_60 = 0;
          local_58 = 0;
          FUN_02e54120(*plVar7,&local_50,plVar7[1] + 0x50,&local_60);
          uVar2 = *(uint *)(param_1 + 0xf);
          if (uVar2 < 8) {
            uVar4 = *(undefined8 *)(*plVar7 + 0x40);
            uVar5 = *(undefined8 *)(plVar7[8] + 0x40);
            *(undefined4 *)((long)param_1 + (ulong)uVar2 * 0xc + 0xc) = (undefined4)local_60;
            *(undefined4 *)((long)param_1 + (ulong)uVar2 * 0xc + 0x10) = local_60._4_4_;
            *(undefined4 *)((long)param_1 + (ulong)uVar2 * 0xc + 0x14) = local_58;
            uVar2 = *(uint *)(param_1 + 0xf);
            param_1[(ulong)uVar2 + 0x16] = uVar5;
            param_1[(ulong)uVar2 + 0x1e] = uVar4;
            *(uint *)(param_1 + 0xf) = uVar2 + 1;
          }
          local_50 = local_60;
          local_48 = local_58;
        }
        else {
          FUN_02e58074(param_1,lVar3,*plVar7,plVar7[1],*(undefined8 *)(plVar7[8] + 0x40),
                       *(undefined8 *)(plVar7[9] + 0x40));
        }
        plVar7 = plVar7 + 1;
      } while (uVar6 < *(int *)(param_2 + 0x80) - 1);
    }
  }
  local_60 = 0;
  local_58 = 0;
  FUN_02e54120(*(undefined8 *)(param_2 + (uVar6 & 0xffffffff) * 8),&local_50,param_4,&local_60);
  uVar2 = *(uint *)(param_1 + 0xf);
  if (uVar2 < 8) {
    plVar7 = (long *)(param_2 + (uVar6 & 0xffffffff) * 8);
    uVar5 = *(undefined8 *)(*plVar7 + 0x40);
    uVar4 = *(undefined8 *)(plVar7[8] + 0x40);
    *(undefined4 *)((long)param_1 + (ulong)uVar2 * 0xc + 0xc) = (undefined4)local_60;
    *(undefined4 *)((long)param_1 + (ulong)uVar2 * 0xc + 0x10) = local_60._4_4_;
    *(undefined4 *)((long)param_1 + (ulong)uVar2 * 0xc + 0x14) = local_58;
    uVar2 = *(uint *)(param_1 + 0xf);
    param_1[(ulong)uVar2 + 0x16] = uVar4;
    param_1[(ulong)uVar2 + 0x1e] = uVar5;
    *(uint *)(param_1 + 0xf) = uVar2 + 1;
  }
  fVar8 = *(float *)((long)param_1 + 0x84);
  uVar2 = *(uint *)(param_2 + 0x80);
  uVar6 = (ulong)uVar2;
  if (uVar2 == 0) {
    fVar9 = 0.0;
  }
  else {
    if (uVar2 == 1) {
      lVar3 = 0;
      fVar9 = 0.0;
LAB_02e584a4:
      fVar10 = *(float *)(*(long *)(param_2 + lVar3 * 8) + 0xb4);
      if (fVar9 <= fVar10) {
        fVar9 = fVar10;
      }
    }
    else {
      fVar9 = 0.0;
      lVar3 = 0;
      do {
        plVar7 = (long *)(param_2 + lVar3 * 8);
        lVar3 = lVar3 + 2;
        fVar10 = *(float *)(*plVar7 + 0xb4);
        if (fVar9 <= fVar10) {
          fVar9 = fVar10;
        }
        fVar10 = *(float *)(plVar7[1] + 0xb4);
        if (fVar9 <= fVar10) {
          fVar9 = fVar10;
        }
      } while (uVar6 - (uVar6 & 1) != lVar3);
      if ((uVar2 & 1) != 0) goto LAB_02e584a4;
    }
    if (fVar9 < fVar8) goto LAB_02e5843c;
    if (uVar2 == 1) {
      lVar3 = 0;
      fVar8 = 0.0;
    }
    else {
      fVar8 = 0.0;
      lVar3 = 0;
      do {
        plVar7 = (long *)(param_2 + lVar3 * 8);
        lVar3 = lVar3 + 2;
        fVar9 = *(float *)(*plVar7 + 0xb4);
        if (fVar8 <= fVar9) {
          fVar8 = fVar9;
        }
        fVar9 = *(float *)(plVar7[1] + 0xb4);
        if (fVar8 <= fVar9) {
          fVar8 = fVar9;
        }
      } while (uVar6 - (uVar6 & 1) != lVar3);
      if ((uVar2 & 1) == 0) goto LAB_02e5843c;
    }
    fVar9 = *(float *)(*(long *)(param_2 + lVar3 * 8) + 0xb4);
  }
  if (fVar8 <= fVar9) {
    fVar8 = fVar9;
  }
LAB_02e5843c:
  *(float *)((long)param_1 + 0x84) = fVar8;
  *(undefined4 *)((long)param_1 + 0x6c) = *param_4;
  *(undefined4 *)(param_1 + 0xe) = param_4[1];
  *(undefined4 *)((long)param_1 + 0x74) = param_4[2];
  return;
}


