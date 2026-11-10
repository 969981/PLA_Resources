/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314fae0; name: FUN_0314fae0
 */


/* WARNING: Removing unreachable block (ram,0x0314fc10) */
/* WARNING: Removing unreachable block (ram,0x0314fca8) */

void FUN_0314fae0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  undefined8 uVar11;
  
  puVar6 = PTR_PTR_0434a080;
  uVar4 = *(uint *)(param_2 + 0xf8);
  uVar9 = (ulong)uVar4;
  puVar10 = (uint *)((long)param_4 + 0x9c);
  uVar7 = *puVar10;
  if ((int)(uVar7 & 0x3fffffff) < (int)uVar4) {
    uVar11 = param_4[0x12];
    uVar5 = *(undefined4 *)(param_4 + 0x13);
    if (0x3fffffff < (int)uVar4) {
      FUN_032bd0a8(uVar9);
      uVar7 = *puVar10;
    }
    uVar7 = (uVar7 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uVar3 = uVar4;
    if ((int)uVar4 <= (int)uVar7) {
      uVar3 = uVar7;
    }
    uVar11 = FUN_032bd1d4(puVar6,uVar3,1,uVar11,uVar5,puVar10);
    param_4[0x12] = uVar11;
  }
  if (*(uint *)(param_4 + 0x13) != uVar4) {
    *(uint *)(param_4 + 0x13) = uVar4;
  }
  puVar10 = (uint *)((long)param_4 + 0xc);
  uVar7 = *puVar10;
  if ((int)(uVar7 & 0x3fffffff) < (int)uVar4) {
    uVar11 = *param_4;
    uVar5 = *(undefined4 *)(param_4 + 1);
    if (0x3fffffff < (int)uVar4) {
      FUN_032bd0a8(uVar9);
      uVar7 = *puVar10;
    }
    uVar7 = (uVar7 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uVar3 = uVar4;
    if ((int)uVar4 <= (int)uVar7) {
      uVar3 = uVar7;
    }
    uVar11 = FUN_032bd1d4(puVar6,uVar3,4,uVar11,uVar5,puVar10);
    *param_4 = uVar11;
  }
  if (*(uint *)(param_4 + 1) != uVar4) {
    *(uint *)(param_4 + 1) = uVar4;
  }
  if (0 < (int)uVar4) {
    if (uVar4 == 1) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      do {
        *(undefined1 *)(param_4[0x12] + lVar8) = *(undefined1 *)(*(long *)(param_2 + 0xf0) + lVar8);
        lVar1 = *(long *)(param_2 + 0xf0) + lVar8;
        lVar2 = param_4[0x12] + lVar8;
        lVar8 = lVar8 + 2;
        *(undefined1 *)(lVar2 + 1) = *(undefined1 *)(lVar1 + 1);
      } while (uVar9 - (uVar9 & 1) != lVar8);
      if ((uVar4 & 1) == 0) goto LAB_0314fc64;
    }
    *(undefined1 *)(param_4[0x12] + lVar8) = *(undefined1 *)(*(long *)(param_2 + 0xf0) + lVar8);
  }
LAB_0314fc64:
  *(undefined4 *)(param_4 + 0x18) = *(undefined4 *)(param_2 + 0x100);
  (**(code **)(**(long **)(param_2 + 0x60) + 0x20))
            (param_1,*(long **)(param_2 + 0x60),param_2,param_3,param_4);
  if (0 < (int)uVar4) {
    if (uVar4 == 1) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      do {
        *(undefined1 *)(*(long *)(param_2 + 0xf0) + lVar8) = *(undefined1 *)(param_4[0x12] + lVar8);
        lVar1 = param_4[0x12] + lVar8;
        lVar2 = *(long *)(param_2 + 0xf0) + lVar8;
        lVar8 = lVar8 + 2;
        *(undefined1 *)(lVar2 + 1) = *(undefined1 *)(lVar1 + 1);
      } while (uVar9 - (uVar9 & 1) != lVar8);
      if ((uVar4 & 1) == 0) goto LAB_0314fcfc;
    }
    *(undefined1 *)(*(long *)(param_2 + 0xf0) + lVar8) = *(undefined1 *)(param_4[0x12] + lVar8);
  }
LAB_0314fcfc:
  *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(param_4 + 0x18);
  return;
}


