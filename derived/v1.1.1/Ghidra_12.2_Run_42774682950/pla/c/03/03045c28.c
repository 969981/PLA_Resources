/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03045c28; name: FUN_03045c28
 */


undefined2 * FUN_03045c28(long param_1,short param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  long lVar9;
  ulong uVar10;
  
  uVar6 = *(uint *)(param_1 + 0x58);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + 0x40);
  if (uVar6 < uVar1) {
    uVar7 = *(uint *)(param_1 + 0x5c);
    if ((int)(uVar7 & 0x3fffffff) < (int)uVar1) {
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      if (0x3fffffff < (int)uVar1) {
        FUN_032bd0a8(uVar1);
        uVar7 = *(uint *)(param_1 + 0x5c);
      }
      uVar7 = (uVar7 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar7) {
        uVar7 = 0x3fffffff;
      }
      uVar4 = uVar1;
      if ((int)uVar1 <= (int)uVar7) {
        uVar4 = uVar7;
      }
      uVar5 = FUN_032bd1d4(PTR_PTR_0434a080,uVar4,2,uVar5,uVar6);
      uVar6 = *(uint *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x50) = uVar5;
    }
    if ((int)uVar6 < (int)uVar1) {
      *(uint *)(param_1 + 0x58) = uVar1;
      memset((void *)(*(long *)(param_1 + 0x50) + (long)(int)uVar6 * 2),0xff,
             (ulong)(uVar1 + ~uVar6) * 2 + 2);
    }
    else if ((int)uVar1 < (int)uVar6) {
      *(uint *)(param_1 + 0x58) = uVar1;
    }
  }
  param_3 = param_3 & 0xffffff;
  uVar2 = *(ushort *)(*(long *)(param_1 + 0x50) + (ulong)param_3 * 2);
  if (uVar2 != 0xffff) {
    lVar9 = *(long *)(param_1 + 0x40);
    do {
      uVar10 = (ulong)uVar2;
      if (*(short *)(lVar9 + uVar10 * 0x10 + 2) == param_2) {
        puVar8 = (undefined2 *)(lVar9 + uVar10 * 0x10);
        goto LAB_03045ce8;
      }
      uVar2 = *(ushort *)(lVar9 + uVar10 * 0x10);
    } while (uVar2 != 0xffff);
  }
  uVar10 = (ulong)*(ushort *)(param_1 + 0x38);
  if (uVar10 == 0xffff) {
    iVar3 = *(int *)(param_1 + 0x48);
    uVar10 = (ulong)iVar3;
    lVar9 = *(long *)(param_1 + 0x40);
    if ((int)(*(uint *)(param_1 + 0x4c) & 0x3fffffff) <= iVar3) {
      lVar9 = FUN_0304662c(PTR_PTR_0434a080,iVar3 + 1,lVar9,iVar3);
      *(long *)(param_1 + 0x40) = lVar9;
    }
    puVar8 = (undefined2 *)(lVar9 + uVar10 * 0x10);
    *(undefined8 *)(puVar8 + 4) = 0;
    *(int *)(param_1 + 0x48) = iVar3 + 1;
  }
  else {
    puVar8 = (undefined2 *)(*(long *)(param_1 + 0x40) + uVar10 * 0x10);
    *(undefined2 *)(param_1 + 0x38) = *puVar8;
  }
  if (param_3 == 0xffffff) {
    *puVar8 = *(undefined2 *)(param_1 + 0x60);
    *(short *)(param_1 + 0x60) = (short)uVar10;
  }
  else {
    lVar9 = (ulong)param_3 * 2;
    *puVar8 = *(undefined2 *)(*(long *)(param_1 + 0x50) + lVar9);
    *(short *)(*(long *)(param_1 + 0x50) + lVar9) = (short)uVar10;
  }
  puVar8[1] = param_2;
LAB_03045ce8:
  return puVar8 + 4;
}


