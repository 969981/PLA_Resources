/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edec68; name: FUN_02edec68
 */


void FUN_02edec68(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if (((((*param_2 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
      (((char)param_2[3] == -1 && ((char)param_2[4] == -1)))) && (param_2[5] == 0)) {
    puVar8 = (undefined8 *)(param_1 + 0x40);
    puVar5 = (undefined8 *)*puVar8;
    if (puVar5 != (undefined8 *)0x0) {
      puVar2 = puVar5;
      do {
        puVar6 = puVar8;
        if (puVar2 != puVar5) {
          puVar6 = (undefined8 *)&DAT_00000008;
        }
        *puVar6 = puVar5[1];
        lVar3 = puVar5[2];
        *puVar5 = &PTR_LAB_042aaa60;
        if (lVar3 != 0) {
          puVar6 = *(undefined8 **)(lVar3 + 0x28);
          uVar4 = *(uint *)(lVar3 + 0x30);
          puVar2 = puVar6 + uVar4;
          if ((uVar4 != 0) && ((undefined8 *)*puVar6 != puVar5)) {
            lVar9 = (ulong)uVar4 * 8;
            puVar7 = puVar6;
            do {
              lVar9 = lVar9 + -8;
              puVar6 = puVar7 + 1;
              if (lVar9 == 0) goto LAB_02eded08;
              puVar1 = puVar7 + 1;
              puVar7 = puVar6;
            } while ((undefined8 *)*puVar1 != puVar5);
          }
          if (puVar2 != puVar6) {
            if (1 < uVar4) {
              *puVar6 = puVar2[-1];
              uVar4 = *(uint *)(lVar3 + 0x30);
            }
            *(uint *)(lVar3 + 0x30) = uVar4 - 1;
            if (uVar4 - 1 == 0) {
              *(undefined4 *)(lVar3 + 0x3c) = 6;
            }
          }
        }
LAB_02eded08:
        (*DAT_0442d150)(0,puVar5);
        puVar2 = (undefined8 *)*puVar8;
      } while( true );
    }
  }
  else {
    puVar5 = *(undefined8 **)(param_1 + 0x40);
    if (puVar5 != (undefined8 *)0x0) {
      puVar8 = puVar5;
      puVar2 = (undefined8 *)0x0;
      do {
        puVar6 = puVar8;
        if (((puVar6[4] == *param_2) && (*(int *)(puVar6 + 5) == (int)param_2[1])) &&
           ((*(int *)(puVar6 + 6) == (int)param_2[2] &&
            (((*(char *)(puVar6 + 7) == (char)param_2[3] &&
              (*(char *)(puVar6 + 8) == (char)param_2[4])) && (puVar6[9] == param_2[5])))))) {
          puVar8 = (undefined8 *)(param_1 + 0x40);
          if (puVar5 != puVar6) {
            puVar8 = puVar2 + 1;
          }
          *puVar8 = puVar6[1];
          lVar3 = puVar6[2];
          *puVar6 = &PTR_LAB_042aaa60;
          if (lVar3 == 0) goto LAB_02edee74;
          puVar8 = *(undefined8 **)(lVar3 + 0x28);
          uVar4 = *(uint *)(lVar3 + 0x30);
          puVar5 = puVar8 + uVar4;
          if ((uVar4 == 0) || ((undefined8 *)*puVar8 == puVar6)) goto joined_r0x02edeea4;
          lVar9 = (ulong)uVar4 * 8;
          puVar2 = puVar8;
          goto LAB_02edeeec;
        }
        puVar8 = (undefined8 *)puVar6[1];
        puVar2 = puVar6;
      } while ((undefined8 *)puVar6[1] != (undefined8 *)0x0);
    }
  }
  goto LAB_02edec94;
  while (puVar8 = puVar2 + 1, puVar7 = puVar2 + 1, puVar2 = puVar8, (undefined8 *)*puVar7 != puVar6)
  {
LAB_02edeeec:
    lVar9 = lVar9 + -8;
    if (lVar9 == 0) goto LAB_02edee74;
  }
joined_r0x02edeea4:
  if (puVar5 != puVar8) {
    if (1 < uVar4) {
      *puVar8 = puVar5[-1];
      uVar4 = *(uint *)(lVar3 + 0x30);
    }
    *(uint *)(lVar3 + 0x30) = uVar4 - 1;
    if (uVar4 - 1 == 0) {
      *(undefined4 *)(lVar3 + 0x3c) = 6;
    }
  }
LAB_02edee74:
  (*DAT_0442d150)(0);
LAB_02edec94:
  FUN_02edf018(param_1 + 0x20,param_2);
  return;
}


