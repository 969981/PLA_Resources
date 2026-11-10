/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03194e04; name: FUN_03194e04
 */


undefined8
FUN_03194e04(long param_1,int *param_2,long param_3,undefined8 *param_4,int *param_5,long *param_6,
            undefined4 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined8 local_120;
  undefined8 local_100;
  undefined8 local_f0;
  int local_e0 [2];
  int local_d8 [2];
  undefined1 auStack_d0 [24];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  lVar6 = *(long *)(param_1 + 0x20);
  iVar4 = *param_2;
  if ((*(int *)(lVar6 + 0x108) == 0) ||
     ((*(byte *)(*(long *)(lVar6 + 0x100) + (long)iVar4) & 1) == 0)) {
    if (param_6 != (long *)0x0) {
      local_d8[0] = iVar4;
      uVar7 = (**(code **)(*param_6 + 0x28))(param_6,param_1,local_d8,param_7,param_8);
      if ((int)uVar7 == 0) {
        return uVar7;
      }
      iVar4 = *param_2;
    }
    *param_5 = iVar4;
    lVar12 = *(long *)(*(long *)(param_1 + 0x20) + 0x68);
    piVar1 = (int *)(*(long *)(lVar12 + 0x18) + (long)*param_2 * 0x10);
    lVar6 = *(long *)(lVar12 + 0x28);
    lVar9 = *(long *)(lVar12 + 0x38);
    puVar2 = (undefined8 *)(lVar9 + (long)*(int *)(lVar6 + (long)*piVar1 * 0x14) * 0x10);
    uStack_88 = puVar2[1];
    local_90 = *puVar2;
    iVar4 = *piVar1 + 1;
    if (iVar4 < *piVar1 + (int)(short)piVar1[2] + -1) {
      uVar16 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
      uVar7 = CONCAT44(uVar16,uVar16);
      lVar10 = (long)iVar4;
      bVar15 = false;
      lVar14 = (lVar10 + (long)iVar4 * 4) * 4;
      uVar13 = uVar7;
      local_f0 = uVar7;
      while( true ) {
        lVar10 = lVar10 + 1;
        puVar2 = (undefined8 *)(lVar9 + (long)*(int *)(lVar6 + lVar14) * 0x10);
        uStack_98 = puVar2[1];
        local_a0 = *puVar2;
        puVar2 = (undefined8 *)(lVar9 + (long)((int *)(lVar6 + lVar14))[1] * 0x10);
        uStack_a8 = puVar2[1];
        local_b0 = *puVar2;
        local_b8 = uVar7;
        iVar4 = FUN_001d42c0(param_3,&local_90,&local_a0,&local_b0,0,&local_b8,auStack_d0);
        if (iVar4 != 0) {
          if ((float)local_b8 < (float)local_f0) {
            bVar15 = true;
            local_f0 = local_b8;
            uVar7 = local_b8;
            uVar13 = local_b8;
          }
        }
        if ((int)(short)piVar1[2] + *piVar1 + -1 <= lVar10) break;
        lVar6 = *(long *)(lVar12 + 0x28);
        lVar14 = lVar14 + 0x14;
        lVar9 = *(long *)(lVar12 + 0x38);
      }
      if (bVar15) {
        *param_4 = uVar13;
        return 1;
      }
    }
    uVar7 = 0;
  }
  else {
    local_90 = CONCAT44(local_90._4_4_,iVar4);
    cVar3 = FUN_0318fe6c(lVar6,&local_90,&local_a0,&local_b0);
    if (cVar3 == '\0') {
      uVar7 = 0;
      iVar4 = -1;
      uVar13 = 0x3f8000003f800000;
    }
    else if ((int)local_a0 < (int)local_b0) {
      local_120 = NEON_fmov(0x3f800000,4);
      uVar7 = 0;
      uVar13 = 0x3f8000003f800000;
      if (param_6 == (long *)0x0) {
        iVar4 = -1;
        iVar11 = (int)local_a0;
        local_100 = local_120;
        do {
          uVar8 = FUN_03194b90(*(undefined8 *)(param_1 + 0x20),iVar11,param_3,&local_90);
          if ((uVar8 & 1) != 0) {
            if ((float)local_90 < (float)local_100) {
              uVar7 = 1;
              local_100 = local_90;
              uVar13 = local_90;
              iVar4 = iVar11;
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)local_b0);
      }
      else {
        iVar4 = -1;
        iVar11 = (int)local_a0;
        do {
          local_e0[0] = iVar11;
          iVar5 = (**(code **)(*param_6 + 0x28))(param_6,param_1,local_e0,param_7,param_8);
          if (iVar5 != 0) {
            uVar8 = FUN_03194b90(*(undefined8 *)(param_1 + 0x20),iVar11,param_3,&local_90);
            if ((uVar8 & 1) != 0) {
              if ((float)local_90 < (float)local_120) {
                uVar7 = 1;
                local_120 = local_90;
                uVar13 = local_90;
                iVar4 = iVar11;
              }
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)local_b0);
      }
    }
    else {
      uVar7 = 0;
      iVar4 = -1;
      uVar13 = 0x3f8000003f800000;
    }
    *param_4 = uVar13;
    *param_5 = iVar4;
  }
  return uVar7;
}


