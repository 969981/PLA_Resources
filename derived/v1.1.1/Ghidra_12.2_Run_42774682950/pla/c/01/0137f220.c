/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0137f220; name: FUN_0137f220
 */


void FUN_0137f220(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 *local_70;
  undefined1 *puStack_68;
  
  puVar13 = param_1 + 2;
  puVar10 = param_1 + 1;
  FUN_0137e5f0(param_1,puVar10,puVar13,param_3);
  puVar11 = param_1 + 3;
  if (puVar11 != param_2) {
    lVar12 = 0;
    do {
      puStack_68 = (undefined1 *)*puVar11;
      local_70 = (undefined1 *)*puVar13;
      if (puStack_68 == &DAT_cbf29ce484222645) {
        bVar1 = true;
        uVar4 = 1000000;
      }
      else {
        uVar4 = FUN_016acf5c(*param_3,&puStack_68);
        if (*(char *)(param_3 + 1) == '\0') {
          iVar5 = FUN_016acbec(*param_3,&puStack_68);
          bVar1 = iVar5 == 0xff;
        }
        else {
          bVar1 = false;
        }
      }
      if (local_70 == &DAT_cbf29ce484222645) {
        bVar3 = bVar1;
        if (999999 < uVar4) {
joined_r0x0137f500:
          if (bVar3) goto LAB_0137f28c;
        }
LAB_0137f35c:
        puVar7 = (undefined1 *)*puVar11;
        *puVar11 = *puVar13;
        puVar9 = puVar13;
        if (puVar13 != param_1) {
          if (puVar7 == &DAT_cbf29ce484222645) {
            lVar8 = 0;
            while( true ) {
              local_70 = *(undefined1 **)((long)puVar10 + lVar8);
              puStack_68 = &DAT_cbf29ce484222645;
              if (local_70 == &DAT_cbf29ce484222645) break;
              uVar4 = FUN_016acf5c(*param_3,&local_70);
              if (*(char *)(param_3 + 1) == '\0') {
                iVar5 = FUN_016acbec(*param_3,&local_70);
                bVar1 = iVar5 != 0xff;
              }
              else {
                bVar1 = true;
              }
              if ((uVar4 < 0xf4241) || (bVar1)) break;
              *(undefined8 *)((long)puVar13 + lVar8) = *(undefined8 *)((long)puVar10 + lVar8);
              lVar8 = lVar8 + -8;
              if (lVar12 + lVar8 == -0x10) break;
            }
            puVar9 = (undefined8 *)((long)puVar13 + lVar8);
          }
          else {
            lVar8 = lVar12;
            do {
              local_70 = *(undefined1 **)((long)param_1 + lVar8 + 8);
              puStack_68 = puVar7;
              uVar4 = FUN_016acf5c(*param_3,&puStack_68);
              if (*(char *)(param_3 + 1) == '\0') {
                iVar5 = FUN_016acbec(*param_3,&puStack_68);
                bVar1 = iVar5 == 0xff;
              }
              else {
                bVar1 = false;
              }
              if (local_70 == &DAT_cbf29ce484222645) {
                if ((999999 < uVar4) && (bVar1)) goto LAB_0137f284;
              }
              else {
                uVar6 = FUN_016acf5c(*param_3,&local_70);
                if (*(char *)(param_3 + 1) == '\0') {
                  iVar5 = FUN_016acbec(*param_3,&local_70);
                  bVar3 = iVar5 != 0xff;
                }
                else {
                  bVar3 = true;
                }
                bVar2 = bVar3;
                if ((bVar1) || (bVar2 = false, !bVar3)) {
                  if ((bVar1) && ((uVar6 <= uVar4 || (bVar2)))) goto LAB_0137f284;
                }
                else if (uVar6 <= uVar4) {
                  puVar9 = (undefined8 *)((long)param_1 + lVar8 + 0x10);
                  goto LAB_0137f284;
                }
              }
              puVar9 = puVar9 + -1;
              bVar1 = lVar8 != -8;
              *(undefined8 *)((long)param_1 + lVar8 + 0x10) =
                   *(undefined8 *)((long)param_1 + lVar8 + 8);
              lVar8 = lVar8 + -8;
            } while (bVar1);
            puVar9 = param_1;
LAB_0137f284:
          }
        }
        *puVar9 = puVar7;
      }
      else {
        uVar6 = FUN_016acf5c(*param_3,&local_70);
        if (*(char *)(param_3 + 1) == '\0') {
          iVar5 = FUN_016acbec(*param_3,&local_70);
          bVar2 = iVar5 != 0xff;
        }
        else {
          bVar2 = true;
        }
        bVar3 = bVar2;
        if ((bVar1) || (bVar3 = false, !bVar2)) {
          if (!bVar1) goto LAB_0137f35c;
          if (uVar4 < uVar6) goto joined_r0x0137f500;
        }
        else if (uVar4 < uVar6) goto LAB_0137f35c;
      }
LAB_0137f28c:
      puVar11 = puVar11 + 1;
      lVar12 = lVar12 + 8;
      puVar13 = puVar13 + 1;
      puVar10 = puVar10 + 1;
    } while (puVar11 != param_2);
  }
  return;
}


