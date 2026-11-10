/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fd6440; name: FUN_02fd6440
 */


uint FUN_02fd6440(long *param_1,undefined8 param_2,undefined4 *param_3,undefined2 *param_4,
                 int param_5)

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
  int iVar10;
  long lVar11;
  undefined2 local_68 [2];
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  plVar9 = (long *)(param_1[2] + 0x48);
  lVar11 = *plVar9;
  if (lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = lVar11 + (long)plVar9;
  }
  piVar1 = (int *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x44) == 2) {
    lVar11 = (long)*piVar1;
  }
  else {
    iVar4 = *piVar1;
    uVar7 = *(uint *)(param_1 + 0xc) | param_5 << 1;
    iVar8 = 0;
    iVar10 = *(int *)(lVar11 + 0x44) + -1;
    while( true ) {
      uVar2 = iVar10 + iVar8;
      if ((int)uVar2 < 0) {
        uVar2 = uVar2 + 1;
      }
      uVar3 = (int)uVar2 >> 1;
      lVar5 = (long)((ulong)uVar2 << 0x20) >> 0x21;
      uVar2 = *(uint *)((long)piVar1 +
                       (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3) +
                       (long)iVar4);
      lVar11 = lVar5 + 1;
      if ((uVar2 <= uVar7) && (uVar7 < *(uint *)((long)piVar1 + lVar11 * 8 + (long)iVar4))) break;
      iVar6 = (int)lVar11;
      if (uVar7 <= uVar2) {
        iVar10 = uVar3 - 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    }
    lVar11 = lVar5 * 8 + (long)iVar4;
  }
  (**(code **)(**(long **)*param_1 + 0x40))
            (*(long **)*param_1,*(undefined2 *)((long)piVar1 + lVar11 + 4),4,
             *(undefined8 *)param_1[3],((undefined8 *)param_1[3])[1],param_1[2],*param_3,param_2,
             param_4);
  local_68[0] = *param_4;
  local_64 = *(undefined8 *)(param_4 + 2);
  local_5c = *(undefined4 *)(param_4 + 6);
  local_58 = *(undefined8 *)param_1[3];
  local_50 = ((undefined8 *)param_1[3])[1];
  local_48 = param_1[2];
  local_40 = *param_3;
  local_38 = param_2;
  uVar7 = (**(code **)(**(long **)(*param_1 + 8) + 0x40))
                    (*(long **)(*param_1 + 8),4,1,param_1 + 5,local_68);
  return uVar7 & 1;
}


