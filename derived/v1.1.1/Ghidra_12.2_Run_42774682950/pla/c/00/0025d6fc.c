/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025d6fc; name: FUN_0025d6fc
 */


void FUN_0025d6fc(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_34;
  
  *(long *)(param_1 + 0x40) = param_2;
  local_34 = 0;
  iVar1 = FUN_002506a0(*(undefined8 *)(param_2 + 0x38),0x52475456,1,&local_34);
  *(int *)(param_1 + 0x58) = iVar1;
  if (-1 < iVar1) {
    uVar5 = FUN_0022fbf0(*(undefined8 *)(param_1 + 0x40),iVar1);
    uVar2 = FUN_0087d8bc(uVar5,0,3,"uVgConstantBufferVS");
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    uVar5 = FUN_0022fc40(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x58));
    uVar2 = FUN_0087d8bc(uVar5,4,3,"uVgConstantBufferPS");
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    iVar1 = *(int *)(param_1 + 0x58);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar3 = FUN_00230144();
    iVar4 = *(int *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar1) * 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar3 = FUN_00230144();
    iVar1 = *(int *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar4) * 4 + 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar4 = FUN_00230144();
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(lVar6 + (long)(iVar4 * iVar1) * 4 + 8);
  }
  local_34 = 1;
  iVar1 = FUN_002506a0(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38),0x52475456,1,&local_34);
  *(int *)(param_1 + 0x70) = iVar1;
  if (-1 < iVar1) {
    uVar5 = FUN_0022fbf0(*(undefined8 *)(param_1 + 0x40),iVar1);
    uVar2 = FUN_0087d8bc(uVar5,0,3,"uVgConstantBufferVS");
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    uVar5 = FUN_0022fc40(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x70));
    uVar2 = FUN_0087d8bc(uVar5,4,3,"uVgConstantBufferPS");
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    iVar1 = *(int *)(param_1 + 0x70);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar3 = FUN_00230144();
    iVar4 = *(int *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar1) * 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar3 = FUN_00230144();
    iVar1 = *(int *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar4) * 4 + 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar4 = FUN_00230144();
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(lVar6 + (long)(iVar4 * iVar1) * 4 + 8);
  }
  local_34 = 2;
  iVar1 = FUN_002506a0(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38),0x52475456,1,&local_34);
  *(int *)(param_1 + 0x88) = iVar1;
  if (-1 < iVar1) {
    uVar5 = FUN_0022fbf0(*(undefined8 *)(param_1 + 0x40),iVar1);
    uVar2 = FUN_0087d8bc(uVar5,0,3,"uVgConstantBufferVS");
    *(undefined4 *)(param_1 + 0x8c) = uVar2;
    uVar5 = FUN_0022fc40(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x88));
    uVar2 = FUN_0087d8bc(uVar5,4,3,"uVgConstantBufferPS");
    *(undefined4 *)(param_1 + 0x90) = uVar2;
    iVar1 = *(int *)(param_1 + 0x88);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar3 = FUN_00230144();
    iVar4 = *(int *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar1) * 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar3 = FUN_00230144();
    iVar1 = *(int *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar4) * 4 + 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar4 = FUN_00230144();
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(lVar6 + (long)(iVar4 * iVar1) * 4 + 8);
  }
  local_34 = 3;
  iVar1 = FUN_002506a0(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38),0x52475456,1,&local_34);
  *(int *)(param_1 + 0xa0) = iVar1;
  if (-1 < iVar1) {
    uVar5 = FUN_0022fbf0(*(undefined8 *)(param_1 + 0x40),iVar1);
    uVar2 = FUN_0087d8bc(uVar5,0,3,"uVgConstantBufferVS");
    *(undefined4 *)(param_1 + 0xa4) = uVar2;
    uVar5 = FUN_0022fc40(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0xa0));
    uVar2 = FUN_0087d8bc(uVar5,4,3,"uVgConstantBufferPS");
    *(undefined4 *)(param_1 + 0xa8) = uVar2;
    iVar1 = *(int *)(param_1 + 0xa0);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar3 = FUN_00230144();
    iVar4 = *(int *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar1) * 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar3 = FUN_00230144();
    iVar1 = *(int *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(lVar6 + (long)(iVar3 * iVar4) * 4 + 4);
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    iVar4 = FUN_00230144();
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(lVar6 + (long)(iVar4 * iVar1) * 4 + 8);
  }
  return;
}


