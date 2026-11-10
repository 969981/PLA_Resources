/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281cc24; name: FUN_0281cc24
 */


undefined8 FUN_0281cc24(long *param_1)

{
  long *plVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  float fVar13;
  float local_34;
  float local_28;
  float local_24;
  
  lVar12 = param_1[0x116];
  iVar11 = *(int *)(lVar12 + 0x28);
  plVar10 = (long *)((long)param_1 + 0x75c);
  if (iVar11 != 0) {
    plVar10 = param_1 + 0xeb;
  }
  plVar1 = (long *)((long)param_1 + 0x85c);
  if (iVar11 != 0) {
    plVar1 = param_1 + 0x10c;
  }
  iVar5 = (int)*plVar1;
  lVar9 = param_1[0xff];
  fVar13 = *(float *)(lVar9 + 0x1d4);
  local_24 = fVar13 + (float)(iVar5 * (int)*plVar10);
  local_28 = *(float *)(lVar9 + 0x1a0);
  pfVar2 = &local_28;
  if (local_28 <= local_24) {
    pfVar2 = &local_24;
  }
  local_24 = *pfVar2;
  local_34 = *(float *)(lVar9 + 0x1a4);
  pfVar3 = &local_34;
  if (*pfVar2 <= local_34) {
    pfVar3 = &local_24;
  }
  fVar6 = *pfVar3;
  local_24 = fVar6;
  if (iVar5 < 1) {
    bVar7 = false;
    bVar8 = true;
    if (iVar5 != 0) {
      bVar7 = false;
      bVar8 = true;
      if (!NAN(fVar13) && !NAN(local_28)) {
        bVar7 = fVar13 == local_28;
        bVar8 = local_28 <= fVar13;
      }
    }
    if (!bVar8 || bVar7) {
      if (*(int *)(lVar12 + 0x14) == 0) {
        return 0;
      }
      iVar5 = *(int *)(lVar12 + 0x10);
      iVar11 = 0;
      goto LAB_0281cdf8;
    }
  }
  else if (local_34 <= fVar13) {
    iVar5 = *(int *)(lVar12 + 0x10);
    if (iVar5 < *(int *)(lVar12 + 0xc)) {
      iVar11 = *(int *)(lVar12 + 0x24) * *(int *)(lVar12 + 0x20) + -1;
    }
    else {
      piVar4 = (int *)(lVar12 + 0x20);
      if (iVar11 != 0) {
        piVar4 = (int *)(lVar12 + 0x24);
      }
      iVar11 = *(int *)(lVar12 + 8) + ~(*piVar4 * *(int *)(lVar12 + 0xc));
    }
    if (*(int *)(lVar12 + 0x14) == iVar11) {
      return 0;
    }
LAB_0281cdf8:
    FUN_02819878(param_1,iVar11,iVar5);
    FUN_028354b0(param_1 + 0x138);
    return 0;
  }
  if ((code *)param_1[0x82] != (code *)0x0) {
    (*(code *)param_1[0x82])(param_1 + 0x86);
    lVar9 = param_1[0xff];
  }
  FUN_0282efc8(fVar6,lVar9,*(undefined4 *)((long)param_1 + 0x98c));
  if ((*(char *)((long)param_1 + 0x91a) == '\0') && ((char)param_1[0x14] == '\0')) {
    plVar10 = (long *)param_1[0x11];
    if (plVar10 == (long *)0x0) {
      plVar10 = param_1;
    }
    else {
      for (plVar1 = (long *)plVar10[0x11]; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[0x11]) {
        plVar10 = plVar1;
      }
    }
    FUN_02807d40(plVar10,0);
    (**(code **)(*param_1 + 0xa8))(param_1,1);
    for (plVar10 = (long *)param_1[0x11]; plVar10 != (long *)0x0; plVar10 = (long *)plVar10[0x11]) {
      (**(code **)(*plVar10 + 0xb0))(plVar10,1,param_1);
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  *(undefined1 *)((long)param_1 + 0xa1) = 1;
  return 1;
}


