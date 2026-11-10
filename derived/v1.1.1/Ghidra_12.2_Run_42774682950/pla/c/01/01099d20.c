/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01099d20; name: FUN_01099d20
 */


void FUN_01099d20(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  if (param_3 != 0) {
    if (param_3 == 2) {
      if (*(ushort *)((long)param_1 + 4) < *(ushort *)((long)param_2 + -4)) {
        *param_4 = param_2[-1];
        uVar8 = *param_1;
      }
      else {
        *param_4 = *param_1;
        uVar8 = param_2[-1];
      }
      param_4[1] = uVar8;
    }
    else if (param_3 == 1) {
      *param_4 = *param_1;
    }
    else if ((long)param_3 < 9) {
      if (param_1 != param_2) {
        *param_4 = *param_1;
        if (param_1 + 1 != param_2) {
          lVar4 = 0;
          puVar6 = param_4;
          puVar5 = param_1 + 1;
          do {
            puVar10 = puVar5;
            if (*(ushort *)((long)puVar6 + 4) < *(ushort *)((long)param_1 + 0xc)) {
              puVar6[1] = *puVar6;
              if (puVar6 != param_4) {
                lVar9 = 0;
                do {
                  puVar5 = (undefined8 *)((long)puVar6 + lVar9);
                  if (*(ushort *)((long)param_1 + 0xc) <= *(ushort *)((long)puVar5 + -4))
                  goto LAB_01099dbc;
                  lVar9 = lVar9 + -8;
                  *puVar5 = puVar5[-1];
                } while (lVar4 != lVar9);
              }
              puVar5 = param_4;
            }
            else {
              puVar5 = puVar6 + 1;
            }
LAB_01099dbc:
            lVar4 = lVar4 + -8;
            *puVar5 = *puVar10;
            puVar6 = puVar6 + 1;
            puVar5 = puVar10 + 1;
            param_1 = puVar10;
          } while (puVar10 + 1 != param_2);
        }
      }
    }
    else {
      uVar11 = param_3 >> 1;
      puVar2 = param_1 + uVar11;
      FUN_01099a50(param_1,puVar2,uVar11,param_4,uVar11);
      FUN_01099a50(puVar2,param_2,param_3 - uVar11,param_4 + uVar11,param_3 - uVar11);
      puVar6 = puVar2;
      puVar10 = param_4;
      puVar5 = param_1;
      if (uVar11 != 0) {
        do {
          if (puVar6 == param_2) {
            if (puVar5 == puVar2) {
              return;
            }
            uVar11 = (long)param_1 + (uVar11 * 8 - (long)puVar5) + -8;
            uVar1 = ((uint)(uVar11 >> 3) & 0x1fffffff) + 1;
            if ((uVar1 & 3) != 0) {
              lVar9 = 0;
              lVar4 = -((ulong)uVar1 & 3);
              do {
                bVar3 = lVar4 != -1;
                lVar4 = lVar4 + 1;
                *(undefined8 *)((long)puVar10 + lVar9) = *(undefined8 *)((long)puVar5 + lVar9);
                lVar9 = lVar9 + 8;
              } while (bVar3);
              puVar10 = (undefined8 *)((long)puVar10 + lVar9);
              puVar5 = (undefined8 *)((long)puVar5 + lVar9);
            }
            if (uVar11 < 0x18) {
              return;
            }
            do {
              *puVar10 = *puVar5;
              puVar10[1] = puVar5[1];
              puVar10[2] = puVar5[2];
              puVar6 = puVar5 + 3;
              puVar5 = puVar5 + 4;
              puVar10[3] = *puVar6;
              puVar10 = puVar10 + 4;
            } while (puVar5 != puVar2);
            return;
          }
          if (*(ushort *)((long)puVar5 + 4) < *(ushort *)((long)puVar6 + 4)) {
            uVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar5;
          }
          else {
            puVar7 = puVar5 + 1;
            uVar8 = *puVar5;
          }
          param_4 = puVar10 + 1;
          *puVar10 = uVar8;
          puVar10 = param_4;
          puVar5 = puVar7;
        } while (puVar7 != puVar2);
      }
      if (puVar6 != param_2) {
        uVar11 = (long)param_2 + (-8 - (long)puVar6);
        uVar1 = ((uint)(uVar11 >> 3) & 0x1fffffff) + 1;
        if ((uVar1 & 3) != 0) {
          lVar4 = -((ulong)uVar1 & 3);
          puVar5 = puVar6;
          puVar10 = param_4;
          do {
            puVar6 = puVar5 + 1;
            bVar3 = lVar4 != -1;
            lVar4 = lVar4 + 1;
            param_4 = puVar10 + 1;
            *puVar10 = *puVar5;
            puVar5 = puVar6;
            puVar10 = param_4;
          } while (bVar3);
        }
        if (0x17 < uVar11) {
          do {
            *param_4 = *puVar6;
            param_4[1] = puVar6[1];
            param_4[2] = puVar6[2];
            puVar5 = puVar6 + 3;
            puVar6 = puVar6 + 4;
            param_4[3] = *puVar5;
            param_4 = param_4 + 4;
          } while (puVar6 != param_2);
        }
      }
    }
  }
  return;
}


