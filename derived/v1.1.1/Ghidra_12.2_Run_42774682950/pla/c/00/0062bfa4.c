/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0062bfa4; name: FUN_0062bfa4
 */


void FUN_0062bfa4(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar9 = *(undefined8 **)(param_1 + 8);
  param_4 = (long)puVar9 - param_4;
  puVar1 = (undefined8 *)(param_2 + param_4);
  if (puVar1 < param_3) {
    puVar6 = puVar1;
    puVar8 = puVar9;
    do {
      uVar12 = *puVar6;
      uVar14 = puVar6[3];
      uVar13 = puVar6[2];
      puVar8[1] = puVar6[1];
      *puVar8 = uVar12;
      puVar8[3] = uVar14;
      puVar8[2] = uVar13;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar7 = puVar6 + 5;
      *puVar6 = 0;
      puVar8[4] = puVar6[4];
      puVar8 = (undefined8 *)(*(long *)(param_1 + 8) + 0x28);
      *(undefined8 **)(param_1 + 8) = puVar8;
      puVar6 = puVar7;
    } while (puVar7 < param_3);
  }
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar2 = (long)puVar9 + lVar10;
      lVar3 = (long)puVar1 + lVar10;
      if ((*(long **)(lVar2 + -0x10) == *(long **)(lVar3 + -0x10)) ||
         (uVar5 = (**(code **)(**(long **)(lVar2 + -0x10) + 0x20))(), (uVar5 & 1) != 0)) {
        pbVar11 = (byte *)(lVar2 + -0x28);
        if ((*pbVar11 & 1) == 0) {
          *(undefined1 *)(lVar2 + -0x27) = 0;
          *pbVar11 = 0;
        }
        else {
          **(undefined1 **)(lVar2 + -0x18) = 0;
          *(undefined8 *)(lVar2 + -0x20) = 0;
          if ((*pbVar11 & 1) != 0) {
            (**(code **)(**(long **)(lVar2 + -0x10) + 0x18))
                      (*(long **)(lVar2 + -0x10),*(undefined8 *)(lVar2 + -0x18),
                       *(ulong *)(lVar2 + -0x28) & 0xfffffffffffffffe,1);
            *(undefined8 *)(lVar2 + -0x28) = 0;
          }
        }
        uVar13 = *(undefined8 *)(lVar3 + -0x20);
        uVar12 = *(undefined8 *)(lVar3 + -0x28);
        *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(lVar3 + -0x18);
        *(undefined8 *)(lVar2 + -0x20) = uVar13;
        *(undefined8 *)pbVar11 = uVar12;
        *(undefined8 *)(lVar3 + -0x20) = 0;
        *(undefined8 *)(lVar3 + -0x18) = 0;
        *(undefined8 *)(lVar3 + -0x28) = 0;
      }
      else if (lVar3 != lVar2) {
        uVar5 = (ulong)(*(byte *)(lVar3 + -0x28) >> 1);
        lVar4 = lVar3 + -0x27;
        if ((*(byte *)(lVar3 + -0x28) & 1) != 0) {
          uVar5 = *(ulong *)(lVar3 + -0x20);
          lVar4 = *(long *)(lVar3 + -0x18);
        }
        FUN_02762710(lVar2 + -0x28,lVar4,uVar5);
      }
      lVar10 = lVar10 + -0x28;
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(lVar3 + -8);
    } while ((param_4 >> 3) * -8 != lVar10);
  }
  return;
}


