/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281c4e0; name: FUN_0281c4e0
 */


void FUN_0281c4e0(long *param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  bool bVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pcVar12 = (code *)param_1[0xb3];
  plVar1 = param_1 + 0xb2;
  if (pcVar12 != (code *)0x0) {
    param_1[0xb4] = 0;
    param_1[0xb5] = 0;
    *plVar1 = 0;
    param_1[0xb3] = 0;
    (*pcVar12)(param_1 + 0xb6);
  }
  iVar15 = (int)param_1[0x10b];
  *(undefined1 *)((long)param_1 + 0x9f7) = 0;
  if (iVar15 == 1) {
    lVar13 = param_1[0x116];
    if (*(int *)(lVar13 + 0x28) == 0) {
      iVar15 = *(int *)((long)param_1 + 0x85c) + *(int *)(lVar13 + 0x20) * (int)param_1[0x10c];
    }
    else {
      iVar15 = (int)param_1[0x10c] + *(int *)(lVar13 + 0x24) * *(int *)((long)param_1 + 0x85c);
    }
    FUN_02819878(param_1,iVar15 + *(int *)(lVar13 + 0x14),*(undefined4 *)(lVar13 + 0x10));
    FUN_028354b0(param_1 + 0x138);
    return;
  }
  if (iVar15 == 2) {
    if ((code *)param_1[0x82] != (code *)0x0) {
      (*(code *)param_1[0x82])(param_1 + 0x86);
    }
    if ((*(char *)((long)param_1 + 0x91a) == '\0') && ((char)param_1[0x14] == '\0')) {
      plVar10 = (long *)param_1[0x11];
      if (plVar10 == (long *)0x0) {
        plVar10 = param_1;
      }
      else {
        for (plVar7 = (long *)plVar10[0x11]; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[0x11]) {
          plVar10 = plVar7;
        }
      }
      FUN_02807d40(plVar10,0);
      (**(code **)(*param_1 + 0xa8))(param_1,1);
      for (plVar10 = (long *)param_1[0x11]; plVar10 != (long *)0x0; plVar10 = (long *)plVar10[0x11])
      {
        (**(code **)(*plVar10 + 0xb0))(plVar10,1,param_1);
      }
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
    *(undefined1 *)((long)param_1 + 0xa1) = 1;
    lVar13 = param_1[0x116];
    *(undefined1 *)((long)param_1 + 0xa4) = 0;
    bVar8 = *(int *)(lVar13 + 0x28) != 0;
    plVar10 = param_1 + 0x10c;
    if (bVar8) {
      plVar10 = (long *)((long)param_1 + 0x85c);
    }
    lVar18 = *plVar10;
    fVar20 = *(float *)(param_1[0xff] + 0x1d4);
    iVar15 = *(int *)(lVar13 + 0x14);
    piVar2 = (int *)(lVar13 + 0x20);
    if (bVar8) {
      piVar2 = (int *)(lVar13 + 0x24);
    }
    iVar16 = *piVar2;
    uVar9 = (**(code **)(*(long *)param_1[0x20] + 0x58))();
    if (((uVar9 <= (uint)(iVar15 + iVar16 * (int)(fVar20 + (float)(int)lVar18))) &&
        (plVar10 = (long *)param_1[0x110], plVar10 != (long *)0x0)) &&
       (*(char *)((long)plVar10 + 0xa3) != '\0')) {
      *(undefined1 *)((long)plVar10 + 0xa3) = 0;
      (**(code **)(*plVar10 + 0xa0))(plVar10,0);
    }
    *(undefined4 *)((long)param_1 + 0x9e4) = 0;
    lVar18 = *(long *)((long)param_1 + 0x85c);
    lVar13 = param_1[0x116];
    *(undefined4 *)(param_1 + 0x13e) = 0;
    param_1[0x13d] = lVar18;
    iVar6 = *(int *)(lVar13 + 0x20);
    iVar16 = *(int *)(lVar13 + 0x24);
    iVar4 = *(int *)(lVar13 + 0x28);
    iVar3 = *(int *)(lVar13 + 0x10);
    iVar5 = *(int *)(lVar13 + 0x14);
    iVar15 = iVar6;
    if (iVar4 != 0) {
      iVar15 = iVar16;
    }
    iVar17 = (int)lVar18;
    if (iVar4 == 0) {
      iVar19 = iVar5 + iVar17 + ((int)param_1[0x10c] + iVar3) * iVar6;
      iVar17 = 0;
      if (iVar6 != 0) {
        iVar17 = iVar19 / iVar6;
      }
      iVar19 = iVar19 - iVar17 * iVar6;
      iVar16 = iVar6;
    }
    else {
      iVar17 = iVar5 + iVar16 * (iVar3 + iVar17) + (int)param_1[0x10c];
      iVar19 = 0;
      if (iVar16 != 0) {
        iVar19 = iVar17 / iVar16;
      }
      iVar17 = iVar17 - iVar19 * iVar16;
    }
    iVar6 = 0;
    if (iVar16 != 0) {
      iVar6 = (iVar5 + iVar15 * iVar3) / iVar16;
    }
    if (iVar4 != 0) {
      iVar17 = iVar19;
    }
    FUN_0282efc8((float)((iVar3 - iVar6) + iVar17),param_1[0xff],
                 *(undefined4 *)((long)param_1 + 0x984));
    pcVar12 = (code *)param_1[0xb3];
    if (pcVar12 != (code *)0x0) {
      param_1[0xb4] = 0;
      param_1[0xb5] = 0;
      *plVar1 = 0;
      param_1[0xb3] = 0;
      (*pcVar12)(param_1 + 0xb6);
    }
    puVar14 = &LAB_0281ce74;
  }
  else {
    if (iVar15 != 4) {
      if (iVar15 == 3) {
        FUN_0281d280(param_1);
        return;
      }
      return;
    }
    if ((code *)param_1[0xd2] != (code *)0x0) {
      lVar13 = param_1[0x116];
      piVar2 = (int *)(lVar13 + 0x20);
      if (*(int *)(lVar13 + 0x28) != 0) {
        piVar2 = (int *)(lVar13 + 0x24);
      }
      local_50 = CONCAT44(local_50._4_4_,*(int *)(lVar13 + 0x14) + *piVar2 * *(int *)(lVar13 + 0x10)
                         );
      uVar11 = (*(code *)param_1[0xd2])(param_1 + 0xd6,&local_50,(long)param_1 + 0x85c);
      if ((uVar11 & 1) == 0) {
        return;
      }
    }
    if (*(int *)((long)param_1 + 0x714) == 1) {
      uVar11 = FUN_0282d5d0(param_1[0x116],(long)param_1 + 0x85c);
      if ((uVar11 & 1) == 0) {
        lVar13 = param_1[0x116];
        iVar15 = *(int *)(lVar13 + 0x28);
        iVar16 = *(int *)((long)param_1 + 0x85c);
        if (iVar15 == 0) {
          iVar3 = (int)param_1[0x10c];
          iVar4 = iVar16 + *(int *)(lVar13 + 0x20) * iVar3;
        }
        else {
          iVar3 = (int)param_1[0x10c];
          iVar4 = iVar3 + *(int *)(lVar13 + 0x24) * iVar16;
        }
        iVar4 = iVar4 + *(int *)(lVar13 + 0x14);
        if (iVar4 < 0) {
          return;
        }
        if (*(int *)(lVar13 + 0x10) < *(int *)(lVar13 + 0xc)) {
          iVar6 = *(int *)(lVar13 + 0x20);
          iVar17 = *(int *)(lVar13 + 0x24);
          iVar5 = iVar17 * iVar6 + -1;
        }
        else {
          iVar6 = *(int *)(lVar13 + 0x20);
          iVar17 = *(int *)(lVar13 + 0x24);
          iVar5 = iVar6;
          if (iVar15 != 0) {
            iVar5 = iVar17;
          }
          iVar5 = *(int *)(lVar13 + 8) + ~(iVar5 * *(int *)(lVar13 + 0xc));
        }
        if (iVar5 < iVar4) {
          return;
        }
        if (iVar15 == 0) {
          iVar16 = iVar16 + iVar6 * iVar3;
        }
        else {
          iVar16 = iVar3 + iVar17 * iVar16;
        }
        FUN_02819878(param_1,iVar16 + *(int *)(lVar13 + 0x14));
        FUN_028354b0(param_1 + 0x138);
        return;
      }
      *(undefined1 *)((long)param_1 + 0x9f7) = 1;
      if ((code *)param_1[0x82] != (code *)0x0) {
        (*(code *)param_1[0x82])(param_1 + 0x86);
      }
      lVar13 = param_1[0x116];
      iVar16 = *(int *)(lVar13 + 0x24);
      iVar4 = *(int *)(lVar13 + 0x28);
      iVar6 = *(int *)(lVar13 + 0x20);
      iVar3 = *(int *)(lVar13 + 0x10);
      iVar5 = *(int *)(lVar13 + 0x14);
      iVar15 = iVar6;
      if (iVar4 != 0) {
        iVar15 = iVar16;
      }
      if (iVar4 == 0) {
        iVar19 = *(int *)((long)param_1 + 0x85c) + iVar5 + ((int)param_1[0x10c] + iVar3) * iVar6;
        iVar17 = 0;
        if (iVar6 != 0) {
          iVar17 = iVar19 / iVar6;
        }
        iVar19 = iVar19 - iVar17 * iVar6;
        iVar16 = iVar6;
      }
      else {
        iVar17 = (int)param_1[0x10c] + iVar5 + (*(int *)((long)param_1 + 0x85c) + iVar3) * iVar16;
        iVar19 = 0;
        if (iVar16 != 0) {
          iVar19 = iVar17 / iVar16;
        }
        iVar17 = iVar17 - iVar19 * iVar16;
      }
      iVar6 = 0;
      if (iVar16 != 0) {
        iVar6 = (iVar5 + iVar15 * iVar3) / iVar16;
      }
      if (iVar4 != 0) {
        iVar17 = iVar19;
      }
      lVar13 = param_1[0x112];
      fVar20 = (float)((iVar3 - iVar6) + iVar17);
      if (*(char *)(lVar13 + 8) != '\0') {
        FUN_0282d0b4(lVar13);
        uVar22 = (**(code **)(**(long **)(lVar13 + 0x10) + 0x30))
                           (*(long **)(lVar13 + 0x10),lVar13 + 0x58);
        uStack_48 = *(undefined8 *)(lVar13 + 200);
        fVar24 = (float)uVar22 + *(float *)(lVar13 + 0xb0) * 0.5;
        uVar23 = (undefined4)((ulong)uVar22 >> 0x20);
        *(undefined8 *)(lVar13 + 200) = uStack_48;
        *(ulong *)(lVar13 + 0xc0) = CONCAT44(uVar23,fVar24);
        if (*(char *)(lVar13 + 0xd4) == '\0') {
          fVar21 = (float)(int)fVar20;
        }
        else {
          fVar21 = fVar20;
        }
        local_50 = CONCAT44(uVar23,fVar24 + *(float *)(lVar13 + 0xd0) * fVar21);
        (**(code **)(**(long **)(lVar13 + 0x10) + 0x28))
                  (*(long **)(lVar13 + 0x10),lVar13 + 0x38,&local_50);
      }
      plVar10 = (long *)param_1[0x110];
      if ((plVar10 != (long *)0x0) && (*(char *)((long)plVar10 + 0xa3) != '\0')) {
        *(undefined1 *)((long)plVar10 + 0xa3) = 0;
        (**(code **)(*plVar10 + 0xa0))(plVar10,0);
      }
      FUN_0281dc48(param_1,0);
      FUN_0282efc8(fVar20,param_1[0xff],(int)param_1[0x131]);
      if ((*(char *)((long)param_1 + 0x91a) == '\0') && ((char)param_1[0x14] == '\0')) {
        plVar10 = (long *)param_1[0x11];
        if (plVar10 == (long *)0x0) {
          plVar10 = param_1;
        }
        else {
          for (plVar7 = (long *)plVar10[0x11]; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[0x11])
          {
            plVar10 = plVar7;
          }
        }
        FUN_02807d40(plVar10,0);
        (**(code **)(*param_1 + 0xa8))(param_1,1);
        for (plVar10 = (long *)param_1[0x11]; plVar10 != (long *)0x0;
            plVar10 = (long *)plVar10[0x11]) {
          (**(code **)(*plVar10 + 0xb0))(plVar10,1,param_1);
        }
        *(undefined1 *)(param_1 + 0x14) = 1;
      }
      *(undefined1 *)((long)param_1 + 0xa1) = 1;
      pcVar12 = (code *)param_1[0xb3];
      *(undefined1 *)((long)param_1 + 0xa4) = 0;
      if (pcVar12 != (code *)0x0) {
        param_1[0xb4] = 0;
        param_1[0xb5] = 0;
        *plVar1 = 0;
        param_1[0xb3] = 0;
        (*pcVar12)(param_1 + 0xb6);
      }
      puVar14 = &LAB_0281cb2c;
    }
    else {
      if (*(int *)((long)param_1 + 0x714) != 2) {
        return;
      }
      uVar11 = FUN_0281cc24(param_1);
      if ((uVar11 & 1) == 0) {
        return;
      }
      pcVar12 = (code *)param_1[0xb3];
      if (pcVar12 != (code *)0x0) {
        param_1[0xb4] = 0;
        param_1[0xb5] = 0;
        *plVar1 = 0;
        param_1[0xb3] = 0;
        (*pcVar12)(param_1 + 0xb6);
      }
      puVar14 = &LAB_0281ce24;
    }
  }
  param_1[0xb7] = (long)puVar14;
  param_1[0xb3] = (long)&LAB_028216a8;
  param_1[0xb4] = (long)&LAB_028216ac;
  param_1[0xb6] = (long)param_1;
  param_1[0xb8] = 0;
  param_1[0xb2] = (long)&LAB_0282168c;
  param_1[0xb5] = (long)&LAB_028216c0;
  return;
}


