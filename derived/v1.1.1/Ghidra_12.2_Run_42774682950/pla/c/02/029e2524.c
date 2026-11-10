/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e2524; name: FUN_029e2524
 */


void FUN_029e2524(long param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 auStack_38 [8];
  
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)*param_3 * 8 + 0x120);
  uVar2 = *(undefined2 *)(lVar7 + 0x76);
  if (param_3[1] == 0) {
    lVar8 = *(long *)(param_1 + 0x20);
    uVar3 = FUN_02c50624(uVar2);
    FUN_02a3e6b8(*(undefined8 *)(lVar8 + 0x18),0x7e,*(undefined1 *)(lVar7 + 0x7d),uVar3 & 1);
  }
  if ((param_3[6] & 0x7f) != 0) {
    FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_3 + 4);
  }
  local_48 = 0;
  local_46 = 1;
  local_50 = lVar7;
  FUN_029d2bd8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1e0),auStack_38,&local_50);
  if (**(uint **)(*(long *)(param_1 + 8) + 0x58) < 2) {
    FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,1000,uVar2,0xffff0000);
  }
  bVar1 = param_3[2];
  lVar8 = *(long *)(*(long *)(param_1 + 0x60) + 0x60);
  if ((bVar1 == 0) && (uVar4 = FUN_02c50624(uVar2), (uVar4 & 1) != 0)) {
    lVar5 = *(long *)(lVar8 + 0x20);
    lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x10) + 8) +
                      (ulong)*(byte *)(lVar7 + 0x7d) * 8 + 0x120);
    *(byte *)(lVar6 + 0x38b) = *(byte *)(lVar6 + 0x38b) | 1;
    FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0x22,*(undefined1 *)(lVar7 + 0x7d),0);
  }
  FUN_02984330(*(undefined8 *)(lVar8 + 0x38),lVar7,uVar2,bVar1 != 1);
  return;
}


