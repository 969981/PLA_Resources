/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fd60b8; name: FUN_02fd60b8
 */


uint FUN_02fd60b8(long param_1,int param_2,undefined4 *param_3,undefined8 param_4,
                 undefined2 *param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  undefined2 local_a0 [2];
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 local_68 [2];
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  plVar9 = (long *)(*(long *)(param_1 + 0x10) + 0x48);
  lVar12 = *plVar9;
  if (lVar12 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = lVar12 + (long)plVar9;
  }
  piVar1 = (int *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x44) == 2) {
    lVar12 = (long)*piVar1;
  }
  else {
    iVar4 = *piVar1;
    uVar7 = *(uint *)(param_1 + 0x60) | param_2 << 1;
    iVar8 = 0;
    iVar11 = *(int *)(lVar12 + 0x44) + -1;
    while( true ) {
      uVar2 = iVar11 + iVar8;
      if ((int)uVar2 < 0) {
        uVar2 = uVar2 + 1;
      }
      uVar3 = (int)uVar2 >> 1;
      lVar5 = (long)((ulong)uVar2 << 0x20) >> 0x21;
      uVar2 = *(uint *)((long)piVar1 +
                       (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3) +
                       (long)iVar4);
      lVar12 = lVar5 + 1;
      if ((uVar2 <= uVar7) && (uVar7 < *(uint *)((long)piVar1 + lVar12 * 8 + (long)iVar4))) break;
      iVar6 = (int)lVar12;
      if (uVar7 <= uVar2) {
        iVar11 = uVar3 - 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    }
    lVar12 = lVar5 * 8 + (long)iVar4;
  }
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x130) + 0x40))
            ((long *)**(undefined8 **)(param_1 + 0x130),*(undefined2 *)((long)piVar1 + lVar12 + 4),2
             ,**(undefined8 **)(param_1 + 0x18),(*(undefined8 **)(param_1 + 0x18))[1],
             *(long *)(param_1 + 0x10),*param_3,param_4,param_5);
  lVar12 = *(long *)(param_1 + 0x130);
  local_68[0] = *(undefined2 *)(lVar12 + 0x10);
  uStack_5c = *(undefined4 *)(lVar12 + 0x1c);
  local_64 = (undefined4)*(undefined8 *)(lVar12 + 0x14);
  uStack_60 = (undefined4)((ulong)*(undefined8 *)(lVar12 + 0x14) >> 0x20);
  puVar10 = *(undefined8 **)(param_1 + 0x138);
  local_58 = *puVar10;
  local_50 = puVar10[1];
  local_48 = puVar10[2];
  local_40 = *(undefined4 *)(puVar10 + 3);
  local_38 = *(undefined8 *)(lVar12 + 0x28);
  local_a0[0] = *param_5;
  local_9c = *(undefined8 *)(param_5 + 2);
  local_94 = *(undefined4 *)(param_5 + 6);
  local_90 = **(undefined8 **)(param_1 + 0x18);
  local_88 = (*(undefined8 **)(param_1 + 0x18))[1];
  local_80 = *(undefined8 *)(param_1 + 0x10);
  local_78 = *param_3;
  local_70 = param_4;
  uVar7 = (**(code **)(**(long **)(lVar12 + 8) + 0x40))
                    (*(long **)(lVar12 + 8),2,*(char *)(param_1 + 0x140) == '\0',local_68,local_a0);
  return uVar7 & 1;
}


