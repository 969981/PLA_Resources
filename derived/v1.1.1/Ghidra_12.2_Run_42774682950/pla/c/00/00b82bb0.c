/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b82bb0; name: FUN_00b82bb0
 */


void FUN_00b82bb0(long param_1,long param_2,undefined8 param_3,int *param_4)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  char *pcVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  uint *puVar17;
  uint *puVar18;
  long lVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 *puVar23;
  ulong uVar24;
  long *plVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  long lVar29;
  long lVar30;
  uint *puVar31;
  long *local_90;
  long *local_88;
  long *plStack_80;
  long *local_78;
  undefined1 *local_70;
  long *local_68;
  
  if (*(long *)(param_2 + 8) == 0) {
    plVar14 = (long *)FUN_00b779ac();
  }
  else {
    plVar14 = (long *)(*(long *)(param_2 + 8) + 0x68);
  }
  puVar6 = (undefined8 *)PTR_PTR_04379d00;
  if (*plVar14 != 0) {
    puVar6 = (undefined8 *)(*plVar14 + 0x60);
  }
  pcVar13 = strrchr((char *)*puVar6,0x2f);
  if (pcVar13 == (char *)0x0) {
    pbVar20 = (byte *)0x0;
  }
  else {
    pbVar20 = (byte *)(pcVar13 + 1);
  }
  bVar8 = *pbVar20;
  local_70 = &DAT_cbf29ce484222645;
  if (bVar8 != 0) {
    local_70 = &DAT_cbf29ce484222645;
    do {
      pbVar20 = pbVar20 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar8) * 0x100000001b3);
      bVar8 = *pbVar20;
    } while (bVar8 != 0);
  }
  plVar14 = (long *)FUN_00b77a94(param_1 + 0x348,&local_70);
  puVar17 = *(uint **)(*(long *)(param_2 + 8) + 0x250);
  piVar3 = (int *)((long)puVar17 + (ulong)*puVar17);
  uVar21 = (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3));
  puVar4 = (uint *)((long)piVar3 + uVar21);
  uVar22 = (ulong)*puVar4;
  puVar4 = (uint *)((long)puVar4 + uVar22);
  puVar31 = puVar4 + 1;
  uVar24 = (ulong)*puVar4;
  if (uVar24 != 0) {
    puVar4 = puVar31 + uVar24;
    lVar29 = (long)puVar17 + uVar22 + uVar21 + (ulong)*puVar17 + 0xd;
    do {
      uVar7 = *puVar31;
      piVar3 = (int *)((long)puVar31 + (ulong)uVar7);
      if (*(ushort *)((long)piVar3 - (long)*piVar3) < 5) {
        lVar19 = 0;
      }
      else {
        uVar21 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
        lVar19 = 0;
        if (uVar21 != 0) {
          puVar17 = (uint *)((long)piVar3 + uVar21);
          lVar19 = (long)puVar17 + (ulong)*puVar17;
        }
      }
      FUN_00b8264c(&local_78,param_1,&local_70,lVar19 + 4,param_3);
      uVar21 = (ulong)*(ushort *)((long)piVar3 + (6 - (long)*piVar3));
      puVar5 = (uint *)((long)piVar3 + uVar21);
      uVar22 = (ulong)*puVar5;
      puVar5 = (uint *)((long)puVar5 + uVar22);
      puVar17 = puVar5 + 1;
      uVar24 = (ulong)*puVar5;
      if (uVar24 != 0) {
        puVar5 = puVar17 + uVar24;
        lVar19 = lVar29 + uVar22 + uVar21 + (ulong)uVar7;
LAB_00b82d3c:
        piVar3 = (int *)((long)puVar17 + (ulong)*puVar17);
        uVar9 = ((ushort *)((long)piVar3 - (long)*piVar3))[2];
        puVar18 = (uint *)((long)piVar3 + (ulong)uVar9);
        uVar21 = (ulong)*puVar18;
        lVar16 = (long)puVar18 + uVar21;
        bVar8 = *(byte *)(lVar16 + 4);
        puVar23 = &DAT_cbf29ce484222645;
        if (bVar8 != 0) {
          puVar23 = &DAT_cbf29ce484222645;
          pbVar20 = (byte *)(lVar19 + uVar21 + uVar9 + (ulong)*puVar17);
          do {
            puVar23 = (undefined1 *)(((ulong)puVar23 ^ (ulong)bVar8) * 0x100000001b3);
            bVar8 = *pbVar20;
            pbVar20 = pbVar20 + 1;
          } while (bVar8 != 0);
        }
        puVar26 = (undefined1 *)plVar14[1];
        if (puVar26 != (undefined1 *)0x0) {
          uVar21 = (long)puVar26 - ((ulong)puVar26 >> 1 & 0x5555555555555555);
          uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
          uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar21 < 2) {
            puVar27 = (undefined1 *)((ulong)(puVar26 + -1) & (ulong)puVar23);
          }
          else {
            puVar27 = puVar23;
            if (puVar26 <= puVar23) {
              uVar22 = 0;
              if (puVar26 != (undefined1 *)0x0) {
                uVar22 = (ulong)puVar23 / (ulong)puVar26;
              }
              puVar27 = puVar23 + -(uVar22 * (long)puVar26);
            }
          }
          plVar25 = *(long **)(*plVar14 + (long)puVar27 * 8);
          if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
            if (uVar21 < 2) {
              do {
                if ((undefined1 *)plVar25[1] == puVar23) {
                  if ((undefined1 *)plVar25[2] == puVar23) goto LAB_00b82e50;
                }
                else if ((undefined1 *)((ulong)plVar25[1] & (ulong)(puVar26 + -1)) != puVar27)
                break;
                plVar25 = (long *)*plVar25;
              } while (plVar25 != (long *)0x0);
            }
            else {
              do {
                puVar28 = (undefined1 *)plVar25[1];
                if (puVar28 == puVar23) {
                  if ((undefined1 *)plVar25[2] == puVar23) goto LAB_00b82e50;
                }
                else {
                  if (puVar26 <= puVar28) {
                    uVar21 = 0;
                    if (puVar26 != (undefined1 *)0x0) {
                      uVar21 = (ulong)puVar28 / (ulong)puVar26;
                    }
                    puVar28 = puVar28 + -(uVar21 * (long)puVar26);
                  }
                  if (puVar28 != puVar27) break;
                }
                plVar25 = (long *)*plVar25;
              } while (plVar25 != (long *)0x0);
            }
          }
        }
        lVar30 = 0;
        if (4 < *(ushort *)((long)piVar3 - (long)*piVar3) && uVar9 != 0) {
          lVar30 = lVar16;
        }
        FUN_00b8264c(&local_68,param_1,&local_70,lVar30 + 4,param_3);
        plVar25 = local_68;
        goto joined_r0x00b83084;
      }
