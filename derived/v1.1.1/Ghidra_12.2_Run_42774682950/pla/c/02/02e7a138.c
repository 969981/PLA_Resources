/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7a138; name: FUN_02e7a138
 */


void FUN_02e7a138(long param_1,long param_2,char *param_3,undefined4 param_4,uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  
  if (*(int *)(param_2 + 0x2c) != 0) {
    FUN_02edd89c(DAT_0440a170,*(int *)(param_2 + 0x2c),param_3);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  plVar10 = *(long **)(param_2 + 0x40);
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((uVar2 == 0) || ((long *)*puVar7 == plVar10)) {
    puVar5 = puVar7;
  }
  else {
    lVar8 = (ulong)uVar2 * 0x20;
    puVar9 = puVar7;
    do {
      lVar8 = lVar8 + -0x20;
      if (lVar8 == 0) goto LAB_02e7a2d4;
      puVar5 = puVar9 + 4;
      puVar1 = puVar9 + 4;
      puVar9 = puVar5;
    } while ((long *)*puVar1 != plVar10);
  }
  if (puVar5 == puVar7 + (ulong)uVar2 * 4) {
LAB_02e7a2d4:
    local_58 = 0;
    local_68 = 0;
    uStack_60 = 0;
    puVar5 = (undefined8 *)FUN_02e7a59c((long *)(param_1 + 0x10),plVar10,&local_68);
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    plVar10 = *(long **)(param_2 + 0x40);
  }
  else {
    puVar5 = puVar5 + 1;
  }
  iVar3 = (**(code **)(*plVar10 + 0x88))(plVar10);
  if ((((iVar3 == 0) || (iVar3 = (**(code **)(*plVar10 + 0x88))(plVar10), iVar3 == 10)) &&
      (*param_3 != -0x50)) || (lVar8 = FUN_02f59e30(0,0x38), lVar8 == 0)) {
    return;
  }
  FUN_02e7b520(lVar8,param_2,plVar10);
  uVar4 = FUN_02e7b63c(lVar8,param_3,param_4);
  if ((uVar4 & 1) == 0) goto LAB_02e7a314;
  cVar6 = *param_3;
  if (cVar6 == -0x80) {
LAB_02e7a268:
    uVar4 = FUN_02e7a63c(puVar5,lVar8,param_5 & 1);
    if ((uVar4 & 1) == 0) {
LAB_02e7a314:
      FUN_02e7b5fc(lVar8);
      return;
    }
    cVar6 = *param_3;
    if (cVar6 == -0x70) goto LAB_02e7a2b0;
  }
  else if (cVar6 == -0x70) {
    if (param_3[3] != '\0') goto LAB_02e7a2b0;
    goto LAB_02e7a268;
  }
  if ((cVar6 != -0x80) && ((cVar6 != -0x70 || (param_3[3] != '\0')))) {
    FUN_02e7a6b4(param_1,lVar8,param_4);
  }
LAB_02e7a2b0:
  FUN_02e7a6e8(puVar5,lVar8);
  return;
}


