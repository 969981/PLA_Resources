/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061be64; name: FUN_0061be64
 */


void FUN_0061be64(long param_1,ulong param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
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
    uVar5 = (long)param_3 + ~param_2 + (param_4 >> 5) * -0x20;
    puVar7 = puVar9;
    puVar6 = puVar1;
    if (((uint)uVar5 >> 5 & 1) == 0) {
      uVar12 = *puVar1;
      uVar14 = puVar1[3];
      uVar13 = puVar1[2];
      puVar9[1] = puVar1[1];
      *puVar9 = uVar12;
      puVar9[3] = uVar14;
      puVar9[2] = uVar13;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar7 = (undefined8 *)(*(long *)(param_1 + 8) + 0x20);
      *(undefined8 **)(param_1 + 8) = puVar7;
      puVar6 = puVar1 + 4;
    }
    if (0x1f < uVar5) {
      do {
        uVar12 = *puVar6;
        uVar14 = puVar6[3];
        uVar13 = puVar6[2];
        puVar7[1] = puVar6[1];
        *puVar7 = uVar12;
        puVar7[3] = uVar14;
        puVar7[2] = uVar13;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        lVar8 = *(long *)(param_1 + 8);
        *(long *)(param_1 + 8) = lVar8 + 0x20;
        uVar12 = puVar6[4];
        uVar14 = puVar6[7];
        uVar13 = puVar6[6];
        *(undefined8 *)(lVar8 + 0x28) = puVar6[5];
        *(undefined8 *)(lVar8 + 0x20) = uVar12;
        *(undefined8 *)(lVar8 + 0x38) = uVar14;
        *(undefined8 *)(lVar8 + 0x30) = uVar13;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6 = puVar6 + 8;
        puVar7 = (undefined8 *)(*(long *)(param_1 + 8) + 0x20);
        *(undefined8 **)(param_1 + 8) = puVar7;
      } while (puVar6 < param_3);
    }
  }
  if (param_4 != 0) {
    lVar8 = (param_4 >> 5) * 0x20;
    lVar10 = 0;
    do {
      while( true ) {
        lVar2 = (long)puVar9 + lVar10;
        lVar3 = (long)puVar1 + lVar10;
        if ((*(long **)(lVar2 + -8) != *(long **)(lVar3 + -8)) &&
           (uVar5 = (**(code **)(**(long **)(lVar2 + -8) + 0x20))(), (uVar5 & 1) == 0)) break;
        pbVar11 = (byte *)(lVar2 + -0x20);
        if ((*pbVar11 & 1) == 0) {
          *(undefined1 *)(lVar2 + -0x1f) = 0;
          *pbVar11 = 0;
        }
        else {
          **(undefined1 **)(lVar2 + -0x10) = 0;
          *(undefined8 *)(lVar2 + -0x18) = 0;
          if ((*pbVar11 & 1) != 0) {
            (**(code **)(**(long **)(lVar2 + -8) + 0x18))
                      (*(long **)(lVar2 + -8),*(undefined8 *)(lVar2 + -0x10),
                       *(ulong *)(lVar2 + -0x20) & 0xfffffffffffffffe,1);
            *(undefined8 *)(lVar2 + -0x20) = 0;
          }
        }
        uVar13 = *(undefined8 *)(lVar3 + -0x18);
        uVar12 = *(undefined8 *)(lVar3 + -0x20);
        *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar3 + -0x10);
        *(undefined8 *)(lVar2 + -0x18) = uVar13;
        *(undefined8 *)pbVar11 = uVar12;
        *(undefined8 *)(lVar3 + -0x18) = 0;
        *(undefined8 *)(lVar3 + -0x10) = 0;
        *(undefined8 *)(lVar3 + -0x20) = 0;
LAB_0061bf4c:
        lVar10 = lVar10 + -0x20;
        if (-lVar10 == lVar8) {
          return;
        }
      }
      if (lVar3 == lVar2) goto LAB_0061bf4c;
      uVar5 = (ulong)(*(byte *)(lVar3 + -0x20) >> 1);
      lVar4 = lVar3 + -0x1f;
      if ((*(byte *)(lVar3 + -0x20) & 1) != 0) {
        uVar5 = *(ulong *)(lVar3 + -0x18);
        lVar4 = *(long *)(lVar3 + -0x10);
      }
      FUN_02762710(lVar2 + -0x20,lVar4,uVar5);
      lVar10 = lVar10 + -0x20;
    } while (-lVar10 != lVar8);
  }
  return;
}


