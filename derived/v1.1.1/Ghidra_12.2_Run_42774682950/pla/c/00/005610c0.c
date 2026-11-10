/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005610c0; name: FUN_005610c0
 */


undefined4 FUN_005610c0(long *param_1,long param_2,undefined4 param_3,ulong param_4)

{
  ushort uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  char local_170 [8];
  undefined1 auStack_168 [264];
  
  if (param_1[6] == 0) {
    if (param_2 != 0) {
      lVar15 = param_1[2];
      lVar13 = param_1[3];
      uVar7 = 0;
      if (lVar13 - lVar15 != 0) {
        uVar7 = (lVar13 - lVar15) * 0x10 - 1;
      }
      uVar10 = param_1[5];
      if (uVar7 == uVar10) {
        FUN_005614e4(param_1 + 1);
        uVar10 = param_1[5] + param_1[6];
        lVar15 = param_1[2];
        lVar13 = param_1[3];
      }
      if (lVar13 == lVar15) {
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = (long *)(*(long *)(lVar15 + (uVar10 >> 4 & 0xffffffffffffff8)) +
                          (uVar10 & 0x7f) * 0x20);
      }
      *plVar14 = param_2;
      plVar14[2] = 0;
      plVar14[3] = 0;
      *(undefined4 *)(plVar14 + 1) = 0xffffffff;
      *(undefined4 *)((long)plVar14 + 0xc) = param_3;
      lVar15 = param_1[6] + 1;
      param_1[6] = lVar15;
      puVar3 = PTR_LAB_04373088;
LAB_00561194:
      do {
        uVar7 = (lVar15 + param_1[5]) - 1;
        lVar15 = *(long *)(param_1[2] + (uVar7 >> 4 & 0xffffffffffffff8));
        uVar7 = uVar7 & 0x7f;
        lVar13 = *(long *)(lVar15 + uVar7 * 0x20);
        piVar12 = (int *)(lVar15 + uVar7 * 0x20 + 8);
        if (*piVar12 != -1) {
LAB_005611cc:
          uVar9 = (uint)*(ushort *)(lVar13 + 6);
          if (*(ushort *)(lVar13 + 6) == 0) goto LAB_005612c0;
          goto LAB_005611d4;
        }
        iVar6 = *(int *)((long)param_1 + 0x3c);
        *(int *)((long)param_1 + 0x3c) = iVar6 + -1;
        if (iVar6 < 1) {
          *(undefined1 *)(param_1 + 7) = 1;
          uVar4 = (**(code **)(*param_1 + 0x28))
                            (param_1,lVar13,*(undefined4 *)(lVar15 + uVar7 * 0x20 + 0xc));
        }
        else {
          local_170[0] = '\0';
          lVar5 = lVar15 + uVar7 * 0x20;
          uVar4 = (**(code **)(*param_1 + 0x10))
                            (param_1,lVar13,*(undefined4 *)(lVar5 + 0xc),local_170);
          *(undefined4 *)(lVar5 + 0x10) = uVar4;
          if (local_170[0] == '\0') {
            *piVar12 = 0;
            plVar14 = (long *)(lVar5 + 0x18);
            *plVar14 = 0;
            uVar1 = *(ushort *)(lVar13 + 6);
            if (uVar1 == 0) goto LAB_005611cc;
            if (uVar1 == 1) {
              *plVar14 = lVar5 + 0x14;
              uVar9 = (uint)*(ushort *)(lVar13 + 6);
              if (uVar9 != 0) goto LAB_005611d4;
LAB_005612c0:
              iVar6 = *piVar12;
            }
            else {
              lVar5 = FUN_002e2ec0(PTR_FUN_04373078,(ulong)uVar1 << 2);
              *plVar14 = lVar5;
              uVar9 = (uint)*(ushort *)(lVar13 + 6);
              if (uVar9 == 0) goto LAB_005612c0;
LAB_005611d4:
              puVar8 = (undefined8 *)(lVar13 + 8);
              if (uVar9 != 1) {
                puVar8 = (undefined8 *)*puVar8;
              }
              iVar6 = *piVar12;
              if (iVar6 < (int)uVar9) {
                if ((iVar6 < 1) || ((param_4 & 1) == 0)) {
                  lVar13 = puVar8[iVar6];
                }
                else {
                  lVar13 = puVar8[iVar6];
                  if (puVar8[iVar6 + -1] == lVar13) {
                    lVar15 = lVar15 + uVar7 * 0x20;
                    uVar4 = (**(code **)(*param_1 + 0x20))
                                      (param_1,*(undefined4 *)
                                                (*(long *)(lVar15 + 0x18) + (long)(iVar6 + -1) * 4))
                    ;
                    *(undefined4 *)(*(long *)(lVar15 + 0x18) + (long)*piVar12 * 4) = uVar4;
                    *piVar12 = *piVar12 + 1;
                    lVar15 = param_1[6];
                    goto LAB_00561194;
                  }
                }
                uVar4 = *(undefined4 *)(lVar15 + uVar7 * 0x20 + 0x10);
                lVar15 = param_1[2];
                uVar7 = 0;
                if (param_1[3] - lVar15 != 0) {
                  uVar7 = (param_1[3] - lVar15) * 0x10 - 1;
                }
                uVar10 = param_1[6] + param_1[5];
                if (uVar7 == uVar10) {
                  FUN_005614e4(param_1 + 1);
                  uVar10 = param_1[5] + param_1[6];
                  lVar15 = param_1[2];
                }
                plVar14 = (long *)(*(long *)(lVar15 + (uVar10 >> 4 & 0xffffffffffffff8)) +
                                  (uVar10 & 0x7f) * 0x20);
                *plVar14 = lVar13;
                *(undefined4 *)(plVar14 + 1) = 0xffffffff;
                *(undefined4 *)((long)plVar14 + 0xc) = uVar4;
                plVar14[2] = 0;
                plVar14[3] = 0;
                lVar15 = param_1[6] + 1;
                param_1[6] = lVar15;
                goto LAB_00561194;
              }
            }
            lVar15 = lVar15 + uVar7 * 0x20;
            uVar4 = (**(code **)(*param_1 + 0x18))
                              (param_1,lVar13,*(undefined4 *)(lVar15 + 0xc),
                               *(undefined4 *)(lVar15 + 0x10),*(long *)(lVar15 + 0x18),iVar6);
            if ((1 < *(ushort *)(lVar13 + 6)) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
              FUN_002e2f10(lVar15);
              FUN_002e2ef0(puVar3,lVar15);
            }
          }
        }
        lVar2 = param_1[3] - param_1[2];
        lVar5 = param_1[6];
        lVar15 = lVar5 + -1;
        lVar13 = 0;
        if (lVar2 != 0) {
          lVar13 = lVar2 * 0x10 + -1;
        }
        param_1[6] = lVar15;
        if (0xff < (lVar13 - (lVar5 + param_1[5])) + 1U) {
          operator_delete(*(void **)(param_1[3] + -8));
          param_1[3] = param_1[3] + -8;
          lVar15 = param_1[6];
        }
        if (lVar15 == 0) {
          return uVar4;
        }
        uVar7 = (lVar15 + param_1[5]) - 1;
        lVar13 = *(long *)(param_1[2] + (uVar7 >> 4 & 0xffffffffffffff8)) + (uVar7 & 0x7f) * 0x20;
        if (*(long *)(lVar13 + 0x18) == 0) {
          puVar11 = (undefined4 *)(lVar13 + 0x14);
        }
        else {
          puVar11 = (undefined4 *)(*(long *)(lVar13 + 0x18) + (long)*(int *)(lVar13 + 8) * 4);
        }
        *puVar11 = uVar4;
        *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
      } while( true );
    }
    FUN_0054f038(local_170,"external/com_github_google_re2\\re2/walker-inl.h",0xa2);
                    /* try { // try from 005614c0 to 005614cb has its CatchHandler @ 005614d4 */
    FUN_00551750(auStack_168,"Walk NULL");
  }
  else {
    FUN_0054f038(local_170,"external/com_github_google_re2\\re2/walker-inl.h",0x95);
                    /* try { // try from 00561494 to 0056149f has its CatchHandler @ 005614dc */
    FUN_00551750(auStack_168,"Stack not empty.");
  }
                    /* WARNING: Subroutine does not return */
  FUN_005503fc(local_170);
}


