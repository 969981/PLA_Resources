/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01257200; name: FUN_01257200
 */


void FUN_01257200(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ushort uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  float fVar11;
  
  cVar2 = *(char *)(param_1 + 0x1490);
  if (cVar2 != '\x01') {
    if (cVar2 != '\x03') {
      if (cVar2 == '\x02') {
        FUN_0125689c(param_1,1);
        FUN_0124f408(param_1,*(undefined4 *)
                              (*(long *)(param_1 + 0x13e0) + (ulong)*(byte *)(param_1 + 0x1418) * 4)
                    );
        FUN_01257104(param_1);
        *(undefined1 *)(param_1 + 0x1490) = 3;
        return;
      }
      return;
    }
    lVar6 = *(long *)(param_1 + 0x2c8);
    if (lVar6 == 0) goto LAB_01257704;
    plVar10 = *(long **)(lVar6 + 0x1a0);
    lVar6 = *(long *)(lVar6 + 0x1a8);
    if ((lVar6 == 0) || (*plVar10 == 0x5deb53e286553cde)) {
      plVar9 = plVar10;
    }
    else {
      lVar8 = lVar6 * 0x30;
      plVar7 = plVar10;
      do {
        lVar8 = lVar8 + -0x30;
        if (lVar8 == 0) goto LAB_012575d0;
        plVar1 = plVar7 + 6;
        plVar9 = plVar7 + 6;
        plVar7 = plVar7 + 6;
      } while (*plVar1 != 0x5deb53e286553cde);
    }
    plVar10 = plVar10 + lVar6 * 6;
    if (plVar9 == plVar10) {
      plVar7 = (long *)0x0;
      if (plVar9 != plVar10) goto LAB_0125741c;
LAB_012575d0:
      bVar3 = true;
LAB_012575d4:
      lVar6 = *(long *)(param_1 + 0x2c8);
    }
    else {
      plVar7 = plVar9 + 4;
      if (plVar9 == plVar10) goto LAB_012575d0;
LAB_0125741c:
      uVar5 = (ulong)*(uint *)(plVar7 + 1);
      if (((*(uint *)(*plVar7 + 0x278) <= *(uint *)(plVar7 + 1)) ||
          (lVar6 = *(long *)(*plVar7 + 600), *(char *)(lVar6 + uVar5 * 0x48 + 8) == '\0')) ||
         (*(char *)(lVar6 + uVar5 * 0x48 + 0xb) == '\0')) goto LAB_012575d0;
      plVar10 = (long *)(lVar6 + uVar5 * 0x48 + 0x10);
      lVar8 = *plVar10;
      if ((lVar8 != 0) && (*(char *)(lVar6 + uVar5 * 0x48 + 9) == '\0')) {
        fVar11 = *(float *)(lVar8 + 0x20);
        uVar4 = FUN_00227728();
        uVar5 = FUN_00227744(*plVar10);
        bVar3 = false;
        if (((float)uVar4 <= fVar11) && ((uVar5 & 1) == 0)) goto LAB_012575d0;
        goto LAB_012575d4;
      }
      bVar3 = false;
      lVar6 = *(long *)(param_1 + 0x2c8);
    }
    if (lVar6 != 0) {
      plVar10 = *(long **)(lVar6 + 0x1a0);
      lVar6 = *(long *)(lVar6 + 0x1a8);
      if ((lVar6 == 0) || (*plVar10 == -0x258b3015c7413061)) {
        plVar9 = plVar10;
      }
      else {
        lVar8 = lVar6 * 0x30;
        plVar7 = plVar10;
        do {
          lVar8 = lVar8 + -0x30;
          if (lVar8 == 0) goto LAB_01257700;
          plVar1 = plVar7 + 6;
          plVar9 = plVar7 + 6;
          plVar7 = plVar7 + 6;
        } while (*plVar1 != -0x258b3015c7413061);
      }
      if (plVar9 != plVar10 + lVar6 * 6) {
        uVar5 = (ulong)*(uint *)(plVar9 + 5);
        if (((*(uint *)(plVar9 + 5) < *(uint *)(plVar9[4] + 0x278)) &&
            (lVar6 = *(long *)(plVar9[4] + 600), *(char *)(lVar6 + uVar5 * 0x48 + 8) != '\0')) &&
           (*(char *)(lVar6 + uVar5 * 0x48 + 0xb) != '\0')) {
          plVar10 = (long *)(lVar6 + uVar5 * 0x48 + 0x10);
          lVar8 = *plVar10;
          if (lVar8 == 0) {
            return;
          }
          if (*(char *)(lVar6 + uVar5 * 0x48 + 9) != '\0') {
            return;
          }
          fVar11 = *(float *)(lVar8 + 0x20);
          uVar4 = FUN_00227728();
          uVar5 = FUN_00227744(*plVar10);
          if (fVar11 < (float)uVar4) {
            return;
          }
          if ((uVar5 & 1) != 0) {
            return;
          }
          if ((bool)(bVar3 ^ 1)) {
            return;
          }
          goto LAB_01257704;
        }
      }
    }
LAB_01257700:
    if (!bVar3) {
      return;
    }
LAB_01257704:
    FUN_00d42438(param_1,1,1);
    *(undefined1 *)(param_1 + 0x1490) = 0;
    return;
  }
  lVar6 = *(long *)(param_1 + 0x2c8);
  if (lVar6 == 0) goto LAB_012576e8;
  plVar10 = *(long **)(lVar6 + 0x1a0);
  lVar6 = *(long *)(lVar6 + 0x1a8);
  if ((lVar6 == 0) || (*plVar10 == 0x5deb53e286553cde)) {
    plVar9 = plVar10;
  }
  else {
    lVar8 = lVar6 * 0x30;
    plVar7 = plVar10;
    do {
      lVar8 = lVar8 + -0x30;
      if (lVar8 == 0) goto LAB_012574bc;
      plVar1 = plVar7 + 6;
      plVar9 = plVar7 + 6;
      plVar7 = plVar7 + 6;
    } while (*plVar1 != 0x5deb53e286553cde);
  }
  plVar10 = plVar10 + lVar6 * 6;
  if (plVar9 == plVar10) {
    plVar7 = (long *)0x0;
    if (plVar9 != plVar10) goto LAB_01257368;
LAB_012574bc:
    bVar3 = true;
LAB_012574c0:
    lVar6 = *(long *)(param_1 + 0x2c8);
  }
  else {
    plVar7 = plVar9 + 4;
    if (plVar9 == plVar10) goto LAB_012574bc;
LAB_01257368:
    uVar5 = (ulong)*(uint *)(plVar7 + 1);
    if (((*(uint *)(*plVar7 + 0x278) <= *(uint *)(plVar7 + 1)) ||
        (lVar6 = *(long *)(*plVar7 + 600), *(char *)(lVar6 + uVar5 * 0x48 + 8) == '\0')) ||
       (*(char *)(lVar6 + uVar5 * 0x48 + 0xb) == '\0')) goto LAB_012574bc;
    plVar10 = (long *)(lVar6 + uVar5 * 0x48 + 0x10);
    lVar8 = *plVar10;
    if ((lVar8 != 0) && (*(char *)(lVar6 + uVar5 * 0x48 + 9) == '\0')) {
      fVar11 = *(float *)(lVar8 + 0x20);
      uVar4 = FUN_00227728();
      uVar5 = FUN_00227744(*plVar10);
      bVar3 = false;
      if (((float)uVar4 <= fVar11) && ((uVar5 & 1) == 0)) goto LAB_012574bc;
      goto LAB_012574c0;
    }
    bVar3 = false;
    lVar6 = *(long *)(param_1 + 0x2c8);
  }
  if (lVar6 != 0) {
    plVar10 = *(long **)(lVar6 + 0x1a0);
    lVar6 = *(long *)(lVar6 + 0x1a8);
    if ((lVar6 == 0) || (*plVar10 == -0x258b3015c7413061)) {
      plVar9 = plVar10;
    }
    else {
      lVar8 = lVar6 * 0x30;
      plVar7 = plVar10;
      do {
        lVar8 = lVar8 + -0x30;
        if (lVar8 == 0) goto LAB_012576e4;
        plVar1 = plVar7 + 6;
        plVar9 = plVar7 + 6;
        plVar7 = plVar7 + 6;
      } while (*plVar1 != -0x258b3015c7413061);
    }
    if (plVar9 != plVar10 + lVar6 * 6) {
      uVar5 = (ulong)*(uint *)(plVar9 + 5);
      if (((*(uint *)(plVar9 + 5) < *(uint *)(plVar9[4] + 0x278)) &&
          (lVar6 = *(long *)(plVar9[4] + 600), *(char *)(lVar6 + uVar5 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar6 + uVar5 * 0x48 + 0xb) != '\0')) {
        plVar10 = (long *)(lVar6 + uVar5 * 0x48 + 0x10);
        lVar8 = *plVar10;
        if (lVar8 == 0) {
          return;
        }
        if (*(char *)(lVar6 + uVar5 * 0x48 + 9) != '\0') {
          return;
        }
        fVar11 = *(float *)(lVar8 + 0x20);
        uVar4 = FUN_00227728();
        uVar5 = FUN_00227744(*plVar10);
        if (fVar11 < (float)uVar4) {
          return;
        }
        if ((uVar5 & 1) != 0) {
          return;
        }
        if ((bool)(bVar3 ^ 1)) {
          return;
        }
        goto LAB_012576e8;
      }
    }
  }
LAB_012576e4:
  if (!bVar3) {
    return;
  }
LAB_012576e8:
  *(undefined1 *)(param_1 + 0x1490) = 2;
  return;
}