LAB_00b83040:
      if (local_78 != (long *)0x0) {
        plVar25 = local_78 + 10;
        do {
          iVar12 = (int)*plVar25 + -1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar11) {
            *(int *)plVar25 = iVar12;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*local_78 + 0x10))();
        }
      }
      puVar31 = puVar31 + 1;
      lVar29 = lVar29 + 4;
    } while (puVar31 != puVar4);
  }
  return;
LAB_00b82e50:
  if (((param_4 == (int *)0x0) || (*(ushort *)((long)param_4 - (long)*param_4) < 0xf)) ||
     (uVar21 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[7], uVar21 == 0)) {
    lVar16 = 0;
  }
  else {
    puVar18 = (uint *)((long)param_4 + uVar21);
    lVar16 = (long)puVar18 + (ulong)*puVar18;
  }
  lVar30 = plVar25[3];
  FUN_00b77f5c(&plStack_80,param_3,lVar30,lVar16);
  uVar15 = FUN_00b821b4(param_1,0,lVar30,lVar16,&plStack_80);
  FUN_00b82bb0(param_1,uVar15,&plStack_80,lVar30);
  local_68 = (long *)0x0;
  lVar16 = FUN_00b821b4(param_1,&local_68,lVar30,lVar16,&plStack_80);
  puVar18 = *(uint **)(*(long *)(lVar16 + 8) + 0x250);
  piVar3 = (int *)((long)puVar18 + (ulong)*puVar18);
  puVar18 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
  puVar18 = (uint *)((long)puVar18 + (ulong)*puVar18 + 4);
  piVar3 = (int *)((long)puVar18 + (ulong)*puVar18);
  if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
     (uVar21 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar21 == 0)) {
    lVar16 = 0;
  }
  else {
    puVar18 = (uint *)((long)piVar3 + uVar21);
    lVar16 = (long)puVar18 + (ulong)*puVar18;
  }
  FUN_00b8264c(&local_88,param_1,&local_68,lVar16 + 4,&plStack_80);
  plVar25 = local_88;
  if (plStack_80 != (long *)0x0) {
    (**(code **)(*plStack_80 + 0x20))();
  }
joined_r0x00b83084:
  if (plVar25 != (long *)0x0) {
    plVar1 = plVar25 + 10;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    local_90 = plVar25;
    (**(code **)(*local_78 + 0x40))(local_78,&local_90);
    if (local_90 != (long *)0x0) {
      plVar2 = local_90 + 10;
      do {
        iVar12 = (int)*plVar2 + -1;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *(int *)plVar2 = iVar12;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    do {
      iVar12 = (int)*plVar1 + -1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *(int *)plVar1 = iVar12;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
    }
  }
  puVar17 = puVar17 + 1;
  lVar19 = lVar19 + 4;
  if (puVar17 == puVar5) goto LAB_00b83040;
  goto LAB_00b82d3c;
}


