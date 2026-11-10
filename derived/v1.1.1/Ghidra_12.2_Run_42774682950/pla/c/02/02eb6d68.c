/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb6d68; name: FUN_02eb6d68
 */


undefined4 FUN_02eb6d68(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  bool bVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x28) + 8) = 0;
  }
  uVar6 = *(uint *)(param_1 + 0x18);
  if (3 < uVar6 || uVar6 == 1) {
    if (*(long *)(param_1 + 0x28) == 0) {
      puVar4 = (undefined8 *)FUN_02f59e30(2,0x10);
      if (puVar4 == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x28) = 0;
        return 0x34;
      }
      *puVar4 = 0;
      puVar4[1] = 0;
      uVar6 = *(uint *)(param_1 + 0x18);
      *(undefined8 **)(param_1 + 0x28) = puVar4;
    }
    if ((uVar6 & 0xfffffffd) != 0) {
      lVar9 = 0;
      uVar10 = 0;
      bVar7 = false;
      uVar8 = 0xff7fffff;
      do {
        lVar1 = *(long *)(param_1 + 0x10) + lVar9;
        if (bVar7) {
          if (*(float *)(lVar1 + 0x10) <= 0.0) {
            uVar3 = *(undefined4 *)(lVar1 + 0xc);
            puVar5 = (undefined4 *)FUN_02eb79f8(*(undefined8 *)(param_1 + 0x28));
            if (puVar5 == (undefined4 *)0x0) {
              return 0x34;
            }
            *puVar5 = uVar8;
            puVar5[1] = uVar3;
            uVar6 = *(uint *)(param_1 + 0x18);
            bVar7 = false;
          }
          else {
LAB_02eb6e0c:
            bVar7 = true;
          }
        }
        else {
          if ((0.0 < *(float *)(lVar1 + 0x10)) || (*(int *)(lVar1 + 0x14) != 9)) {
            uVar8 = *(undefined4 *)(lVar1 + 0xc);
            goto LAB_02eb6e0c;
          }
          bVar7 = false;
        }
        uVar10 = uVar10 + 1;
        uVar2 = 0;
        if (uVar6 != 0) {
          uVar2 = uVar6 - 2;
        }
        lVar9 = lVar9 + 0xc;
      } while (uVar10 < uVar2);
      if (bVar7) {
        uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)(uVar6 - 2) * 0xc);
        puVar5 = (undefined4 *)FUN_02eb79f8(*(undefined8 *)(param_1 + 0x28));
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = uVar8;
          puVar5[1] = uVar3;
        }
        uVar8 = 0x34;
        if (puVar5 != (undefined4 *)0x0) {
          uVar8 = 1;
        }
        return uVar8;
      }
    }
  }
  return 1;
}


