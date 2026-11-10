/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b7eed4; name: FUN_00b7eed4
 */


void FUN_00b7eed4(long param_1,long param_2,long *param_3,int *param_4,int *param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  bool bVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined1 *puVar19;
  int *piVar20;
  long *plVar21;
  long *plVar22;
  code *pcVar23;
  long lVar24;
  ulong uVar25;
  ushort *puVar26;
  long *plVar27;
  uint *puVar28;
  byte *pbVar29;
  ulong uVar30;
  ulong uVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  uint *puVar34;
  int *piVar35;
  uint *puVar36;
  uint *puVar37;
  int *piVar38;
  long *plVar39;
  int *piVar40;
  long lVar41;
  undefined8 uVar42;
  float fVar43;
  long *local_508;
  uint *local_500;
  long *local_4f8;
  long *local_4f0;
  long *local_4a0;
  long *local_498;
  code *local_490;
  code *local_488;
  undefined1 *local_480;
  undefined1 *local_478;
  undefined1 *local_470;
  undefined8 local_468;
  long *plStack_460;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  int *piStack_70;
  
  if (((param_4 == (int *)0x0) || (*(ushort *)((long)param_4 - (long)*param_4) < 0xf)) ||
     (uVar14 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[7], uVar14 == 0)) {
    puVar37 = (uint *)0x0;
  }
  else {
    puVar37 = (uint *)((long)param_4 + uVar14);
    puVar37 = (uint *)((long)puVar37 + (ulong)*puVar37);
  }
  lVar15 = *(long *)(param_2 + 8);
  puVar34 = *(uint **)(lVar15 + 0x250);
  uVar9 = *puVar34;
  if (lVar15 == 0) {
    plVar12 = (long *)FUN_00b779ac();
  }
  else {
    plVar12 = (long *)(lVar15 + 0x68);
  }
  puVar17 = (undefined8 *)PTR_PTR_04379d00;
  if (*plVar12 != 0) {
    puVar17 = (undefined8 *)(*plVar12 + 0x60);
  }
  piVar35 = (int *)((long)puVar34 + (ulong)uVar9);
  plVar12 = (long *)strrchr((char *)*puVar17,0x2f);
  if (plVar12 == (long *)0x0) {
    pbVar29 = (byte *)0x0;
  }
  else {
    pbVar29 = (byte *)((long)plVar12 + 1);
  }
  bVar4 = *pbVar29;
  piVar40 = (int *)&DAT_cbf29ce484222645;
  if (bVar4 != 0) {
    piVar40 = (int *)&DAT_cbf29ce484222645;
    do {
      pbVar29 = pbVar29 + 1;
      piVar40 = (int *)(((ulong)piVar40 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar29;
    } while (bVar4 != 0);
  }
  uVar14 = (ulong)*(ushort *)((long)piVar35 + (6 - (long)*piVar35));
  puVar1 = (uint *)((long)piVar35 + uVar14);
  uVar25 = (ulong)*puVar1;
  puVar1 = (uint *)((long)puVar1 + uVar25);
  puVar36 = puVar1 + 1;
  uVar30 = (ulong)*puVar1;
  if (uVar30 != 0) {
    puVar1 = puVar36 + uVar30;
    lVar15 = (long)puVar34 + uVar25 + uVar14 + (ulong)uVar9 + 9;
    do {
      uVar9 = *puVar36;
      piVar35 = (int *)((long)puVar36 + (ulong)uVar9);
      puVar26 = (ushort *)((long)piVar35 - (long)*piVar35);
      uVar6 = *puVar26;
      if (4 < uVar6) {
        if ((ulong)puVar26[2] != 0) {
          cVar5 = *(char *)((long)piVar35 + (ulong)puVar26[2]);
          if (uVar6 < 7 || cVar5 != '\x01') {
            if (6 < uVar6 && cVar5 == '\x02') {
              uVar14 = (ulong)puVar26[3];
              if (uVar14 != 0) {
                uVar25 = (ulong)*(uint *)((long)piVar35 + uVar14);
                piVar35 = (int *)((long)((long)piVar35 + uVar14) + uVar25);
                if (piVar35 != (int *)0x0) {
                  FUN_00b77f5c(&local_78,param_3,piVar35,puVar37);
                  uVar42 = FUN_00b821b4(param_1,0,piVar35,puVar37,&local_78);
                  uVar30 = (ulong)*(ushort *)((long)piVar35 + (4 - (long)*piVar35));
                  puVar34 = (uint *)((long)piVar35 + uVar30);
                  uVar31 = (ulong)*puVar34;
                  bVar4 = *(byte *)((long)puVar34 + uVar31 + 4);
                  puVar19 = &DAT_cbf29ce484222645;
                  if (bVar4 != 0) {
                    puVar19 = &DAT_cbf29ce484222645;
                    pbVar29 = (byte *)(lVar15 + uVar31 + uVar30 + uVar25 + uVar14 + (ulong)uVar9);
                    do {
                      puVar19 = (undefined1 *)(((ulong)puVar19 ^ (ulong)bVar4) * 0x100000001b3);
                      bVar4 = *pbVar29;
                      pbVar29 = pbVar29 + 1;
                    } while (bVar4 != 0);
                  }
                  if (puVar37 != (uint *)0x0) {
                    if (*puVar37 != 0) {
                      puVar33 = (undefined1 *)((long)puVar37 + 9);
                      puVar34 = puVar37 + 1;
                      do {
                        piVar38 = (int *)((long)puVar34 + (ulong)*puVar34);
                        uVar14 = (ulong)*(ushort *)((long)piVar38 + (4 - (long)*piVar38));
                        puVar28 = (uint *)((long)piVar38 + uVar14);
                        uVar25 = (ulong)*puVar28;
                        bVar4 = *(byte *)((long)puVar28 + uVar25 + 4);
                        puVar32 = &DAT_cbf29ce484222645;
                        if (bVar4 != 0) {
                          pbVar29 = puVar33 + uVar25 + uVar14 + (ulong)*puVar34;
                          do {
                            puVar32 = (undefined1 *)
                                      (((ulong)puVar32 ^ (ulong)bVar4) * 0x100000001b3);
                            bVar4 = *pbVar29;
                            pbVar29 = pbVar29 + 1;
                          } while (bVar4 != 0);
                        }
                        if (puVar32 == puVar19) goto LAB_00b7f1c8;
                        puVar34 = puVar34 + 1;
                        puVar33 = puVar33 + 4;
                      } while (puVar34 != puVar37 + 1 + *puVar37);
                    }
                  }
                  piVar38 = (int *)0x0;
LAB_00b7f1c8:
                  FUN_00b7eed4(param_1,uVar42,&local_78,piVar35,piVar38);
                  local_490 = (code *)0x0;
                  lVar16 = FUN_00b821b4(param_1,&local_490,piVar35,puVar37,&local_78);
                  puVar34 = *(uint **)(*(long *)(lVar16 + 8) + 0x250);
                  piVar38 = (int *)((long)puVar34 + (ulong)*puVar34);
                  puVar34 = (uint *)((long)piVar38 +
                                    (ulong)*(ushort *)((long)piVar38 + (8 - (long)*piVar38)));
                  puVar34 = (uint *)((long)puVar34 + (ulong)*puVar34 + 4);
                  piVar38 = (int *)((long)puVar34 + (ulong)*puVar34);
                  if ((*(ushort *)((long)piVar38 - (long)*piVar38) < 5) ||
                     (uVar14 = (ulong)((ushort *)((long)piVar38 - (long)*piVar38))[2], uVar14 == 0))
                  {
                    lVar16 = 0;
                  }
                  else {
                    puVar34 = (uint *)((long)piVar38 + uVar14);
                    lVar16 = (long)puVar34 + (ulong)*puVar34;
                  }
                  FUN_00b8264c(&local_80,param_1,&local_490,lVar16 + 4,&local_78);
                  local_498 = local_80;
                  if (local_80 != (long *)0x0) {
                    plVar12 = local_80 + 10;
                    do {
                      cVar5 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                      if (bVar7) {
                        *(int *)plVar12 = (int)*plVar12 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  if ((*(ushort *)((long)piVar35 - (long)*piVar35) < 0xb) ||
                     (uVar14 = (ulong)((ushort *)((long)piVar35 - (long)*piVar35))[5], uVar14 == 0))
                  {
                    lVar16 = 0;
                  }
                  else {
                    puVar34 = (uint *)((long)piVar35 + uVar14);
                    lVar16 = (long)puVar34 + (ulong)*puVar34;
                  }
                  FUN_00b80650(param_1,&local_498,lVar16,piVar35,param_5);
                  if (local_498 != (long *)0x0) {
                    plVar12 = local_498 + 10;
                    do {
                      iVar10 = (int)*plVar12 + -1;
                      cVar5 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                      if (bVar7) {
                        *(int *)plVar12 = iVar10;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar10 == 0) {
                      (**(code **)(*local_498 + 0x10))();
                    }
                  }
                  local_4a0 = local_80;
                  if (local_80 != (long *)0x0) {
                    plVar12 = local_80 + 10;
                    do {
                      cVar5 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                      if (bVar7) {
                        *(int *)plVar12 = (int)*plVar12 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  if ((*(ushort *)((long)piVar35 - (long)*piVar35) < 0xd) ||
                     (uVar14 = (ulong)((ushort *)((long)piVar35 - (long)*piVar35))[6], uVar14 == 0))
                  {
                    lVar16 = 0;
                  }
                  else {
                    puVar34 = (uint *)((long)piVar35 + uVar14);
                    lVar16 = (long)puVar34 + (ulong)*puVar34;
                  }
                  FUN_00b80e4c(param_1,&local_4a0,lVar16,piVar35,param_5);
                  if (local_4a0 != (long *)0x0) {
                    plVar12 = local_4a0 + 10;
                    do {
                      iVar10 = (int)*plVar12 + -1;
                      cVar5 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                      if (bVar7) {
                        *(int *)plVar12 = iVar10;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar10 == 0) {
                      (**(code **)(*local_4a0 + 0x10))();
                    }
                  }
                  if (*(ushort *)((long)piVar35 - (long)*piVar35) < 5) {
                    lVar16 = 0;
                  }
                  else {
                    uVar14 = (ulong)((ushort *)((long)piVar35 - (long)*piVar35))[2];
                    lVar16 = 0;
                    if (uVar14 != 0) {
                      puVar34 = (uint *)((long)piVar35 + uVar14);
                      lVar16 = (long)puVar34 + (ulong)*puVar34;
                    }
                  }
                  local_80[0x24] = lVar16 + 4;
                  plVar12 = local_78;
                  if (local_80 != (long *)0x0) {
                    plVar18 = local_80 + 10;
                    do {
                      iVar10 = (int)*plVar18 + -1;
                      cVar5 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                      if (bVar7) {
                        *(int *)plVar18 = iVar10;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar10 == 0) {
                      (**(code **)(*local_80 + 0x10))();
                      plVar12 = local_78;
                    }
                  }
                  local_78 = plVar12;
                  if (plVar12 != (long *)0x0) {
                    pcVar23 = *(code **)(*plVar12 + 0x20);
LAB_00b7f490:
                    plVar12 = (long *)(*pcVar23)();
                  }
                }
              }
            }
          }
          else if ((ulong)puVar26[3] != 0) {
            puVar34 = (uint *)((long)piVar35 + (ulong)puVar26[3]);
            piVar35 = (int *)((long)puVar34 + (ulong)*puVar34);
            if (piVar35 != (int *)0x0) {
              if (*(long *)(param_2 + 8) == 0) {
                plVar12 = (long *)FUN_00b779ac(plVar12);
                lVar16 = *plVar12;
                if (lVar16 != 0) goto LAB_00b7f0bc;
LAB_00b7f4fc:
                puVar17 = (undefined8 *)PTR_PTR_04379d00;
              }
              else {
                lVar16 = *(long *)(*(long *)(param_2 + 8) + 0x68);
                if (lVar16 == 0) goto LAB_00b7f4fc;
LAB_00b7f0bc:
                puVar17 = (undefined8 *)(lVar16 + 0x60);
              }
              plVar12 = (long *)strrchr((char *)*puVar17,0x2f);
              if (plVar12 == (long *)0x0) {
                lVar16 = 0;
                lVar41 = *(long *)(param_1 + 0x60);
              }
              else {
                lVar16 = (long)plVar12 + 1;
                lVar41 = *(long *)(param_1 + 0x60);
              }
              if (lVar41 != 0) {
                if (*(int *)(lVar41 + 0xc) != 0) {
                  piVar38 = (int *)(lVar41 + 0xc);
                  iVar10 = *(int *)(lVar41 + 0xc);
                  while( true ) {
                    plVar18 = *(long **)(lVar41 + 0x10);
                    if (((*PTR_DAT_0437ae20 & 1) == 0) &&
                       (plVar12 = (long *)__cxa_guard_acquire(PTR_DAT_0437ae20), (int)plVar12 != 0))
                    {
                      if (((*PTR_DAT_043794d0 & 1) == 0) &&
                         (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
                        uVar42 = FUN_0087f8f0();
                        *(undefined8 *)PTR_DAT_043794d8 = uVar42;
                        __cxa_guard_release(PTR_DAT_043794d0);
                      }
                      *(undefined **)PTR_DAT_0437ae28 = PTR_DAT_043794d8;
                      plVar12 = (long *)__cxa_guard_release(PTR_DAT_0437ae20);
                    }
                    while( true ) {
                      if (plVar18 == (long *)0x0) goto LAB_00b7f04c;
                      if (plVar18 == (long *)PTR_DAT_0437ae28) break;
                      plVar18 = (long *)*plVar18;
                    }
                    iVar11 = *piVar38;
                    if (iVar11 == iVar10) break;
                    ClearExclusiveLocal();
LAB_00b7f534:
                    iVar10 = iVar11;
                    if (iVar11 == 0) goto LAB_00b7f04c;
                  }
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar38,0x10);
                  if (bVar7) {
                    *piVar38 = iVar10 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 != '\0') goto LAB_00b7f534;
                  lVar41 = *(long *)(lVar41 + 0x18);
                  if (lVar41 == 0) goto LAB_00b7f04c;
                  if (*(ushort *)((long)piVar35 - (long)*piVar35) < 7) {
                    lVar24 = 0;
                  }
                  else {
                    uVar14 = (ulong)((ushort *)((long)piVar35 - (long)*piVar35))[3];
                    lVar24 = 0;
                    if (uVar14 != 0) {
                      puVar34 = (uint *)((long)piVar35 + uVar14);
                      lVar24 = (long)puVar34 + (ulong)*puVar34;
                    }
                  }
                  FUN_00c12278(&local_80,(long *)(lVar41 + -0x50),*(undefined8 *)(param_1 + 0xa0),
                               lVar24 + 4);
                  if (local_80 == (long *)0x0) {
                    local_508 = (long *)0x0;
                    plVar12 = local_80;
                    goto LAB_00b7f8f0;
                  }
                  if (*(ushort *)((long)piVar35 - (long)*piVar35) < 5) {
                    lVar24 = 0;
                  }
                  else {
                    uVar14 = (ulong)((ushort *)((long)piVar35 - (long)*piVar35))[2];
                    lVar24 = 0;
                    if (uVar14 != 0) {
                      puVar34 = (uint *)((long)piVar35 + uVar14);
                      lVar24 = (long)puVar34 + (ulong)*puVar34;
                    }
                  }
                  FUN_00bbd264(local_80,lVar24 + 4);
                  FUN_00bbd26c(local_80,lVar16);
                  puVar26 = (ushort *)((long)piVar35 - (long)*piVar35);
                  if ((*puVar26 < 5) || ((ulong)puVar26[2] == 0)) {
                    lVar16 = 0;
                  }
                  else {
                    puVar34 = (uint *)((long)piVar35 + (ulong)puVar26[2]);
                    lVar16 = (long)puVar34 + (ulong)*puVar34;
                  }
                  bVar4 = *(byte *)(lVar16 + 4);
                  puVar19 = &DAT_cbf29ce484222645;
                  if (bVar4 != 0) {
                    puVar19 = &DAT_cbf29ce484222645;
                    pbVar29 = (byte *)(lVar16 + 5);
                    do {
                      puVar19 = (undefined1 *)(((ulong)puVar19 ^ (ulong)bVar4) * 0x100000001b3);
                      bVar4 = *pbVar29;
                      pbVar29 = pbVar29 + 1;
                    } while (bVar4 != 0);
                  }
                  if ((*puVar26 < 9) || ((ulong)puVar26[4] == 0)) {
                    puVar34 = (uint *)0x0;
                  }
                  else {
                    puVar34 = (uint *)((long)piVar35 + (ulong)puVar26[4]);
                    puVar34 = (uint *)((long)puVar34 + (ulong)*puVar34);
                  }
                  if (param_5 == (int *)0x0) {
                    if (param_4 != (int *)0x0) {
                      uVar14 = (ulong)*(ushort *)((long)param_4 + (8 - (long)*param_4));
                      puVar2 = (uint *)((long)param_4 + uVar14);
                      uVar25 = (ulong)*puVar2;
                      puVar2 = (uint *)((long)puVar2 + uVar25);
                      puVar28 = puVar2 + 1;
                      uVar9 = *puVar2;
                      if (uVar9 != 0) {
                        puVar2 = puVar28 + uVar9;
                        puVar33 = (undefined1 *)((long)param_4 + uVar25 + uVar14 + 9);
                        do {
                          piVar38 = (int *)((long)puVar28 + (ulong)*puVar28);
                          puVar26 = (ushort *)((long)piVar38 - (long)*piVar38);
                          puVar3 = (uint *)((long)piVar38 + (ulong)puVar26[2]);
                          uVar14 = (ulong)*puVar3;
                          bVar4 = *(byte *)((long)puVar3 + uVar14 + 4);
                          puVar32 = &DAT_cbf29ce484222645;
                          if (bVar4 != 0) {
                            puVar32 = &DAT_cbf29ce484222645;
                            pbVar29 = puVar33 + uVar14 + puVar26[2] + (ulong)*puVar28;
                            do {
                              puVar32 = (undefined1 *)
                                        (((ulong)puVar32 ^ (ulong)bVar4) * 0x100000001b3);
                              bVar4 = *pbVar29;
                              pbVar29 = pbVar29 + 1;
                            } while (bVar4 != 0);
                          }
                          if (puVar32 == puVar19) goto LAB_00b803bc;
                          puVar28 = puVar28 + 1;
                          puVar33 = puVar33 + 4;
                          local_500 = (uint *)0x0;
                        } while (puVar28 != puVar2);
                        goto LAB_00b7f70c;
                      }
                    }
LAB_00b7f708:
                    local_500 = (uint *)0x0;
                  }
                  else {
                    uVar14 = (ulong)*(ushort *)((long)param_5 + (8 - (long)*param_5));
                    puVar2 = (uint *)((long)param_5 + uVar14);
                    uVar25 = (ulong)*puVar2;
                    puVar2 = (uint *)((long)puVar2 + uVar25);
                    puVar28 = puVar2 + 1;
                    uVar9 = *puVar2;
                    if (uVar9 == 0) goto LAB_00b7f708;
                    puVar2 = puVar28 + uVar9;
                    lVar16 = (long)param_5 + uVar25 + uVar14 + 9;
                    do {
                      piVar38 = (int *)((long)puVar28 + (ulong)*puVar28);
                      puVar26 = (ushort *)((long)piVar38 - (long)*piVar38);
                      puVar3 = (uint *)((long)piVar38 + (ulong)puVar26[2]);
                      uVar14 = (ulong)*puVar3;
                      bVar4 = *(byte *)((long)puVar3 + uVar14 + 4);
                      puVar33 = &DAT_cbf29ce484222645;
                      if (bVar4 != 0) {
                        puVar33 = &DAT_cbf29ce484222645;
                        pbVar29 = (byte *)(lVar16 + uVar14 + puVar26[2] + (ulong)*puVar28);
                        do {
                          puVar33 = (undefined1 *)(((ulong)puVar33 ^ (ulong)bVar4) * 0x100000001b3);
                          bVar4 = *pbVar29;
                          pbVar29 = pbVar29 + 1;
                        } while (bVar4 != 0);
                      }
                      if (puVar33 == puVar19) goto LAB_00b803bc;
                      puVar28 = puVar28 + 1;
                      lVar16 = lVar16 + 4;
                      local_500 = (uint *)0x0;
                    } while (puVar28 != puVar2);
                  }
                  goto LAB_00b7f70c;
                }
              }
            }
          }
        }
      }
LAB_00b7f04c:
      puVar36 = puVar36 + 1;
      lVar15 = lVar15 + 4;
    } while (puVar36 != puVar1);
  }
  return;
LAB_00b803bc:
  if ((*puVar26 < 7) || ((ulong)puVar26[3] == 0)) goto LAB_00b7f708;
  local_500 = (uint *)((long)piVar38 + (ulong)puVar26[3]);
  local_500 = (uint *)((long)local_500 + (ulong)*local_500);
LAB_00b7f70c:
  local_468 = 0;
  plStack_460 = local_80;
  local_490 = FUN_00b81680;
  local_480 = &LAB_00b816a0;
  local_488 = FUN_00b8169c;
  local_470 = &LAB_00bbe580;
  local_478 = &LAB_00b816b4;
  uVar9 = *puVar34;
  if (uVar9 != 0) {
    puVar28 = puVar34 + 1;
    if (local_500 == (uint *)0x0) {
      local_78 = (long *)((long)puVar28 + (ulong)*puVar28);
      piStack_70 = (int *)0x0;
      FUN_00b81680(&local_470,&local_78);
      if (uVar9 != 1) {
        local_78 = (long *)((long)(puVar34 + 2) + (ulong)puVar34[2]);
        piStack_70 = (int *)0x0;
        (*local_490)(&local_470,&local_78);
        if (uVar9 != 2) {
          local_78 = (long *)((long)(puVar34 + 3) + (ulong)puVar34[3]);
          piStack_70 = (int *)0x0;
          (*local_490)(&local_470,&local_78);
          if (uVar9 != 3) {
            lVar16 = (ulong)uVar9 - 3;
            puVar34 = puVar34 + 4;
            do {
              local_78 = (long *)((long)puVar34 + (ulong)*puVar34);
              piStack_70 = (int *)0x0;
              (*local_490)(&local_470,&local_78);
              lVar16 = lVar16 + -1;
              puVar34 = puVar34 + 1;
            } while (lVar16 != 0);
          }
        }
      }
    }
    else {
      lVar16 = (long)puVar34 + 9;
      local_508 = (long *)0x0;
      do {
        uVar14 = (ulong)puVar28[(long)local_508];
        local_78 = (long *)((long)(puVar28 + (long)local_508) + uVar14);
        uVar25 = (ulong)*(ushort *)((long)local_78 + (4 - (long)(int)*local_78));
        puVar34 = (uint *)((long)local_78 + uVar25);
        uVar30 = (ulong)*puVar34;
        bVar4 = *(byte *)((long)puVar34 + uVar30 + 4);
        puVar19 = &DAT_cbf29ce484222645;
        if (bVar4 != 0) {
          puVar19 = &DAT_cbf29ce484222645;
          pbVar29 = (byte *)(lVar16 + uVar30 + uVar25 + uVar14);
          do {
            puVar19 = (undefined1 *)(((ulong)puVar19 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar29;
            pbVar29 = pbVar29 + 1;
          } while (bVar4 != 0);
        }
        if (*local_500 == 0) {
          piStack_70 = (int *)0x0;
        }
        else {
          piVar38 = (int *)0x0;
          puVar33 = (undefined1 *)((long)local_500 + 9);
          puVar34 = local_500 + 1;
          do {
            piStack_70 = (int *)((long)puVar34 + (ulong)*puVar34);
            uVar25 = (ulong)*(ushort *)((long)piStack_70 + (4 - (long)*piStack_70));
            puVar2 = (uint *)((long)piStack_70 + uVar25);
            uVar14 = (ulong)*puVar2;
            bVar4 = *(byte *)((long)puVar2 + uVar14 + 4);
            puVar32 = &DAT_cbf29ce484222645;
            if (bVar4 != 0) {
              puVar32 = &DAT_cbf29ce484222645;
              pbVar29 = puVar33 + uVar14 + uVar25 + (ulong)*puVar34;
              do {
                puVar32 = (undefined1 *)(((ulong)puVar32 ^ (ulong)bVar4) * 0x100000001b3);
                bVar4 = *pbVar29;
                pbVar29 = pbVar29 + 1;
              } while (bVar4 != 0);
            }
            puVar34 = puVar34 + 1;
            if (puVar19 != puVar32) {
              piStack_70 = piVar38;
            }
            if (puVar34 == local_500 + 1 + *local_500) break;
            puVar33 = puVar33 + 4;
            piVar38 = piStack_70;
          } while (puVar19 != puVar32);
        }
        (*local_490)(&local_470,&local_78);
        local_508 = (long *)((long)local_508 + 1);
        lVar16 = lVar16 + 4;
      } while (local_508 != (long *)(ulong)uVar9);
    }
  }
  pcVar23 = local_488;
  if (local_488 != (code *)0x0) {
    local_480 = (undefined1 *)0x0;
    local_478 = (undefined1 *)0x0;
    local_490 = (code *)0x0;
    local_488 = (code *)0x0;
    (*pcVar23)(&local_470);
  }
  local_88 = local_80;
  if (local_80 != (long *)0x0) {
    plVar12 = local_80 + 10;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if ((*(ushort *)((long)piVar35 - (long)*piVar35) < 0xb) ||
     (uVar14 = (ulong)((ushort *)((long)piVar35 - (long)*piVar35))[5], uVar14 == 0)) {
    lVar16 = 0;
  }
  else {
    puVar34 = (uint *)((long)piVar35 + uVar14);
    lVar16 = (long)puVar34 + (ulong)*puVar34;
  }
  FUN_00b80650(param_1,&local_88,lVar16,param_4,param_5);
  if (local_88 != (long *)0x0) {
    plVar12 = local_88 + 10;
    do {
      iVar10 = (int)*plVar12 + -1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *(int *)plVar12 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  local_90 = local_80;
  if (local_80 != (long *)0x0) {
    plVar12 = local_80 + 10;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if ((*(ushort *)((long)piVar35 - (long)*piVar35) < 0xd) ||
     (uVar14 = (ulong)((ushort *)((long)piVar35 - (long)*piVar35))[6], uVar14 == 0)) {
    lVar16 = 0;
  }
  else {
    puVar34 = (uint *)((long)piVar35 + uVar14);
    lVar16 = (long)puVar34 + (ulong)*puVar34;
  }
  FUN_00b80e4c(param_1,&local_90,lVar16,param_4,param_5);
  plVar12 = local_90;
  if (local_90 != (long *)0x0) {
    plVar18 = local_90 + 10;
    do {
      iVar10 = (int)*plVar18 + -1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *(int *)plVar18 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      plVar12 = (long *)(**(code **)(*local_90 + 0x10))();
    }
  }
  local_508 = local_80;
  local_80 = (long *)0x0;
LAB_00b7f8f0:
  lVar16 = *(long *)(lVar41 + 8);
  piVar38 = (int *)(lVar16 + 0xc);
  do {
    iVar10 = *piVar38;
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar38,0x10);
    if (bVar7) {
      *piVar38 = iVar10 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    plVar12 = (long *)(**(code **)(*(long *)(lVar41 + -0x50) + 0x20))();
  }
  if (local_508 != (long *)0x0) {
    if (*(ushort *)((long)piVar35 - (long)*piVar35) < 5) {
      lVar16 = 0;
    }
    else {
      uVar14 = (ulong)((ushort *)((long)piVar35 - (long)*piVar35))[2];
      lVar16 = 0;
      if (uVar14 != 0) {
        puVar34 = (uint *)((long)piVar35 + uVar14);
        lVar16 = (long)puVar34 + (ulong)*puVar34;
      }
    }
    puVar17 = (undefined8 *)PTR_PTR_04379d00;
    if (*param_3 != 0) {
      puVar17 = (undefined8 *)(*param_3 + 0x60);
    }
    uVar9 = snprintf((char *)&local_490,0x400,"%s/%s",(char *)*puVar17,(char *)(lVar16 + 4));
    plVar12 = (long *)(ulong)uVar9;
    plVar18 = (long *)&DAT_cbf29ce484222645;
    if ((byte)local_490 != 0) {
      plVar18 = (long *)&DAT_cbf29ce484222645;
      pbVar29 = (byte *)((ulong)&local_490 | 1);
      bVar4 = (byte)local_490;
      do {
        plVar18 = (long *)(((ulong)plVar18 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar29;
        pbVar29 = pbVar29 + 1;
      } while (bVar4 != 0);
    }
    piVar38 = *(int **)(param_1 + 0x3b8);
    local_4f8 = (long *)(param_1 + 0x3b0);
    piVar35 = param_4;
    if (piVar38 == (int *)0x0) {
LAB_00b7fa88:
      local_4f0 = (long *)(**(code **)(**(long **)(param_1 + 1000) + 0x10))
                                    (*(long **)(param_1 + 1000),0x80,8);
      if (local_4f0 == (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 1000) + 0xb8))();
      }
      uVar42 = *(undefined8 *)(param_1 + 1000);
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), iVar10 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (lVar16 == 0) {
        bVar7 = true;
      }
      else {
        if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_00b803ec;
        *(undefined8 *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = uVar42;
        bVar7 = false;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
      }
      local_4f0[2] = (long)piVar40;
      local_4f0[3] = 0;
      local_4f0[4] = 0;
      local_4f0[5] = 0;
      local_4f0[6] = 0;
      local_4f0[7] = 0;
      local_4f0[8] = 0;
      local_4f0[9] = 0;
      local_4f0[10] = 0;
      local_4f0[0xb] = 0;
      local_4f0[0xc] = 0;
      local_4f0[0xd] = 0;
      local_4f0[0xe] = 0;
      local_4f0[0xf] = 0;
      if ((*PTR_DAT_04379520 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar8 = PTR_DAT_04379528;
        if (iVar10 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      lVar24 = DAT_043f1798;
      lVar41 = tpidr_el0;
      if ((((lVar13 == 0) || (*(long *)(lVar13 + 0x80) == 0)) ||
          (lVar13 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8), lVar13 == 0)) &&
         (lVar13 = *(long *)(lVar41 + 0x20), *(long *)(lVar41 + 0x20) == 0)) {
        *(long *)(lVar41 + 0x20) = DAT_043f1798;
        lVar13 = lVar24;
      }
      local_4f0[5] = lVar13;
      local_4f0[6] = 0xfffffffffffffff;
      local_4f0[7] = 0;
      *(undefined4 *)(local_4f0 + 8) = 0;
      local_4f0[9] = 0;
      if ((*PTR_DAT_04379520 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar8 = PTR_DAT_04379528;
        if (iVar10 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      lVar24 = DAT_043f1798;
      if (((plVar12 == (long *)0x0) || (plVar12[0x10] == 0)) ||
         (lVar13 = plVar12[plVar12[0x10] + -1], lVar13 == 0)) {
        plVar12 = (long *)&DAT_00000020;
        lVar13 = *(long *)(lVar41 + 0x20);
        if (*(long *)(lVar41 + 0x20) == 0) {
          plVar12 = (long *)&DAT_00000020;
          *(long *)(lVar41 + 0x20) = DAT_043f1798;
          lVar13 = lVar24;
        }
      }
      local_4f0[10] = lVar13;
      local_4f0[0xb] = 0xfffffffffffffff;
      local_4f0[0xc] = 0;
      *(undefined4 *)(local_4f0 + 0xf) = 0x3f800000;
      *(undefined4 *)(local_4f0 + 0xd) = 0;
      local_4f0[0xe] = 0;
      if (!bVar7) {
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
      }
      *local_4f0 = 0;
      local_4f0[1] = (long)piVar40;
      fVar43 = (float)(*(long *)(param_1 + 0x408) + 1);
      if ((piVar38 == (int *)0x0) || (*(float *)(param_1 + 0x410) * (float)piVar38 < fVar43)) {
        uVar14 = (ulong)(piVar38 < (int *)0x3 || ((ulong)piVar38 & (ulong)((long)piVar38 + -1)) != 0
                        ) | (long)piVar38 << 1;
        uVar25 = (ulong)(fVar43 / *(float *)(param_1 + 0x410));
        if (uVar25 <= uVar14) {
          uVar25 = uVar14;
        }
        plVar12 = (long *)FUN_00b816c8(local_4f8,uVar25);
        piVar38 = *(int **)(param_1 + 0x3b8);
        if (((ulong)piVar38 & (ulong)((long)piVar38 + -1)) == 0) {
          piVar35 = (int *)((ulong)((long)piVar38 + -1) & (ulong)piVar40);
        }
        else if (piVar40 < piVar38) {
          piVar35 = piVar40;
        }
        else {
          uVar14 = 0;
          if (piVar38 != (int *)0x0) {
            uVar14 = (ulong)piVar40 / (ulong)piVar38;
          }
          piVar35 = (int *)((long)piVar40 - uVar14 * (long)piVar38);
        }
      }
      plVar21 = *(long **)(*local_4f8 + (long)piVar35 * 8);
      if (plVar21 == (long *)0x0) {
        *local_4f0 = *(long *)(param_1 + 0x3e0);
        *(long **)(param_1 + 0x3e0) = local_4f0;
        *(long *)(*(long *)(param_1 + 0x3b0) + (long)piVar35 * 8) = param_1 + 0x3e0;
        if (*local_4f0 != 0) {
          piVar35 = *(int **)(*local_4f0 + 8);
          if (((ulong)piVar38 & (ulong)((long)piVar38 + -1)) == 0) {
            piVar35 = (int *)((ulong)piVar35 & (ulong)((long)piVar38 + -1));
          }
          else if (piVar38 <= piVar35) {
            uVar14 = 0;
            if (piVar38 != (int *)0x0) {
              uVar14 = (ulong)piVar35 / (ulong)piVar38;
            }
            piVar35 = (int *)((long)piVar35 - uVar14 * (long)piVar38);
          }
          plVar21 = (long *)(*local_4f8 + (long)piVar35 * 8);
          goto LAB_00b7fd14;
        }
      }
      else {
        *local_4f0 = *plVar21;
LAB_00b7fd14:
        *plVar21 = (long)local_4f0;
      }
      *(long *)(param_1 + 0x408) = *(long *)(param_1 + 0x408) + 1;
    }
    else {
      uVar14 = (long)piVar38 - ((ulong)piVar38 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        piVar35 = (int *)((ulong)((long)piVar38 + -1) & (ulong)piVar40);
      }
      else {
        piVar35 = piVar40;
        if (piVar38 <= piVar40) {
          uVar25 = 0;
          if (piVar38 != (int *)0x0) {
            uVar25 = (ulong)piVar40 / (ulong)piVar38;
          }
          piVar35 = (int *)((long)piVar40 - uVar25 * (long)piVar38);
        }
      }
      local_4f0 = *(long **)(*local_4f8 + (long)piVar35 * 8);
      if (local_4f0 == (long *)0x0) goto LAB_00b7fa88;
      if (uVar14 < 2) {
        do {
          local_4f0 = (long *)*local_4f0;
          if ((local_4f0 == (long *)0x0) ||
             ((int *)local_4f0[1] != piVar40 &&
              (int *)((ulong)local_4f0[1] & (ulong)((long)piVar38 + -1)) != piVar35))
          goto LAB_00b7fa88;
        } while ((int *)local_4f0[2] != piVar40);
      }
      else {
        do {
          local_4f0 = (long *)*local_4f0;
          if (local_4f0 == (long *)0x0) goto LAB_00b7fa88;
          piVar20 = (int *)local_4f0[1];
          if (piVar20 != piVar40) {
            if (piVar38 <= piVar20) {
              uVar14 = 0;
              if (piVar38 != (int *)0x0) {
                uVar14 = (ulong)piVar20 / (ulong)piVar38;
              }
              piVar20 = (int *)((long)piVar20 - uVar14 * (long)piVar38);
            }
            if (piVar20 != piVar35) goto LAB_00b7fa88;
          }
        } while ((int *)local_4f0[2] != piVar40);
      }
    }
    plVar21 = local_4f0 + 3;
    plVar39 = (long *)local_4f0[4];
    if (plVar39 == (long *)0x0) {
LAB_00b7fe9c:
      plVar22 = (long *)(**(code **)(*(long *)local_4f0[10] + 0x10))((long *)local_4f0[10],0x20,8);
      if (plVar22 == (long *)0x0) {
        (**(code **)(*(long *)local_4f0[10] + 0xb8))();
      }
      lVar16 = local_4f0[10];
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), iVar10 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (plVar12 == (long *)0x0) {
        plVar22[2] = (long)plVar18;
        plVar22[3] = (long)local_508;
      }
      else {
        if (0xf < (ulong)plVar12[0x10]) {
LAB_00b803ec:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        plVar12[plVar12[0x10]] = lVar16;
        plVar12[0x10] = plVar12[0x10] + 1;
        plVar22[2] = (long)plVar18;
        plVar22[3] = (long)local_508;
        plVar12[0x10] = plVar12[0x10] + -1;
      }
      *plVar22 = 0;
      plVar22[1] = (long)plVar18;
      if ((plVar39 == (long *)0x0) ||
         (*(float *)(local_4f0 + 0xf) * (float)plVar39 < (float)(local_4f0[0xe] + 1))) {
        uVar14 = (ulong)(plVar39 < (long *)0x3 ||
                        ((ulong)plVar39 & (ulong)((long)plVar39 + -1)) != 0) | (long)plVar39 << 1;
        uVar25 = (ulong)((float)(local_4f0[0xe] + 1) / *(float *)(local_4f0 + 0xf));
        if (uVar25 <= uVar14) {
          uVar25 = uVar14;
        }
        plVar12 = (long *)FUN_00b81c48(plVar21,uVar25);
        plVar39 = (long *)local_4f0[4];
        if (((ulong)plVar39 & (ulong)((long)plVar39 + -1)) == 0) {
          local_4f8 = (long *)((ulong)((long)plVar39 + -1) & (ulong)plVar18);
        }
        else {
          if (plVar18 < plVar39) {
            local_4f8 = plVar18;
            goto LAB_00b7ffac;
          }
          uVar14 = 0;
          if (plVar39 != (long *)0x0) {
            uVar14 = (ulong)plVar18 / (ulong)plVar39;
          }
          local_4f8 = (long *)((long)plVar18 - uVar14 * (long)plVar39);
        }
      }
LAB_00b7ffac:
      plVar18 = *(long **)(*plVar21 + (long)local_4f8 * 8);
      if (plVar18 == (long *)0x0) {
        plVar18 = local_4f0 + 9;
        *plVar22 = *plVar18;
        *plVar18 = (long)plVar22;
        *(long **)(local_4f0[3] + (long)local_4f8 * 8) = plVar18;
        if (*plVar22 != 0) {
          plVar18 = *(long **)(*plVar22 + 8);
          if (((ulong)plVar39 & (ulong)((long)plVar39 + -1)) == 0) {
            plVar18 = (long *)((ulong)plVar18 & (ulong)((long)plVar39 + -1));
          }
          else if (plVar39 <= plVar18) {
            uVar14 = 0;
            if (plVar39 != (long *)0x0) {
              uVar14 = (ulong)plVar18 / (ulong)plVar39;
            }
            plVar18 = (long *)((long)plVar18 - uVar14 * (long)plVar39);
          }
          plVar18 = (long *)(*plVar21 + (long)plVar18 * 8);
          goto LAB_00b8000c;
        }
      }
      else {
        *plVar22 = *plVar18;
LAB_00b8000c:
        *plVar18 = (long)plVar22;
      }
      local_4f0[0xe] = local_4f0[0xe] + 1;
      goto LAB_00b7f04c;
    }
    uVar14 = (long)plVar39 - ((ulong)plVar39 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      local_4f8 = (long *)((ulong)((long)plVar39 + -1) & (ulong)plVar18);
    }
    else {
      local_4f8 = plVar18;
      if (plVar39 <= plVar18) {
        uVar25 = 0;
        if (plVar39 != (long *)0x0) {
          uVar25 = (ulong)plVar18 / (ulong)plVar39;
        }
        local_4f8 = (long *)((long)plVar18 - uVar25 * (long)plVar39);
      }
    }
    plVar22 = *(long **)(*plVar21 + (long)local_4f8 * 8);
    if (plVar22 == (long *)0x0) goto LAB_00b7fe9c;
    if (uVar14 < 2) {
      do {
        plVar22 = (long *)*plVar22;
        if ((plVar22 == (long *)0x0) ||
           ((long *)plVar22[1] != plVar18 &&
            (long *)((ulong)plVar22[1] & (ulong)((long)plVar39 + -1)) != local_4f8))
        goto LAB_00b7fe9c;
      } while ((long *)plVar22[2] != plVar18);
    }
    else {
      do {
        plVar22 = (long *)*plVar22;
        if (plVar22 == (long *)0x0) goto LAB_00b7fe9c;
        plVar27 = (long *)plVar22[1];
        if (plVar27 != plVar18) {
          if (plVar39 <= plVar27) {
            uVar14 = 0;
            if (plVar39 != (long *)0x0) {
              uVar14 = (ulong)plVar27 / (ulong)plVar39;
            }
            plVar27 = (long *)((long)plVar27 - uVar14 * (long)plVar39);
          }
          if (plVar27 != local_4f8) goto LAB_00b7fe9c;
        }
      } while ((long *)plVar22[2] != plVar18);
    }
    plVar18 = local_508 + 10;
    do {
      iVar10 = (int)*plVar18 + -1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *(int *)plVar18 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 != 0) goto LAB_00b7f04c;
    pcVar23 = *(code **)(*local_508 + 0x10);
    goto LAB_00b7f490;
  }
  goto LAB_00b7f04c;
}


