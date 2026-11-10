/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0e97c; name: FUN_02f0e97c
 */


undefined8 FUN_02f0e97c(long *param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  byte bVar4;
  float fVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  
  *param_1 = param_2[1];
  bVar4 = *(byte *)(param_1 + 8) & 0xfe | *(byte *)((long)param_2 + 0x24);
  *(byte *)(param_1 + 8) = bVar4;
  cVar3 = *(char *)((long)param_2 + 0x26);
  *(byte *)(param_1 + 8) = bVar4 & 0xfd | cVar3 << 1;
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
  *(int *)(param_1 + 2) = (int)param_2[2];
  fVar16 = *(float *)(param_2 + 2);
  fVar15 = *(float *)((long)param_2 + 0x14);
  if (*(char *)((long)param_2 + 0x24) != '\0') {
    fVar5 = 0.0;
    if (-37.0 <= fVar16 * 0.05) {
      uVar9 = (uint)(fVar16 * 1393317.6 + 1.0653532e+09);
      fVar16 = (float)(uVar9 & 0x7fffff | 0x3f800000);
      fVar5 = (fVar16 * (fVar16 * 0.32518977 + 0.020805772) + 0.65304345) *
              (float)(uVar9 & 0xff800000);
    }
    fVar16 = fVar5;
    if (fVar15 * 0.05 < -37.0) {
      fVar15 = 0.0;
    }
    else {
      uVar9 = (uint)(fVar15 * 1393317.6 + 1.0653532e+09);
      fVar15 = (float)(uVar9 & 0x7fffff | 0x3f800000);
      fVar15 = (fVar15 * (fVar15 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar9 & 0xff800000);
    }
  }
  *(float *)(param_1 + 1) = fVar16;
  *(float *)((long)param_1 + 0xc) = fVar15;
  iVar8 = *(int *)((long)param_2 + 0x1c);
  if ((((fVar15 <= fVar16) && (*(char *)((long)param_2 + 0x25) != '\0')) && (iVar8 != 5)) &&
     (iVar8 != 3)) {
    iVar8 = 8 - iVar8;
  }
  *(int *)(param_1 + 7) = iVar8;
  *(undefined4 *)(param_1 + 3) = param_3;
  iVar8 = 0;
  if (DAT_042ab25c != 0) {
    iVar8 = ((int)param_2[3] + DAT_042ab25c + -1) / DAT_042ab25c;
  }
  *(int *)((long)param_1 + 0x1c) = iVar8;
  *(undefined4 *)(param_1 + 4) = 0;
  *(int *)(param_1 + 9) = (int)param_2[4];
  if ((cVar3 != '\0') && ((int)param_2[3] != 0)) {
    fVar15 = expf((float)(int)-(uint)DAT_042ab268 / ((float)(int)param_2[3] * 9.6));
    *(float *)((long)param_1 + 0x44) = fVar15;
  }
  plVar7 = (long *)param_1[5];
  uVar9 = *(uint *)(param_1 + 6);
  lVar13 = *param_2;
  plVar2 = plVar7 + uVar9;
  plVar10 = plVar7;
  if ((uVar9 != 0) && (*plVar7 != lVar13)) {
    lVar11 = (ulong)uVar9 * 8;
    plVar12 = plVar7;
    do {
      lVar11 = lVar11 + -8;
      if (lVar11 == 0) {
        plVar10 = plVar2;
        if (plVar2 == (long *)0x0) goto LAB_02f0ea6c;
        goto LAB_02f0ea64;
      }
      plVar10 = plVar12 + 1;
      plVar1 = plVar12 + 1;
      plVar12 = plVar10;
    } while (*plVar1 != lVar13);
  }
  if (plVar10 == (long *)0x0) {
LAB_02f0ea6c:
    uVar14 = *(uint *)((long)param_1 + 0x34);
    if (uVar9 < uVar14) {
LAB_02f0eaac:
      if (uVar9 < uVar14) {
        uVar9 = *(uint *)(param_1 + 6);
        *(uint *)(param_1 + 6) = uVar9 + 1;
        if (plVar7 + uVar9 != (long *)0x0) {
          plVar7[uVar9] = lVar13;
          goto LAB_02f0eacc;
        }
      }
    }
    else {
      iVar8 = uVar14 + (uVar14 >> 1);
      if (uVar14 == 0) {
        iVar8 = 1;
      }
      uVar14 = iVar8 + uVar14;
      plVar7 = (long *)(*DAT_0442d148)(0,plVar7,(ulong)uVar14 << 3);
      if (plVar7 != (long *)0x0) {
        param_1[5] = (long)plVar7;
        *(uint *)((long)param_1 + 0x34) = uVar14;
        goto LAB_02f0eaac;
      }
    }
    uVar6 = 2;
  }
  else {
LAB_02f0ea64:
    if (plVar2 == plVar10) goto LAB_02f0ea6c;
LAB_02f0eacc:
    uVar6 = 1;
  }
  return uVar6;
}


