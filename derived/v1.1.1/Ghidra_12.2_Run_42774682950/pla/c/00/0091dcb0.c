/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091dcb0; name: FUN_0091dcb0
 */


void FUN_0091dcb0(long param_1,ulong *param_2,long param_3,uint param_4,char *param_5)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  byte bVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long *plVar20;
  undefined8 *puVar21;
  char cVar22;
  long *local_198;
  long *local_190;
  long *local_188;
  undefined1 local_180;
  undefined1 uStack_17f;
  undefined1 uStack_17e;
  undefined1 uStack_17d;
  byte bStack_17c;
  undefined1 uStack_17b;
  undefined2 uStack_17a;
  undefined1 uStack_178;
  undefined1 local_177;
  undefined2 uStack_176;
  int local_174;
  byte local_170;
  undefined4 uStack_16f;
  undefined1 uStack_16b;
  undefined1 uStack_16a;
  undefined1 uStack_169;
  long local_168 [30];
  uint local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  
  bVar4 = *(byte *)(*(long *)(param_3 + 0x70) + 0x7d);
  lVar19 = 3;
  if (0x17 < bVar4) {
    lVar19 = (ulong)(bVar4 < 0x1e) << 2;
  }
  uVar18 = *(uint *)(*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x68) + 0xd0) + 0x68) + 0x98)
                    + 0x110);
  lVar16 = 1;
  if (0x11 < bVar4) {
    lVar16 = lVar19;
  }
  lVar19 = 2;
  if (0xb < bVar4) {
    lVar19 = lVar16;
  }
  lVar16 = 0;
  if (5 < bVar4) {
    lVar16 = lVar19;
  }
  if (uVar18 < 3) {
    cVar22 = (&PTR_DAT_041b7688)[(int)uVar18][lVar16];
  }
  else {
    cVar22 = '\x02';
  }
  lVar19 = *(long *)(param_1 + 0x78);
  plVar20 = *(long **)(lVar19 + 0x58);
  plVar14 = *(long **)(lVar19 + 0x60);
LAB_0091dd5c:
  if (plVar14 != plVar20) {
    while( true ) {
      plVar14 = plVar14 + -1;
      plVar11 = (long *)*plVar14;
      if (plVar11 == (long *)0x0) break;
      plVar1 = plVar11 + 10;
      do {
        iVar10 = (int)*plVar1 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != 0) break;
      (**(code **)(*plVar11 + 0x10))();
      if (plVar14 == plVar20) goto LAB_0091dd98;
    }
    goto LAB_0091dd5c;
  }
