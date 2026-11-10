/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c90a0; name: FUN_004c90a0
 */


undefined8
FUN_004c90a0(undefined4 *param_1,undefined4 param_2,undefined1 *param_3,ulong param_4,int param_5,
            long *param_6)

{
  undefined1 *__dest;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_b0 [4];
  undefined4 local_ac;
  ulong local_a8;
  undefined1 *local_90;
  undefined1 *local_88;
  
  if (*(long *)(param_1 + 0x218) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: SSL3_BUFFER_get_left(wb) == 0",
                 "external/openssl/ssl/record/rec_layer_d1.c",0x32e);
  }
  if ((*(int *)(*(long *)(param_1 + 0x2a) + 0xfc) != 0) &&
     (uVar6 = (**(code **)(*(long *)(param_1 + 2) + 0x78))(param_1), (int)uVar6 < 1)) {
    return uVar6;
  }
  if ((param_4 == 0) && (param_5 == 0)) {
    return 0;
  }
  uVar7 = FUN_004c5ac0(param_1);
  if ((uVar7 & 0xffffffff) < param_4) {
    FUN_004c99a0(param_1,0x50,0xf5,0xc2,"external/openssl/ssl/record/rec_layer_d1.c",0x341);
    return 0;
  }
  if (((*(long *)(param_1 + 0x142) == 0) || (*(long *)(param_1 + 0x11a) == 0)) ||
     (lVar8 = FUN_0041cd10(*(undefined8 *)(param_1 + 0x120)), lVar8 == 0)) {
    iVar2 = 0;
  }
  else {
    FUN_0041cd10(*(undefined8 *)(param_1 + 0x120));
    iVar2 = FUN_0041ccc0();
    if (iVar2 < 0) {
      uVar6 = 0xc2;
      uVar9 = 0x351;
      goto LAB_004c9490;
    }
  }
  puVar10 = *(undefined1 **)(param_1 + 0x210);
  *puVar10 = (char)param_2;
  local_ac = param_2;
  if ((**(int **)(param_1 + 2) == 0x1ffff) && (param_1[0x176] != 0x100)) {
    *(undefined2 *)(puVar10 + 1) = 0xfffe;
    if (*(long *)(param_1 + 0x11a) != 0) goto LAB_004c9200;
LAB_004c9244:
    iVar5 = 0;
  }
  else {
    puVar10[1] = (char)((uint)*param_1 >> 8);
    puVar10[2] = (char)*param_1;
    if (*(long *)(param_1 + 0x11a) == 0) goto LAB_004c9244;
LAB_004c9200:
    FUN_0041c7c0();
    uVar3 = FUN_0041c7b0();
    if ((uVar3 & 0xf0007) - 6 < 2) {
      iVar5 = 8;
    }
    else {
      if ((uVar3 & 0xf0007) != 2) goto LAB_004c9244;
      iVar4 = FUN_0041ca80(*(undefined8 *)(param_1 + 0x11a));
      iVar5 = 0;
      if (1 < iVar4) {
        iVar5 = iVar4;
      }
    }
  }
  puVar11 = puVar10 + 0xd;
  lVar8 = (long)iVar5;
  __dest = puVar11 + lVar8;
  local_a8 = param_4;
  local_90 = __dest;
  local_88 = param_3;
  if (*(long *)(param_1 + 0x116) == 0) {
    memcpy(__dest,param_3,param_4);
    local_88 = __dest;
  }
  else {
    iVar4 = FUN_004cf3f0(param_1,auStack_b0);
    if (iVar4 == 0) {
      uVar6 = 0x8d;
      uVar9 = 0x38d;
      goto LAB_004c9490;
    }
  }
  if ((iVar2 != 0) && (((uint)**(undefined8 **)(param_1 + 0x2a) >> 10 & 1) == 0)) {
    iVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 8))
                      (param_1,auStack_b0,puVar11 + local_a8 + lVar8,1);
    if (iVar4 == 0) {
      uVar6 = 0x44;
      uVar9 = 0x3a1;
      goto LAB_004c9490;
    }
    local_a8 = local_a8 + (long)iVar2;
  }
  if (iVar5 != 0) {
    local_a8 = local_a8 + lVar8;
  }
  local_90 = puVar11;
  local_88 = puVar11;
  iVar5 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 2) + 0xc0))(param_1,auStack_b0,1,1);
  if (iVar5 < 1) {
    iVar2 = FUN_004c9a20(param_1);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    uVar6 = 0x44;
    uVar9 = 0x3b1;
LAB_004c9490:
    FUN_004c99a0(param_1,0x50,0xf5,uVar6,"external/openssl/ssl/record/rec_layer_d1.c",uVar9);
    return 0xffffffff;
  }
  if ((iVar2 != 0) && (((uint)**(undefined8 **)(param_1 + 0x2a) >> 10 & 1) != 0)) {
    iVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 8))
                      (param_1,auStack_b0,puVar11 + local_a8,1);
    if (iVar5 == 0) {
      uVar6 = 0x44;
      uVar9 = 0x3ba;
      goto LAB_004c9490;
    }
    local_a8 = local_a8 + (long)iVar2;
  }
  puVar10[3] = *(undefined1 *)(*(long *)(param_1 + 0x5ea) + 3);
  puVar10[4] = *(undefined1 *)(*(long *)(param_1 + 0x5ea) + 2);
  uVar1 = *(undefined4 *)((long)param_1 + 0x179a);
  *(undefined2 *)(puVar10 + 9) = *(undefined2 *)((long)param_1 + 0x179e);
  *(undefined4 *)(puVar10 + 5) = uVar1;
  puVar10[0xb] = (char)(local_a8 >> 8);
  puVar10[0xc] = (char)local_a8;
  if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
    (**(code **)(param_1 + 0x2e))(1,0,0x100,puVar10,0xd,param_1,*(undefined8 *)(param_1 + 0x30));
  }
  local_a8 = local_a8 + 0xd;
  local_ac = param_2;
  FUN_004c8090(param_1 + 0x5e6);
  if (param_5 == 0) {
    *(ulong *)(param_1 + 0x218) = local_a8;
    *(undefined8 *)(param_1 + 0x216) = 0;
    *(ulong *)(param_1 + 0x5dc) = param_4;
    *(undefined1 **)(param_1 + 0x5e2) = param_3;
    param_1[0x5de] = param_2;
    *(ulong *)(param_1 + 0x5e0) = param_4;
    uVar6 = FUN_004c6770(param_1,param_2,param_3,param_4,param_6);
    return uVar6;
  }
  *param_6 = local_a8;
  return 1;
}


