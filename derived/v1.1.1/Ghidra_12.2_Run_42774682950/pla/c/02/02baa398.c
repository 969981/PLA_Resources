/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02baa398; name: FUN_02baa398
 */


void FUN_02baa398(long *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  int local_54;
  
  piVar14 = (int *)*param_1;
  piVar3 = (int *)param_1[1];
  if (piVar14 != piVar3) {
    do {
      iVar4 = *piVar14;
      if ((char)piVar14[2] == '\0') {
        lVar9 = param_2[2];
        iVar5 = 0x3f;
        if (iVar4 != 0) {
          iVar5 = iVar4;
        }
        uVar11 = 0;
      }
      else {
        local_54 = iVar4;
        puVar8 = (undefined8 *)FUN_02b80638(*(undefined8 *)(*param_2 + 0x6120));
        uVar11 = *puVar8;
        piVar1 = (int *)(puVar8 + 2);
        if (iVar4 != 0) {
          piVar1 = &local_54;
        }
        lVar9 = param_2[2];
        iVar5 = *piVar1;
      }
      (*DAT_043f0c00)(lVar9,uVar11,iVar5);
      piVar14 = piVar14 + 0xc;
    } while (piVar3 != piVar14);
  }
  if (param_1[7] == 0) {
    FUN_02baa8b0(param_1,param_2);
    return;
  }
  lVar9 = *(long *)(param_1[7] + 0x20);
  uVar6 = *(uint *)(lVar9 + 0xa0);
  uVar13 = *(ulong *)(*(long *)(lVar9 + 0x98) + 0x138);
  uVar12 = (uint)uVar13;
  if (uVar6 < 3) {
    uVar12 = uVar12 & uVar6 - 1;
  }
  else {
    iVar4 = 0;
    if ((ulong)uVar6 != 0) {
      iVar4 = (int)(uVar13 / uVar6);
    }
    uVar12 = uVar12 - iVar4 * uVar6;
  }
  plVar10 = (long *)FUN_02bc0470((long)(int)uVar12,lVar9 + 0x58);
  cVar7 = (char)*plVar10;
  if (((char)param_2[0x5c] == '\0') || (cVar7 == '\0')) {
    if (cVar7 != '\0' && (cVar7 != '\0' || (char)param_2[0x5c] != '\0')) {
      lVar9 = plVar10[1];
      goto LAB_02baa518;
    }
  }
  else {
    lVar9 = plVar10[1];
    if (param_2[0x5d] != lVar9) {
LAB_02baa518:
      lVar2 = 0;
      if (cVar7 != '\0') {
        lVar2 = lVar9;
      }
      param_2[0x5e] = *(long *)(lVar2 + 0x40);
      lVar9 = plVar10[1];
      param_2[0x5c] = *plVar10;
      param_2[0x5d] = lVar9;
    }
  }
  plVar10 = (long *)param_1[7];
  if ((char)plVar10[5] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x02baa564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_043f0ca8)(param_2[2],(int)param_2[0x6b],param_2[0x5e]);
    return;
  }
  lVar9 = *plVar10;
  if (lVar9 != 0) {
    uVar6 = *(uint *)(lVar9 + 0xa0);
    uVar13 = *(ulong *)(*(long *)(lVar9 + 0x98) + 0x138);
    uVar12 = (uint)uVar13;
    if (uVar6 < 3) {
      uVar12 = uVar12 & uVar6 - 1;
    }
    else {
      iVar4 = 0;
      if ((ulong)uVar6 != 0) {
        iVar4 = (int)(uVar13 / uVar6);
      }
      uVar12 = uVar12 - iVar4 * uVar6;
    }
    plVar10 = (long *)FUN_02bc0470((long)(int)uVar12,lVar9 + 0x58);
    cVar7 = (char)*plVar10;
    if (((char)param_2[0x5f] == '\0') || (cVar7 == '\0')) {
      if (cVar7 != '\0' || (char)param_2[0x5f] != '\0') goto LAB_02baa5d4;
    }
    else if (param_2[0x60] != plVar10[1]) {
LAB_02baa5d4:
      if (cVar7 != '\0') {
        uVar15 = *(undefined8 *)(plVar10[1] + 0x40);
        lVar9 = param_2[2];
        uVar11 = (*DAT_043f04a0)(*(undefined8 *)(plVar10[1] + 0x20));
        (*DAT_043f0c28)(lVar9,0,uVar15,uVar11);
      }
      lVar9 = plVar10[1];
      param_2[0x5f] = *plVar10;
      param_2[0x60] = lVar9;
    }
    plVar10 = (long *)param_1[7];
  }
  lVar9 = plVar10[1];
  if (lVar9 != 0) {
    uVar6 = *(uint *)(lVar9 + 0xa0);
    uVar13 = *(ulong *)(*(long *)(lVar9 + 0x98) + 0x138);
    uVar12 = (uint)uVar13;
    if (uVar6 < 3) {
      uVar12 = uVar12 & uVar6 - 1;
    }
    else {
      iVar4 = 0;
      if ((ulong)uVar6 != 0) {
        iVar4 = (int)(uVar13 / uVar6);
      }
      uVar12 = uVar12 - iVar4 * uVar6;
    }
    plVar10 = (long *)FUN_02bc0470((long)(int)uVar12,lVar9 + 0x58);
    cVar7 = (char)*plVar10;
    if (((char)param_2[0x61] == '\0') || (cVar7 == '\0')) {
      if (cVar7 != '\0' || (char)param_2[0x61] != '\0') goto LAB_02baa68c;
    }
    else if (param_2[0x62] != plVar10[1]) {
LAB_02baa68c:
      if (cVar7 != '\0') {
        uVar15 = *(undefined8 *)(plVar10[1] + 0x40);
        lVar9 = param_2[2];
        uVar11 = (*DAT_043f04a0)(*(undefined8 *)(plVar10[1] + 0x20));
        (*DAT_043f0c28)(lVar9,1,uVar15,uVar11);
      }
      lVar9 = plVar10[1];
      param_2[0x61] = *plVar10;
      param_2[0x62] = lVar9;
    }
    plVar10 = (long *)param_1[7];
  }
  lVar9 = plVar10[2];
  if (lVar9 != 0) {
    uVar6 = *(uint *)(lVar9 + 0xa0);
    uVar13 = *(ulong *)(*(long *)(lVar9 + 0x98) + 0x138);
    uVar12 = (uint)uVar13;
    if (uVar6 < 3) {
      uVar12 = uVar12 & uVar6 - 1;
    }
    else {
      iVar4 = 0;
      if ((ulong)uVar6 != 0) {
        iVar4 = (int)(uVar13 / uVar6);
      }
      uVar12 = uVar12 - iVar4 * uVar6;
    }
    plVar10 = (long *)FUN_02bc0470((long)(int)uVar12,lVar9 + 0x58);
    cVar7 = (char)*plVar10;
    if (((char)param_2[99] == '\0') || (cVar7 == '\0')) {
      if (cVar7 != '\0' || (char)param_2[99] != '\0') goto LAB_02baa744;
    }
    else if (param_2[100] != plVar10[1]) {
LAB_02baa744:
      if (cVar7 != '\0') {
        uVar15 = *(undefined8 *)(plVar10[1] + 0x40);
        lVar9 = param_2[2];
        uVar11 = (*DAT_043f04a0)(*(undefined8 *)(plVar10[1] + 0x20));
        (*DAT_043f0c28)(lVar9,2,uVar15,uVar11);
      }
      lVar9 = plVar10[1];
      param_2[99] = *plVar10;
      param_2[100] = lVar9;
    }
    plVar10 = (long *)param_1[7];
  }
  lVar9 = plVar10[3];
  if (lVar9 == 0) goto LAB_02baa848;
  uVar6 = *(uint *)(lVar9 + 0xa0);
  uVar13 = *(ulong *)(*(long *)(lVar9 + 0x98) + 0x138);
  uVar12 = (uint)uVar13;
  if (uVar6 < 3) {
    uVar12 = uVar12 & uVar6 - 1;
  }
  else {
    iVar4 = 0;
    if ((ulong)uVar6 != 0) {
      iVar4 = (int)(uVar13 / uVar6);
    }
    uVar12 = uVar12 - iVar4 * uVar6;
  }
  plVar10 = (long *)FUN_02bc0470((long)(int)uVar12,lVar9 + 0x58);
  cVar7 = (char)*plVar10;
  if (((char)param_2[0x65] == '\0') || (cVar7 == '\0')) {
    if (cVar7 != '\0' || (char)param_2[0x65] != '\0') goto LAB_02baa7fc;
  }
  else if (param_2[0x66] != plVar10[1]) {
LAB_02baa7fc:
    if (cVar7 != '\0') {
      uVar15 = *(undefined8 *)(plVar10[1] + 0x40);
      lVar9 = param_2[2];
      uVar11 = (*DAT_043f04a0)(*(undefined8 *)(plVar10[1] + 0x20));
      (*DAT_043f0c28)(lVar9,3,uVar15,uVar11);
    }
    lVar9 = plVar10[1];
    param_2[0x65] = *plVar10;
    param_2[0x66] = lVar9;
  }
  plVar10 = (long *)param_1[7];
LAB_02baa848:
  (*DAT_043f0de0)(param_2[2],*(undefined1 *)((long)plVar10 + 0x29));
  (*DAT_043f0c88)(param_2[2],param_2[0x5e]);
  FUN_02baa8b0(param_1,param_2);
  (*DAT_043f0c90)(param_2[2],param_2[0x5e]);
                    /* WARNING: Could not recover jumptable at 0x02baa8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_043f0de0)(param_2[2],0);
  return;
}


