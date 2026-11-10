/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02785610; name: FUN_02785610
 */


void FUN_02785610(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_b68 [2736];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined2 local_70;
  
  lVar6 = 0xdca0;
  puVar4 = param_1 + 0x1f;
  *param_1 = 0;
  memset(param_1 + 2,0,0xdca0);
  do {
    *(undefined8 *)(puVar4 + -0x1b) = 0;
    lVar6 = lVar6 + -0xb08;
    *(undefined2 *)(puVar4 + -0xd) = 0x100;
    *(undefined2 *)((long)puVar4 + -2) = 0;
    *puVar4 = 0;
    *(undefined8 *)(puVar4 + -0xc) = 0;
    *(undefined8 *)(puVar4 + -10) = 0;
    *(undefined8 *)((long)puVar4 + -0x22) = 0;
    puVar4 = puVar4 + 0x2c2;
  } while (lVar6 != 0);
  iVar8 = 0;
  puVar4 = param_2 + 0x18;
  lVar6 = 0x14;
  *param_1 = *param_2;
  do {
    local_a0 = *(undefined8 *)(puVar4 + -0xd);
    local_98 = *(undefined8 *)(puVar4 + -0xb);
    local_90 = *(undefined8 *)(puVar4 + -9);
    local_a8 = *(undefined8 *)(puVar4 + -0xf);
    uVar5 = *(undefined8 *)(puVar4 + -0x16);
    iVar7 = puVar4[-0x14];
    local_80 = *(undefined8 *)(puVar4 + -5);
    local_78 = *(undefined8 *)(puVar4 + -3);
    local_70 = *(undefined2 *)(puVar4 + -1);
    local_88 = *(undefined8 *)(puVar4 + -7);
    local_b8 = *(undefined8 *)(puVar4 + -0x13);
    local_b0 = *(undefined8 *)(puVar4 + -0x11);
    sVar3 = *(short *)((long)puVar4 + -2);
    memcpy(auStack_b68,puVar4,0xab0);
    if ((iVar7 == 2) && (sVar3 != 0)) {
      *(undefined8 *)(param_1 + (long)iVar8 * 0x2c2 + 7) = local_b0;
      *(undefined8 *)(param_1 + (long)iVar8 * 0x2c2 + 5) = local_b8;
      *(undefined8 *)(param_1 + (long)iVar8 * 0x2c2 + 9) = local_a8;
      *(undefined8 *)(param_1 + (long)iVar8 * 0x2c2 + 0xf) = local_90;
      *(undefined2 *)(param_1 + (long)iVar8 * 0x2c2 + 0x17) = local_70;
      *(undefined8 *)(param_1 + (long)iVar8 * 0x2c2 + 0xb) = local_a0;
      *(undefined8 *)(param_1 + (long)iVar8 * 0x2c2 + 0xd) = local_98;
      *(undefined8 *)(param_1 + (long)iVar8 * 0x2c2 + 2) = uVar5;
      param_1[(long)iVar8 * 0x2c2 + 4] = 2;
      *(undefined8 *)(param_1 + (long)iVar8 * 0x2c2 + 0x15) = local_78;
      *(undefined8 *)(param_1 + (long)iVar8 * 0x2c2 + 0x13) = local_80;
      *(undefined8 *)(param_1 + (long)iVar8 * 0x2c2 + 0x11) = local_88;
      *(short *)((long)param_1 + (long)iVar8 * 0xb08 + 0x5e) = sVar3;
      memcpy(param_1 + (long)iVar8 * 0x2c2 + 0x18,auStack_b68,0xaac);
      iVar8 = iVar8 + 1;
    }
    lVar6 = lVar6 + -1;
    puVar4 = puVar4 + 0x2c2;
  } while (lVar6 != 0);
  iVar7 = 0;
  lVar6 = 0x14;
  param_2 = param_2 + 0x18;
  do {
    uVar1 = iVar7 + iVar8;
    if (0x13 < uVar1) {
      return;
    }
    local_a0 = *(undefined8 *)(param_2 + -0xd);
    local_98 = *(undefined8 *)(param_2 + -0xb);
    local_90 = *(undefined8 *)(param_2 + -9);
    local_a8 = *(undefined8 *)(param_2 + -0xf);
    uVar5 = *(undefined8 *)(param_2 + -0x16);
    uVar2 = param_2[-0x14];
    local_80 = *(undefined8 *)(param_2 + -5);
    local_78 = *(undefined8 *)(param_2 + -3);
    local_70 = *(undefined2 *)(param_2 + -1);
    local_88 = *(undefined8 *)(param_2 + -7);
    local_b8 = *(undefined8 *)(param_2 + -0x13);
    local_b0 = *(undefined8 *)(param_2 + -0x11);
    sVar3 = *(short *)((long)param_2 + -2);
    memcpy(auStack_b68,param_2,0xab0);
    if ((uVar2 < 2) && (sVar3 != 0)) {
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 0x2c2 + 7) = local_b0;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 0x2c2 + 5) = local_b8;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 0x2c2 + 9) = local_a8;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 0x2c2 + 0xf) = local_90;
      *(undefined2 *)(param_1 + (long)(int)uVar1 * 0x2c2 + 0x17) = local_70;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 0x2c2 + 0xb) = local_a0;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 0x2c2 + 0xd) = local_98;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 0x2c2 + 2) = uVar5;
      param_1[(long)(int)uVar1 * 0x2c2 + 4] = uVar2;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 0x2c2 + 0x15) = local_78;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 0x2c2 + 0x13) = local_80;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 0x2c2 + 0x11) = local_88;
      *(short *)((long)param_1 + (long)(int)uVar1 * 0xb08 + 0x5e) = sVar3;
      memcpy(param_1 + (long)(int)uVar1 * 0x2c2 + 0x18,auStack_b68,0xaac);
      iVar7 = iVar7 + 1;
    }
    lVar6 = lVar6 + -1;
    param_2 = param_2 + 0x2c2;
  } while (lVar6 != 0);
  return;
}


