/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3e2a0; name: FUN_02f3e2a0
 */


long FUN_02f3e2a0(long param_1,undefined4 param_2,undefined1 *param_3,undefined4 *param_4,
                 long *param_5)

{
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_190 [256];
  undefined4 local_90;
  long local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  lVar8 = *(long *)(param_1 + 8);
  plVar1 = *(long **)(param_1 + 0x10);
  lVar7 = plVar1[0xd];
  local_90 = 0;
  local_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_68 = 1;
  (**(code **)(*plVar1 + 0xb8))(plVar1,auStack_190,0);
  uVar3 = local_68;
  local_68._0_3_ = CONCAT12(1,(undefined2)local_68);
  uVar4 = local_68;
  if (local_88 == 0) {
    *param_3 = 0;
    return 0;
  }
  *param_3 = 1;
  lVar9 = *(long *)(local_88 + 0x18);
  lVar8 = lVar8 - lVar7;
  *param_4 = 0;
  if ((lVar9 == 0) || ((*(byte *)(lVar9 + 0x5a) & 1) == 0)) {
    iVar5 = 3;
    local_68._0_1_ = (char)uVar3;
    cVar2 = (char)local_68;
  }
  else {
    iVar5 = FUN_02f3e474(param_1,auStack_190,param_2,param_5);
    if (iVar5 == 2) {
      return 0;
    }
    if (iVar5 == 0) goto LAB_02f3e45c;
    uVar4 = local_68;
    cVar2 = (char)local_68;
  }
  local_68 = uVar4;
  iVar6 = iVar5;
  if (cVar2 != '\0') {
LAB_02f3e390:
    *param_3 = iVar6 != 3;
    return 0;
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),auStack_190,0);
  if (*(long *)(local_88 + 0x18) == 0) {
    *param_3 = iVar5 != 3;
    if (lVar9 == 0) {
      return 0;
    }
    if (iVar5 != 1) {
      return 0;
    }
    if ((*(byte *)(lVar9 + 0x5a) & 1) != 0) {
LAB_02f3e444:
      lVar7 = FUN_02f4f084(auStack_190);
      *param_5 = lVar7;
      return lVar7 - lVar8;
    }
  }
  else {
    if ((iVar5 == 3) && (iVar6 = 3, (*(byte *)(*(long *)(local_88 + 0x18) + 0x5a) & 1) == 0))
    goto LAB_02f3e390;
    *param_4 = 1;
    iVar6 = FUN_02f3e474(param_1,auStack_190,param_2,param_5);
    *param_3 = iVar5 != 3 || iVar6 != 3;
    if (iVar6 - 2U < 2) {
      if (iVar5 != 3) goto LAB_02f3e444;
    }
    else if (iVar6 == 0) {
LAB_02f3e45c:
      return *param_5 - lVar8;
    }
  }
  return 0;
}


