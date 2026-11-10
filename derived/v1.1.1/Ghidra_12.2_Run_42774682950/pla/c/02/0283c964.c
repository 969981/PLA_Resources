/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283c964; name: FUN_0283c964
 */


void FUN_0283c964(long param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  byte *pbVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  undefined1 *local_d0;
  byte *pbStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  byte local_b0 [64];
  
  lVar7 = FUN_00d47110();
  plVar16 = *(long **)(param_1 + 0x148);
  lVar9 = *(long *)(param_1 + 0x150);
  lVar17 = *param_2;
  plVar15 = (long *)param_2[3];
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  plVar4 = plVar16;
  if ((lVar9 != 0) && (*plVar16 != lVar17)) {
    lVar13 = lVar9 * 0x30;
    plVar11 = plVar16 + lVar9 * 6;
    do {
      lVar13 = lVar13 + -0x30;
      plVar4 = plVar11;
      if (lVar13 == 0) break;
      plVar1 = plVar16 + 6;
      plVar16 = plVar16 + 6;
      plVar4 = plVar16;
    } while (*plVar1 != lVar17);
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (((plVar4 == (long *)(*(long *)(param_1 + 0x148) + *(long *)(param_1 + 0x150) * 0x30)) ||
      (lVar7 == 0)) || (lVar9 = plVar4[5], lVar9 == 0)) {
    return;
  }
  lVar17 = 0;
  do {
    lVar13 = param_1 + lVar17;
    if (*(long *)(lVar13 + 0x200) == lVar7) {
      puVar12 = (undefined8 *)(lVar13 + 0x1f8);
      goto LAB_0283ca9c;
    }
    if (*(long *)(lVar13 + 0x210) == lVar7) {
      puVar12 = (undefined8 *)(lVar13 + 0x208);
      goto LAB_0283ca9c;
    }
    if (*(long *)(lVar13 + 0x220) == lVar7) {
      puVar12 = (undefined8 *)(lVar13 + 0x218);
      goto LAB_0283ca9c;
    }
    if (*(long *)(lVar13 + 0x230) == lVar7) {
      puVar12 = (undefined8 *)(lVar13 + 0x228);
      goto LAB_0283ca9c;
    }
    lVar17 = lVar17 + 0x40;
  } while (lVar17 != 0x800);
  lVar17 = 0;
  while( true ) {
    lVar13 = param_1 + lVar17;
    if (*(long *)(lVar13 + 0x200) == 0) {
      puVar12 = (undefined8 *)(lVar13 + 0x1f8);
      *(long *)(lVar13 + 0x200) = lVar7;
      goto LAB_0283ca9c;
    }
    if (*(long *)(lVar13 + 0x210) == 0) break;
    if (*(long *)(lVar13 + 0x220) == 0) {
      puVar12 = (undefined8 *)(lVar13 + 0x218);
      *(long *)(lVar13 + 0x220) = lVar7;
      goto LAB_0283ca9c;
    }
    if (*(long *)(lVar13 + 0x230) == 0) {
      puVar12 = (undefined8 *)(lVar13 + 0x228);
      *(long *)(lVar13 + 0x230) = lVar7;
      goto LAB_0283ca9c;
    }
    lVar17 = lVar17 + 0x40;
    uVar10 = 0;
    if (lVar17 == 0x800) goto LAB_0283caa0;
  }
  puVar12 = (undefined8 *)(lVar13 + 0x208);
  *(long *)(lVar13 + 0x210) = lVar7;
LAB_0283ca9c:
  uVar10 = *puVar12;
LAB_0283caa0:
  FUN_010c3bd0(lVar7,lVar9,param_3,uVar10,param_4,*(undefined4 *)(param_1 + 0x1f0));
  lVar9 = FUN_002443dc(lVar7,"text_width_adjust",param_3,param_4);
  fVar19 = 0.0;
  if (((lVar9 != 0) && (fVar19 = 0.0, *(char *)(lVar9 + 10) == '\x01')) &&
     (fVar19 = 0.0, *(int *)(lVar9 + (ulong)*(uint *)(lVar9 + 4)) == 1)) {
    iVar5 = FUN_010c4a60(param_3,lVar7,param_4,0);
    fVar19 = (float)iVar5;
    *(float *)(lVar7 + 0x50) = fVar19;
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 0x10;
  }
  iVar5 = 0;
  do {
    snprintf((char *)local_b0,0x40,"text_width_pane_name_%02d",iVar5);
    lVar9 = FUN_002443dc(lVar7,local_b0);
    if ((lVar9 == 0) || (*(char *)(lVar9 + 10) != '\0')) {
      return;
    }
    snprintf((char *)local_b0,0x40,"pane_%s",(char *)(lVar9 + (ulong)*(uint *)(lVar9 + 4)));
    if (local_b0[0] == 0) {
      local_d0 = &DAT_cbf29ce484222645;
    }
    else {
      local_d0 = &DAT_cbf29ce484222645;
      pbVar14 = (byte *)((ulong)local_b0 | 1);
      bVar3 = local_b0[0];
      do {
        local_d0 = (undefined1 *)(((ulong)local_d0 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (bVar3 != 0);
    }
    local_c0 = 0x3f;
    uStack_b8 = 0;
    pbStack_c8 = local_b0;
    lVar17 = FUN_0283d384(param_1,&local_d0);
    if (lVar17 == 0) {
      uVar2 = *(uint *)(lVar9 + 4);
      pcVar8 = strstr((char *)(lVar7 + 0xb0),"all");
      lVar17 = lVar7;
      if (pcVar8 == (char *)0x0) {
        lVar17 = *(long *)(lVar7 + 0x18);
        pcVar8 = strstr((char *)(lVar17 + 0xb0),"all");
        if (pcVar8 == (char *)0x0) {
          lVar17 = *(long *)(lVar17 + 0x18);
          pcVar8 = strstr((char *)(lVar17 + 0xb0),"all");
          if (pcVar8 == (char *)0x0) {
            lVar17 = *(long *)(lVar17 + 0x18);
            pcVar8 = strstr((char *)(lVar17 + 0xb0),"all");
            if (pcVar8 == (char *)0x0) {
              lVar17 = *(long *)(lVar17 + 0x18);
              pcVar8 = strstr((char *)(lVar17 + 0xb0),"all");
              if (pcVar8 == (char *)0x0) {
                lVar17 = *(long *)(lVar17 + 0x18);
                pcVar8 = strstr((char *)(lVar17 + 0xb0),"all");
                if (pcVar8 == (char *)0x0) {
                  lVar17 = *(long *)(lVar17 + 0x18);
                  while( true ) {
                    pcVar8 = strstr((char *)(lVar17 + 0xb0),"all");
                    if (pcVar8 != (char *)0x0) break;
                    lVar17 = *(long *)(lVar17 + 0x18);
                  }
                }
              }
            }
          }
        }
      }
      while( true ) {
        if (lVar17 == 0) {
          return;
        }
        pcVar8 = strstr((char *)(lVar17 + 0xb0),(char *)(lVar9 + (ulong)uVar2));
        if (pcVar8 != (char *)0x0) break;
        lVar17 = FUN_00250790(lVar17);
      }
    }
    if (fVar19 == 0.0) {
      iVar6 = FUN_010c4a60(param_3,lVar7,param_4,0);
      fVar19 = (float)iVar6;
      *(float *)(lVar7 + 0x50) = fVar19;
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 0x10;
    }
    lVar9 = FUN_002443dc(lVar17,"text_width_offset_x");
    fVar18 = 0.0;
    if ((lVar9 != 0) && (fVar18 = 0.0, *(char *)(lVar9 + 10) == '\x02')) {
      fVar18 = *(float *)(lVar9 + (ulong)*(uint *)(lVar9 + 4));
      fVar18 = fVar18 + fVar18;
    }
    iVar5 = iVar5 + 1;
    *(float *)(lVar17 + 0x50) = fVar19 + fVar18;
    *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) | 0x10;
  } while (iVar5 != 100);
  return;
}


