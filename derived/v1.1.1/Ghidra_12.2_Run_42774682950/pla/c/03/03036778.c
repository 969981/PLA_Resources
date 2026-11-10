/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03036778; name: FUN_03036778
 */


void FUN_03036778(long param_1,ulong param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 local_48;
  undefined2 local_44;
  undefined8 local_40;
  undefined1 local_38;
  
  uVar6 = param_2 & 0xffffff;
  local_38 = (undefined1)param_3;
  if (uVar6 == 0xffffff) {
    local_40 = 0xffffffffffffffff;
  }
  else {
    local_40 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar6 * 0xc0 + 0xb0);
  }
  local_48 = 0x2000020;
  local_44 = 0x20;
  plVar3 = *(long **)(param_1 + 0x7f0);
  if (plVar3 == (long *)0x0) {
    lVar4 = *(long *)(param_1 + 0x698);
  }
  else {
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    lVar4 = *(long *)(param_1 + 0x698);
  }
  if (lVar4 == 0) {
    return;
  }
  lVar7 = (long)*(int *)(*(long *)(param_1 + 0x38) + uVar6 * 0xc0 + 0x80);
  param_2 = param_2 & 0xffffffff;
  if (param_3 == 2) {
    lVar7 = *(long *)(param_1 + 0x150) + lVar7 * 0x80;
    iVar1 = *(int *)(lVar7 + 0x4c);
    if (iVar1 == 0 || iVar1 == 0x7fffffff) goto LAB_03036834;
    FUN_0304b0d8(lVar4,param_2,0);
    uVar2 = *(undefined4 *)(lVar7 + 0x48);
    uVar5 = 1;
  }
  else {
    if ((param_3 != 1) ||
       (lVar7 = *(long *)(param_1 + 0x150) + lVar7 * 0x80, iVar1 = *(int *)(lVar7 + 0x4c),
       iVar1 != 0x7fffffff && iVar1 != 0)) goto LAB_03036834;
    FUN_0304b0d8(lVar4,param_2,0);
    uVar2 = *(undefined4 *)(lVar7 + 0x48);
    uVar5 = 0;
  }
  FUN_03030748(param_1,uVar2,uVar5);
LAB_03036834:
  FUN_0304b0d8(*(undefined8 *)(param_1 + 0x698),param_2,param_3);
  return;
}


