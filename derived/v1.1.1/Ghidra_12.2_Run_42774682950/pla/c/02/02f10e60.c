/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f10e60; name: FUN_02f10e60
 */


undefined4 FUN_02f10e60(float param_1)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  int iVar11;
  ushort uVar12;
  ulong uVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  undefined8 local_70;
  undefined1 local_68;
  
  uVar2 = DAT_0440add8;
  uVar1 = DAT_0440add0;
  plVar14 = DAT_0440adc8;
  if ((DAT_0440ad38 - DAT_0440adb0) + 1U <= (uint)DAT_0440add8) {
    return 1;
  }
  uVar13 = (ulong)DAT_0440add0;
  if (DAT_0440add0 == 0) {
    lVar8 = 0;
    fVar16 = 101.0;
    bVar10 = false;
    uVar12 = 0;
    iVar11 = 2;
    goto LAB_02f110f4;
  }
  lVar7 = *DAT_0440adc8;
  if (((*(uint *)(lVar7 + 0x2a3) >> 0x10 & 1) == 0) &&
     ((*(uint *)(lVar7 + 0x2a3) & 0x6000000) == 0 && (*(ushort *)(lVar7 + 0x198) & 0x100) == 0)) {
    fVar15 = *(float *)(lVar7 + 0x2a8);
    if (param_1 < fVar15) {
      uVar12 = 1;
      goto LAB_02f11174;
    }
    iVar5 = FUN_02ecddbc(lVar7,&local_70);
    bVar4 = iVar5 == 0;
    bVar10 = uVar2 != 0 && bVar4;
    fVar16 = 101.0;
    if (!bVar4) {
      fVar16 = fVar15;
    }
    iVar11 = 2;
    if (!bVar4) {
      iVar11 = iVar5;
    }
    lVar8 = 0;
    if (!bVar4) {
      lVar8 = lVar7;
    }
    uVar12 = 1;
  }
  else {
    uVar12 = 0;
LAB_02f11174:
    bVar10 = false;
    iVar11 = 2;
    lVar8 = 0;
    fVar16 = 101.0;
  }
  if (uVar1 != 1) {
    lVar7 = plVar14[1];
    uVar3 = uVar12;
    if (((*(uint *)(lVar7 + 0x2a3) >> 0x10 & 1) == 0) &&
       ((*(uint *)(lVar7 + 0x2a3) & 0x6000000) == 0 && (*(ushort *)(lVar7 + 0x198) & 0x100) == 0)) {
      fVar15 = *(float *)(lVar7 + 0x2a8);
      uVar3 = uVar12 + 1;
      if (fVar15 <= param_1) {
        iVar5 = FUN_02ecddbc(lVar7,&local_70);
        if (iVar5 != 0) {
          lVar8 = lVar7;
          iVar11 = iVar5;
          fVar16 = fVar15;
        }
        bVar10 = (bool)(bVar10 | (uVar12 < uVar2 && iVar5 == 0));
      }
    }
    uVar12 = uVar3;
    if (uVar1 != 2) {
      lVar7 = plVar14[2];
      if ((((*(uint *)(lVar7 + 0x2a3) >> 0x10 & 1) == 0) &&
          ((*(uint *)(lVar7 + 0x2a3) & 0x6000000) == 0)) &&
         ((*(ushort *)(lVar7 + 0x198) >> 8 & 1) == 0)) {
        fVar15 = *(float *)(lVar7 + 0x2a8);
        uVar12 = uVar12 + 1;
        if (fVar15 <= param_1) {
          iVar5 = FUN_02ecddbc(lVar7,&local_70);
          if (iVar5 != 0) {
            lVar8 = lVar7;
            iVar11 = iVar5;
            fVar16 = fVar15;
          }
          bVar10 = (bool)(bVar10 | (uVar12 <= uVar2 && iVar5 == 0));
        }
      }
      if (uVar1 != 3) {
        plVar14 = plVar14 + 3;
        lVar7 = uVar13 * 8 + -0x18;
        do {
          lVar9 = *plVar14;
          if (((*(uint *)(lVar9 + 0x2a3) >> 0x10 & 1) == 0) &&
             ((*(uint *)(lVar9 + 0x2a3) & 0x6000000) == 0 &&
              (*(ushort *)(lVar9 + 0x198) & 0x100) == 0)) {
            fVar15 = *(float *)(lVar9 + 0x2a8);
            uVar12 = uVar12 + 1;
            if (fVar15 <= param_1) {
              iVar5 = FUN_02ecddbc(lVar9,&local_70);
              if (iVar5 != 0) {
                lVar8 = lVar9;
                iVar11 = iVar5;
                fVar16 = fVar15;
              }
              bVar10 = (bool)(bVar10 | (uVar12 <= uVar2 && iVar5 == 0));
            }
          }
          plVar14 = plVar14 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
  }
LAB_02f110f4:
  if (uVar12 < uVar2) {
    return 1;
  }
  if (param_1 <= fVar16) {
    lVar8 = 0;
  }
  else if ((lVar8 != 0) && (iVar11 == 1)) {
    uVar1 = *(uint *)(lVar8 + 0x2a3);
    if ((uVar1 >> 0x10 & 1) == 0) {
      *(uint *)(lVar8 + 0x2a3) = uVar1 & 0xfff00000 | uVar1 & 0xffff | 0x50000;
    }
    local_70 = 0x400000000;
    local_68 = 0;
    FUN_02ecc3d4(lVar8,&local_70,1);
  }
  uVar6 = 0x50;
  if ((bool)(bVar10 | lVar8 != 0)) {
    uVar6 = 1;
  }
  return uVar6;
}


