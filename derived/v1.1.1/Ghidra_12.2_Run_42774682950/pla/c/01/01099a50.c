/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01099a50; name: FUN_01099a50
 */


void FUN_01099a50(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4,
                 long param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  if (1 < param_3) {
    if (param_3 == 2) {
      if (*(ushort *)((long)param_1 + 4) < *(ushort *)((long)param_2 + -4)) {
        uVar4 = *param_1;
        *param_1 = param_2[-1];
        param_2[-1] = uVar4;
      }
    }
    else if ((long)param_3 < 0x81) {
      if ((param_1 != param_2) && (puVar5 = param_1 + 1, puVar5 != param_2)) {
        lVar6 = 0;
        do {
          uVar4 = *puVar5;
          if (puVar5 != param_1) {
            lVar7 = lVar6;
            do {
              puVar8 = (undefined8 *)((long)param_1 + lVar7);
              if (((uint)((ulong)uVar4 >> 0x20) & 0xffff) <= (uint)*(ushort *)((long)puVar8 + 4)) {
                puVar8 = puVar8 + 1;
                goto LAB_01099acc;
              }
              bVar3 = lVar7 != 0;
              puVar8[1] = *puVar8;
              lVar7 = lVar7 + -8;
            } while (bVar3);
          }
          puVar8 = param_1;
LAB_01099acc:
          puVar5 = puVar5 + 1;
          lVar6 = lVar6 + 8;
          *puVar8 = uVar4;
        } while (puVar5 != param_2);
      }
    }
    else {
      uVar11 = param_3 >> 1;
      puVar5 = param_1 + uVar11;
      if (param_5 < (long)param_3) {
        FUN_01099a50();
        FUN_01099a50(puVar5,param_2,param_3 - uVar11,param_4,param_5);
        FUN_01099fe0(param_1,puVar5,param_2,uVar11,param_3 - uVar11,param_4,param_5);
        return;
      }
      FUN_01099d20(param_1,puVar5,uVar11);
      puVar8 = param_4 + uVar11;
      FUN_01099d20(puVar5,param_2,param_3 - uVar11,puVar8);
      puVar2 = param_4 + param_3;
      puVar5 = puVar8;
      do {
        if (puVar5 == puVar2) {
          if (param_4 == puVar8) {
            return;
          }
          uVar11 = (long)puVar8 + (-8 - (long)param_4);
          uVar1 = ((uint)(uVar11 >> 3) & 0x1fffffff) + 1;
          if ((uVar1 & 3) != 0) {
            lVar7 = 0;
            lVar6 = -((ulong)uVar1 & 3);
            do {
              bVar3 = lVar6 != -1;
              lVar6 = lVar6 + 1;
              *(undefined8 *)((long)param_1 + lVar7) = *(undefined8 *)((long)param_4 + lVar7);
              lVar7 = lVar7 + 8;
            } while (bVar3);
            param_4 = (undefined8 *)((long)param_4 + lVar7);
            param_1 = (undefined8 *)((long)param_1 + lVar7);
          }
          if (uVar11 < 0x18) {
            return;
          }
          do {
            *param_1 = *param_4;
            param_1[1] = param_4[1];
            param_1[2] = param_4[2];
            puVar5 = param_4 + 3;
            param_4 = param_4 + 4;
            param_1[3] = *puVar5;
            param_1 = param_1 + 4;
          } while (param_4 != puVar8);
          return;
        }
        if (*(ushort *)((long)param_4 + 4) < *(ushort *)((long)puVar5 + 4)) {
          uVar4 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar10 = param_4;
        }
        else {
          puVar10 = param_4 + 1;
          uVar4 = *param_4;
        }
        puVar9 = param_1 + 1;
        *param_1 = uVar4;
        param_4 = puVar10;
        param_1 = puVar9;
      } while (puVar10 != puVar8);
      if (puVar5 != puVar2) {
        uVar11 = (long)puVar2 + (-8 - (long)puVar5);
        uVar1 = ((uint)(uVar11 >> 3) & 0x1fffffff) + 1;
        if ((uVar1 & 3) != 0) {
          lVar7 = 0;
          lVar6 = -((ulong)uVar1 & 3);
          do {
            bVar3 = lVar6 != -1;
            lVar6 = lVar6 + 1;
            *(undefined8 *)((long)puVar9 + lVar7) = *(undefined8 *)((long)puVar5 + lVar7);
            lVar7 = lVar7 + 8;
          } while (bVar3);
          puVar5 = (undefined8 *)((long)puVar5 + lVar7);
          puVar9 = (undefined8 *)((long)puVar9 + lVar7);
        }
        if (0x17 < uVar11) {
          do {
            *puVar9 = *puVar5;
            puVar9[1] = puVar5[1];
            puVar9[2] = puVar5[2];
            puVar8 = puVar5 + 3;
            puVar5 = puVar5 + 4;
            puVar9[3] = *puVar8;
            puVar9 = puVar9 + 4;
          } while (puVar5 != puVar2);
        }
      }
    }
  }
  return;
}


