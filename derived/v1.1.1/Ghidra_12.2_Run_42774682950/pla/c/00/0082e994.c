/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082e994; name: FUN_0082e994
 */


void FUN_0082e994(ushort *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar1 = *param_1;
  uVar10 = (ulong)uVar1;
  uVar2 = FUN_007e336c();
  lVar3 = FUN_0081a750(uVar10 << 3,uVar2);
  if ((lVar3 != 0) && (uVar1 != 0)) {
    uVar4 = uVar10 & 3;
    if (uVar10 - 1 < 3) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      puVar8 = (undefined8 *)(lVar3 + 0x10);
      do {
        lVar6 = lVar6 + 4;
        puVar8[-2] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8 = puVar8 + 4;
      } while (uVar10 - uVar4 != lVar6);
    }
    if ((uVar1 & 3) != 0) {
      puVar8 = (undefined8 *)(lVar3 + lVar6 * 8);
      do {
        uVar4 = uVar4 - 1;
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      } while (uVar4 != 0);
    }
  }
  uVar10 = (ulong)*param_1;
  *(long *)(param_1 + 0xc) = lVar3;
  uVar2 = FUN_007e336c();
  if (uVar10 == 0) {
    uVar10 = 0;
    uVar4 = 0;
  }
  else {
    uVar11 = 0;
    lVar3 = FUN_0081a750(uVar10 << 2,uVar2);
    uVar4 = uVar10;
    while( true ) {
      if ((lVar3 != 0) && ((int)uVar10 != 0)) {
        uVar10 = uVar4 & 7;
        if (uVar4 - 1 < 7) {
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          puVar8 = (undefined8 *)(lVar3 + 0x10);
          do {
            lVar6 = lVar6 + 8;
            puVar8[-2] = 0;
            puVar8[-1] = 0;
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8 = puVar8 + 4;
          } while (uVar4 - uVar10 != lVar6);
        }
        if (uVar10 != 0) {
          puVar7 = (undefined4 *)(lVar3 + lVar6 * 4);
          do {
            uVar10 = uVar10 - 1;
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          } while (uVar10 != 0);
        }
      }
      *(long *)(*(long *)(param_1 + 0xc) + uVar11 * 8) = lVar3;
      uVar1 = *param_1;
      uVar10 = (ulong)uVar1;
      if (uVar10 == 0) {
        uVar4 = 0;
      }
      else {
        lVar3 = *(long *)(*(long *)(param_1 + 0xc) + uVar11 * 8);
        uVar5 = uVar10 & 7;
        if (uVar10 - 1 < 7) {
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          puVar8 = (undefined8 *)(lVar3 + 0x10);
          do {
            lVar6 = lVar6 + 8;
            puVar8[-2] = 0;
            puVar8[-1] = 0;
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8 = puVar8 + 4;
          } while (uVar10 - uVar5 != lVar6);
        }
        uVar4 = uVar10;
        if ((uVar1 & 7) != 0) {
          puVar7 = (undefined4 *)(lVar3 + lVar6 * 4);
          do {
            uVar5 = uVar5 - 1;
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          } while (uVar5 != 0);
        }
      }
      uVar11 = uVar11 + 1;
      uVar2 = FUN_007e336c();
      if (uVar4 <= uVar11) break;
      lVar3 = FUN_0081a750(uVar4 << 2,uVar2);
    }
  }
  lVar3 = FUN_0081a750(uVar4 << 3,uVar2);
  if ((lVar3 != 0) && ((int)uVar10 != 0)) {
    uVar10 = uVar4 & 3;
    if (uVar4 - 1 < 3) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      puVar8 = (undefined8 *)(lVar3 + 0x10);
      do {
        lVar6 = lVar6 + 4;
        puVar8[-2] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8 = puVar8 + 4;
      } while (uVar4 - uVar10 != lVar6);
    }
    if (uVar10 != 0) {
      puVar8 = (undefined8 *)(lVar3 + lVar6 * 8);
      do {
        uVar10 = uVar10 - 1;
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      } while (uVar10 != 0);
    }
  }
  uVar10 = (ulong)*param_1;
  *(long *)(param_1 + 0x10) = lVar3;
  if (*param_1 != 0) {
    uVar4 = 0;
    do {
      while( true ) {
        uVar2 = FUN_007e336c();
        lVar3 = FUN_0081a750(uVar10,uVar2);
        if (((int)uVar10 != 0) && (lVar3 != 0)) {
          uVar11 = uVar10 & 7;
          if (uVar10 - 1 < 7) {
            lVar6 = 0;
          }
          else {
            lVar6 = 0;
            do {
              puVar8 = (undefined8 *)(lVar3 + lVar6);
              lVar6 = lVar6 + 8;
              *puVar8 = 0;
            } while (uVar10 - uVar11 != lVar6);
          }
          if (uVar11 != 0) {
            puVar9 = (undefined1 *)(lVar3 + lVar6);
            do {
              uVar11 = uVar11 - 1;
              *puVar9 = 0;
              puVar9 = puVar9 + 1;
            } while (uVar11 != 0);
          }
        }
        *(long *)(*(long *)(param_1 + 0x10) + uVar4 * 8) = lVar3;
        uVar1 = *param_1;
        uVar10 = (ulong)uVar1;
        if (uVar10 != 0) break;
        uVar5 = 0;
LAB_0082ebac:
        uVar4 = uVar4 + 1;
        if (uVar5 <= uVar4) {
          return;
        }
      }
      lVar3 = *(long *)(*(long *)(param_1 + 0x10) + uVar4 * 8);
      uVar11 = uVar10 & 7;
      uVar5 = uVar10;
      if (6 < uVar10 - 1) {
        lVar6 = 0;
        do {
          puVar8 = (undefined8 *)(lVar3 + lVar6);
          lVar6 = lVar6 + 8;
          *puVar8 = 0;
        } while (uVar10 - uVar11 != lVar6);
        if ((uVar1 & 7) != 0) goto LAB_0082ec88;
        goto LAB_0082ebac;
      }
      lVar6 = 0;
      if ((uVar1 & 7) == 0) goto LAB_0082ebac;
LAB_0082ec88:
      puVar9 = (undefined1 *)(lVar3 + lVar6);
      do {
        uVar11 = uVar11 - 1;
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      } while (uVar11 != 0);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar10);
  }
  return;
}


