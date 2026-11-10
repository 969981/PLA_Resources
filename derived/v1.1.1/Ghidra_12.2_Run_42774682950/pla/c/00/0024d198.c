/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024d198; name: FUN_0024d198
 */


void FUN_0024d198(long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  
  FUN_0024d08c();
  if ((*(ushort *)(param_2 + 0x110) != 0) &&
     (uVar1 = *(ushort *)(param_2 + 0x110) - 1, (uVar1 & 0xffff) != 0)) {
    if (*(long *)(param_2 + 0x148) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(long *)(param_2 + 0x148) + 0x98);
    }
    (**(code **)(*param_1 + 0x110))(param_1,param_3,uVar1,uVar4);
    if (*(char *)((long)param_1 + 0x117) == '\0') {
      uVar3 = *(undefined8 *)(param_2 + 0xd8);
      pcVar5 = *(code **)(*param_1 + 0x130);
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0xd8);
      pcVar5 = *(code **)(*param_1 + 0x138);
    }
    (*pcVar5)(param_1,uVar3,0,*(undefined2 *)(param_2 + 0x112));
  }
  uVar3 = *(undefined8 *)(param_2 + 0x140);
  lVar2 = FUN_00232654(0x50);
  if (lVar2 != 0) {
    FUN_0023d11c(lVar2,uVar3,param_3);
  }
  param_1[0x28] = lVar2;
  return;
}


