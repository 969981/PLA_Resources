/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00163a50; name: FUN_00163a50
 */


void FUN_00163a50(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar1 = *(long **)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x38);
  lVar4 = *plVar1;
  FUN_001671d0(plVar1,0,0);
  FUN_00165020(plVar1);
  uVar3 = FUN_00161510(lVar2,*(undefined8 *)(lVar4 + 0x38),(long)*(int *)(lVar4 + 0x18) << 2,
                       (long)(int)plVar1[4] << 2);
  *(undefined8 *)(lVar4 + 0x38) = uVar3;
  *(int *)(lVar4 + 0x18) = (int)plVar1[4];
  uVar3 = FUN_00161510(lVar2,*(undefined8 *)(lVar4 + 0x48),(long)*(int *)(lVar4 + 0x1c) << 2,
                       (long)(int)plVar1[4] << 2);
  *(undefined8 *)(lVar4 + 0x48) = uVar3;
  *(int *)(lVar4 + 0x1c) = (int)plVar1[4];
  uVar3 = FUN_00161510(lVar2,*(undefined8 *)(lVar4 + 0x30),(long)*(int *)(lVar4 + 0x14) << 4,
                       (long)*(int *)((long)plVar1 + 0x2c) << 4);
  *(undefined8 *)(lVar4 + 0x30) = uVar3;
  *(undefined4 *)(lVar4 + 0x14) = *(undefined4 *)((long)plVar1 + 0x2c);
  uVar3 = FUN_00161510(lVar2,*(undefined8 *)(lVar4 + 0x40),(long)*(int *)(lVar4 + 0x20) << 3,
                       (long)(int)plVar1[6] << 3);
  *(undefined8 *)(lVar4 + 0x40) = uVar3;
  *(int *)(lVar4 + 0x20) = (int)plVar1[6];
  uVar3 = FUN_00161510(lVar2,*(undefined8 *)(lVar4 + 0x50),(long)*(int *)(lVar4 + 0x24) << 4,
                       (long)(short)plVar1[7] << 4);
  *(undefined8 *)(lVar4 + 0x50) = uVar3;
  *(int *)(lVar4 + 0x24) = (int)(short)plVar1[7];
  uVar3 = FUN_00161510(lVar2,*(undefined8 *)(lVar4 + 0x58),(long)*(int *)(lVar4 + 0x10) << 4,
                       (ulong)*(byte *)((long)plVar1 + 0x3b) << 4);
  *(undefined8 *)(lVar4 + 0x58) = uVar3;
  *(uint *)(lVar4 + 0x10) = (uint)*(byte *)((long)plVar1 + 0x3b);
  *(long *)(param_1 + 0x30) = plVar1[1];
  if (*(long *)(*(long *)(lVar2 + 0x18) + 0x18) < 1) {
    return;
  }
  FUN_0015dc70(lVar2);
  return;
}


