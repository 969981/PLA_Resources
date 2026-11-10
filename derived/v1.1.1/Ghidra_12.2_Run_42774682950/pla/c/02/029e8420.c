/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e8420; name: FUN_029e8420
 */


void FUN_029e8420(long param_1,undefined1 *param_2,byte *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 auStack_48 [8];
  
  *param_2 = 0;
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 8) + 0x120;
  lVar6 = *(long *)(lVar7 + (ulong)param_3[1] * 8);
  lVar7 = *(long *)(lVar7 + (ulong)*param_3 * 8);
  uVar1 = *(undefined2 *)(lVar7 + 0x76);
  uVar2 = *(undefined2 *)(lVar6 + 0x76);
  uVar3 = FUN_02993ce4(*(undefined8 *)(param_1 + 0x38),lVar6,uVar1);
  if ((uVar3 & 1) != 0) {
    FUN_029940ac(*(undefined8 *)(param_1 + 0x38),lVar6);
    return;
  }
  if (((param_3[3] != 0) && (lVar7 != 0)) && (*(char *)(lVar7 + 0x7d) != '\x1f')) {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x99,*(char *)(lVar7 + 0x7d),0);
  }
  FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_3 + 4);
  FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_3 + 0x28);
  FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_3 + 0x4c);
  if (((param_3[3] != 0) && (lVar7 != 0)) && (*(char *)(lVar7 + 0x7d) != '\x1f')) {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9a);
  }
  local_56 = 0;
  local_60 = lVar7;
  local_58 = uVar2;
  FUN_029d2bd8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1e0),auStack_48,&local_60);
  local_56 = 0;
  local_60 = lVar6;
  local_58 = uVar1;
  FUN_029d2bd8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1e0),auStack_48,&local_60);
  lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 800);
  lVar5 = *(long *)(*(long *)(lVar4 + 0x10) + 8);
  lVar7 = *(long *)(lVar5 + (ulong)*(byte *)(lVar7 + 0x7d) * 8 + 0x120);
  if (*(short *)(lVar7 + 0x76) != 0) {
    FUN_029825a0(*(undefined8 *)(lVar4 + 0x38),lVar7,7);
    lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 800);
    lVar5 = *(long *)(*(long *)(lVar4 + 0x10) + 8);
  }
  lVar7 = *(long *)(lVar5 + (ulong)*(byte *)(lVar6 + 0x7d) * 8 + 0x120);
  if (*(short *)(lVar7 + 0x76) != 0) {
    FUN_029825a0(*(undefined8 *)(lVar4 + 0x38),lVar7,7);
  }
  *param_2 = 1;
  return;
}


