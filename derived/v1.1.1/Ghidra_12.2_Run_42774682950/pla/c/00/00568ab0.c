/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00568ab0; name: FUN_00568ab0
 */


undefined8 FUN_00568ab0(long *param_1,long param_2,long param_3,ulong param_4)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  char local_170;
  undefined7 uStack_16f;
  long alStack_168 [33];
  
  if (param_1[6] == 0) {
    if (param_2 != 0) {
      lVar5 = param_1[2];
      lVar13 = param_1[3];
      uVar6 = 0;
      if (lVar13 - lVar5 != 0) {
        uVar6 = (lVar13 - lVar5 >> 3) * 0x55 - 1;
      }
      uVar9 = param_1[5];
      if (uVar6 == uVar9) {
        FUN_00568f24(param_1 + 1);
        uVar9 = param_1[5] + param_1[6];
        lVar5 = param_1[2];
        lVar13 = param_1[3];
      }
      if (lVar13 == lVar5) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = (long *)(*(long *)(lVar5 + (uVar9 / 0x55) * 8) + (uVar9 % 0x55) * 0x30);
      }
      *plVar4 = param_2;
      plVar4[2] = param_3;
      *(undefined4 *)(plVar4 + 1) = 0xffffffff;
      plVar4[4] = alStack_168[0];
      plVar4[3] = CONCAT71(uStack_16f,local_170);
      plVar4[5] = 0;
      lVar5 = param_1[6];
      do {
        lVar5 = lVar5 + 1;
        param_1[6] = lVar5;
LAB_00568bec:
        uVar6 = (lVar5 + param_1[5]) - 1;
        uVar9 = uVar6 % 0x55;
        lVar5 = *(long *)(param_1[2] + (uVar6 / 0x55) * 8);
        lVar13 = *(long *)(lVar5 + uVar9 * 0x30);
        piVar11 = (int *)(lVar5 + uVar9 * 0x30 + 8);
        if (*piVar11 != -1) {
LAB_00568c24:
          uVar8 = (uint)*(ushort *)(lVar13 + 6);
          if (*(ushort *)(lVar13 + 6) == 0) goto LAB_00568d18;
          goto LAB_00568c2c;
        }
        iVar10 = *(int *)((long)param_1 + 0x3c);
        *(int *)((long)param_1 + 0x3c) = iVar10 + -1;
        if (iVar10 < 1) {
          *(undefined1 *)(param_1 + 7) = 1;
          uVar3 = (**(code **)(*param_1 + 0x28))
                            (param_1,lVar13,*(undefined8 *)(lVar5 + uVar9 * 0x30 + 0x10));
          goto LAB_00568d98;
        }
        local_170 = '\0';
        lVar12 = lVar5 + uVar9 * 0x30;
        uVar3 = (**(code **)(*param_1 + 0x10))
                          (param_1,lVar13,*(undefined8 *)(lVar12 + 0x10),&local_170);
        *(undefined8 *)(lVar12 + 0x18) = uVar3;
        if (local_170 != '\0') goto LAB_00568d98;
        *piVar11 = 0;
        plVar4 = (long *)(lVar5 + uVar9 * 0x30 + 0x28);
        *plVar4 = 0;
        uVar1 = *(ushort *)(lVar13 + 6);
        if (uVar1 == 0) goto LAB_00568c24;
        if (uVar1 == 1) {
          *plVar4 = lVar5 + uVar9 * 0x30 + 0x20;
          uVar8 = (uint)*(ushort *)(lVar13 + 6);
          if (uVar8 != 0) goto LAB_00568c2c;
LAB_00568d18:
          iVar10 = *piVar11;
LAB_00568d1c:
          lVar5 = lVar5 + uVar9 * 0x30;
          uVar3 = (**(code **)(*param_1 + 0x18))
                            (param_1,lVar13,*(undefined8 *)(lVar5 + 0x10),
                             *(undefined8 *)(lVar5 + 0x18),*(long *)(lVar5 + 0x28),iVar10);
          if ((1 < *(ushort *)(lVar13 + 6)) && (lVar5 = *(long *)(lVar5 + 0x28), lVar5 != 0)) {
            FUN_002e2f10(lVar5);
            FUN_002e2ef0(PTR_LAB_04373088,lVar5);
          }
LAB_00568d98:
          lVar2 = param_1[3] - param_1[2];
          lVar12 = param_1[6];
          lVar5 = lVar12 + -1;
          lVar13 = 0;
          if (lVar2 != 0) {
            lVar13 = (lVar2 >> 3) * 0x55 + -1;
          }
          param_1[6] = lVar5;
          if (0xa9 < (lVar13 - (lVar12 + param_1[5])) + 1U) {
            operator_delete(*(void **)(param_1[3] + -8));
            param_1[3] = param_1[3] + -8;
            lVar5 = param_1[6];
          }
          if (lVar5 == 0) {
            return uVar3;
          }
          uVar6 = (lVar5 + param_1[5]) - 1;
          uVar9 = uVar6 % 0x55;
          lVar13 = *(long *)(param_1[2] + (uVar6 / 0x55) * 8);
          lVar12 = *(long *)(lVar13 + uVar9 * 0x30 + 0x28);
          if (lVar12 == 0) {
            lVar12 = lVar13 + uVar9 * 0x30;
            *(undefined8 *)(lVar12 + 0x20) = uVar3;
            iVar10 = *(int *)(lVar12 + 8);
          }
          else {
            iVar10 = *(int *)(lVar13 + uVar9 * 0x30 + 8);
            *(undefined8 *)(lVar12 + (long)iVar10 * 8) = uVar3;
          }
          *(int *)(lVar13 + uVar9 * 0x30 + 8) = iVar10 + 1;
          goto LAB_00568bec;
        }
        lVar12 = FUN_002e2ec0(PTR_FUN_04373078,(ulong)uVar1 << 3);
        *plVar4 = lVar12;
        uVar8 = (uint)*(ushort *)(lVar13 + 6);
        if (uVar8 == 0) goto LAB_00568d18;
LAB_00568c2c:
        puVar7 = (undefined8 *)(lVar13 + 8);
        if (uVar8 != 1) {
          puVar7 = (undefined8 *)*puVar7;
        }
        iVar10 = *piVar11;
        if ((int)uVar8 <= iVar10) goto LAB_00568d1c;
        if ((0 < iVar10) && ((param_4 & 1) != 0)) {
          lVar13 = puVar7[iVar10];
          if (puVar7[iVar10 + -1] != lVar13) goto LAB_00568e4c;
          lVar5 = lVar5 + uVar9 * 0x30;
          uVar3 = (**(code **)(*param_1 + 0x20))
                            (param_1,*(undefined8 *)
                                      (*(long *)(lVar5 + 0x28) + (long)(iVar10 + -1) * 8));
          iVar10 = *piVar11;
          *(undefined8 *)(*(long *)(lVar5 + 0x28) + (long)iVar10 * 8) = uVar3;
          *piVar11 = iVar10 + 1;
          lVar5 = param_1[6];
          goto LAB_00568bec;
        }
        lVar13 = puVar7[iVar10];
LAB_00568e4c:
        lVar12 = *(long *)(lVar5 + uVar9 * 0x30 + 0x18);
        lVar5 = param_1[2];
        uVar6 = 0;
        if (param_1[3] - lVar5 != 0) {
          uVar6 = (param_1[3] - lVar5 >> 3) * 0x55 - 1;
        }
        uVar9 = param_1[6] + param_1[5];
        if (uVar6 == uVar9) {
          FUN_00568f24(param_1 + 1);
          uVar9 = param_1[5] + param_1[6];
          lVar5 = param_1[2];
        }
        plVar4 = (long *)(*(long *)(lVar5 + (uVar9 / 0x55) * 8) + (uVar9 % 0x55) * 0x30);
        *plVar4 = lVar13;
        *(undefined4 *)(plVar4 + 1) = 0xffffffff;
        plVar4[2] = lVar12;
        plVar4[5] = 0;
        plVar4[4] = alStack_168[0];
        plVar4[3] = CONCAT71(uStack_16f,local_170);
        lVar5 = param_1[6];
      } while( true );
    }
    FUN_0054f038(&local_170,"external/com_github_google_re2\\re2/walker-inl.h",0xa2);
                    /* try { // try from 00568f00 to 00568f0b has its CatchHandler @ 00568f14 */
    FUN_00551750(alStack_168,"Walk NULL");
  }
  else {
    FUN_0054f038(&local_170,"external/com_github_google_re2\\re2/walker-inl.h",0x95);
                    /* try { // try from 00568ed4 to 00568edf has its CatchHandler @ 00568f1c */
    FUN_00551750(alStack_168,"Stack not empty.");
  }
                    /* WARNING: Subroutine does not return */
  FUN_005503fc(&local_170);
}


