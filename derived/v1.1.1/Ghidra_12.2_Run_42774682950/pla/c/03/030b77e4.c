/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030b77e4; name: FUN_030b77e4
 */


void FUN_030b77e4(ushort *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar11 = (uint)(byte)uVar4;
  if ((uVar3 & 0x2800) != 0) {
    uVar11 = 4;
  }
  *(uint *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + uVar11 * 4 + 4;
  if ((uVar3 >> 0xb & 1) == 0) {
    uVar6 = (ulong)*(byte *)((long)param_1 + 5);
    if ((uVar3 >> 0xd & 1) == 0) {
      iVar8 = (uint)(byte)uVar4 * 0x20 + 0x40;
    }
    else {
      iVar8 = 0xc0;
    }
    iVar10 = 0;
    if ((uVar3 & 0x30) != 0) {
      iVar10 = 0x90;
    }
    if ((uVar3 & 0x2000) != 0) {
      uVar6 = 0xff;
    }
    uVar12 = iVar8 + iVar10 + (uint)(byte)(&DAT_03aa3064)[uVar6];
  }
  else {
    uVar12 = (uint)*(byte *)((long)param_1 + 3) << 4;
  }
  if ((int)(*(int *)(param_3 + 0x18) + uVar12) < 0xee1) {
    puVar5 = (undefined8 *)(*(long *)(param_3 + 0x10) + (long)*(int *)(param_3 + 0x18) + 0x20);
  }
  else {
    puVar5 = (undefined8 *)FUN_032bf82c(param_3);
  }
  puVar7 = puVar5;
  uVar9 = uVar12 >> 4;
  do {
    uVar9 = uVar9 - 1;
    uVar1 = *(undefined4 *)(param_1 + 4);
    uVar2 = *(undefined4 *)(param_1 + 6);
    *puVar7 = *(undefined8 *)param_1;
    *(undefined4 *)(puVar7 + 1) = uVar1;
    *(undefined4 *)((long)puVar7 + 0xc) = uVar2;
    param_1 = param_1 + 8;
    puVar7 = puVar7 + 2;
  } while (0 < (int)uVar9);
  *(char *)((long)puVar5 + 3) = (char)(uVar12 >> 4);
  puVar5[4] = param_2;
  *(byte *)((long)puVar5 + 6) = *(byte *)((long)puVar5 + 6) & 0xf8 | (byte)uVar11 & 7;
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_3 + 0x10);
  }
  *(uint *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + uVar12;
  *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
  return;
}


