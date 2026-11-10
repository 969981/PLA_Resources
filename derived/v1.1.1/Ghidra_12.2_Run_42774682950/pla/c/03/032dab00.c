/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dab00; name: FUN_032dab00
 */


void FUN_032dab00(ulong *param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  ulong uVar13;
  short *psVar14;
  uint *puVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined1 auStack_280 [16];
  undefined8 local_270 [66];
  
  uVar13 = FUN_032e35d8();
  if ((param_1 != (ulong *)0x0) && ((uVar13 & 0x1f) == 1)) {
    return;
  }
  uVar13 = FUN_032e35d8(param_1);
  if ((param_1 != (ulong *)0x0) && ((uVar13 & 0x1f) == 0)) {
    return;
  }
  while ((*(byte *)((long)param_1 + 2) >> 4 & 1) == 0) {
    param_1 = (ulong *)param_1[1];
  }
  psVar14 = (short *)FUN_032e2008(param_1,0x100000);
  if ((psVar14 != (short *)0x0) && (*psVar14 != 0)) {
    return;
  }
  uVar13 = 0;
  if (param_1[1] != 0) {
    FUN_032dab00(param_1[1],param_2);
    uVar13 = param_1[1];
  }
  if ((*param_1 & 1) == 0) {
    puVar15 = (uint *)FUN_032e20b0(uVar13,0x100000);
    if (puVar15 == (uint *)0x0) {
      uVar8 = 0;
      bVar2 = *(byte *)((long)param_1 + 2);
    }
    else {
      uVar8 = *puVar15;
      bVar2 = *(byte *)((long)param_1 + 2);
    }
    if (((bVar2 >> 4 & 1) == 0) ||
       (puVar15 = (uint *)FUN_032e2008(param_1,0x100000), puVar15 == (uint *)0x0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *puVar15 >> 0x1c;
    }
    uVar1 = uVar8 >> 0x1c;
    if (uVar8 >> 0x1c <= uVar5) {
      uVar1 = uVar5;
    }
    iVar4 = FUN_032db4d0(local_270 + 0x47,param_2[1]);
    puVar16 = (ulong *)FUN_032e1fa4(param_1,0x100000);
    *puVar16 = (ulong)(uVar8 & 0xfffffff | uVar1 << 0x1c) & 0xfffffffff000ffff |
               (ulong)(uint)(iVar4 << 0x10) & 0xfff0000;
    return;
  }
  if ((uVar13 == 0) && (((uint)*param_1 >> 0x17 & 1) == 0)) {
    uVar13 = FUN_032e35d8(param_1);
    if ((uVar13 & 0x1f) != 8) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    puVar17 = (undefined8 *)FUN_032e20b0(param_1,1);
    if (puVar17 == (undefined8 *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)((ulong)*puVar17 >> 8);
    }
    uVar18 = FUN_032e1fec(param_1);
    FUN_032dab00(uVar18,param_2);
    FUN_032e20b0(param_1,0x100000);
    puVar15 = (uint *)FUN_032e20b0(uVar18,0x100000);
    if (puVar15 == (uint *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *puVar15;
    }
    iVar4 = (uVar8 & 0xffff) * iVar4;
    uVar8 = uVar8 >> 0x10 & 0xfff;
    if (iVar4 <= param_2[3]) {
      iVar4 = param_2[3];
    }
    uVar5 = FUN_032db4d0(local_270 + 0x47,param_2[1]);
    if ((int)uVar8 <= (int)uVar5) {
      uVar8 = uVar5;
    }
    FUN_032db580(param_1,iVar4,uVar8);
    return;
  }
  uVar13 = param_1[1];
  if (uVar13 == 0) {
    iVar4 = 0;
    uVar8 = 0;
    iVar6 = 1;
    goto LAB_032dae94;
  }
  uVar5 = FUN_032e2120(uVar13);
  iVar6 = FUN_032e2188(uVar13);
  if ((uVar5 == 1) && (*(char *)((long)param_2 + 0xb) != '\0')) {
    uVar20 = uVar13;
    if (*(char *)(uVar13 + 2) < '\0') goto LAB_032dad94;
    do {
      do {
        uVar20 = *(ulong *)(uVar20 + 8);
        uVar5 = 0;
        if (uVar20 == 0) goto LAB_032dae90;
      } while (-1 < *(char *)(uVar20 + 2));
LAB_032dad94:
      puVar17 = (undefined8 *)FUN_032e2008(uVar20,0x800000);
    } while (((puVar17 == (undefined8 *)0x0) || ((short *)*puVar17 == (short *)0x0)) ||
            (*(short *)*puVar17 == 0));
    uVar5 = 1;
    cVar3 = (char)param_2[2];
joined_r0x032dae2c:
    uVar8 = uVar5;
    if (cVar3 != '\0') {
      uVar8 = FUN_032db130(uVar13,*param_2);
      iVar4 = 0;
      if ((int)uVar5 <= (int)uVar8) {
        uVar8 = uVar5;
      }
      goto LAB_032dae94;
    }
    if ((*(char *)((long)param_2 + 9) != '\0') || (*(char *)((long)param_2 + 10) != '\0')) {
      iVar7 = FUN_032db2b0(uVar13,param_2[1]);
      if (iVar6 != iVar7) {
        iVar4 = 0;
        if (((7 < iVar6) && (iVar7 == 0)) && (*(char *)((long)param_2 + 9) != '\0')) {
          iVar4 = FUN_032db130(uVar13,*param_2);
          uVar8 = iVar4 + 7U & 0xfffffff8;
          iVar4 = 0;
          if ((int)uVar5 <= (int)uVar8) {
            uVar8 = uVar5;
          }
        }
        goto LAB_032dae94;
      }
      iVar7 = FUN_032db340(uVar13,param_2[1],*param_2);
      if (iVar7 < iVar6) {
        uVar8 = FUN_032db130(uVar13,*param_2);
        if ((int)uVar5 <= (int)uVar8) {
          uVar8 = uVar5;
        }
        iVar4 = iVar6;
        iVar6 = iVar7;
        goto LAB_032dae94;
      }
    }
  }
  else if (uVar5 != 0) {
    cVar3 = (char)param_2[2];
    goto joined_r0x032dae2c;
  }
LAB_032dae90:
  iVar4 = 0;
  uVar8 = uVar5;
LAB_032dae94:
  iVar7 = FUN_032db410(param_1,iVar6,param_2[1]);
  uVar5 = FUN_032e2598(param_1);
  iVar6 = iVar7;
  if ((uVar5 >> 7 & 1) != 0) {
    iVar12 = *param_2;
    iVar6 = iVar12;
    if (iVar12 <= iVar7) {
      iVar6 = iVar7;
    }
    iVar7 = 0;
    if (iVar6 != 0) {
      iVar7 = (int)uVar8 / iVar6;
    }
    iVar9 = uVar8 - iVar7 * iVar6;
    iVar7 = 0;
    if (iVar9 != 0) {
      iVar7 = iVar6 - iVar9;
    }
    uVar8 = iVar12 + uVar8 + iVar7;
  }
  if (((((*(byte *)((long)param_1 + 1) >> 6 & 1) != 0) &&
       (plVar19 = (long *)FUN_032e2008(param_1,0x4000), plVar19 != (long *)0x0)) &&
      (puVar16 = (ulong *)*plVar19, puVar16 != (ulong *)0x0)) && (0 < (int)*puVar16)) {
    uVar20 = *puVar16 & 0xffffffff;
    iVar7 = iVar6;
    do {
      uVar21 = puVar16[1];
      iVar9 = FUN_032e2120(uVar21);
      iVar10 = FUN_032e2188(uVar21);
      iVar12 = 0;
      if (iVar10 != 0) {
        iVar12 = (int)uVar8 / iVar10;
      }
      iVar6 = iVar10;
      if (iVar10 <= iVar7) {
        iVar6 = iVar7;
      }
      iVar12 = uVar8 - iVar12 * iVar10;
      iVar7 = 0;
      if (iVar12 != 0) {
        iVar7 = iVar10 - iVar12;
      }
      uVar20 = uVar20 - 1;
      iVar7 = iVar7 + uVar8;
      uVar8 = iVar7 + iVar9;
      puVar16[2] = (long)iVar7;
      puVar16 = puVar16 + 2;
      iVar7 = iVar6;
    } while (uVar20 != 0);
  }
  if (((*(char *)((long)param_1 + 2) < '\0') &&
      (puVar17 = (undefined8 *)FUN_032e2008(param_1,0x800000), puVar17 != (undefined8 *)0x0)) &&
     ((psVar14 = (short *)*puVar17, psVar14 != (short *)0x0 && ((long)*psVar14 != 0)))) {
    lVar22 = (long)*psVar14 << 3;
    do {
      psVar14 = psVar14 + 4;
      uVar18 = *(undefined8 *)psVar14;
      FUN_032dab00(uVar18,param_2);
      uVar11 = FUN_032e2188(uVar18);
      iVar12 = FUN_032db410(uVar18,uVar11,param_2[1]);
      iVar7 = iVar12;
      if (iVar12 <= iVar6) {
        iVar7 = iVar6;
      }
      local_270[0] = *(undefined8 *)psVar14;
      if (iVar12 != 0) {
        uVar8 = (uVar8 + iVar12) - 1 & -iVar12;
        iVar6 = iVar7;
      }
      iVar7 = FUN_032e3f8c(local_270);
      puVar16 = (ulong *)FUN_032e1fa4(local_270[0],0x20000);
      *puVar16 = (ulong)(uVar8 & 0xffff | iVar7 << 0x10);
      iVar7 = FUN_032e2120(uVar18);
      uVar8 = iVar7 + uVar8;
      lVar22 = lVar22 + -8;
    } while (lVar22 != 0);
  }
  if ((int)uVar8 <= param_2[3]) {
    uVar8 = param_2[3];
  }
  if (iVar4 <= iVar6) {
    iVar4 = iVar6;
  }
  if (iVar4 != 0) {
    iVar6 = 0;
    if (iVar4 != 0) {
      iVar6 = (int)uVar8 / iVar4;
    }
    iVar7 = uVar8 - iVar6 * iVar4;
    iVar6 = 0;
    if (iVar7 != 0) {
      iVar6 = iVar4 - iVar7;
    }
    uVar8 = iVar6 + uVar8;
  }
  if ((int)uVar8 < 2) {
    uVar8 = 1;
  }
  if ((uVar13 != 0) && (iVar6 = FUN_032e2120(uVar13), (int)uVar8 < iVar6)) {
    FUN_0331fefc(auStack_280,local_270,0x200);
    FUN_0332448c(auStack_280,
                 "Child\'s final size is less than parent\'s! (Do you have a trailing unreflected field?)"
                );
    iVar6 = FUN_03320b30(0x71544192,local_270,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Builder/hkRecordLayout.cpp"
                         ,0x13d);
    if (iVar6 != 0) {
      CallSupervisor(0x26);
    }
    FUN_0331ff7c(auStack_280);
  }
  FUN_032db580(param_1,uVar8,iVar4);
  return;
}