LAB_0091dd98:
  *(long **)(lVar19 + 0x60) = plVar20;
  plVar20 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xe8) + 0x70);
  if (plVar20 != (long *)0x0) {
    plVar14 = plVar20 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  uStack_17e = 0;
  uStack_17d = 0;
  uStack_17b = 0;
  uStack_17a = 0;
  uStack_178 = 0;
  local_177 = 0;
  local_174 = 0;
  local_180 = *param_5 != '\0';
  uStack_17f = param_5[1] != '\0';
  bStack_17c = bVar4;
  if (param_5[2] == '\0') {
    if (param_5[3] != '\0') goto LAB_0091e14c;
LAB_0091de0c:
    if (cVar22 != '\0') goto LAB_0091de14;
LAB_0091e15c:
    uVar15 = FUN_00929154(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x100));
    if ((uVar15 & 1) == 0) goto LAB_0091de14;
    uStack_17b = *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x68) + 0x100) + 0x71);
    local_174 = 1;
  }
  else {
    uStack_17e = 1;
    if (param_5[3] == '\0') goto LAB_0091de0c;
LAB_0091e14c:
    uStack_17d = 1;
    if (cVar22 == '\0') goto LAB_0091e15c;
LAB_0091de14:
    local_6c = 5;
    local_6e = 0;
    local_70 = 0x101;
    bVar5 = *(byte *)(*(long *)(param_3 + 0x70) + 0x7d);
    uVar18 = *(uint *)(*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x68) + 0xd0) + 0x68) +
                                0x98) + 0x110);
    if (bVar5 < 6) {
      lVar19 = 0;
    }
    else if (bVar5 < 0xc) {
      lVar19 = 2;
    }
    else if (bVar5 < 0x12) {
      lVar19 = 1;
    }
    else if (bVar5 < 0x18) {
      lVar19 = 3;
    }
    else {
      lVar19 = (ulong)(bVar5 < 0x1e) << 2;
    }
    local_6d = 2;
    if ((uVar18 < 3) &&
       (local_6d = (&PTR_DAT_041b7688)[(int)uVar18][lVar19] == 0,
       1 < (byte)(&PTR_DAT_041b7688)[(int)uVar18][lVar19])) {
      local_6d = 2;
    }
    FUN_009346d8(&local_170,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),&local_70);
    if (local_78 != 0) {
      lVar19 = (ulong)local_78 * 8;
      plVar14 = local_168;
      iVar10 = 0;
      do {
        lVar19 = lVar19 + -8;
        local_174 = iVar10 + 1;
        *(undefined1 *)((long)local_168 + (long)iVar10 + -0x13) =
             *(undefined1 *)(*(long *)(*plVar14 + 0x70) + 0x7d);
        if (lVar19 == 0) break;
        plVar14 = plVar14 + 1;
        iVar10 = local_174;
      } while (local_174 < 5);
    }
  }
  (**(code **)(*plVar20 + 0x28))(plVar20);
  uVar8 = (undefined1)param_4;
  *(undefined1 *)((long)plVar20 + 0x59) = uVar8;
  plVar20[0xf] = CONCAT26(uStack_17a,
                          CONCAT15(uStack_17b,
                                   CONCAT14(bStack_17c,
                                            CONCAT13(uStack_17d,
                                                     CONCAT12(uStack_17e,
                                                              CONCAT11(uStack_17f,local_180))))));
  plVar20[0x10] = CONCAT44(local_174,CONCAT22(uStack_176,CONCAT11(local_177,uStack_178)));
  uVar12 = *(undefined8 *)(param_1 + 0x78);
  if (plVar20 != (long *)0x0) {
    plVar14 = plVar20 + 10;
    do {
      cVar22 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar22 = ExclusiveMonitorsStatus();
      }
    } while (cVar22 != '\0');
  }
  local_188 = plVar20;
  FUN_02938b3c(uVar12,&local_188);
  if (local_188 != (long *)0x0) {
    plVar14 = local_188 + 10;
    do {
      iVar10 = (int)*plVar14 + -1;
      cVar22 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *(int *)plVar14 = iVar10;
        cVar22 = ExclusiveMonitorsStatus();
      }
    } while (cVar22 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*local_188 + 0x10))();
    }
  }
  if (plVar20 != (long *)0x0) {
    plVar14 = plVar20 + 10;
    do {
      iVar10 = (int)*plVar14 + -1;
      cVar22 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *(int *)plVar14 = iVar10;
        cVar22 = ExclusiveMonitorsStatus();
      }
    } while (cVar22 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
  lVar19 = *(long *)(param_1 + 0x68);
  if (((*(char *)(*(long *)(*(long *)(*(long *)(lVar19 + 0x138) + 0x68) + 8) + 0x354) == '\0') ||
      (*(uint *)(*(long *)(lVar19 + 0xf8) + 0x80) <= *(uint *)(*(long *)(lVar19 + 0xf8) + 0x84))) ||
     (param_5[4] == '\0')) {
LAB_0091df54:
    cVar22 = param_5[5];
  }
  else {
    FUN_008c89dc(&local_170,*(undefined8 *)(lVar19 + 0xe8));
    lVar19 = FUN_00935ed0(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xf8));
    (**(code **)(*(long *)CONCAT17(uStack_169,
                                   CONCAT16(uStack_16a,
                                            CONCAT15(uStack_16b,CONCAT41(uStack_16f,local_170)))) +
                0x28))();
    local_190 = (long *)CONCAT17(uStack_169,
                                 CONCAT16(uStack_16a,
                                          CONCAT15(uStack_16b,CONCAT41(uStack_16f,local_170))));
    *(undefined1 *)((long)local_190 + 0x59) = uVar8;
    local_190[0xf] = (ulong)CONCAT11(bVar4,bVar4) | lVar19 << 0x20;
    uVar12 = *(undefined8 *)(param_1 + 0x78);
    if (local_190 != (long *)0x0) {
      plVar20 = local_190 + 10;
      do {
        cVar22 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar7) {
          *(int *)plVar20 = (int)*plVar20 + 1;
          cVar22 = ExclusiveMonitorsStatus();
        }
      } while (cVar22 != '\0');
    }
    FUN_02938b3c(uVar12,&local_190);
    if (local_190 == (long *)0x0) {
LAB_0091e24c:
      plVar20 = (long *)CONCAT17(uStack_169,
                                 CONCAT16(uStack_16a,
                                          CONCAT15(uStack_16b,CONCAT41(uStack_16f,local_170))));
    }
    else {
      plVar20 = local_190 + 10;
      do {
        iVar10 = (int)*plVar20 + -1;
        cVar22 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar7) {
          *(int *)plVar20 = iVar10;
          cVar22 = ExclusiveMonitorsStatus();
        }
      } while (cVar22 != '\0');
      if (iVar10 != 0) goto LAB_0091e24c;
      (**(code **)(*local_190 + 0x10))();
      plVar20 = (long *)CONCAT17(uStack_169,
                                 CONCAT16(uStack_16a,
                                          CONCAT15(uStack_16b,CONCAT41(uStack_16f,local_170))));
    }
    if (plVar20 == (long *)0x0) goto LAB_0091df54;
    plVar14 = plVar20 + 10;
    do {
      iVar10 = (int)*plVar14 + -1;
      cVar22 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *(int *)plVar14 = iVar10;
        cVar22 = ExclusiveMonitorsStatus();
      }
    } while (cVar22 != '\0');
    if (iVar10 != 0) goto LAB_0091df54;
    (**(code **)(*plVar20 + 0x10))();
    cVar22 = param_5[5];
  }
  if (cVar22 == '\0') goto LAB_0091df5c;
  local_170 = 0x1f;
  uStack_16f = 0;
  uStack_16b = 0;
  uStack_16a = 0x1f;
  local_168[0]._0_4_ = 0;
  lVar19 = FUN_02948a74(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x98));
  lVar19 = FUN_0294d654(*(undefined8 *)(lVar19 + 8),param_4 & 0xff);
  bVar9 = FUN_02948698(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x98),param_4);
  bVar5 = *(byte *)(lVar19 + 0x30);
  if (bVar9 < bVar5) {
    iVar10 = 0;
    uVar15 = (ulong)bVar9;
    if (bVar5 <= uVar15) goto LAB_0091e300;
    do {
      lVar16 = *(long *)(lVar19 + uVar15 * 8);
      while( true ) {
        lVar17 = *(long *)(lVar16 + 0x60);
        uVar13 = FUN_02c6cf3c(*(undefined8 *)(lVar17 + 0x98));
        if ((((uVar13 & 1) == 0) &&
            ((*(ushort *)(*(long *)(*(long *)(lVar17 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) &&
           (*(short *)(lVar16 + 0x74) != 0)) {
          *(undefined1 *)((long)local_168 + (long)iVar10 + -7) = *(undefined1 *)(lVar16 + 0x7d);
          iVar10 = (int)local_168[0] + 1;
          local_168[0]._0_4_ = iVar10;
        }
        uVar15 = uVar15 + 1;
        if ((uint)bVar5 == ((uint)uVar15 & 0xff)) goto LAB_0091e370;
        if (uVar15 < *(byte *)(lVar19 + 0x30)) break;
LAB_0091e300:
        lVar16 = 0;
      }
    } while( true );
  }
  iVar10 = 0;
LAB_0091e370:
  local_170 = bVar4;
  uStack_16a = FUN_00934430(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0));
  if (iVar10 < 1) goto LAB_0091df5c;
  FUN_008c8a00(&local_180,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xe8));
  (**(code **)(*(long *)CONCAT26(uStack_17a,
                                 CONCAT15(uStack_17b,
                                          CONCAT14(bStack_17c,
                                                   CONCAT13(uStack_17d,
                                                            CONCAT12(uStack_17e,
                                                                     CONCAT11(uStack_17f,local_180))
                                                           )))) + 0x28))();
  local_198 = (long *)CONCAT26(uStack_17a,
                               CONCAT15(uStack_17b,
                                        CONCAT14(bStack_17c,
                                                 CONCAT13(uStack_17d,
                                                          CONCAT12(uStack_17e,
                                                                   CONCAT11(uStack_17f,local_180))))
                                       ));
  *(undefined1 *)((long)local_198 + 0x59) = uVar8;
  *(int *)(local_198 + 0x10) = (int)local_168[0];
  local_198[0xf] =
       CONCAT17(uStack_169,CONCAT16(uStack_16a,CONCAT15(uStack_16b,CONCAT41(uStack_16f,local_170))))
  ;
  uVar12 = *(undefined8 *)(param_1 + 0x78);
  if (local_198 != (long *)0x0) {
    plVar20 = local_198 + 10;
    do {
      cVar22 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *(int *)plVar20 = (int)*plVar20 + 1;
        cVar22 = ExclusiveMonitorsStatus();
      }
    } while (cVar22 != '\0');
  }
  FUN_02938b3c(uVar12,&local_198);
  if (local_198 == (long *)0x0) {
LAB_0091e40c:
    plVar20 = (long *)CONCAT26(uStack_17a,
                               CONCAT15(uStack_17b,
                                        CONCAT14(bStack_17c,
                                                 CONCAT13(uStack_17d,
                                                          CONCAT12(uStack_17e,
                                                                   CONCAT11(uStack_17f,local_180))))
                                       ));
  }
  else {
    plVar20 = local_198 + 10;
    do {
      iVar10 = (int)*plVar20 + -1;
      cVar22 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *(int *)plVar20 = iVar10;
        cVar22 = ExclusiveMonitorsStatus();
      }
    } while (cVar22 != '\0');
    if (iVar10 != 0) goto LAB_0091e40c;
    (**(code **)(*local_198 + 0x10))();
    plVar20 = (long *)CONCAT26(uStack_17a,
                               CONCAT15(uStack_17b,
                                        CONCAT14(bStack_17c,
                                                 CONCAT13(uStack_17d,
                                                          CONCAT12(uStack_17e,
                                                                   CONCAT11(uStack_17f,local_180))))
                                       ));
  }
  if (plVar20 != (long *)0x0) {
    plVar14 = plVar20 + 10;
    do {
      iVar10 = (int)*plVar14 + -1;
      cVar22 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *(int *)plVar14 = iVar10;
        cVar22 = ExclusiveMonitorsStatus();
      }
    } while (cVar22 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar20 + 0x10))();
    }
  }
