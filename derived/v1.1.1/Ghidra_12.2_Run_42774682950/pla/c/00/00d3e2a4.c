/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d3e2a4; name: FUN_00d3e2a4
 */


int FUN_00d3e2a4(long param_1,char *param_2,size_t param_3,uint param_4)

{
  uint *puVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  int iVar5;
  char *__format;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  ushort *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  piVar8 = *(int **)(param_1 + 0x38);
  puVar9 = (ushort *)((long)piVar8 - (long)*piVar8);
  if (*puVar9 < 7) {
LAB_00d3e3c4:
    if (4 < *puVar9) goto LAB_00d3e3cc;
  }
  else {
    uVar12 = (ulong)puVar9[3];
    if (uVar12 != 0) {
      uVar13 = (ulong)*(uint *)((long)piVar8 + uVar12);
      puVar1 = (uint *)((long)((long)piVar8 + uVar12) + uVar13);
      if ((puVar1 != (uint *)0x0) && (uVar10 = (ulong)*puVar1, uVar10 != 0)) {
        lVar2 = uVar13 + uVar12;
        lVar11 = 0;
        do {
          uVar14 = (ulong)*(uint *)((long)piVar8 + lVar11 + lVar2 + 4);
          lVar4 = lVar11 + (uVar14 - (long)*(int *)((long)piVar8 + lVar11 + uVar14 + lVar2 + 4)) +
                           lVar2;
          uVar3 = *(ushort *)((long)piVar8 + lVar4 + 4);
          if (uVar3 < 5) {
            if ((param_4 & 0xffff) == 0) goto LAB_00d3e35c;
          }
          else {
            uVar7 = (ulong)*(ushort *)((long)piVar8 + lVar4 + 8);
            uVar6 = 0;
            if (uVar7 != 0) {
              uVar6 = *(uint *)((long)piVar8 + lVar11 + uVar14 + uVar7 + lVar2 + 4);
            }
            if (uVar6 == (param_4 & 0xffff)) {
LAB_00d3e35c:
              lVar2 = uVar12 + uVar13;
              if ((long)piVar8 + lVar11 + uVar14 + lVar2 != -4) {
                if ((uVar3 < 7) ||
                   (uVar12 = (ulong)*(ushort *)((long)piVar8 + lVar4 + 10), uVar12 == 0)) {
                  lVar11 = 0;
                }
                else {
                  lVar11 = (long)piVar8 +
                           lVar11 + uVar12 + *(uint *)((long)piVar8 +
                                                      lVar11 + uVar12 + uVar14 + lVar2 + 4) + uVar14
                                    + lVar2 + 4;
                }
                __format = "bin/appli/res_item/icon_item/%s.bntx";
                goto LAB_00d3e3b4;
              }
              break;
            }
          }
          lVar11 = lVar11 + 4;
        } while (uVar10 * 4 != lVar11);
        goto LAB_00d3e3c4;
      }
    }
LAB_00d3e3cc:
    if ((ulong)puVar9[2] != 0) {
      puVar1 = (uint *)((long)piVar8 + (ulong)puVar9[2]);
      lVar11 = (long)puVar1 + (ulong)*puVar1;
      goto LAB_00d3e3e0;
    }
  }
  lVar11 = 0;
LAB_00d3e3e0:
  __format = "bin/appli/res_item/icon_item_dummy/%s.bntx";
LAB_00d3e3b4:
  iVar5 = snprintf(param_2,param_3,__format,lVar11 + 4);
  return iVar5;
}


