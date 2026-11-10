/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01443720; name: FUN_01443720
 */


void FUN_01443720(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *local_58;
  
  lVar8 = *param_2;
  if (lVar8 != 0) {
    piVar2 = (int *)(lVar8 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar8;
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x60) = param_2[1];
  *(long *)(param_1 + 0x68) = param_2[2];
  *(long *)(param_1 + 0x70) = param_2[3];
  plVar6 = (long *)param_2[4];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = *(long **)(param_1 + 0x78);
  *(long **)(param_1 + 0x78) = plVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(long *)(param_1 + 0x80) = param_2[5];
  *(long *)(param_1 + 0x88) = param_2[6];
  *(long *)(param_1 + 0x90) = param_2[7];
  plVar6 = (long *)param_2[8];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = *(long **)(param_1 + 0x98);
  *(long **)(param_1 + 0x98) = plVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(long *)(param_1 + 0xa0) = param_2[9];
  *(long *)(param_1 + 0xa8) = param_2[10];
  *(long *)(param_1 + 0xb0) = param_2[0xb];
  plVar6 = (long *)param_2[0xc];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = *(long **)(param_1 + 0xb8);
  *(long **)(param_1 + 0xb8) = plVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(long *)(param_1 + 0xc0) = param_2[0xd];
  *(long *)(param_1 + 200) = param_2[0xe];
  *(long *)(param_1 + 0xd0) = param_2[0xf];
  plVar6 = (long *)param_2[0x10];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = *(long **)(param_1 + 0xd8);
  *(long **)(param_1 + 0xd8) = plVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(long *)(param_1 + 0xe0) = param_2[0x11];
  *(long *)(param_1 + 0xe8) = param_2[0x12];
  *(long *)(param_1 + 0xf0) = param_2[0x13];
  plVar6 = (long *)param_2[0x14];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = *(long **)(param_1 + 0xf8);
  *(long **)(param_1 + 0xf8) = plVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(long *)(param_1 + 0x100) = param_2[0x15];
  *(long *)(param_1 + 0x108) = param_2[0x16];
  *(long *)(param_1 + 0x110) = param_2[0x17];
  plVar6 = (long *)param_2[0x18];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = *(long **)(param_1 + 0x118);
  *(long **)(param_1 + 0x118) = plVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  if (**(char **)(param_1 + 0x68) == '\0') {
    return;
  }
  lVar8 = param_1 + 0x60;
  FUN_014417ec(&local_58,lVar8,param_1 + 0xa0);
  plVar6 = local_58;
  if (local_58 == (long *)0x0) {
    lVar11 = *(long *)PTR_DAT_04379c88;
LAB_01443e3c:
    lVar12 = *(long *)PTR_PTR_04379d00;
    if (local_58 != (long *)0x0) goto LAB_01443914;
LAB_01443e4c:
    lVar13 = 0;
  }
  else {
    lVar11 = local_58[0xb];
    if (local_58 == (long *)0x0) goto LAB_01443e3c;
    lVar12 = local_58[0xc];
    if (local_58 == (long *)0x0) goto LAB_01443e4c;
LAB_01443914:
    lVar13 = local_58[0xd];
    (**(code **)(*local_58 + 0x18))(local_58);
  }
  plVar7 = *(long **)(param_1 + 0x140);
  *(long *)(param_1 + 0x128) = lVar11;
  *(long *)(param_1 + 0x130) = lVar12;
  *(long *)(param_1 + 0x138) = lVar13;
  *(undefined8 *)(param_1 + 0x140) = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(long **)(param_1 + 0x140) = plVar6;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  FUN_01443f00(&local_58,param_1 + 0x80);
  plVar6 = local_58;
  if (local_58 == (long *)0x0) {
    lVar11 = *(long *)PTR_DAT_04379c88;
LAB_01443e64:
    lVar12 = *(long *)PTR_PTR_04379d00;
    if (local_58 != (long *)0x0) goto LAB_01443988;
LAB_01443e74:
    lVar13 = 0;
  }
  else {
    lVar11 = local_58[0xb];
    if (local_58 == (long *)0x0) goto LAB_01443e64;
    lVar12 = local_58[0xc];
    if (local_58 == (long *)0x0) goto LAB_01443e74;
LAB_01443988:
    lVar13 = local_58[0xd];
    (**(code **)(*local_58 + 0x18))(local_58);
  }
  plVar7 = *(long **)(param_1 + 0x160);
  *(long *)(param_1 + 0x148) = lVar11;
  *(long *)(param_1 + 0x150) = lVar12;
  *(long *)(param_1 + 0x158) = lVar13;
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(long **)(param_1 + 0x160) = plVar6;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  lVar12 = *(long *)(param_1 + 0x58);
  plVar6 = *(long **)(lVar12 + 0x148);
  lVar11 = *(long *)(lVar12 + 0x150);
  lVar13 = *(long *)(param_1 + 0x128);
  plVar7 = *(long **)(param_1 + 0x140);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar14 = plVar6;
  if ((lVar11 != 0) && (*plVar6 != lVar13)) {
    lVar10 = lVar11 * 0x30;
    plVar9 = plVar6 + lVar11 * 6;
    do {
      lVar10 = lVar10 + -0x30;
      plVar14 = plVar9;
      if (lVar10 == 0) break;
      plVar1 = plVar6 + 6;
      plVar6 = plVar6 + 6;
      plVar14 = plVar6;
    } while (*plVar1 != lVar13);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (plVar14 == (long *)(*(long *)(lVar12 + 0x148) + *(long *)(lVar12 + 0x150) * 0x30)) {
    lVar11 = 0;
  }
  else {
    lVar11 = plVar14[4];
  }
  lVar12 = *(long *)(param_1 + 0x58);
  *(long *)(param_1 + 0x168) = lVar11;
  FUN_014417ec(&local_58,lVar8,param_1 + 0xc0);
  plVar6 = local_58;
  if (local_58 == (long *)0x0) {
    lVar11 = *(long *)PTR_DAT_04379c88;
LAB_01443e8c:
    plVar7 = *(long **)(lVar12 + 0x148);
    lVar13 = *(long *)(lVar12 + 0x150);
    plVar14 = plVar7 + lVar13 * 6;
  }
  else {
    lVar11 = local_58[0xb];
    if (local_58 == (long *)0x0) goto LAB_01443e8c;
    (**(code **)(*local_58 + 0x18))(local_58);
    plVar7 = *(long **)(lVar12 + 0x148);
    lVar13 = *(long *)(lVar12 + 0x150);
    plVar14 = plVar7 + lVar13 * 6;
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (lVar13 != 0) {
    lVar13 = *plVar7;
    while ((lVar13 != lVar11 && (plVar9 = plVar7 + 6, plVar7 = plVar14, plVar14 != plVar9))) {
      lVar13 = *plVar9;
      plVar7 = plVar9;
    }
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if (plVar7 == (long *)(*(long *)(lVar12 + 0x148) + *(long *)(lVar12 + 0x150) * 0x30)) {
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  else {
    *(long *)(param_1 + 0x170) = plVar7[4];
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  lVar11 = *(long *)(param_1 + 0x58);
  FUN_014417ec(&local_58,lVar8,param_1 + 0xe0);
  plVar6 = local_58;
  if (local_58 == (long *)0x0) {
    lVar12 = *(long *)PTR_DAT_04379c88;
LAB_01443eb8:
    plVar7 = *(long **)(lVar11 + 0x148);
    lVar13 = *(long *)(lVar11 + 0x150);
    plVar14 = plVar7 + lVar13 * 6;
  }
  else {
    lVar12 = local_58[0xb];
    if (local_58 == (long *)0x0) goto LAB_01443eb8;
    (**(code **)(*local_58 + 0x18))(local_58);
    plVar7 = *(long **)(lVar11 + 0x148);
    lVar13 = *(long *)(lVar11 + 0x150);
    plVar14 = plVar7 + lVar13 * 6;
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (lVar13 != 0) {
    lVar13 = *plVar7;
    while ((lVar13 != lVar12 && (plVar9 = plVar7 + 6, plVar7 = plVar14, plVar14 != plVar9))) {
      lVar13 = *plVar9;
      plVar7 = plVar9;
    }
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if (plVar7 == (long *)(*(long *)(lVar11 + 0x148) + *(long *)(lVar11 + 0x150) * 0x30)) {
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  else {
    *(long *)(param_1 + 0x178) = plVar7[4];
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  lVar11 = *(long *)(param_1 + 0x58);
  FUN_014417ec(&local_58,lVar8,param_1 + 0x100);
  plVar6 = local_58;
  if (local_58 == (long *)0x0) {
    lVar8 = *(long *)PTR_DAT_04379c88;
  }
  else {
    lVar8 = local_58[0xb];
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))(local_58);
      plVar7 = *(long **)(lVar11 + 0x148);
      lVar12 = *(long *)(lVar11 + 0x150);
      plVar14 = plVar7 + lVar12 * 6;
      (**(code **)(*plVar6 + 0x18))(plVar6);
      goto joined_r0x01443ef8;
    }
  }
  plVar7 = *(long **)(lVar11 + 0x148);
  lVar12 = *(long *)(lVar11 + 0x150);
  plVar14 = plVar7 + lVar12 * 6;
joined_r0x01443ef8:
  if (lVar12 != 0) {
    lVar12 = *plVar7;
    while ((lVar12 != lVar8 && (plVar9 = plVar7 + 6, plVar7 = plVar14, plVar14 != plVar9))) {
      lVar12 = *plVar9;
      plVar7 = plVar9;
    }
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if (plVar7 == (long *)(*(long *)(lVar11 + 0x148) + *(long *)(lVar11 + 0x150) * 0x30)) {
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
  else {
    *(long *)(param_1 + 0x180) = plVar7[4];
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