LAB_0091df5c:
  lVar19 = *(long *)(param_1 + 0x78);
  puVar21 = *(undefined8 **)(lVar19 + 0x58);
  puVar3 = *(undefined8 **)(lVar19 + 0x60);
  if (puVar21 != puVar3) {
    do {
      plVar20 = (long *)*puVar21;
      if (plVar20 != (long *)0x0) {
        plVar14 = plVar20 + 10;
        do {
          cVar22 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar7) {
            *(int *)plVar14 = (int)*plVar14 + 1;
            cVar22 = ExclusiveMonitorsStatus();
          }
        } while (cVar22 != '\0');
      }
      if ((char)plVar20[0xb] == '\0') {
        (**(code **)(*plVar20 + 0x30))(plVar20);
      }
      plVar14 = plVar20 + 10;
      do {
        iVar10 = (int)*plVar14 + -1;
        cVar22 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar7) {
          *(int *)plVar14 = iVar10;
          cVar22 = ExclusiveMonitorsStatus();
        }
      } while (cVar22 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
      puVar21 = puVar21 + 1;
    } while (puVar21 != puVar3);
    lVar19 = *(long *)(param_1 + 0x78);
  }
  FUN_02938dd4(lVar19,param_2);
  if ((*param_2 & 0xf) == 1) {
    uVar18 = (uint)*param_2;
    lVar19 = FUN_00934074(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),uVar18 >> 9 & 0xf);
    if (lVar19 != 0) {
      uVar18 = uVar18 >> 0xd & 0xffff;
      lVar16 = (&DAT_0428af30)[(ulong)uVar18 * 6];
      if (lVar16 == 0) {
        plVar20 = &DAT_0428af30;
      }
      else {
        plVar20 = &DAT_0428af30;
        if (*(char *)(lVar16 + 0x1e1) != '\0') {
          plVar20 = &DAT_0428af30 + (ulong)uVar18 * 6;
        }
      }
      piVar2 = (int *)((long)*(uint **)(*plVar20 + 0x250) + (ulong)**(uint **)(*plVar20 + 0x250));
      if (((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x8d) ||
          (uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x46], uVar15 == 0)) ||
         ((*(char *)((long)piVar2 + uVar15) == '\0' ||
          ((param_5[2] == '\0' && param_5[1] == '\0' ||
           (uVar15 = FUN_02c618d4(*(undefined8 *)(*(long *)(param_3 + 0x70) + 0x60),uVar18),
           (uVar15 & 1) == 0)))))) {
        uVar15 = 0;
      }
      else {
        iVar10 = FUN_0091efa4(param_1,param_3,lVar19,uVar18);
        uVar15 = (ulong)(uint)(iVar10 << 0x1e);
      }
      if ((*param_2 & 0xf) == 1) {
        *param_2 = *param_2 & 0xffffffff3fffffff | uVar15;
      }
    }
  }
  return;
}


