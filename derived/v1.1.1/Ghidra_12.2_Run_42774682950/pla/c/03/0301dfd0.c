/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301dfd0; name: FUN_0301dfd0
 */


void FUN_0301dfd0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 0x4f8) = 0;
    *(undefined8 *)(param_1 + 0x4f0) = 0;
    *(undefined8 *)(param_1 + 0x4e8) = 0;
  }
  else {
    *(long *)(param_1 + 8) = param_3;
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_3 + 0x490);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_3 + 0x8e8);
    lVar8 = *(long *)(param_3 + 0x8a8);
    *(long *)(param_1 + 0x10) = lVar8 + 0x20;
    *(long *)(param_1 + 0x18) = lVar8 + 0x820;
    lVar8 = *(long *)(*(long *)(param_3 + 0x898) + 0x48);
    uVar2 = *(uint *)(*(long *)(param_3 + 0x898) + 0x50);
    *(long *)(param_1 + 0x20) = lVar8;
    *(ulong *)(param_1 + 0x28) = lVar8 + (ulong)uVar2 * 0x50;
    lVar8 = *(long *)(*(long *)(param_3 + 0x8a0) + 0x40);
    iVar11 = *(int *)(*(long *)(param_3 + 0x8a0) + 0x48);
    *(long *)(param_1 + 0x30) = lVar8;
    *(long *)(param_1 + 0x38) = lVar8 + (long)iVar11 * 0x70;
    *(undefined8 *)(param_1 + 0x500) = *(undefined8 *)(param_3 + 0x118);
    FUN_0301be9c(param_1 + 0x758,param_3 + 0x810);
    plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x658);
    (**(code **)(*plVar4 + 0x30))(plVar4,3,param_1 + 0x4e8);
  }
  lVar8 = tpidr_el0;
  lVar9 = *(long *)(lVar8 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar9;
  }
  plVar4 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
  puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x60,0);
  uVar7 = 8;
  if ((*(long *)(param_1 + 8) != 0) &&
     (uVar7 = 0x20, *(int *)(*(long *)(*(long *)(param_1 + 8) + 0x4a8) + 0x18) != 0)) {
    uVar7 = 8;
  }
  FUN_032be3d0(puVar5,param_2,uVar7);
  *(undefined8 **)(param_1 + 0x4e0) = puVar5;
  plVar4 = (long *)*puVar5;
  *(undefined4 *)(param_1 + 0x528) = 0;
  *(long **)(param_1 + 0x520) = plVar4;
  *(undefined1 *)(param_1 + 0x52c) = 0;
  iVar11 = *(int *)(puVar5 + 0xb) + -1;
  if (*(int *)(puVar5 + 0xb) < 1) {
    lVar9 = puVar5[1];
    (**(code **)(*plVar4 + 0x20))(plVar4,lVar9,6);
    *(undefined4 *)(puVar5 + 0xb) = 5;
    puVar5 = (undefined8 *)(lVar9 + 0x28);
  }
  else {
    *(int *)(puVar5 + 0xb) = iVar11;
    puVar5 = (undefined8 *)(puVar5[1] + (long)iVar11 * 8);
  }
  puVar5 = (undefined8 *)*puVar5;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)((long)puVar5 + 4) = *(undefined4 *)(param_1 + 0x538);
  puVar3 = PTR_PTR_0434a080;
  uVar12 = *(uint *)(param_1 + 0x53c);
  iVar11 = *(int *)(param_1 + 0x538);
  uVar2 = iVar11 + 1;
  if (iVar11 < (int)(uVar12 & 0x3fffffff)) {
    lVar9 = *(long *)(param_1 + 0x530);
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + 0x530);
    if (0x3ffffffe < iVar11) {
      FUN_032bd0a8(uVar2);
      uVar12 = *(uint *)(param_1 + 0x53c);
    }
    uVar12 = (uVar12 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar12) {
      uVar12 = 0x3fffffff;
    }
    uVar1 = uVar2;
    if ((int)uVar2 <= (int)uVar12) {
      uVar1 = uVar12;
    }
    lVar9 = FUN_032bd1d4(puVar3,uVar1,8,uVar13,iVar11,(uint *)(param_1 + 0x53c));
    iVar11 = *(int *)(param_1 + 0x538);
    *(long *)(param_1 + 0x530) = lVar9;
  }
  *(undefined8 **)(lVar9 + (long)iVar11 * 8) = puVar5;
  *(uint *)(param_1 + 0x538) = uVar2;
  puVar5 = *(undefined8 **)(param_1 + 0x4e0);
  *(char **)(param_1 + 0x610) = "hknpSimulationThreadContext::m_commandBlockStream";
  *(undefined8 *)(param_1 + 0x720) = param_4;
  plVar4 = (long *)*puVar5;
  *(long **)(param_1 + 0x620) = plVar4;
  *(undefined4 *)(param_1 + 0x628) = 0;
  *(undefined1 *)(param_1 + 0x62c) = 0;
  iVar11 = *(int *)(puVar5 + 0xb) + -1;
  if (*(int *)(puVar5 + 0xb) < 1) {
    lVar9 = puVar5[1];
    (**(code **)(*plVar4 + 0x20))(plVar4,lVar9,6);
    *(undefined4 *)(puVar5 + 0xb) = 5;
    puVar5 = (undefined8 *)(lVar9 + 0x28);
  }
  else {
    *(int *)(puVar5 + 0xb) = iVar11;
    puVar5 = (undefined8 *)(puVar5[1] + (long)iVar11 * 8);
  }
  puVar5 = (undefined8 *)*puVar5;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)((long)puVar5 + 4) = *(undefined4 *)(param_1 + 0x638);
  uVar12 = *(uint *)(param_1 + 0x63c);
  iVar11 = *(int *)(param_1 + 0x638);
  uVar2 = iVar11 + 1;
  if (iVar11 < (int)(uVar12 & 0x3fffffff)) {
    lVar9 = *(long *)(param_1 + 0x630);
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + 0x630);
    if (0x3ffffffe < iVar11) {
      FUN_032bd0a8(uVar2);
      uVar12 = *(uint *)(param_1 + 0x63c);
    }
    uVar12 = (uVar12 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar12) {
      uVar12 = 0x3fffffff;
    }
    uVar1 = uVar2;
    if ((int)uVar2 <= (int)uVar12) {
      uVar1 = uVar12;
    }
    lVar9 = FUN_032bd1d4(puVar3,uVar1,8,uVar13,iVar11,(uint *)(param_1 + 0x63c));
    iVar11 = *(int *)(param_1 + 0x638);
    *(long *)(param_1 + 0x630) = lVar9;
  }
  *(undefined8 **)(lVar9 + (long)iVar11 * 8) = puVar5;
  *(char **)(param_1 + 0x710) = "hknpSimulationThreadContext::m_highPriorityCommandBlockStream";
  *(long *)(param_1 + 0x498) = param_1 + 0x160;
  *(long *)(param_1 + 0x4a0) = param_1 + 0x270;
  *(uint *)(param_1 + 0x638) = uVar2;
  *(long *)(param_1 + 0x490) = param_1 + 0x50;
  *(long *)(param_1 + 0x4a8) = param_1 + 0x380;
  lVar9 = *(long *)(lVar8 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar9;
  }
  plVar4 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
  puVar6 = (undefined4 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x80,0);
  *puVar6 = 0xffffff;
  *(undefined2 *)(puVar6 + 1) = 0;
  puVar6[2] = 0;
  *(undefined8 *)(puVar6 + 4) = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  *(undefined8 *)(puVar6 + 0xe) = 0;
  puVar6[0x1d] = 0;
  *(undefined2 *)(puVar6 + 0x1e) = 0;
  *(undefined8 *)(puVar6 + 0x17) = 0;
  *(undefined8 *)(puVar6 + 0x19) = 0;
  puVar6[0x1b] = 0;
  *(undefined1 *)((long)puVar6 + 0x7a) = 1;
  lVar9 = *(long *)(param_1 + 0x4b0);
  *(undefined4 **)(param_1 + 0x4b0) = puVar6;
  if (lVar9 == 0) {
    return;
  }
  lVar10 = *(long *)(lVar8 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar10;
  }
  plVar4 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x0301e2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,lVar9,0x80);
  return;
}


