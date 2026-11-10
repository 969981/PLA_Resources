/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03309708; name: FUN_03309708
 */


void FUN_03309708(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  lVar2 = (long)param_1 + 0x6c;
  param_1[4] = &DAT_03aad864;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[10] = 0x8000000000000000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x1000001;
  *(undefined2 *)((long)param_1 + 0x5c) = 0x101;
  param_1[0x10] = &DAT_03aad864;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x14] = &DAT_03aad864;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x8000000000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0x8000000000000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0x8000000000000000;
  param_1[0x16] = 0;
  param_1[0x17] = 0x8000000000000000;
  FUN_032fc650();
  lVar5 = tpidr_el0;
  lVar7 = *(long *)(lVar5 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar7;
  }
  plVar3 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,8,0);
  *puVar4 = &PTR_LAB_0434d928;
  iVar6 = *(int *)(param_1 + 0xd);
  lVar7 = param_1[0xc];
  iVar1 = iVar6 + 1;
  if ((int)(*(uint *)((long)param_1 + 0x6c) & 0x3fffffff) <= iVar6) {
    lVar7 = FUN_032fbbfc(PTR_PTR_0434a080,iVar1,lVar7,iVar6,lVar2);
    iVar6 = *(int *)(param_1 + 0xd);
    param_1[0xc] = lVar7;
  }
  *(undefined8 **)(lVar7 + (long)iVar6 * 8) = puVar4;
  *(int *)(param_1 + 0xd) = iVar1;
  lVar7 = *(long *)(lVar5 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar7;
  }
  plVar3 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,8,0);
  *puVar4 = &PTR_LAB_0434d988;
  iVar6 = *(int *)(param_1 + 0xd);
  lVar7 = param_1[0xc];
  iVar1 = iVar6 + 1;
  if ((int)(*(uint *)((long)param_1 + 0x6c) & 0x3fffffff) <= iVar6) {
    lVar7 = FUN_032fbbfc(PTR_PTR_0434a080,iVar1,lVar7,iVar6,lVar2);
    iVar6 = *(int *)(param_1 + 0xd);
    param_1[0xc] = lVar7;
  }
  *(undefined8 **)(lVar7 + (long)iVar6 * 8) = puVar4;
  *(int *)(param_1 + 0xd) = iVar1;
  lVar7 = *(long *)(lVar5 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar7;
  }
  plVar3 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,8,0);
  *puVar4 = &PTR_LAB_0434d958;
  iVar6 = *(int *)(param_1 + 0xd);
  lVar5 = param_1[0xc];
  iVar1 = iVar6 + 1;
  if ((int)(*(uint *)((long)param_1 + 0x6c) & 0x3fffffff) <= iVar6) {
    lVar5 = FUN_032fbbfc(PTR_PTR_0434a080,iVar1,lVar5,iVar6,lVar2);
    iVar6 = *(int *)(param_1 + 0xd);
    param_1[0xc] = lVar5;
  }
  *(undefined8 **)(lVar5 + (long)iVar6 * 8) = puVar4;
  *(int *)(param_1 + 0xd) = iVar1;
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  return;
}


