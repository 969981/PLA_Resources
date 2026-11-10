/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056e52c; name: FUN_0056e52c
 */


ulong FUN_0056e52c(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  void *__s;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  ulong local_170;
  undefined8 auStack_168 [33];
  
  if (param_1[6] == 0) {
    if (param_2 != 0) {
      local_170 = 0;
      auStack_168[0] = 0;
      lVar14 = param_1[2];
      lVar15 = param_1[3];
      uVar5 = 0;
      if (lVar15 - lVar14 != 0) {
        uVar5 = (lVar15 - lVar14 >> 3) * 0x55 - 1;
      }
      uVar11 = param_1[5];
      if (uVar5 == uVar11) {
        FUN_0056ea00(param_1 + 1);
        uVar11 = param_1[5] + param_1[6];
        lVar14 = param_1[2];
        lVar15 = param_1[3];
      }
      if (lVar15 == lVar14) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = (long *)(*(long *)(lVar14 + (uVar11 / 0x55) * 8) + (uVar11 % 0x55) * 0x30);
      }
      *plVar4 = param_2;
      *(undefined8 *)((long)plVar4 + 0xc) = param_3;
      *(undefined4 *)(plVar4 + 1) = 0xffffffff;
      *(undefined8 *)((long)plVar4 + 0x1c) = auStack_168[0];
      *(ulong *)((long)plVar4 + 0x14) = local_170;
      plVar4[5] = 0;
      lVar14 = param_1[6] + 1;
      param_1[6] = lVar14;
LAB_0056e64c:
      do {
        uVar5 = (lVar14 + param_1[5]) - 1;
        uVar11 = uVar5 % 0x55;
        lVar14 = *(long *)(param_1[2] + (uVar5 / 0x55) * 8);
        lVar15 = *(long *)(lVar14 + uVar11 * 0x30);
        piVar16 = (int *)(lVar14 + uVar11 * 0x30 + 8);
        if (*piVar16 != -1) {
LAB_0056e684:
          uVar8 = (uint)*(ushort *)(lVar15 + 6);
          if (*(ushort *)(lVar15 + 6) != 0) goto LAB_0056e68c;
          goto LAB_0056e844;
        }
        iVar3 = *(int *)((long)param_1 + 0x3c);
        *(int *)((long)param_1 + 0x3c) = iVar3 + -1;
        if (iVar3 < 1) {
          *(undefined1 *)(param_1 + 7) = 1;
          uVar5 = (**(code **)(*param_1 + 0x28))
                            (param_1,lVar15,*(undefined8 *)(lVar14 + uVar11 * 0x30 + 0xc));
          uVar11 = uVar5 >> 0x20;
LAB_0056e8a0:
          lVar13 = param_1[3] - param_1[2];
          lVar15 = param_1[6];
          lVar7 = lVar15 + -1;
          lVar14 = 0;
          if (lVar13 != 0) {
            lVar14 = (lVar13 >> 3) * 0x55 + -1;
          }
          param_1[6] = lVar7;
          if (0xa9 < (lVar14 - (lVar15 + param_1[5])) + 1U) {
            operator_delete(*(void **)(param_1[3] + -8));
            param_1[3] = param_1[3] + -8;
            lVar7 = param_1[6];
          }
          if (lVar7 == 0) {
            return uVar5 & 0xffffffff | uVar11 << 0x20;
          }
          uVar9 = (lVar7 + param_1[5]) - 1;
          uVar10 = uVar9 % 0x55;
          lVar14 = *(long *)(param_1[2] + (uVar9 / 0x55) * 8);
          lVar15 = *(long *)(lVar14 + uVar10 * 0x30 + 0x28);
          if (lVar15 == 0) {
            puVar12 = (ulong *)(lVar14 + uVar10 * 0x30 + 0x1c);
          }
          else {
            puVar12 = (ulong *)(lVar15 + (long)*(int *)(lVar14 + uVar10 * 0x30 + 8) * 8);
          }
          lVar14 = lVar14 + uVar10 * 0x30;
          *puVar12 = uVar5 & 0xffffffff | uVar11 << 0x20;
          *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
          lVar14 = param_1[6];
          goto LAB_0056e64c;
        }
        local_170 = local_170 & 0xffffffffffffff00;
        lVar13 = lVar14 + uVar11 * 0x30;
        uVar5 = (**(code **)(*param_1 + 0x10))
                          (param_1,lVar15,*(undefined8 *)(lVar13 + 0xc),&local_170);
        *(ulong *)(lVar13 + 0x14) = uVar5;
        if ((char)local_170 != '\0') {
          uVar11 = uVar5 >> 0x20;
          goto LAB_0056e8a0;
        }
        *piVar16 = 0;
        plVar4 = (long *)(lVar14 + uVar11 * 0x30 + 0x28);
        *plVar4 = 0;
        uVar1 = *(ushort *)(lVar15 + 6);
        if (uVar1 == 0) goto LAB_0056e684;
        if (uVar1 != 1) {
          __s = (void *)FUN_002e2ec0(PTR_FUN_04373078,(ulong)uVar1 << 3);
          if (__s != (void *)0x0) {
            memset(__s,0,(ulong)uVar1 << 3);
          }
          *plVar4 = (long)__s;
          uVar8 = (uint)*(ushort *)(lVar15 + 6);
          if (uVar8 != 0) goto LAB_0056e68c;
LAB_0056e844:
          iVar3 = *piVar16;
LAB_0056e848:
          lVar14 = lVar14 + uVar11 * 0x30;
          uVar5 = (**(code **)(*param_1 + 0x18))
                            (param_1,lVar15,*(undefined8 *)(lVar14 + 0xc),
                             *(undefined8 *)(lVar14 + 0x14),*(long *)(lVar14 + 0x28),iVar3);
          uVar11 = uVar5 >> 0x20;
          if ((1 < *(ushort *)(lVar15 + 6)) && (lVar14 = *(long *)(lVar14 + 0x28), lVar14 != 0)) {
            FUN_002e2f10(lVar14);
            FUN_002e2ef0(PTR_LAB_04373088,lVar14);
          }
          goto LAB_0056e8a0;
        }
        *plVar4 = lVar14 + uVar11 * 0x30 + 0x1c;
        uVar8 = (uint)*(ushort *)(lVar15 + 6);
        if (uVar8 == 0) goto LAB_0056e844;
LAB_0056e68c:
        puVar6 = (undefined8 *)(lVar15 + 8);
        if (uVar8 != 1) {
          puVar6 = (undefined8 *)*puVar6;
        }
        iVar3 = *piVar16;
        if ((int)uVar8 <= iVar3) goto LAB_0056e848;
        if ((iVar3 < 1) || ((param_4 & 1) == 0)) {
          lVar15 = puVar6[iVar3];
LAB_0056e78c:
          uVar2 = *(undefined8 *)(lVar14 + uVar11 * 0x30 + 0x14);
          local_170 = 0;
          auStack_168[0] = 0;
          lVar14 = param_1[2];
          uVar5 = 0;
          if (param_1[3] - lVar14 != 0) {
            uVar5 = (param_1[3] - lVar14 >> 3) * 0x55 - 1;
          }
          uVar11 = param_1[6] + param_1[5];
          if (uVar5 == uVar11) {
            FUN_0056ea00(param_1 + 1);
            uVar11 = param_1[5] + param_1[6];
            lVar14 = param_1[2];
          }
          plVar4 = (long *)(*(long *)(lVar14 + (uVar11 / 0x55) * 8) + (uVar11 % 0x55) * 0x30);
          *plVar4 = lVar15;
          *(undefined4 *)(plVar4 + 1) = 0xffffffff;
          *(undefined8 *)((long)plVar4 + 0xc) = uVar2;
          plVar4[5] = 0;
          *(undefined8 *)((long)plVar4 + 0x1c) = auStack_168[0];
          *(ulong *)((long)plVar4 + 0x14) = local_170;
          lVar14 = param_1[6] + 1;
          param_1[6] = lVar14;
        }
        else {
          lVar15 = puVar6[iVar3];
          if (puVar6[iVar3 + -1] != lVar15) goto LAB_0056e78c;
          lVar14 = lVar14 + uVar11 * 0x30;
          uVar2 = (**(code **)(*param_1 + 0x20))
                            (param_1,*(undefined8 *)
                                      (*(long *)(lVar14 + 0x28) + (long)(iVar3 + -1) * 8));
          *(undefined8 *)(*(long *)(lVar14 + 0x28) + (long)*piVar16 * 8) = uVar2;
          *piVar16 = *piVar16 + 1;
          lVar14 = param_1[6];
        }
      } while( true );
    }
    FUN_0054f038(&local_170,"external/com_github_google_re2\\re2/walker-inl.h",0xa2);
                    /* try { // try from 0056e9dc to 0056e9e7 has its CatchHandler @ 0056e9f0 */
    FUN_00551750(auStack_168,"Walk NULL");
  }
  else {
    FUN_0054f038(&local_170,"external/com_github_google_re2\\re2/walker-inl.h",0x95);
                    /* try { // try from 0056e9b0 to 0056e9bb has its CatchHandler @ 0056e9f8 */
    FUN_00551750(auStack_168,"Stack not empty.");
  }
                    /* WARNING: Subroutine does not return */
  FUN_005503fc(&local_170);
}


