/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0130ee9c; name: FUN_0130ee9c
 */


byte FUN_0130ee9c(long param_1,ulong param_2)

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
  
  iVar5 = *(int *)(param_1 + 0x5b0);
  if ((param_2 & 1) == 0) {
    if (iVar5 == 2) goto LAB_0130ef30;
    while (iVar5 == 1) {
      FUN_0130e9c0(param_1 + 0x180);
      lVar7 = (long)*(int *)(param_1 + 0x5ac) * 0x18;
      local_80 = *(undefined8 *)(&DAT_042047b0 + lVar7);
      puStack_78 = (&PTR_s_anime_close_1_042047b8)[(long)*(int *)(param_1 + 0x5ac) * 3];
      local_70 = *(undefined8 *)(&DAT_042047c0 + lVar7);
      uStack_68 = 0;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_80);
      }
      *(undefined4 *)(param_1 + 0x5b0) = 2;
LAB_0130ef30:
      lVar7 = *(long *)(param_1 + 0x2c8);
      if (lVar7 != 0) {
        plVar11 = *(long **)(lVar7 + 0x1a0);
        lVar7 = *(long *)(lVar7 + 0x1a8);
        if ((lVar7 == 0) ||
           (*plVar11 == *(long *)(&DAT_042047b0 + (long)*(int *)(param_1 + 0x5ac) * 0x18))) {
          plVar9 = plVar11;
        }
        else {
          lVar8 = lVar7 * 0x30;
          plVar10 = plVar11;
          do {
            lVar8 = lVar8 + -0x30;
            if (lVar8 == 0) goto LAB_0130f000;
            plVar1 = plVar10 + 6;
            plVar9 = plVar10 + 6;
            plVar10 = plVar10 + 6;
          } while (*plVar1 != *(long *)(&DAT_042047b0 + (long)*(int *)(param_1 + 0x5ac) * 0x18));
        }
        if (plVar9 != plVar11 + lVar7 * 6) {
          uVar6 = (ulong)*(uint *)(plVar9 + 5);
          if (((*(uint *)(plVar9 + 5) < *(uint *)(plVar9[4] + 0x278)) &&
              (lVar7 = *(long *)(plVar9[4] + 600), *(char *)(lVar7 + uVar6 * 0x48 + 8) != '\0')) &&
             (*(char *)(lVar7 + uVar6 * 0x48 + 0xb) != '\0')) {
            plVar11 = (long *)(lVar7 + uVar6 * 0x48 + 0x10);
            lVar8 = *plVar11;
            if ((lVar8 == 0) || (*(char *)(lVar7 + uVar6 * 0x48 + 9) != '\0')) goto LAB_0130f130;
            fVar12 = *(float *)(lVar8 + 0x20);
            uVar3 = FUN_00227728();
            uVar6 = FUN_00227744(*plVar11);
            if ((fVar12 < (float)uVar3) || ((uVar6 & 1) != 0)) goto LAB_0130f130;
          }
        }
      }
LAB_0130f000:
      *(undefined4 *)(param_1 + 0x5b0) = 0;
      iVar5 = 0;
    }
LAB_0130f120:
    bVar4 = 1;
    lVar7 = *(long *)(param_1 + 0x2c8);
joined_r0x0130f178:
    if (lVar7 != 0) {
      bVar2 = *(char *)(lVar7 + 500) == '\0';
      goto LAB_0130f14c;
    }
  }
  else {
    if (iVar5 != 2) {
LAB_0130f118:
      if (iVar5 != 1) goto LAB_0130f120;
      bVar4 = 0;
      lVar7 = *(long *)(param_1 + 0x2c8);
      goto joined_r0x0130f178;
    }
    lVar7 = *(long *)(param_1 + 0x2c8);
    if (lVar7 == 0) {
LAB_0130f108:
      iVar5 = 0;
      *(undefined4 *)(param_1 + 0x5b0) = 0;
      goto LAB_0130f118;
    }
    plVar11 = *(long **)(lVar7 + 0x1a0);
    lVar7 = *(long *)(lVar7 + 0x1a8);
    if ((lVar7 == 0) ||
       (*plVar11 == *(long *)(&DAT_042047b0 + (long)*(int *)(param_1 + 0x5ac) * 0x18))) {
      plVar9 = plVar11;
    }
    else {
      lVar8 = lVar7 * 0x30;
      plVar10 = plVar11;
      do {
        lVar8 = lVar8 + -0x30;
        if (lVar8 == 0) goto LAB_0130f108;
        plVar1 = plVar10 + 6;
        plVar9 = plVar10 + 6;
        plVar10 = plVar10 + 6;
      } while (*plVar1 != *(long *)(&DAT_042047b0 + (long)*(int *)(param_1 + 0x5ac) * 0x18));
    }
    if (plVar9 == plVar11 + lVar7 * 6) goto LAB_0130f108;
    uVar6 = (ulong)*(uint *)(plVar9 + 5);
    if (((*(uint *)(plVar9[4] + 0x278) <= *(uint *)(plVar9 + 5)) ||
        (lVar7 = *(long *)(plVar9[4] + 600), *(char *)(lVar7 + uVar6 * 0x48 + 8) == '\0')) ||
       (*(char *)(lVar7 + uVar6 * 0x48 + 0xb) == '\0')) goto LAB_0130f108;
    plVar11 = (long *)(lVar7 + uVar6 * 0x48 + 0x10);
    lVar8 = *plVar11;
    if ((lVar8 != 0) && (*(char *)(lVar7 + uVar6 * 0x48 + 9) == '\0')) {
      fVar12 = *(float *)(lVar8 + 0x20);
      uVar3 = FUN_00227728();
      uVar6 = FUN_00227744(*plVar11);
      if (((float)uVar3 <= fVar12) && ((uVar6 & 1) == 0)) goto LAB_0130f108;
    }
LAB_0130f130:
    bVar4 = 0;
    if (param_1 != 0) {
      lVar7 = *(long *)(param_1 + 0x2c8);
      goto joined_r0x0130f178;
    }
  }
  bVar2 = true;
LAB_0130f14c:
  return bVar4 | bVar2;
}


