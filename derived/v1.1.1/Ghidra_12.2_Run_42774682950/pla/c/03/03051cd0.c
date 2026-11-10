/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03051cd0; name: FUN_03051cd0
 */


void FUN_03051cd0(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6,long param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined2 uVar12;
  int iVar13;
  uint *puVar14;
  
  uVar11 = (uint)*(byte *)((long)param_1 + 9);
  iVar5 = (uint)*(byte *)((long)param_1 + 9) * 0x10;
  puVar14 = (uint *)param_2[2];
  iVar13 = (int)param_2[3];
  uVar8 = *(uint *)((long)param_2 + 0x1c);
  iVar3 = *(int *)(*param_2 + 8);
  if (iVar5 + iVar13 < 0xee1) {
    puVar7 = (undefined8 *)((long)puVar14 + (long)iVar13 + 0x20);
  }
  else {
    puVar7 = (undefined8 *)FUN_032bf82c(param_2);
  }
  puVar9 = puVar7;
  do {
    uVar11 = uVar11 - 1;
    uVar1 = *(undefined4 *)(param_1 + 1);
    uVar2 = *(undefined4 *)((long)param_1 + 0xc);
    *puVar9 = *param_1;
    *(undefined4 *)(puVar9 + 1) = uVar1;
    *(undefined4 *)((long)puVar9 + 0xc) = uVar2;
    param_1 = param_1 + 2;
    puVar9 = puVar9 + 2;
  } while (0 < (int)uVar11);
  *(int *)(param_2 + 3) = (int)param_2[3] + iVar5;
  *(int *)((long)param_2 + 0x1c) = *(int *)((long)param_2 + 0x1c) + 1;
  bVar4 = *(byte *)((long)puVar7 + 0xf);
  *(byte *)((long)puVar7 + 0xf) = bVar4 & 0xf7;
  if ((*(int *)((long)param_2 + 0x1c) + *(int *)(*param_2 + 8) != iVar3 + uVar8) &&
     (puVar10 = (uint *)param_2[2], puVar10 != puVar14)) {
    if ((uVar8 & 0xffff) == (*puVar14 & 0xffff)) {
      puVar14 = *(uint **)(puVar14 + 2);
      iVar13 = 0;
    }
    if (puVar14 == puVar10) {
      uVar12 = (undefined2)iVar13;
      goto joined_r0x03051e48;
    }
  }
  uVar12 = (undefined2)iVar13;
  puVar10 = puVar14;
joined_r0x03051e48:
  if (param_4 == 0) {
    if (((ulong)*(byte *)(puVar7 + 1) == 2) && (2 < *(byte *)((long)puVar7 + 9))) {
      if (puVar7[4] != 0) {
        *(byte *)((long)puVar7 + 0xf) = bVar4 | 8;
      }
      puVar7[4] = 0;
      *(undefined2 *)(puVar7 + 5) = 0;
    }
    plVar6 = *(long **)(param_7 + (ulong)*(byte *)(puVar7 + 1) * 8);
    if ((int)plVar6[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x03051e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x30))(plVar6,puVar7,param_6,param_3);
      return;
    }
  }
  else {
    if (*(int *)(param_4 + 0x18) < 0xed1) {
      puVar7 = (undefined8 *)(*(long *)(param_4 + 0x10) + (long)*(int *)(param_4 + 0x18) + 0x20);
    }
    else {
      puVar7 = (undefined8 *)FUN_032bf82c(param_4);
    }
    *(undefined4 *)((long)puVar7 + 0xc) = 0;
    *puVar7 = puVar10;
    *(undefined2 *)(puVar7 + 1) = uVar12;
    *(undefined1 *)((long)puVar7 + 0xb) = 3;
    uVar8 = *(uint *)(param_5 + 0x1000);
    if (uVar8 == 0x100) {
      FUN_030600f0(*(undefined8 *)(param_5 + 0x1008),param_5,0x100);
      uVar8 = 0;
      *(undefined4 *)(param_5 + 0x1000) = 0;
    }
    puVar7 = (undefined8 *)(param_5 + (ulong)uVar8 * 0x10);
    *(uint *)(param_5 + 0x1000) = uVar8 + 1;
    *puVar7 = *(undefined8 *)(param_4 + 0x10);
    *(short *)(puVar7 + 1) = (short)*(undefined4 *)(param_4 + 0x18);
    *(int *)(param_4 + 0x18) = *(int *)(param_4 + 0x18) + 0x10;
    *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
  }
  return;
}


