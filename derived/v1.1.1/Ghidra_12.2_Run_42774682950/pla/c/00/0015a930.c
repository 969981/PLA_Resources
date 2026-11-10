/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015a930; name: FUN_0015a930
 */


/* WARNING: Removing unreachable block (ram,0x0015aa20) */
/* WARNING: Removing unreachable block (ram,0x0015a9d4) */

undefined8 FUN_0015a930(long param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  undefined8 uVar1;
  short sVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  
  sVar2 = *(short *)(param_2 + 8);
  uVar15 = (ulong)sVar2;
  iVar12 = (int)sVar2;
  lVar11 = (long)iVar12;
  if ((*(uint *)(param_1 + 200) & 6) != 0) {
    if ((*(uint *)(param_1 + 200) >> 1 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x38);
      FUN_0015a800(param_1,1,0xffffffff);
      param_3 = (undefined8 *)((long)param_3 + (*(long *)(param_1 + 0x38) - lVar4));
    }
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2[2] + 0x28);
  }
  puVar5 = (undefined8 *)*param_2;
  *(undefined8 *)(param_1 + 0x20) = param_2[2];
  if (iVar12 == 1) {
    puVar7 = &DAT_039c5c28;
    if (param_4 != 0) {
      puVar7 = param_3;
    }
    uVar3 = puVar7[1];
    *puVar5 = *puVar7;
    puVar5[1] = uVar3;
  }
  else {
    iVar13 = (int)sVar2;
    if (iVar13 != 0) {
      if (iVar13 == -1) {
        if (0 < (int)param_4) {
          if (param_4 == 1) {
            lVar11 = 0;
          }
          else {
            lVar11 = 0;
            puVar7 = puVar5 + 2;
            puVar10 = param_3 + 2;
            do {
              uVar3 = puVar10[-1];
              lVar11 = lVar11 + 2;
              puVar7[-2] = puVar10[-2];
              puVar7[-1] = uVar3;
              uVar3 = puVar10[1];
              *puVar7 = *puVar10;
              puVar7[1] = uVar3;
              puVar7 = puVar7 + 4;
              puVar10 = puVar10 + 4;
            } while ((ulong)param_4 - ((ulong)param_4 & 1) != lVar11);
            if ((param_4 & 1) == 0) goto LAB_0015aa88;
          }
          uVar3 = (param_3 + lVar11 * 2)[1];
          puVar5[lVar11 * 2] = param_3[lVar11 * 2];
          (puVar5 + lVar11 * 2)[1] = uVar3;
        }
LAB_0015aa88:
        uVar3 = 0;
        lVar11 = (long)(int)param_4;
        goto LAB_0015aa90;
      }
      iVar14 = (int)sVar2;
      if (iVar13 <= (int)param_4) {
        if (0 < iVar12) {
          if (iVar14 == 1) {
            lVar4 = 0;
          }
          else {
            lVar4 = 0;
            puVar7 = puVar5 + 2;
            puVar10 = param_3 + 2;
            do {
              uVar3 = puVar10[-1];
              lVar4 = lVar4 + 2;
              puVar7[-2] = puVar10[-2];
              puVar7[-1] = uVar3;
              uVar3 = puVar10[1];
              *puVar7 = *puVar10;
              puVar7[1] = uVar3;
              puVar7 = puVar7 + 4;
              puVar10 = puVar10 + 4;
            } while (uVar15 - (uVar15 & 1) != lVar4);
          }
          if ((uVar15 & 1) != 0) {
            uVar1 = (param_3 + lVar4 * 2)[1];
            uVar3 = 1;
            puVar5[lVar4 * 2] = param_3[lVar4 * 2];
            (puVar5 + lVar4 * 2)[1] = uVar1;
            goto LAB_0015aa90;
          }
        }
        goto LAB_0015a9f0;
      }
      if ((int)param_4 < 1) {
        param_4 = 0;
        if (iVar14 < 1) goto LAB_0015a9f0;
      }
      else {
        if (param_4 == 1) {
          lVar4 = 0;
LAB_0015aaec:
          uVar3 = (param_3 + lVar4 * 2)[1];
          puVar5[lVar4 * 2] = param_3[lVar4 * 2];
          (puVar5 + lVar4 * 2)[1] = uVar3;
        }
        else {
          lVar4 = 0;
          puVar7 = puVar5 + 2;
          puVar10 = param_3 + 2;
          do {
            uVar3 = puVar10[-1];
            lVar4 = lVar4 + 2;
            puVar7[-2] = puVar10[-2];
            puVar7[-1] = uVar3;
            uVar3 = puVar10[1];
            *puVar7 = *puVar10;
            puVar7[1] = uVar3;
            puVar7 = puVar7 + 4;
            puVar10 = puVar10 + 4;
          } while ((ulong)param_4 - ((ulong)param_4 & 1) != lVar4);
          if ((param_4 & 1) != 0) goto LAB_0015aaec;
        }
        if (iVar14 <= (int)param_4) goto LAB_0015a9f0;
      }
      uVar6 = (ulong)param_4;
      uVar8 = ~uVar6;
      uVar9 = (ulong)(iVar14 - param_4) & 3;
      if ((iVar14 - param_4 & 3) != 0) {
        puVar7 = puVar5 + uVar6 * 2 + 1;
        do {
          uVar6 = uVar6 + 1;
          uVar9 = uVar9 - 1;
          *(undefined4 *)puVar7 = 0;
          puVar7 = puVar7 + 2;
        } while (uVar9 != 0);
      }
      if (2 < uVar8 + uVar15) {
        lVar4 = uVar15 - uVar6;
        puVar7 = puVar5 + uVar6 * 2 + 5;
        do {
          *(undefined4 *)(puVar7 + -4) = 0;
          lVar4 = lVar4 + -4;
          *(undefined4 *)(puVar7 + -2) = 0;
          *(undefined4 *)puVar7 = 0;
          *(undefined4 *)(puVar7 + 2) = 0;
          puVar7 = puVar7 + 8;
        } while (lVar4 != 0);
      }
    }
  }
LAB_0015a9f0:
  uVar3 = 1;
LAB_0015aa90:
  *(undefined8 **)(param_1 + 0x10) = puVar5 + lVar11 * 2;
  return uVar3;
}


