/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e7320; name: FUN_029e7320
 */


void FUN_029e7320(long param_1,undefined1 *param_2,byte *param_3)

{
  undefined2 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long local_50;
  undefined2 local_48;
  byte local_46;
  undefined1 auStack_38 [8];
  
  *param_2 = 0;
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)param_3[1] * 8 + 0x120);
  if ((*param_3 != param_3[1]) &&
     (uVar2 = FUN_02993ce4(*(undefined8 *)(param_1 + 0x38),lVar4,*(undefined2 *)(param_3 + 2)),
     (uVar2 & 1) != 0)) {
    FUN_029940ac(*(undefined8 *)(param_1 + 0x38),lVar4);
    return;
  }
  if ((param_3[8] != 0) && (*param_3 != 0x1f)) {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x99,*param_3,0);
  }
  uVar1 = *(undefined2 *)(lVar4 + 0x76);
  FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_3 + 0xc);
  if (param_3[4] != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined2 *)
     (*(long *)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0x10) + 8) + (ulong)param_3[1] * 8 +
               0x120) + 0x78) = 0;
    FUN_02a3e6b8(*(undefined8 *)(lVar3 + 0x18),0x3d);
  }
  local_48 = *(undefined2 *)(param_3 + 2);
  local_46 = param_3[9];
  local_50 = lVar4;
  FUN_029d2bd8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1e0),auStack_38,&local_50);
  if ((*(short *)(param_3 + 2) == 0) && (param_3[7] != 0)) {
    FUN_02984330(*(undefined8 *)(param_1 + 0x38),lVar4,uVar1,1);
  }
  if ((param_3[8] != 0) && (*param_3 != 0x1f)) {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9a);
  }
  if (param_3[5] != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined2 *)
     (*(long *)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0x10) + 8) + (ulong)param_3[6] * 8 +
               0x120) + 0x78) = 0;
    FUN_02a3e6b8(*(undefined8 *)(lVar3 + 0x18),0x3d);
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 800);
  lVar4 = *(long *)(*(long *)(*(long *)(lVar3 + 0x10) + 8) + (ulong)*(byte *)(lVar4 + 0x7d) * 8 +
                   0x120);
  if (*(short *)(lVar4 + 0x76) != 0) {
    FUN_029825a0(*(undefined8 *)(lVar3 + 0x38),lVar4,0xf);
  }
  *param_2 = 1;
  return;
}


