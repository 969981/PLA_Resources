/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5efa0; name: FUN_00d5efa0
 */


undefined8 FUN_00d5efa0(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  float fVar14;
  long local_a0 [3];
  long *local_88;
  long local_80 [3];
  long *local_68;
  
  uVar4 = FUN_00d5f468(local_80,param_1,*(undefined4 *)(param_1 + 0x1624),
                       *(undefined4 *)(param_1 + 0x1628),param_2 & 1,0);
  plVar8 = local_68;
  lVar11 = *(long *)(param_1 + 0x2c8);
  if (lVar11 != 0) {
    plVar12 = *(long **)(lVar11 + 0x1a0);
    lVar5 = *(long *)(lVar11 + 0x1a8);
    if (local_68 != (long *)0x0) {
      uVar4 = (**(code **)(*local_68 + 0x18))(local_68);
    }
    plVar10 = plVar12;
    if ((lVar5 != 0) && (*plVar12 != local_80[0])) {
      lVar9 = lVar5 * 0x30;
      plVar6 = plVar12 + lVar5 * 6;
      do {
        lVar9 = lVar9 + -0x30;
        plVar10 = plVar6;
        if (lVar9 == 0) break;
        plVar1 = plVar12 + 6;
        plVar12 = plVar12 + 6;
        plVar10 = plVar12;
      } while (*plVar1 != local_80[0]);
    }
    if (plVar8 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    if (plVar10 != (long *)(*(long *)(lVar11 + 0x1a0) + *(long *)(lVar11 + 0x1a8) * 0x30)) {
      lVar11 = plVar10[4];
      uVar2 = *(uint *)(plVar10 + 4 + 1);
      uVar7 = (ulong)uVar2;
      if (((uVar2 < *(uint *)(lVar11 + 0x278)) &&
          (lVar11 = *(long *)(lVar11 + 600), *(char *)(lVar11 + uVar7 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar11 + uVar7 * 0x48 + 0xb) != '\0')) {
        plVar12 = (long *)(lVar11 + uVar7 * 0x48 + 0x10);
        lVar5 = *plVar12;
        if ((lVar5 == 0) || (*(char *)(lVar11 + uVar7 * 0x48 + 9) != '\0')) {
          uVar13 = 0;
          goto joined_r0x00d5f2d0;
        }
        fVar14 = *(float *)(lVar5 + 0x20);
        uVar3 = FUN_00227728();
        uVar4 = FUN_00227744(*plVar12);
        uVar13 = 0;
        if ((fVar14 < (float)uVar3) || ((uVar4 & 1) != 0)) goto joined_r0x00d5f2d0;
      }
    }
  }
  FUN_00d5f468(local_a0,uVar4,*(undefined4 *)(param_1 + 0x1624),*(undefined4 *)(param_1 + 0x1628),
               param_2 & 1,1);
  lVar11 = *(long *)(param_1 + 0x2c8);
  if (lVar11 == 0) {
    uVar13 = 1;
    goto joined_r0x00d5f294;
  }
  plVar8 = *(long **)(lVar11 + 0x1a0);
  lVar5 = *(long *)(lVar11 + 0x1a8);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x18))(local_88);
  }
  plVar12 = plVar8;
  if ((lVar5 != 0) && (*plVar8 != local_a0[0])) {
    lVar9 = lVar5 * 0x30;
    plVar10 = plVar8 + lVar5 * 6;
    do {
      lVar9 = lVar9 + -0x30;
      plVar12 = plVar10;
      if (lVar9 == 0) break;
      plVar6 = plVar8 + 6;
      plVar8 = plVar8 + 6;
      plVar12 = plVar8;
    } while (*plVar6 != local_a0[0]);
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))(local_88);
  }
  plVar8 = (long *)(*(long *)(lVar11 + 0x1a0) + *(long *)(lVar11 + 0x1a8) * 0x30);
  if (plVar12 == plVar8) {
    plVar10 = (long *)0x0;
    if (plVar12 != plVar8) goto LAB_00d5f1dc;
LAB_00d5f2b4:
    uVar13 = 1;
  }
  else {
    plVar10 = plVar12 + 4;
    if (plVar12 == plVar8) goto LAB_00d5f2b4;
LAB_00d5f1dc:
    uVar4 = (ulong)*(uint *)(plVar10 + 1);
    if (((*(uint *)(*plVar10 + 0x278) <= *(uint *)(plVar10 + 1)) ||
        (lVar11 = *(long *)(*plVar10 + 600), *(char *)(lVar11 + uVar4 * 0x48 + 8) == '\0')) ||
       (*(char *)(lVar11 + uVar4 * 0x48 + 0xb) == '\0')) goto LAB_00d5f2b4;
    plVar8 = (long *)(lVar11 + uVar4 * 0x48 + 0x10);
    lVar5 = *plVar8;
    if ((lVar5 == 0) || (*(char *)(lVar11 + uVar4 * 0x48 + 9) != '\0')) {
      uVar13 = 0;
    }
    else {
      fVar14 = *(float *)(lVar5 + 0x20);
      uVar3 = FUN_00227728();
      uVar4 = FUN_00227744(*plVar8);
      uVar13 = 0;
      if (((float)uVar3 <= fVar14) && ((uVar4 & 1) == 0)) goto LAB_00d5f2b4;
    }
  }
joined_r0x00d5f294:
  plVar8 = local_68;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))(local_88);
    plVar8 = local_68;
  }
joined_r0x00d5f2d0:
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  return uVar13;
}


