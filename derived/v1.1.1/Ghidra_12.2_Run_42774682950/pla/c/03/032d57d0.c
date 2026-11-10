/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d57d0; name: FUN_032d57d0
 */


void FUN_032d57d0(ulong param_1,ulong param_2,ulong param_3)

{
  undefined2 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  
  if ((((param_3 < 8) || ((param_3 & 7) != 0)) || ((param_1 & 7) != 0)) || ((param_2 & 7) != 0)) {
    if (((param_3 < 4) || ((param_3 & 3) != 0)) || (((param_1 & 3) != 0 || ((param_2 & 3) != 0)))) {
      if (((param_3 < 2) || ((param_3 & 1) != 0)) || (((param_1 & 1) != 0 || ((param_2 & 1) != 0))))
      {
        if (0 < (long)param_3) {
          do {
            *(undefined1 *)((param_1 - 1) + param_3) = *(undefined1 *)((param_2 - 1) + param_3);
            param_3 = param_3 - 1;
          } while (0 < (long)param_3);
        }
      }
      else {
        uVar5 = param_3 - 2;
        if (1 < (long)param_3) {
          uVar7 = param_3 >> 1;
          if (((uint)uVar5 >> 1 & 1) == 0) {
            uVar7 = uVar7 - 1;
            *(undefined2 *)(param_1 + uVar7 * 2) = *(undefined2 *)(param_2 + uVar7 * 2);
            param_3 = uVar5;
          }
          if (1 < uVar5) {
            lVar2 = uVar7 * 2 + -2;
            puVar4 = (undefined2 *)(param_2 + lVar2);
            puVar8 = (undefined2 *)(param_1 + lVar2);
            do {
              *puVar8 = *puVar4;
              puVar1 = puVar4 + -1;
              param_3 = param_3 - 4;
              puVar4 = puVar4 + -2;
              puVar8[-1] = *puVar1;
              puVar8 = puVar8 + -2;
            } while (1 < (long)param_3);
          }
        }
      }
    }
    else if (3 < (long)param_3) {
      uVar5 = param_3 & 0xfffffffffffffffc;
      *(undefined4 *)(param_1 + (uVar5 - 4)) = *(undefined4 *)(param_2 + (uVar5 - 4));
      if ((((7 < (long)param_3) &&
           (*(undefined4 *)(param_1 + (uVar5 - 8)) = *(undefined4 *)(param_2 + (uVar5 - 8)),
           0xb < (long)param_3)) &&
          (*(undefined4 *)(param_1 + (uVar5 - 0xc)) = *(undefined4 *)(param_2 + (uVar5 - 0xc)),
          0xf < (long)param_3)) &&
         (*(undefined4 *)(param_1 + (uVar5 - 0x10)) = *(undefined4 *)(param_2 + (uVar5 - 0x10)),
         0x13 < (long)param_3)) {
        *(undefined4 *)(param_1 + (uVar5 - 0x14)) = *(undefined4 *)(param_2 + (uVar5 - 0x14));
        lVar2 = param_3 - 0x18;
        if ((0x17 < (long)param_3) &&
           (*(undefined4 *)(param_1 + (uVar5 - 0x18)) = *(undefined4 *)(param_2 + (uVar5 - 0x18)),
           3 < lVar2)) {
          puVar3 = (undefined4 *)(param_1 + (uVar5 - 0x1c));
          puVar10 = (undefined4 *)(param_2 + (uVar5 - 0x1c));
          do {
            lVar2 = lVar2 + -4;
            *puVar3 = *puVar10;
            puVar3 = puVar3 + -1;
            puVar10 = puVar10 + -1;
          } while (3 < lVar2);
        }
      }
    }
  }
  else if (7 < (long)param_3) {
    uVar5 = param_3 & 0xfffffffffffffff8;
    *(undefined8 *)(param_1 + (uVar5 - 8)) = *(undefined8 *)(param_2 + (uVar5 - 8));
    lVar2 = param_3 - 0x10;
    if ((0xf < (long)param_3) &&
       (*(undefined8 *)(param_1 + (uVar5 - 0x10)) = *(undefined8 *)(param_2 + (uVar5 - 0x10)),
       7 < lVar2)) {
      puVar6 = (undefined8 *)(param_1 + (uVar5 - 0x18));
      puVar9 = (undefined8 *)(param_2 + (uVar5 - 0x18));
      do {
        lVar2 = lVar2 + -8;
        *puVar6 = *puVar9;
        puVar6 = puVar6 + -1;
        puVar9 = puVar9 + -1;
      } while (7 < lVar2);
    }
  }
  return;
}


