/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283ce7c; name: FUN_0283ce7c
 */


void FUN_0283ce7c(long param_1,long *param_2,long param_3,undefined4 param_4)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  byte *pbVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  undefined1 *puStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte abStack_b0 [64];
  
  lVar7 = FUN_00d47110();
  plVar16 = *(long **)(param_1 + 0x148);
  lVar8 = *(long *)(param_1 + 0x150);
  lVar17 = *param_2;
  plVar15 = (long *)param_2[3];
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  plVar4 = plVar16;
  if ((lVar8 != 0) && (*plVar16 != lVar17)) {
    lVar12 = lVar8 * 0x30;
    plVar10 = plVar16 + lVar8 * 6;
    do {
      lVar12 = lVar12 + -0x30;
      plVar4 = plVar10;
      if (lVar12 == 0) break;
      plVar1 = plVar16 + 6;
      plVar16 = plVar16 + 6;
      plVar4 = plVar16;
    } while (*plVar1 != lVar17);
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (((plVar4 == (long *)(*(long *)(param_1 + 0x148) + *(long *)(param_1 + 0x150) * 0x30)) ||
      (lVar7 == 0)) || (lVar8 = plVar4[5], lVar8 == 0)) {
    return;
  }
  lVar17 = 0;
  do {
    lVar12 = param_1 + lVar17;
    if (*(long *)(lVar12 + 0x200) == lVar7) {
      puVar11 = (undefined8 *)(lVar12 + 0x1f8);
      goto LAB_0283cfb4;
    }
    if (*(long *)(lVar12 + 0x210) == lVar7) {
      puVar11 = (undefined8 *)(lVar12 + 0x208);
      goto LAB_0283cfb4;
    }
    if (*(long *)(lVar12 + 0x220) == lVar7) {
      puVar11 = (undefined8 *)(lVar12 + 0x218);
      goto LAB_0283cfb4;
    }
    if (*(long *)(lVar12 + 0x230) == lVar7) {
      puVar11 = (undefined8 *)(lVar12 + 0x228);
      goto LAB_0283cfb4;
    }
    lVar17 = lVar17 + 0x40;
  } while (lVar17 != 0x800);
  lVar17 = 0;
  while( true ) {
    lVar12 = param_1 + lVar17;
    if (*(long *)(lVar12 + 0x200) == 0) {
      puVar11 = (undefined8 *)(lVar12 + 0x1f8);
      *(long *)(lVar12 + 0x200) = lVar7;
      goto LAB_0283cfb4;
    }
    if (*(long *)(lVar12 + 0x210) == 0) break;
    if (*(long *)(lVar12 + 0x220) == 0) {
      puVar11 = (undefined8 *)(lVar12 + 0x218);
      *(long *)(lVar12 + 0x220) = lVar7;
      goto LAB_0283cfb4;
    }
    if (*(long *)(lVar12 + 0x230) == 0) {
      puVar11 = (undefined8 *)(lVar12 + 0x228);
      *(long *)(lVar12 + 0x230) = lVar7;
      goto LAB_0283cfb4;
    }
    lVar17 = lVar17 + 0x40;
    uVar9 = 0;
    if (lVar17 == 0x800) goto LAB_0283cfb8;
  }
  puVar11 = (undefined8 *)(lVar12 + 0x208);
  *(long *)(lVar12 + 0x210) = lVar7;
LAB_0283cfb4:
  uVar9 = *puVar11;
LAB_0283cfb8:
  FUN_010c3bd0(lVar7,lVar8,*(undefined8 *)(param_3 + 0x58),uVar9,param_4,
               *(undefined4 *)(param_1 + 0x1f0));
  uVar9 = *(undefined8 *)(param_3 + 0x58);
  lVar8 = FUN_002443dc(lVar7,"text_width_adjust",uVar9,param_4);
  fVar19 = 0.0;
  if (((lVar8 != 0) && (fVar19 = 0.0, *(char *)(lVar8 + 10) == '\x01')) &&
     (fVar19 = 0.0, *(int *)(lVar8 + (ulong)*(uint *)(lVar8 + 4)) == 1)) {
    iVar5 = FUN_010c4a60(uVar9,lVar7,param_4,0);
    fVar19 = (float)iVar5;
    *(float *)(lVar7 + 0x50) = fVar19;
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 0x10;
  }
  uVar14 = 0;
  do {
    snprintf((char *)abStack_b0,0x40,"text_width_pane_name_%02d",uVar14);
    lVar8 = FUN_002443dc(lVar7,abStack_b0);
    if ((lVar8 == 0) || (*(char *)(lVar8 + 10) != '\0')) {
      return;
    }
    snprintf((char *)abStack_b0,0x40,"pane_%s",lVar8 + (ulong)*(uint *)(lVar8 + 4));
    if (abStack_b0[0] == 0) {
      puStack_d0 = &DAT_cbf29ce484222645;
    }
    else {
      puStack_d0 = &DAT_cbf29ce484222645;
      pbVar13 = (byte *)((ulong)abStack_b0 | 1);
      bVar3 = abStack_b0[0];
      do {
        puStack_d0 = (undefined1 *)(((ulong)puStack_d0 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar13;
        pbVar13 = pbVar13 + 1;
      } while (bVar3 != 0);
    }
    uStack_c0 = 0x3f;
    uStack_b8 = 0;
    pbStack_c8 = abStack_b0;
    lVar17 = FUN_0283d384(param_1,&puStack_d0);
    if (lVar17 == 0) {
      uVar2 = *(uint *)(lVar8 + 4);
      pcVar6 = strstr((char *)(lVar7 + 0xb0),"all");
      lVar17 = lVar7;
      if (pcVar6 == (char *)0x0) {
        lVar17 = *(long *)(lVar7 + 0x18);
        pcVar6 = strstr((char *)(lVar17 + 0xb0),"all");
        if (pcVar6 == (char *)0x0) {
          lVar17 = *(long *)(lVar17 + 0x18);
          pcVar6 = strstr((char *)(lVar17 + 0xb0),"all");
          if (pcVar6 == (char *)0x0) {
            lVar17 = *(long *)(lVar17 + 0x18);
            pcVar6 = strstr((char *)(lVar17 + 0xb0),"all");
            if (pcVar6 == (char *)0x0) {
              lVar17 = *(long *)(lVar17 + 0x18);
              pcVar6 = strstr((char *)(lVar17 + 0xb0),"all");
              if (pcVar6 == (char *)0x0) {
                lVar17 = *(long *)(lVar17 + 0x18);
                pcVar6 = strstr((char *)(lVar17 + 0xb0),"all");
                if (pcVar6 == (char *)0x0) {
                  lVar17 = *(long *)(lVar17 + 0x18);
                  while( true ) {
                    pcVar6 = strstr((char *)(lVar17 + 0xb0),"all");
                    if (pcVar6 != (char *)0x0) break;
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
        pcVar6 = strstr((char *)(lVar17 + 0xb0),(char *)(lVar8 + (ulong)uVar2));
        if (pcVar6 != (char *)0x0) break;
        lVar17 = FUN_00250790(lVar17);
      }
    }
    if (fVar19 == 0.0) {
      iVar5 = FUN_010c4a60(uVar9,lVar7,param_4,0);
      fVar19 = (float)iVar5;
      *(float *)(lVar7 + 0x50) = fVar19;
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 0x10;
    }
    lVar8 = FUN_002443dc(lVar17,"text_width_offset_x");
    fVar18 = 0.0;
    if ((lVar8 != 0) && (fVar18 = 0.0, *(char *)(lVar8 + 10) == '\x02')) {
      fVar18 = *(float *)(lVar8 + (ulong)*(uint *)(lVar8 + 4));
      fVar18 = fVar18 + fVar18;
    }
    uVar2 = (int)uVar14 + 1;
    uVar14 = (ulong)uVar2;
    *(float *)(lVar17 + 0x50) = fVar19 + fVar18;
    *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) | 0x10;
  } while (uVar2 != 100);
  return;
}


