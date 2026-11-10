/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027a950; name: FUN_0027a950
 */


void FUN_0027a950(undefined1 *param_1,undefined8 param_2,long *param_3,long param_4,uint param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  
  *(long *)(param_1 + 8) = param_4;
  iVar2 = *(int *)(param_4 + 0x1c);
  *(int *)(param_1 + 0x30) = iVar2;
  lVar3 = (**(code **)(*param_3 + 0x10))(param_3,(long)iVar2 * 0x180 | 0x20,0x80);
  *(long *)(param_1 + 0x28) = lVar3;
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar5 = (undefined8 *)(lVar3 + 0x124);
    lVar6 = (long)*(int *)(param_1 + 0x30) * 0x180;
    do {
      puVar5[9] = 0xffffffffffffffff;
      puVar5[10] = 0xffffffffffffffff;
      lVar6 = lVar6 + -0x180;
      *puVar5 = 0xffffffffffffffff;
      puVar5[7] = 0xffffffffffffffff;
      puVar5[8] = 0xffffffffffffffff;
      puVar5[5] = 0xffffffffffffffff;
      puVar5[6] = 0xffffffffffffffff;
      puVar5[3] = 0xffffffffffffffff;
      puVar5[4] = 0xffffffffffffffff;
      puVar5[1] = 0xffffffffffffffff;
      puVar5[2] = 0xffffffffffffffff;
      puVar5 = puVar5 + 0x30;
    } while (lVar6 != 0);
  }
  *(long *)(param_1 + 0x20) = lVar3;
  if ((param_5 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar1 = PTR_DAT_04372850;
    if (0 < *(int *)(param_1 + 0x30)) {
      lVar11 = 0;
      lVar6 = 0;
      lVar3 = 0;
      do {
        lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x20);
        lVar4 = *(long *)(lVar8 + *(long *)puVar1 + lVar11);
        lVar10 = *(long *)(lVar8 + *(long *)(puVar1 + 8) + lVar11);
        lVar7 = *(long *)(lVar8 + *(long *)(puVar1 + 0x10) + lVar11);
        if (lVar4 == 0) {
          iVar2 = 3;
          if (lVar10 == 0) goto LAB_0027aafc;
LAB_0027ab24:
          iVar2 = FUN_0087ccc4(*(undefined8 *)(lVar10 + 0x68),param_2,lVar10);
          uVar9 = 1;
          if (lVar7 != 0 && iVar2 != 0) {
LAB_0027ab44:
            FUN_0087ccc4(*(undefined8 *)(lVar7 + 0x68),param_2,lVar7);
            uVar9 = 2;
          }
        }
        else {
          iVar2 = FUN_0087ccc4(*(undefined8 *)(lVar4 + 0x68),param_2);
          if (lVar10 != 0 && iVar2 != 0) goto LAB_0027ab24;
LAB_0027aafc:
          uVar9 = 0;
          if (lVar7 != 0 && iVar2 != 0) goto LAB_0027ab44;
        }
        FUN_0027a2bc(*(long *)(param_1 + 0x20) + lVar6);
        FUN_0027a2c4(*(long *)(param_1 + 0x20) + lVar6,lVar8 + lVar11,uVar9);
        FUN_0027a2ec(*(long *)(param_1 + 0x20) + lVar6);
        FUN_0027a5ac(*(long *)(param_1 + 0x20) + lVar6);
        lVar3 = lVar3 + 1;
        lVar6 = lVar6 + 0x180;
        lVar11 = lVar11 + 0x40;
        *(undefined4 *)(param_1 + 0x10) = uVar9;
      } while (lVar3 < *(int *)(param_1 + 0x30));
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = param_2;
    if ((0 < *(int *)(param_1 + 0x30)) && (FUN_0027a2bc(), 1 < *(int *)(param_1 + 0x30))) {
      lVar3 = 1;
      lVar6 = 0x180;
      do {
        FUN_0027a2bc(*(long *)(param_1 + 0x20) + lVar6);
        lVar3 = lVar3 + 1;
        lVar6 = lVar6 + 0x180;
      } while (lVar3 < *(int *)(param_1 + 0x30));
    }
  }
  *param_1 = 1;
  return;
}


