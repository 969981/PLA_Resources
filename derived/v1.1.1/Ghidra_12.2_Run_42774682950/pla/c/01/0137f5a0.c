/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0137f5a0; name: FUN_0137f5a0
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_0137f5a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined1 *local_70;
  undefined1 *puStack_68;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    puStack_68 = (undefined1 *)param_2[-1];
    local_70 = (undefined1 *)*param_1;
    if (puStack_68 == &DAT_cbf29ce484222645) {
      bVar1 = true;
      uVar5 = 1000000;
      if (local_70 == &DAT_cbf29ce484222645) goto LAB_0137f7a8;
    }
    else {
      uVar5 = FUN_016acf5c(*param_3,&puStack_68);
      if (*(char *)(param_3 + 1) == '\0') {
        iVar4 = FUN_016acbec(*param_3,&puStack_68);
        bVar1 = iVar4 == 0xff;
      }
      else {
        bVar1 = false;
      }
      if (local_70 == &DAT_cbf29ce484222645) {
LAB_0137f7a8:
        if ((999999 < uVar5) && (bVar1)) {
          return true;
        }
        goto LAB_0137f6ac;
      }
    }
    uVar7 = FUN_016acf5c(*param_3,&local_70);
    if (*(char *)(param_3 + 1) == '\0') {
      iVar4 = FUN_016acbec(*param_3,&local_70);
      bVar3 = iVar4 != 0xff;
    }
    else {
      bVar3 = true;
    }
    bVar2 = bVar3;
    if ((bVar1) || (bVar2 = false, !bVar3)) {
      if (bVar1) {
        if (uVar7 <= uVar5) {
          return true;
        }
        if (bVar2) {
          return true;
        }
      }
    }
    else if (uVar7 <= uVar5) {
      return true;
    }
LAB_0137f6ac:
    uVar8 = *param_1;
    *param_1 = param_2[-1];
    param_2[-1] = uVar8;
    return true;
  case 3:
    FUN_0137e5f0(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_0137ea50(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_0137edb0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    puVar10 = param_1 + 2;
    puVar13 = param_1 + 1;
    FUN_0137e5f0(param_1,puVar13,puVar10,param_3);
    puVar14 = param_1 + 3;
    if (puVar14 != param_2) {
      lVar9 = 0;
      iVar4 = 0;
      do {
        puStack_68 = (undefined1 *)*puVar14;
        local_70 = (undefined1 *)*puVar10;
        if (puStack_68 == &DAT_cbf29ce484222645) {
          bVar1 = true;
          uVar5 = 1000000;
        }
        else {
          uVar5 = FUN_016acf5c(*param_3,&puStack_68);
          if (*(char *)(param_3 + 1) == '\0') {
            iVar6 = FUN_016acbec(*param_3,&puStack_68);
            bVar1 = iVar6 == 0xff;
          }
          else {
            bVar1 = false;
          }
        }
        if (local_70 == &DAT_cbf29ce484222645) {
          bVar3 = bVar1;
          if (999999 < uVar5) {
joined_r0x0137fa44:
            if (bVar3) goto LAB_0137f7d0;
          }
LAB_0137f89c:
          puVar15 = (undefined1 *)*puVar14;
          *puVar14 = *puVar10;
          puVar11 = puVar10;
          if (puVar10 != param_1) {
            if (puVar15 == &DAT_cbf29ce484222645) {
              lVar12 = 0;
              while( true ) {
                local_70 = *(undefined1 **)((long)puVar13 + lVar12);
                puStack_68 = &DAT_cbf29ce484222645;
                if (local_70 == &DAT_cbf29ce484222645) break;
                uVar5 = FUN_016acf5c(*param_3,&local_70);
                if (*(char *)(param_3 + 1) == '\0') {
                  iVar6 = FUN_016acbec(*param_3,&local_70);
                  bVar1 = iVar6 != 0xff;
                }
                else {
                  bVar1 = true;
                }
                if ((uVar5 < 0xf4241) || (bVar1)) break;
                *(undefined8 *)((long)puVar10 + lVar12) = *(undefined8 *)((long)puVar13 + lVar12);
                lVar12 = lVar12 + -8;
                if (lVar9 + lVar12 == -0x10) break;
              }
              puVar11 = (undefined8 *)((long)puVar10 + lVar12);
            }
            else {
              lVar12 = lVar9;
              do {
                local_70 = *(undefined1 **)((long)param_1 + lVar12 + 8);
                puStack_68 = puVar15;
                uVar5 = FUN_016acf5c(*param_3,&puStack_68);
                if (*(char *)(param_3 + 1) == '\0') {
                  iVar6 = FUN_016acbec(*param_3,&puStack_68);
                  bVar1 = iVar6 == 0xff;
                }
                else {
                  bVar1 = false;
                }
                if (local_70 == &DAT_cbf29ce484222645) {
                  if ((999999 < uVar5) && (bVar1)) goto LAB_0137f9d4;
                }
                else {
                  uVar7 = FUN_016acf5c(*param_3,&local_70);
                  if (*(char *)(param_3 + 1) == '\0') {
                    iVar6 = FUN_016acbec(*param_3,&local_70);
                    bVar3 = iVar6 != 0xff;
                  }
                  else {
                    bVar3 = true;
                  }
                  bVar2 = bVar3;
                  if ((bVar1) || (bVar2 = false, !bVar3)) {
                    if ((bVar1) && ((uVar7 <= uVar5 || (bVar2)))) goto LAB_0137f9d4;
                  }
                  else if (uVar7 <= uVar5) {
                    puVar11 = (undefined8 *)((long)param_1 + lVar12 + 0x10);
                    goto LAB_0137f9d4;
                  }
                }
                puVar11 = puVar11 + -1;
                bVar1 = lVar12 != -8;
                *(undefined8 *)((long)param_1 + lVar12 + 0x10) =
                     *(undefined8 *)((long)param_1 + lVar12 + 8);
                lVar12 = lVar12 + -8;
              } while (bVar1);
              puVar11 = param_1;
LAB_0137f9d4:
            }
          }
          *puVar11 = puVar15;
          iVar4 = iVar4 + 1;
          if (iVar4 == 8) {
            return puVar14 + 1 == param_2;
          }
        }
        else {
          uVar7 = FUN_016acf5c(*param_3,&local_70);
          if (*(char *)(param_3 + 1) == '\0') {
            iVar6 = FUN_016acbec(*param_3,&local_70);
            bVar2 = iVar6 != 0xff;
          }
          else {
            bVar2 = true;
          }
          bVar3 = bVar2;
          if ((bVar1) || (bVar3 = false, !bVar2)) {
            if (!bVar1) goto LAB_0137f89c;
            if (uVar5 < uVar7) goto joined_r0x0137fa44;
          }
          else if (uVar5 < uVar7) goto LAB_0137f89c;
        }
LAB_0137f7d0:
        puVar14 = puVar14 + 1;
        lVar9 = lVar9 + 8;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      } while (puVar14 != param_2);
    }
  }
  return true;
}


