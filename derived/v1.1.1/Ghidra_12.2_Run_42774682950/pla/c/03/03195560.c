/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03195560; name: FUN_03195560
 */


ulong FUN_03195560(long param_1,int *param_2,long param_3,undefined8 *param_4,int *param_5,
                  long *param_6,undefined4 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 unaff_x27;
  float fVar15;
  float fVar16;
  float fVar17;
  uint local_e0;
  int local_d0 [2];
  int local_c8 [2];
  undefined1 auStack_c0 [24];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar6 = *(long *)(param_1 + 0x20);
  iVar4 = *param_2;
  if ((*(int *)(lVar6 + 0x108) == 0) ||
     ((*(byte *)(*(long *)(lVar6 + 0x100) + (long)iVar4) & 1) == 0)) {
    if (param_6 != (long *)0x0) {
      local_c8[0] = iVar4;
      uVar7 = (**(code **)(*param_6 + 0x28))(param_6,param_1,local_c8,param_7,param_8);
      if ((int)uVar7 == 0) {
        return uVar7;
      }
      iVar4 = *param_2;
    }
    *param_5 = iVar4;
    lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x68);
    piVar1 = (int *)(*(long *)(lVar10 + 0x18) + (long)*param_2 * 0x10);
    lVar6 = *(long *)(lVar10 + 0x28);
    lVar8 = *(long *)(lVar10 + 0x38);
    puVar2 = (undefined8 *)(lVar8 + (long)*(int *)(lVar6 + (long)*piVar1 * 0x14) * 0x10);
    uStack_78 = puVar2[1];
    local_80 = *puVar2;
    iVar4 = *piVar1 + 1;
    if (iVar4 < *piVar1 + (int)(short)piVar1[2] + -1) {
      fVar17 = (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
      lVar9 = (long)iVar4;
      lVar13 = (lVar9 + (long)iVar4 * 4) * 4;
      fVar16 = ABS(fVar17 + -0.5);
      fVar17 = ABS(fVar17 + -0.5);
      bVar11 = false;
      while( true ) {
        lVar9 = lVar9 + 1;
        puVar2 = (undefined8 *)(lVar8 + (long)*(int *)(lVar6 + lVar13) * 0x10);
        uStack_88 = puVar2[1];
        local_90 = *puVar2;
        puVar2 = (undefined8 *)(lVar8 + (long)((int *)(lVar6 + lVar13))[1] * 0x10);
        uStack_98 = puVar2[1];
        local_a0 = *puVar2;
        local_a8 = CONCAT44(fVar17 + 0.5,fVar16 + 0.5);
        iVar4 = FUN_001d42c0(param_3,&local_80,&local_90,&local_a0,0,&local_a8,auStack_c0);
        if (iVar4 == 0) {
        }
        else {
          fVar15 = ABS((float)local_a8 + -0.5);
          if (fVar15 < fVar16) {
            bVar11 = true;
            unaff_x27 = local_a8;
            fVar16 = fVar15;
            fVar17 = ABS((float)((ulong)local_a8 >> 0x20) + -0.5);
          }
        }
        if ((int)(short)piVar1[2] + *piVar1 + -1 <= lVar9) break;
        lVar6 = *(long *)(lVar10 + 0x28);
        lVar13 = lVar13 + 0x14;
        lVar8 = *(long *)(lVar10 + 0x38);
      }
      if (bVar11) {
        *param_4 = unaff_x27;
        return 1;
      }
    }
    uVar7 = 0;
  }
  else {
    local_80 = CONCAT44(local_80._4_4_,iVar4);
    cVar3 = FUN_0318fe6c(lVar6,&local_80,&local_90,&local_a0);
    if (cVar3 == '\0') {
      uVar7 = 0;
      iVar4 = -1;
      uVar14 = 0x3f8000003f800000;
    }
    else {
      if ((int)local_90 < (int)local_a0) {
        if (param_6 == (long *)0x0) {
          uVar14 = 0x3f8000003f800000;
          iVar4 = -1;
          local_e0 = 0;
          fVar16 = 0.5;
          iVar12 = (int)local_90;
          do {
            uVar7 = FUN_031952d0(*(undefined8 *)(param_1 + 0x20),iVar12,param_3,&local_80);
            if (((uVar7 & 1) != 0) && (fVar17 = ABS((float)local_80 + -0.5), fVar17 < fVar16)) {
              local_e0 = 1;
              uVar14 = local_80;
              iVar4 = iVar12;
              fVar16 = fVar17;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)local_a0);
        }
        else {
          uVar14 = 0x3f8000003f800000;
          iVar4 = -1;
          local_e0 = 0;
          fVar16 = 0.5;
          iVar12 = (int)local_90;
          do {
            local_d0[0] = iVar12;
            iVar5 = (**(code **)(*param_6 + 0x28))(param_6,param_1,local_d0,param_7,param_8);
            if (((iVar5 != 0) &&
                (uVar7 = FUN_031952d0(*(undefined8 *)(param_1 + 0x20),iVar12,param_3,&local_80),
                (uVar7 & 1) != 0)) && (fVar17 = ABS((float)local_80 + -0.5), fVar17 < fVar16)) {
              local_e0 = 1;
              uVar14 = local_80;
              iVar4 = iVar12;
              fVar16 = fVar17;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)local_a0);
        }
      }
      else {
        local_e0 = 0;
        iVar4 = -1;
        uVar14 = 0x3f8000003f800000;
      }
      uVar7 = (ulong)local_e0;
    }
    *param_4 = uVar14;
    *param_5 = iVar4;
  }
  return uVar7;
}


