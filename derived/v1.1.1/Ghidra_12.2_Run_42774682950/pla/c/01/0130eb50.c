/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0130eb50; name: FUN_0130eb50
 */


byte FUN_0130eb50(long *param_1,ulong param_2)

{
  long *plVar1;
  bool bVar2;
  ushort uVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  float fVar12;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  iVar5 = (int)param_1[0xb6];
  if ((param_2 & 1) == 0) {
    if (iVar5 == 2) goto LAB_0130ebf4;
    while (iVar5 == 1) {
      (**(code **)(*param_1 + 0xd0))(param_1);
      FUN_0130e9c0(param_1 + 0x30);
      lVar7 = (long)*(int *)((long)param_1 + 0x5ac) * 0x18;
      local_80 = *(undefined8 *)(&DAT_04204768 + lVar7);
      puStack_78 = (&PTR_s_anime_wake_1_04204770)[(long)*(int *)((long)param_1 + 0x5ac) * 3];
      local_70 = *(undefined8 *)(&DAT_04204778 + lVar7);
      uStack_68 = 0;
      if (param_1[0x59] != 0) {
        FUN_0283b1e8(param_1[0x59],&local_80);
      }
      *(undefined4 *)(param_1 + 0xb6) = 2;
LAB_0130ebf4:
      lVar7 = param_1[0x59];
      if (lVar7 != 0) {
        plVar11 = *(long **)(lVar7 + 0x1a0);
        lVar7 = *(long *)(lVar7 + 0x1a8);
        if ((lVar7 == 0) ||
           (*plVar11 == *(long *)(&DAT_04204768 + (long)*(int *)((long)param_1 + 0x5ac) * 0x18))) {
          plVar9 = plVar11;
        }
        else {
          lVar8 = lVar7 * 0x30;
          plVar10 = plVar11;
          do {
            lVar8 = lVar8 + -0x30;
            if (lVar8 == 0) goto LAB_0130ecc4;
            plVar1 = plVar10 + 6;
            plVar9 = plVar10 + 6;
            plVar10 = plVar10 + 6;
          } while (*plVar1 !=
                   *(long *)(&DAT_04204768 + (long)*(int *)((long)param_1 + 0x5ac) * 0x18));
        }
        if (plVar9 != plVar11 + lVar7 * 6) {
          uVar6 = (ulong)*(uint *)(plVar9 + 5);
          if (((*(uint *)(plVar9 + 5) < *(uint *)(plVar9[4] + 0x278)) &&
              (lVar7 = *(long *)(plVar9[4] + 600), *(char *)(lVar7 + uVar6 * 0x48 + 8) != '\0')) &&
             (*(char *)(lVar7 + uVar6 * 0x48 + 0xb) != '\0')) {
            plVar11 = (long *)(lVar7 + uVar6 * 0x48 + 0x10);
            lVar8 = *plVar11;
            if ((lVar8 == 0) || (*(char *)(lVar7 + uVar6 * 0x48 + 9) != '\0')) goto LAB_0130edf4;
            fVar12 = *(float *)(lVar8 + 0x20);
            uVar3 = FUN_00227728();
            uVar6 = FUN_00227744(*plVar11);
            if ((fVar12 < (float)uVar3) || ((uVar6 & 1) != 0)) goto LAB_0130edf4;
          }
        }
      }
LAB_0130ecc4:
      *(undefined4 *)(param_1 + 0xb6) = 0;
      iVar5 = 0;
    }
LAB_0130ee34:
    bVar4 = 1;
    lVar7 = param_1[0x59];
joined_r0x0130edec:
    if (lVar7 != 0) {
      bVar2 = *(char *)(lVar7 + 500) == '\0';
      goto LAB_0130ee10;
    }
  }
  else {
    if (iVar5 != 2) {
LAB_0130eddc:
      if (iVar5 != 1) goto LAB_0130ee34;
      bVar4 = 0;
      lVar7 = param_1[0x59];
      goto joined_r0x0130edec;
    }
    lVar7 = param_1[0x59];
    if (lVar7 == 0) {
LAB_0130edcc:
      iVar5 = 0;
      *(undefined4 *)(param_1 + 0xb6) = 0;
      goto LAB_0130eddc;
    }
    plVar11 = *(long **)(lVar7 + 0x1a0);
    lVar7 = *(long *)(lVar7 + 0x1a8);
    if ((lVar7 == 0) ||
       (*plVar11 == *(long *)(&DAT_04204768 + (long)*(int *)((long)param_1 + 0x5ac) * 0x18))) {
      plVar9 = plVar11;
    }
    else {
      lVar8 = lVar7 * 0x30;
      plVar10 = plVar11;
      do {
        lVar8 = lVar8 + -0x30;
        if (lVar8 == 0) goto LAB_0130edcc;
        plVar1 = plVar10 + 6;
        plVar9 = plVar10 + 6;
        plVar10 = plVar10 + 6;
      } while (*plVar1 != *(long *)(&DAT_04204768 + (long)*(int *)((long)param_1 + 0x5ac) * 0x18));
    }
    if (plVar9 == plVar11 + lVar7 * 6) goto LAB_0130edcc;
    uVar6 = (ulong)*(uint *)(plVar9 + 5);
    if (((*(uint *)(plVar9[4] + 0x278) <= *(uint *)(plVar9 + 5)) ||
        (lVar7 = *(long *)(plVar9[4] + 600), *(char *)(lVar7 + uVar6 * 0x48 + 8) == '\0')) ||
       (*(char *)(lVar7 + uVar6 * 0x48 + 0xb) == '\0')) goto LAB_0130edcc;
    plVar11 = (long *)(lVar7 + uVar6 * 0x48 + 0x10);
    lVar8 = *plVar11;
    if ((lVar8 != 0) && (*(char *)(lVar7 + uVar6 * 0x48 + 9) == '\0')) {
      fVar12 = *(float *)(lVar8 + 0x20);
      uVar3 = FUN_00227728();
      uVar6 = FUN_00227744(*plVar11);
      if (((float)uVar3 <= fVar12) && ((uVar6 & 1) == 0)) goto LAB_0130edcc;
    }
LAB_0130edf4:
    bVar4 = 0;
    if (param_1 != (long *)0x0) {
      lVar7 = param_1[0x59];
      goto joined_r0x0130edec;
    }
  }
  bVar2 = true;
LAB_0130ee10:
  return bVar4 | bVar2;
}


