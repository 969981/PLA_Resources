/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01120300; name: FUN_01120300
 */


void FUN_01120300(undefined4 *param_1,undefined4 *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
LAB_01120330:
  do {
    puVar7 = param_2 + -1;
    puVar9 = param_1;
LAB_0112033c:
    while( true ) {
      param_1 = puVar9;
      lVar6 = (long)param_2 - (long)param_1;
      uVar5 = lVar6 >> 2;
      switch(uVar5) {
      case 0:
      case 1:
        goto switchD_011204ac_caseD_0;
      case 2:
        lVar6 = *param_3;
        uVar5 = FUN_0111ea04(*(undefined2 *)puVar7,*(undefined2 *)param_1);
        if ((uVar5 & 1) == 0) {
          *(undefined1 *)(lVar6 + 0x53a) = 1;
          return;
        }
        uVar1 = *param_1;
        *param_1 = *puVar7;
        *puVar7 = uVar1;
        return;
      case 3:
        FUN_01120830(param_1,param_1 + 1,puVar7,param_3);
        return;
      case 4:
        FUN_01120960(param_1,param_1 + 1,param_1 + 2,puVar7,param_3);
        return;
      case 5:
        FUN_01120a50(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar7,param_3);
        return;
      }
      if (lVar6 < 0x7c) {
        FUN_01120b80(param_1,param_2,param_3);
        return;
      }
      uVar4 = uVar5;
      if ((long)uVar5 < 0) {
        uVar4 = uVar5 + 1;
      }
      puVar9 = (undefined4 *)((long)param_1 + (uVar4 & 0x7ffffffffffffffe) * 2);
      if (lVar6 < 0xf9d) {
        iVar3 = FUN_01120830(param_1,puVar9,puVar7,param_3);
      }
      else {
        uVar4 = uVar5 + 3;
        if (-1 < (long)uVar5) {
          uVar4 = uVar5;
        }
        iVar3 = FUN_01120a50(param_1,(long)param_1 + (uVar4 & 0xfffffffffffffffc),puVar9,
                             (long)puVar9 + (uVar4 & 0xfffffffffffffffc),puVar7,param_3);
      }
      lVar6 = *param_3;
      uVar5 = FUN_0111ea04(*(undefined2 *)param_1,*(undefined2 *)puVar9);
      if ((uVar5 & 1) != 0) break;
      *(undefined1 *)(lVar6 + 0x53a) = 1;
      for (puVar8 = param_2 + -2; param_1 != puVar8; puVar8 = puVar8 + -1) {
        lVar6 = *param_3;
        uVar5 = FUN_0111ea04(*(undefined2 *)puVar8,*(undefined2 *)puVar9);
        if ((uVar5 & 1) != 0) {
          uVar1 = *param_1;
          iVar3 = iVar3 + 1;
          *param_1 = *puVar8;
          *puVar8 = uVar1;
          goto LAB_01120690;
        }
        *(undefined1 *)(lVar6 + 0x53a) = 1;
      }
      puVar8 = param_1 + 1;
      lVar6 = *param_3;
      uVar5 = FUN_0111ea04(*(undefined2 *)param_1,*(undefined2 *)puVar7);
      if ((uVar5 & 1) == 0) {
        *(undefined1 *)(lVar6 + 0x53a) = 1;
        if (puVar8 == puVar7) {
          return;
        }
        puVar8 = param_1 + 2;
        while( true ) {
          lVar6 = *param_3;
          uVar5 = FUN_0111ea04(*(undefined2 *)param_1,*(undefined2 *)(puVar8 + -1));
          if ((uVar5 & 1) != 0) break;
          puVar8 = puVar8 + 1;
          *(undefined1 *)(lVar6 + 0x53a) = 1;
          if (param_2 == puVar8) {
            return;
          }
        }
        uVar1 = puVar8[-1];
        puVar8[-1] = *puVar7;
        *puVar7 = uVar1;
      }
      if (puVar8 == puVar7) {
        return;
      }
      puVar10 = puVar7;
      while( true ) {
        lVar6 = *param_3;
        uVar5 = FUN_0111ea04(*(undefined2 *)param_1,*(undefined2 *)puVar8);
        puVar9 = puVar8;
        if ((uVar5 & 1) == 0) {
          *(undefined1 *)(lVar6 + 0x53a) = 1;
          puVar9 = puVar8 + 1;
          lVar6 = *param_3;
          uVar5 = FUN_0111ea04(*(undefined2 *)param_1,*(undefined2 *)puVar9);
          if ((uVar5 & 1) == 0) {
            *(undefined1 *)(lVar6 + 0x53a) = 1;
            puVar9 = puVar8 + 2;
            uVar2 = *(undefined2 *)puVar9;
            while( true ) {
              lVar6 = *param_3;
              uVar5 = FUN_0111ea04(*(undefined2 *)param_1,uVar2);
              if ((uVar5 & 1) != 0) break;
              *(undefined1 *)(lVar6 + 0x53a) = 1;
              puVar9 = puVar9 + 1;
              uVar2 = *(undefined2 *)puVar9;
            }
          }
        }
        do {
          puVar10 = puVar10 + -1;
          lVar6 = *param_3;
          uVar5 = FUN_0111ea04(*(undefined2 *)param_1,*(undefined2 *)puVar10);
        } while ((uVar5 & 1) != 0);
        *(undefined1 *)(lVar6 + 0x53a) = 1;
        if (puVar10 <= puVar9) break;
        uVar1 = *puVar9;
        puVar8 = puVar9 + 1;
        *puVar9 = *puVar10;
        *puVar10 = uVar1;
      }
    }
    puVar8 = puVar7;
LAB_01120690:
    puVar11 = param_1 + 1;
    puVar10 = puVar11;
    if (puVar11 < puVar8) {
      while( true ) {
        puVar11 = puVar10 + -1;
        do {
          puVar10 = puVar11;
          lVar6 = *param_3;
          puVar11 = puVar10 + 1;
          uVar5 = FUN_0111ea04(*(undefined2 *)puVar11,*(undefined2 *)puVar9);
        } while ((uVar5 & 1) != 0);
        *(undefined1 *)(lVar6 + 0x53a) = 1;
        lVar6 = *param_3;
        uVar5 = FUN_0111ea04(*(undefined2 *)(puVar8 + -1),*(undefined2 *)puVar9);
        puVar12 = puVar8 + -1;
        if ((uVar5 & 1) == 0) {
          *(undefined1 *)(lVar6 + 0x53a) = 1;
          lVar6 = *param_3;
          uVar5 = FUN_0111ea04(*(undefined2 *)(puVar8 + -2),*(undefined2 *)puVar9);
          puVar12 = puVar8 + -2;
          if ((uVar5 & 1) == 0) {
            *(undefined1 *)(lVar6 + 0x53a) = 1;
            lVar6 = *param_3;
            uVar5 = FUN_0111ea04(*(undefined2 *)(puVar8 + -3),*(undefined2 *)puVar9);
            puVar12 = puVar8 + -3;
            if ((uVar5 & 1) == 0) {
              puVar8 = puVar8 + -4;
              do {
                puVar12 = puVar8;
                *(undefined1 *)(lVar6 + 0x53a) = 1;
                lVar6 = *param_3;
                uVar5 = FUN_0111ea04(*(undefined2 *)puVar12,*(undefined2 *)puVar9);
                puVar8 = puVar12 + -1;
              } while ((uVar5 & 1) == 0);
            }
          }
        }
        puVar8 = puVar12;
        if (puVar8 < puVar11) break;
        uVar1 = *puVar11;
        puVar10 = puVar10 + 2;
        *puVar11 = *puVar8;
        *puVar8 = uVar1;
        iVar3 = iVar3 + 1;
        puVar12 = puVar8;
        if (puVar9 != puVar11) {
          puVar12 = puVar9;
        }
        puVar9 = puVar12;
      }
    }
    if (puVar11 != puVar9) {
      lVar6 = *param_3;
      uVar5 = FUN_0111ea04(*(undefined2 *)puVar9,*(undefined2 *)puVar11);
      if ((uVar5 & 1) == 0) {
        *(undefined1 *)(lVar6 + 0x53a) = 1;
        goto LAB_01120468;
      }
      uVar1 = *puVar11;
      *puVar11 = *puVar9;
      *puVar9 = uVar1;
      if (iVar3 == -1) goto LAB_011206ec;
      goto LAB_0112046c;
    }
LAB_01120468:
    if (iVar3 != 0) goto LAB_0112046c;
LAB_011206ec:
    uVar5 = FUN_01120c70(param_1,puVar11,param_3);
    uVar4 = FUN_01120c70(puVar11 + 1,param_2,param_3);
    if ((uVar4 & 1) == 0) break;
    param_2 = puVar11;
    if ((uVar5 & 1) != 0) {
switchD_011204ac_caseD_0:
      return;
    }
  } while( true );
  puVar9 = puVar11 + 1;
  if ((uVar5 & 1) == 0) {
LAB_0112046c:
    if ((long)param_2 - (long)puVar11 <= (long)puVar11 - (long)param_1) {
      FUN_01120300(puVar11 + 1,param_2,param_3);
      param_2 = puVar11;
      goto LAB_01120330;
    }
    FUN_01120300(param_1,puVar11,param_3);
    puVar9 = puVar11 + 1;
  }
  goto LAB_0112033c;
}


