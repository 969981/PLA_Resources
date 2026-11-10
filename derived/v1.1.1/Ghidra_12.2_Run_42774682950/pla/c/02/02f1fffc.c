/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1fffc; name: FUN_02f1fffc
 */


void FUN_02f1fffc(long *param_1,undefined8 param_2,ushort param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 *param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  
  if (param_3 == 0) {
    *(undefined2 *)((long)param_6 + 0x12) = 0;
    uVar3 = 0x2e;
    goto LAB_02f20088;
  }
  *param_6 = param_2;
  *(ushort *)(param_6 + 2) = param_3;
  *(ushort *)((long)param_6 + 0x12) = param_3;
  *(undefined4 *)(param_6 + 1) = param_5;
  lVar5 = param_1[3];
  if ((((lVar5 != 0) && (lVar8 = *(long *)(lVar5 + 0x238), lVar8 != 0)) &&
      (lVar9 = param_1[9], lVar9 != 0)) &&
     (((*(byte *)(lVar5 + 8) >> 2 & 1) != 0 && (*(uint *)(param_1 + 8) != 0)))) {
    uVar6 = 0;
    uVar10 = 0;
    iVar12 = 0;
    puVar11 = (uint *)(lVar9 + 4);
    do {
      uVar1 = (uint)uVar6;
      if (iVar12 != 0) {
        uVar1 = uVar10;
      }
      uVar6 = uVar6 + 1;
      if (*(uint *)(param_1 + 5) <= *puVar11 && *puVar11 < *(uint *)(param_1 + 5) + (uint)param_3) {
        iVar12 = iVar12 + 1;
        uVar10 = uVar1;
      }
      puVar11 = puVar11 + 4;
    } while (*(uint *)(param_1 + 8) != uVar6);
    if (iVar12 != 0) {
      uVar3 = *(undefined4 *)(lVar8 + 0x150);
      iVar2 = FUN_02eb7bec(lVar8 + 0x148,lVar9 + (ulong)uVar10 * 0x10,iVar12);
      if (iVar2 == 1) {
        *(undefined4 *)((long)param_6 + 0x14) = uVar3;
        *(int *)(param_6 + 3) = iVar12;
      }
    }
  }
  *(undefined4 *)(param_6 + 5) = param_4;
  *(int *)((long)param_6 + 0x1c) = (int)param_1[5];
  *(undefined4 *)((long)param_6 + 0x24) = *(undefined4 *)((long)param_1 + 0x24);
  uVar10 = (int)param_1[5] + (uint)param_3;
  *(uint *)(param_1 + 5) = uVar10;
  if (*(short *)((long)param_1 + 0x54) == 1) {
    if (*(uint *)((long)param_1 + 0x24) <= uVar10) {
      uVar4 = 1;
      pcVar7 = *(code **)(*param_1 + 0x120);
LAB_02f20168:
      uVar3 = (*pcVar7)(param_1,uVar4);
      goto LAB_02f20088;
    }
  }
  else if (*(uint *)(param_1 + 7) < uVar10) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)((long)param_1 + 0x34);
    pcVar7 = *(code **)(*param_1 + 0x120);
    uVar4 = 0;
    goto LAB_02f20168;
  }
  uVar3 = 0x2d;
LAB_02f20088:
  *(undefined4 *)((long)param_6 + 0x2c) = uVar3;
  return;
}


