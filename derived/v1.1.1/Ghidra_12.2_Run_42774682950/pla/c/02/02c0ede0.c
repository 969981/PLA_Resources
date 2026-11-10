/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c0ede0; name: FUN_02c0ede0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0ede0(long param_1,ulong param_2)

{
  byte *__s;
  int *piVar1;
  int iVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined *puVar27;
  bool bVar28;
  int iVar29;
  char *pcVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  ulong uVar34;
  long *plVar35;
  long *plVar36;
  long lVar37;
  long *plVar38;
  ulong uVar39;
  byte *pbVar40;
  uint uVar41;
  ulong uVar42;
  long lVar43;
  undefined8 *puVar44;
  undefined8 *puVar45;
  ulong uVar46;
  long lVar47;
  long lVar48;
  undefined8 *puVar49;
  long lVar50;
  undefined8 uVar51;
  byte bVar52;
  float fVar53;
  undefined4 uVar54;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar63;
  byte bVar64;
  undefined8 uVar55;
  float fVar60;
  float fVar61;
  undefined4 uVar62;
  byte bVar65;
  byte bVar66;
  byte bVar68;
  byte bVar69;
  float fVar67;
  byte bVar70;
  uint uVar71;
  undefined1 auVar72 [12];
  undefined1 auVar73 [16];
  byte bVar74;
  undefined4 uVar75;
  byte bVar76;
  float fVar77;
  byte bVar78;
  byte bVar79;
  undefined8 uVar80;
  byte bVar81;
  long *local_90;
  byte *pbStack_88;
  size_t local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  lVar37 = *(long *)(param_1 + 0x60);
  if (lVar37 == 0) {
    iVar29 = 1;
  }
  else {
    iVar29 = *(int *)(lVar37 + 0x2ac);
  }
  iVar2 = iVar29 + 0xf;
  if (-1 < iVar29) {
    iVar2 = iVar29;
  }
  uVar71 = 0xffffffff;
  uVar41 = iVar2 >> 4;
  do {
    uVar71 = uVar71 + 1;
    bVar28 = 3 < uVar41;
    uVar41 = uVar41 >> 1;
  } while (bVar28);
  if (uVar71 < 6) {
    uVar71 = 5;
  }
  *(int *)(param_1 + 0xa8) = 0x10 << (ulong)(uVar71 - 5 & 0x1f);
  if (lVar37 == 0) {
    plVar31 = (long *)FUN_00b779ac();
  }
  else {
    plVar31 = (long *)(lVar37 + 0x68);
  }
  puVar44 = (undefined8 *)PTR_PTR_04379d00;
  if (*plVar31 != 0) {
    puVar44 = (undefined8 *)(*plVar31 + 0x60);
  }
  pcVar30 = strrchr((char *)*puVar44,0x2f);
  if ((pcVar30 == (char *)0x0) || (__s = (byte *)(pcVar30 + 1), pcVar30 == (char *)0x0)) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar29 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar29 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_90 = *(long **)PTR_DAT_0437a0d8;
    pbStack_88 = *(byte **)(PTR_DAT_0437a0d8 + 8);
    local_80 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    local_78 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))();
    }
  }
  else {
    plVar31 = (long *)&DAT_cbf29ce484222645;
    local_80 = strlen((char *)__s);
    bVar52 = *__s;
    if (bVar52 != 0) {
      pbVar40 = (byte *)(pcVar30 + 2);
      do {
        plVar31 = (long *)(((ulong)plVar31 ^ (ulong)bVar52) * 0x100000001b3);
        bVar52 = *pbVar40;
        pbVar40 = pbVar40 + 1;
      } while (bVar52 != 0);
    }
    local_78 = (long *)0x0;
    local_90 = plVar31;
    pbStack_88 = __s;
  }
  lVar37 = FUN_02a982f4(&local_68,*(undefined8 *)(param_1 + 8));
  if (lVar37 != 0) {
    piVar1 = (int *)(lVar37 + 0x50);
    do {
      cVar3 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar28) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar31 = *(long **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (plVar31 != (long *)0x0) {
    plVar38 = plVar31 + 10;
    do {
      iVar29 = (int)*plVar38 + -1;
      cVar3 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar28) {
        *(int *)plVar38 = iVar29;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar31 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x90) = lVar37;
  FUN_02b44df0(lVar37 + 0x58,1);
  FUN_02b45014(lVar37 + 0x90,1);
  lVar47 = *(long *)(DAT_043ef5a0 + 0x58);
  lVar37 = *(long *)(param_1 + 8);
  if (lVar37 == 0) {
    lVar37 = *(long *)(lVar47 + 8);
  }
  local_68 = (long *)FUN_02b3dc30(&local_70,lVar37,&local_90);
  if (local_68 != (long *)0x0) {
    plVar31 = local_68 + 10;
    do {
      cVar3 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar28) {
        *(int *)plVar31 = (int)*plVar31 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar31 = (long *)(*(long *)(lVar47 + 0x58) + 0x58);
  (**(code **)(*plVar31 + 0x10))(plVar31,&local_68);
  FUN_02c1563c(&DAT_043ef568,&local_68,*(undefined4 *)(param_1 + 0xa8));
  uVar51 = DAT_0388a618;
  lVar37 = *(long *)(param_1 + 0x60);
  if (lVar37 == 0) {
    uVar55 = 0;
    fVar67 = 0.0;
    auVar72 = SUB1612(ZEXT816(0),0);
  }
  else {
    fVar67 = (float)*(undefined8 *)(lVar37 + 0x378);
    uVar55 = *(undefined8 *)(lVar37 + 0x370);
    auVar72 = SUB1612(*(undefined1 (*) [16])(lVar37 + 0x380),0);
  }
  fVar60 = (float)((ulong)uVar55 >> 0x20);
  fVar53 = auVar72._0_4_ - (float)uVar55;
  fVar61 = auVar72._4_4_ - fVar60;
  fVar77 = fVar61 / fVar53;
  uVar80 = NEON_fmov(0x3f800000,4);
  *(undefined1 *)((long)local_68 + 0x22b) = 1;
  local_68[0x39] =
       CONCAT44(SQRT((float)uVar80 * (float)uVar80 + (float)uVar51 +
                     fVar77 * fVar77 + (float)((ulong)uVar51 >> 0x20)) * 0.5,
                ((fVar67 + auVar72._8_4_) * 0.5) / (auVar72._8_4_ - fVar67));
  local_68[0x38] =
       CONCAT44(((fVar60 + auVar72._4_4_) * 0.5) / fVar61,
                (((float)uVar55 + auVar72._0_4_) * 0.5) / fVar53);
  plVar31 = (long *)(*(long *)(*(long *)(DAT_043ef5a0 + 0x58) + 0x58) + 0x58);
  (**(code **)(*plVar31 + 0x20))(plVar31,&local_68);
  lVar47 = *(long *)(param_1 + 0x90);
  puVar44 = (undefined8 *)(lVar47 + 0xa8);
  lVar37 = *(long *)(lVar47 + 0x98);
  if (lVar37 == *(long *)(lVar47 + 0xa0)) {
    uVar46 = *(ulong *)(lVar47 + 0xb0);
    lVar37 = lVar37 - *(long *)(lVar47 + 0x90) >> 3;
    uVar34 = lVar37 + 1;
    if (0x7ffffffffffffffe < uVar46) {
      uVar46 = 0x7fffffffffffffff;
    }
    if (uVar46 < uVar34) goto LAB_02c10964;
    lVar48 = *(long *)(lVar47 + 0xa0) - *(long *)(lVar47 + 0x90);
    if ((ulong)(lVar48 >> 3) < uVar46 >> 1) {
      uVar42 = lVar48 >> 2;
      uVar46 = uVar34;
      if (uVar34 <= uVar42) {
        uVar46 = uVar42;
      }
    }
    if (uVar46 == 0) {
      lVar48 = 0;
    }
    else {
      lVar48 = (**(code **)(*(long *)*puVar44 + 0x10))((long *)*puVar44,uVar46 << 3,8);
      if (lVar48 == 0) {
        (**(code **)(*(long *)*puVar44 + 0xb8))();
      }
    }
    lVar50 = lVar48 + lVar37 * 8;
    FUN_02b16768(puVar44,lVar50,&local_68);
    plVar31 = *(long **)(lVar47 + 0x90);
    plVar38 = *(long **)(lVar47 + 0x98);
    lVar37 = lVar50 + 8;
    if (plVar38 == plVar31) {
      plVar38 = plVar31;
    }
    else {
      do {
        lVar50 = lVar50 + -8;
        plVar38 = plVar38 + -1;
        FUN_02b16768(puVar44,lVar50,plVar38);
      } while (plVar31 != plVar38);
      plVar31 = *(long **)(lVar47 + 0x90);
      plVar38 = *(long **)(lVar47 + 0x98);
    }
    *(long *)(lVar47 + 0x90) = lVar50;
    *(long *)(lVar47 + 0x98) = lVar37;
    lVar37 = *(long *)(lVar47 + 0xa0);
    *(ulong *)(lVar47 + 0xa0) = lVar48 + uVar46 * 8;
    while (plVar38 != plVar31) {
      plVar38 = plVar38 + -1;
      plVar36 = (long *)*plVar38;
      if (plVar36 != (long *)0x0) {
        plVar35 = plVar36 + 10;
        do {
          iVar29 = (int)*plVar35 + -1;
          cVar3 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(plVar35,0x10);
          if (bVar28) {
            *(int *)plVar35 = iVar29;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar29 == 0) {
          (**(code **)(*plVar36 + 0x10))();
        }
      }
    }
    if (plVar31 != (long *)0x0) {
      plVar38 = (long *)*puVar44;
      lVar37 = lVar37 - (long)plVar31;
      uVar34 = (**(code **)(*plVar38 + 0xc0))(plVar38);
      if ((uVar34 & 1) != 0) {
        lVar47 = tpidr_el0;
        if (*(char *)(lVar47 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar47 + 0x38d488) = 1;
          *(undefined8 *)(lVar47 + 0x38d478) = 0;
          *(undefined8 *)(lVar47 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar47 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar47 + 0x38d480)) {
          FUN_02bcc824(plVar38,plVar31,lVar37,8);
          goto joined_r0x02c10750;
        }
      }
      (**(code **)(*plVar38 + 0x18))(plVar38,plVar31,lVar37,8);
    }
  }
  else {
    FUN_02b16768(puVar44,lVar37,&local_68);
    *(long *)(lVar47 + 0x98) = *(long *)(lVar47 + 0x98) + 8;
  }
joined_r0x02c10750:
  if (local_68 != (long *)0x0) {
    plVar31 = local_68 + 10;
    do {
      iVar29 = (int)*plVar31 + -1;
      cVar3 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar28) {
        *(int *)plVar31 = iVar29;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  local_68 = *(long **)(DAT_043ef5a0 + 0x60);
  if (local_68 != (long *)0x0) {
    plVar31 = local_68 + 10;
    do {
      cVar3 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar28) {
        *(int *)plVar31 = (int)*plVar31 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_02b46cd4(*(undefined8 *)(param_1 + 0x98),&local_68,1);
  FUN_02b3343c(&local_70,local_68,*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x98));
  *(undefined4 *)(local_70[0x16] + 0x44) = 3;
  plVar31 = *(long **)(*(long *)(param_1 + 0x90) + 0x90);
  plVar38 = *(long **)(*(long *)(param_1 + 0x90) + 0x98);
  if (plVar31 != plVar38) {
    do {
      lVar37 = *plVar31;
      if ((int)((ulong)(*(long *)(lVar37 + 0x80) - *(long *)(lVar37 + 0x78)) >> 3) != 0) {
        uVar34 = 0;
        do {
          plVar36 = *(long **)(*(long *)(lVar37 + 0x78) + uVar34 * 8);
          if (plVar36 != (long *)0x0) {
            plVar35 = plVar36 + 10;
            do {
              cVar3 = '\x01';
              bVar28 = (bool)ExclusiveMonitorPass(plVar35,0x10);
              if (bVar28) {
                *(int *)plVar35 = (int)*plVar35 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          plVar36[0xf] = local_70[0xb];
          plVar36[0x10] = local_70[0xc];
          plVar36[0x11] = local_70[0xd];
          plVar35 = (long *)local_70[0xe];
          if (plVar35 != (long *)0x0) {
            (**(code **)(*plVar35 + 0x18))(plVar35);
          }
          plVar32 = (long *)plVar36[0x12];
          plVar36[0x12] = (long)plVar35;
          if (plVar32 != (long *)0x0) {
            (**(code **)(*plVar32 + 0x20))();
          }
          plVar35 = plVar36 + 10;
          do {
            iVar29 = (int)*plVar35 + -1;
            cVar3 = '\x01';
            bVar28 = (bool)ExclusiveMonitorPass(plVar35,0x10);
            if (bVar28) {
              *(int *)plVar35 = iVar29;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar29 == 0) {
            (**(code **)(*plVar36 + 0x10))(plVar36);
          }
          lVar37 = *plVar31;
          uVar34 = uVar34 + 1;
        } while (uVar34 < ((ulong)(*(long *)(lVar37 + 0x80) - *(long *)(lVar37 + 0x78)) >> 3 &
                          0xffffffff));
      }
      plVar31 = plVar31 + 1;
    } while (plVar31 != plVar38);
    plVar38 = *(long **)(*(long *)(param_1 + 0x90) + 0x98);
    for (plVar31 = *(long **)(*(long *)(param_1 + 0x90) + 0x90); plVar31 != plVar38;
        plVar31 = plVar31 + 1) {
      lVar37 = *plVar31;
      plVar35 = *(long **)(lVar37 + 0x80);
      for (plVar36 = *(long **)(lVar37 + 0x78); plVar36 != plVar35; plVar36 = plVar36 + 1) {
        lVar47 = *plVar36;
        *(undefined8 *)(lVar47 + 0x98) = *(undefined8 *)(lVar37 + 0x180);
        *(undefined8 *)(lVar47 + 0xa0) = *(undefined8 *)(lVar37 + 0x188);
        *(undefined8 *)(lVar47 + 0xa8) = *(undefined8 *)(lVar37 + 400);
        plVar32 = *(long **)(lVar37 + 0x198);
        if (plVar32 != (long *)0x0) {
          (**(code **)(*plVar32 + 0x18))(plVar32);
        }
        plVar33 = *(long **)(lVar47 + 0xb0);
        *(long **)(lVar47 + 0xb0) = plVar32;
        if (plVar33 != (long *)0x0) {
          (**(code **)(*plVar33 + 0x20))();
        }
        FUN_02b73040(*plVar36,&local_68);
      }
    }
  }
  lVar48 = *(long *)(param_1 + 0x98);
  lVar47 = *(long *)(lVar48 + 0xa0);
  for (lVar37 = *(long *)(lVar48 + 0x98); lVar37 != lVar47; lVar37 = lVar37 + 0x28) {
    FUN_02b3365c(&local_90,*(undefined8 *)(lVar48 + 0x58),lVar37);
    FUN_02b2aaa0(local_90);
    if (local_90 != (long *)0x0) {
      plVar31 = local_90 + 10;
      do {
        iVar29 = (int)*plVar31 + -1;
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar28) {
          *(int *)plVar31 = iVar29;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
  }
  local_90 = (long *)0x4292f1208598d1cc;
  pbStack_88 = (byte *)0x38f794a;
  local_80 = 9;
  local_78 = (long *)0x0;
  uVar34 = (**(code **)(*DAT_043ef740 + 0x18))(DAT_043ef740,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if ((uVar34 & 0xff) != 0) {
    for (piVar1 = (int *)local_70[0x1d]; piVar1 != (int *)local_70[0x1e]; piVar1 = piVar1 + 0xe) {
      if (*piVar1 == (int)(uVar34 >> 0x20)) {
        puVar44 = (undefined8 *)local_70[0x10];
        if ((undefined8 *)local_70[0xf] != puVar44) {
          puVar45 = (undefined8 *)local_70[0xf];
          goto LAB_02c0f52c;
        }
        break;
      }
    }
    goto LAB_02c0f54c;
  }
  goto LAB_02c0f57c;
  while (puVar45 = puVar49, puVar44 != puVar49) {
LAB_02c0f52c:
    puVar49 = puVar45 + 1;
    FUN_02b2fc5c(&local_90,*puVar45,piVar1 + 2);
    if (local_90 != (long *)0x0) goto LAB_02c0f550;
  }
LAB_02c0f54c:
  local_90 = (long *)0x0;
LAB_02c0f550:
  plVar31 = *(long **)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = 0;
  if (plVar31 != (long *)0x0) {
    plVar38 = plVar31 + 10;
    do {
      iVar29 = (int)*plVar38 + -1;
      cVar3 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar28) {
        *(int *)plVar38 = iVar29;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar31 + 0x10))();
    }
  }
  *(long **)(param_1 + 0x158) = local_90;
LAB_02c0f57c:
  if (local_70 != (long *)0x0) {
    plVar31 = local_70 + 10;
    do {
      iVar29 = (int)*plVar31 + -1;
      cVar3 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar28) {
        *(int *)plVar31 = iVar29;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if (local_68 != (long *)0x0) {
    plVar31 = local_68 + 10;
    do {
      iVar29 = (int)*plVar31 + -1;
      cVar3 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar28) {
        *(int *)plVar31 = iVar29;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  lVar47 = *(long *)(param_1 + 0x60);
  uVar71 = 0;
  lVar37 = *(long *)(param_1 + 0x88);
  iVar2 = *(int *)(lVar47 + 0x2ac);
  iVar29 = iVar2 + 0xf;
  if (-1 < iVar2) {
    iVar29 = iVar2;
  }
  uVar41 = iVar29 >> 4;
  do {
    uVar71 = uVar71 + 1;
    bVar28 = 3 < uVar41;
    uVar41 = uVar41 >> 1;
  } while (bVar28);
  if (5 < uVar71) {
    uVar71 = 6;
  }
  FUN_02c194c8(*(undefined8 *)(lVar37 + 0xe0),uVar71);
  lVar48 = *(long *)(lVar37 + 0xe0);
  nn::os::LockMutex((MutexType *)(lVar48 + 0x68));
  if (*(int *)(lVar48 + 0xc0) != 0) {
    lVar50 = *(long *)(lVar48 + 0x88);
    lVar43 = *(long *)(lVar48 + 0x90);
    if (lVar43 != lVar50) {
      uVar34 = 0;
      do {
        puVar45 = (undefined8 *)(lVar50 + uVar34 * 0x38);
        puVar44 = (undefined8 *)*puVar45;
        uVar46 = puVar45[1] - (long)puVar44;
        if (0 < (long)uVar46) {
          uVar46 = uVar46 >> 3;
          do {
            uVar46 = uVar46 - 1;
            *puVar44 = 0;
            puVar44 = puVar44 + 1;
          } while (0 < (long)uVar46);
          lVar50 = *(long *)(lVar48 + 0x88);
          lVar43 = *(long *)(lVar48 + 0x90);
        }
        uVar34 = uVar34 + 1;
      } while (uVar34 < (ulong)((lVar43 - lVar50 >> 3) * 0x6db6db6db6db6db7));
    }
    *(undefined4 *)(lVar48 + 0xc0) = 0;
  }
  nn::os::UnlockMutex((MutexType *)(lVar48 + 0x68));
  uVar54 = *(undefined4 *)(lVar47 + 0x290);
  uVar62 = *(undefined4 *)(lVar47 + 0x298);
  uVar75 = *(undefined4 *)(lVar47 + 0x294);
  bVar52 = (byte)uVar54;
  bVar74 = (byte)_DAT_038892b0;
  bVar56 = (byte)((uint)uVar54 >> 8);
  uVar34 = (ulong)_DAT_038892b0 >> 8;
  bVar57 = (byte)((uint)uVar54 >> 0x10);
  uVar46 = (ulong)_DAT_038892b0 >> 0x10;
  bVar58 = (byte)((uint)uVar54 >> 0x18);
  uVar42 = (ulong)_DAT_038892b0 >> 0x18;
  bVar59 = (byte)uVar62;
  uVar39 = (ulong)_DAT_038892b0 >> 0x20;
  bVar63 = (byte)((uint)uVar62 >> 8);
  uVar4 = (ulong)_DAT_038892b0 >> 0x28;
  bVar64 = (byte)((uint)uVar62 >> 0x10);
  uVar5 = (ulong)_DAT_038892b0 >> 0x30;
  uVar6 = (ulong)_DAT_038892b0 >> 0x38;
  bVar65 = (byte)((uint)uVar62 >> 0x18);
  bVar66 = (byte)uVar75;
  bVar68 = (byte)((uint)uVar75 >> 8);
  bVar69 = (byte)((uint)uVar75 >> 0x10);
  bVar70 = (byte)((uint)uVar75 >> 0x18);
  bVar76 = (byte)_DAT_03889f50;
  uVar7 = (ulong)_DAT_03889f50 >> 8;
  uVar8 = (ulong)_DAT_03889f50 >> 0x10;
  uVar9 = (ulong)_DAT_03889f50 >> 0x18;
  uVar10 = (ulong)_DAT_03889f50 >> 0x20;
  uVar11 = (ulong)_DAT_03889f50 >> 0x28;
  uVar12 = (ulong)_DAT_03889f50 >> 0x30;
  uVar13 = (ulong)_DAT_03889f50 >> 0x38;
  bVar78 = (byte)_UNK_03889f58;
  uVar14 = (ulong)_UNK_03889f58 >> 8;
  uVar15 = (ulong)_UNK_03889f58 >> 0x10;
  uVar16 = (ulong)_UNK_03889f58 >> 0x18;
  bVar79 = (byte)_DAT_03889d60;
  uVar17 = (ulong)_DAT_03889d60 >> 8;
  uVar18 = (ulong)_DAT_03889d60 >> 0x10;
  uVar19 = (ulong)_DAT_03889d60 >> 0x18;
  uVar20 = (ulong)_DAT_03889d60 >> 0x20;
  uVar21 = (ulong)_DAT_03889d60 >> 0x28;
  uVar22 = (ulong)_DAT_03889d60 >> 0x30;
  uVar23 = (ulong)_DAT_03889d60 >> 0x38;
  bVar81 = (byte)_UNK_03889d68;
  uVar24 = (ulong)_UNK_03889d68 >> 8;
  uVar25 = (ulong)_UNK_03889d68 >> 0x10;
  uVar26 = (ulong)_UNK_03889d68 >> 0x18;
  *(ulong *)(lVar37 + 0xf8) =
       (ulong)CONCAT13(bVar70 & (byte)((ulong)_UNK_038892b8 >> 0x18),
                       CONCAT12(bVar69 & (byte)((ulong)_UNK_038892b8 >> 0x10),
                                CONCAT11(bVar68 & (byte)((ulong)_UNK_038892b8 >> 8),
                                         bVar66 & (byte)_UNK_038892b8)));
  *(ulong *)(lVar37 + 0xf0) =
       CONCAT17(bVar65 & (byte)uVar6,
                CONCAT16(bVar64 & (byte)uVar5,
                         CONCAT15(bVar63 & (byte)uVar4,
                                  CONCAT14(bVar59 & (byte)uVar39,
                                           CONCAT13(bVar58 & (byte)uVar42,
                                                    CONCAT12(bVar57 & (byte)uVar46,
                                                             CONCAT11(bVar56 & (byte)uVar34,
                                                                      bVar52 & bVar74)))))));
  *(ulong *)(lVar37 + 0x108) =
       (ulong)CONCAT13(bVar70 & (byte)uVar16,
                       CONCAT12(bVar69 & (byte)uVar15,
                                CONCAT11(bVar68 & (byte)uVar14,bVar66 & bVar78)));
  *(ulong *)(lVar37 + 0x100) =
       CONCAT17(bVar65 & (byte)uVar13,
                CONCAT16(bVar64 & (byte)uVar12,
                         CONCAT15(bVar63 & (byte)uVar11,
                                  CONCAT14(bVar59 & (byte)uVar10,
                                           CONCAT13(bVar58 & (byte)uVar9,
                                                    CONCAT12(bVar57 & (byte)uVar8,
                                                             CONCAT11(bVar56 & (byte)uVar7,
                                                                      bVar52 & bVar76)))))));
  *(ulong *)(lVar37 + 0x118) =
       (ulong)CONCAT13(bVar70 & (byte)uVar26,
                       CONCAT12(bVar69 & (byte)uVar25,
                                CONCAT11(bVar68 & (byte)uVar24,bVar66 & bVar81)));
  *(ulong *)(lVar37 + 0x110) =
       CONCAT17(bVar65 & (byte)uVar23,
                CONCAT16(bVar64 & (byte)uVar22,
                         CONCAT15(bVar63 & (byte)uVar21,
                                  CONCAT14(bVar59 & (byte)uVar20,
                                           CONCAT13(bVar58 & (byte)uVar19,
                                                    CONCAT12(bVar57 & (byte)uVar18,
                                                             CONCAT11(bVar56 & (byte)uVar17,
                                                                      bVar52 & bVar79)))))));
  uVar71 = *(uint *)(lVar47 + 0x388);
  uVar51 = *(undefined8 *)(lVar47 + 0x370);
  *(ulong *)(lVar37 + 0x128) = (ulong)uVar71;
  *(undefined8 *)(lVar37 + 0x120) = uVar51;
  *(ulong *)(lVar37 + 0x138) = (ulong)uVar71;
  *(undefined8 *)(lVar37 + 0x130) = uVar51;
  plVar31 = *(long **)(param_1 + 8);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar29 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar27 = PTR_DAT_04379528;
    if (iVar29 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar27,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar37 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar37 + 0x80)) {
LAB_02c1095c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar37 + *(ulong *)(lVar37 + 0x80) * 8) = plVar31;
  *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + 1;
  lVar47 = (**(code **)(*plVar31 + 0x10))(plVar31,0x98,8);
  if (lVar47 == 0) {
    (**(code **)(*plVar31 + 0xb8))(plVar31);
    FUN_02c1f158(0);
    _DAT_00000010 = 0;
    _DAT_00000018 = 0x98;
    _DAT_00000020 = 8;
    _DAT_00000008 = plVar31;
    *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + -1;
  }
  else {
    FUN_02c1f158(lVar47);
    *(long **)(lVar47 + 8) = plVar31;
    *(long *)(lVar47 + 0x10) = lVar47;
    *(undefined8 *)(lVar47 + 0x18) = 0x98;
    *(undefined8 *)(lVar47 + 0x20) = 8;
    *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + -1;
    piVar1 = (int *)(lVar47 + 0x50);
    do {
      cVar3 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar28) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar31 = *(long **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (plVar31 != (long *)0x0) {
    plVar38 = plVar31 + 10;
    do {
      iVar29 = (int)*plVar38 + -1;
      cVar3 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar28) {
        *(int *)plVar38 = iVar29;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar31 + 0x10))();
    }
  }
  *(long *)(param_1 + 0xa0) = lVar47;
  uVar51 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x90);
  FUN_02b1642c(**(undefined8 **)(lVar47 + 0x60),uVar51);
  lVar37 = **(long **)(*(long *)(param_1 + 0xa0) + 0x60);
  if (*(char *)(lVar37 + 0x98) != '\0') {
    plVar31 = (long *)**(undefined8 **)(**(long **)(lVar37 + 0x58) + 0x78);
    if (plVar31 != (long *)0x0) {
      plVar38 = plVar31 + 10;
      do {
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar28) {
          *(int *)plVar38 = (int)*plVar38 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar36 = (long *)plVar31[0x1d];
    for (plVar38 = (long *)plVar31[0x1c]; plVar38 != plVar36; plVar38 = plVar38 + 1) {
      plVar35 = (long *)(*(long *)(lVar37 + 0x90) + 0x58);
      (**(code **)(*plVar35 + 0x10))(plVar35,*plVar38 + 0x60,1);
    }
    *(undefined1 *)(lVar37 + 0x98) = 0;
    if (plVar31 != (long *)0x0) {
      plVar38 = plVar31 + 10;
      do {
        iVar29 = (int)*plVar38 + -1;
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar28) {
          *(int *)plVar38 = iVar29;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 == 0) {
        (**(code **)(*plVar31 + 0x10))(plVar31);
      }
    }
  }
  FUN_02b1642c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x60) + 8),uVar51);
  lVar37 = *(long *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x60) + 8);
  if (*(char *)(lVar37 + 0x98) != '\0') {
    plVar31 = *(long **)(*(long *)(**(long **)(lVar37 + 0x58) + 0x78) + 8);
    if (plVar31 != (long *)0x0) {
      plVar38 = plVar31 + 10;
      do {
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar28) {
          *(int *)plVar38 = (int)*plVar38 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar36 = (long *)plVar31[0x1d];
    for (plVar38 = (long *)plVar31[0x1c]; plVar38 != plVar36; plVar38 = plVar38 + 1) {
      plVar35 = (long *)(*(long *)(lVar37 + 0x90) + 0x58);
      (**(code **)(*plVar35 + 0x10))(plVar35,*plVar38 + 0x60,1);
    }
    *(undefined1 *)(lVar37 + 0x98) = 0;
    if (plVar31 != (long *)0x0) {
      plVar38 = plVar31 + 10;
      do {
        iVar29 = (int)*plVar38 + -1;
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar28) {
          *(int *)plVar38 = iVar29;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 == 0) {
        (**(code **)(*plVar31 + 0x10))(plVar31);
      }
    }
  }
  FUN_02b1642c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x60) + 0x10),uVar51);
  lVar37 = *(long *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x60) + 0x10);
  if (*(char *)(lVar37 + 0x98) != '\0') {
    plVar31 = *(long **)(*(long *)(**(long **)(lVar37 + 0x58) + 0x78) + 0x10);
    if (plVar31 != (long *)0x0) {
      plVar38 = plVar31 + 10;
      do {
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar28) {
          *(int *)plVar38 = (int)*plVar38 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar36 = (long *)plVar31[0x1d];
    for (plVar38 = (long *)plVar31[0x1c]; plVar38 != plVar36; plVar38 = plVar38 + 1) {
      plVar35 = (long *)(*(long *)(lVar37 + 0x90) + 0x58);
      (**(code **)(*plVar35 + 0x10))(plVar35,*plVar38 + 0x60,1);
    }
    *(undefined1 *)(lVar37 + 0x98) = 0;
    if (plVar31 != (long *)0x0) {
      plVar38 = plVar31 + 10;
      do {
        iVar29 = (int)*plVar38 + -1;
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar28) {
          *(int *)plVar38 = iVar29;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 == 0) {
        (**(code **)(*plVar31 + 0x10))(plVar31);
      }
    }
  }
  FUN_02b1642c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x60) + 0x18),uVar51);
  lVar37 = *(long *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x60) + 0x18);
  if (*(char *)(lVar37 + 0x98) != '\0') {
    plVar31 = *(long **)(*(long *)(**(long **)(lVar37 + 0x58) + 0x78) + 0x18);
    if (plVar31 != (long *)0x0) {
      plVar38 = plVar31 + 10;
      do {
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar28) {
          *(int *)plVar38 = (int)*plVar38 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar36 = (long *)plVar31[0x1d];
    for (plVar38 = (long *)plVar31[0x1c]; plVar38 != plVar36; plVar38 = plVar38 + 1) {
      plVar35 = (long *)(*(long *)(lVar37 + 0x90) + 0x58);
      (**(code **)(*plVar35 + 0x10))(plVar35,*plVar38 + 0x60,1);
    }
    *(undefined1 *)(lVar37 + 0x98) = 0;
    if (plVar31 != (long *)0x0) {
      plVar38 = plVar31 + 10;
      do {
        iVar29 = (int)*plVar38 + -1;
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar28) {
          *(int *)plVar38 = iVar29;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 == 0) {
        (**(code **)(*plVar31 + 0x10))(plVar31);
      }
    }
  }
  FUN_02b1642c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x60) + 0x20),uVar51);
  lVar37 = *(long *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x60) + 0x20);
  if (*(char *)(lVar37 + 0x98) != '\0') {
    plVar31 = *(long **)(*(long *)(**(long **)(lVar37 + 0x58) + 0x78) + 0x20);
    if (plVar31 != (long *)0x0) {
      plVar38 = plVar31 + 10;
      do {
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar28) {
          *(int *)plVar38 = (int)*plVar38 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar36 = (long *)plVar31[0x1d];
    for (plVar38 = (long *)plVar31[0x1c]; plVar38 != plVar36; plVar38 = plVar38 + 1) {
      plVar35 = (long *)(*(long *)(lVar37 + 0x90) + 0x58);
      (**(code **)(*plVar35 + 0x10))(plVar35,*plVar38 + 0x60,1);
    }
    *(undefined1 *)(lVar37 + 0x98) = 0;
    if (plVar31 != (long *)0x0) {
      plVar38 = plVar31 + 10;
      do {
        iVar29 = (int)*plVar38 + -1;
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar28) {
          *(int *)plVar38 = iVar29;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 == 0) {
        (**(code **)(*plVar31 + 0x10))(plVar31);
      }
    }
  }
  FUN_02b1642c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x60) + 0x28),uVar51);
  lVar37 = *(long *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x60) + 0x28);
  if (*(char *)(lVar37 + 0x98) != '\0') {
    plVar31 = *(long **)(*(long *)(**(long **)(lVar37 + 0x58) + 0x78) + 0x28);
    if (plVar31 != (long *)0x0) {
      plVar38 = plVar31 + 10;
      do {
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar28) {
          *(int *)plVar38 = (int)*plVar38 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar36 = (long *)plVar31[0x1d];
    for (plVar38 = (long *)plVar31[0x1c]; plVar38 != plVar36; plVar38 = plVar38 + 1) {
      plVar35 = (long *)(*(long *)(lVar37 + 0x90) + 0x58);
      (**(code **)(*plVar35 + 0x10))(plVar35,*plVar38 + 0x60,1);
    }
    *(undefined1 *)(lVar37 + 0x98) = 0;
    if (plVar31 != (long *)0x0) {
      plVar38 = plVar31 + 10;
      do {
        iVar29 = (int)*plVar38 + -1;
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar28) {
          *(int *)plVar38 = iVar29;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 == 0) {
        (**(code **)(*plVar31 + 0x10))(plVar31);
      }
    }
  }
  FUN_02b1642c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x60) + 0x30),uVar51);
  lVar37 = *(long *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x60) + 0x30);
  if (*(char *)(lVar37 + 0x98) != '\0') {
    plVar31 = *(long **)(*(long *)(**(long **)(lVar37 + 0x58) + 0x78) + 0x30);
    if (plVar31 != (long *)0x0) {
      plVar38 = plVar31 + 10;
      do {
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar28) {
          *(int *)plVar38 = (int)*plVar38 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar36 = (long *)plVar31[0x1d];
    for (plVar38 = (long *)plVar31[0x1c]; plVar38 != plVar36; plVar38 = plVar38 + 1) {
      plVar35 = (long *)(*(long *)(lVar37 + 0x90) + 0x58);
      (**(code **)(*plVar35 + 0x10))(plVar35,*plVar38 + 0x60,1);
    }
    *(undefined1 *)(lVar37 + 0x98) = 0;
    if (plVar31 != (long *)0x0) {
      plVar38 = plVar31 + 10;
      do {
        iVar29 = (int)*plVar38 + -1;
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar28) {
          *(int *)plVar38 = iVar29;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 == 0) {
        (**(code **)(*plVar31 + 0x10))(plVar31);
      }
    }
  }
  FUN_02b1642c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x60) + 0x38),uVar51);
  lVar37 = *(long *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x60) + 0x38);
  if (*(char *)(lVar37 + 0x98) != '\0') {
    plVar31 = *(long **)(*(long *)(**(long **)(lVar37 + 0x58) + 0x78) + 0x38);
    if (plVar31 != (long *)0x0) {
      plVar38 = plVar31 + 10;
      do {
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar28) {
          *(int *)plVar38 = (int)*plVar38 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar36 = (long *)plVar31[0x1d];
    for (plVar38 = (long *)plVar31[0x1c]; plVar38 != plVar36; plVar38 = plVar38 + 1) {
      plVar35 = (long *)(*(long *)(lVar37 + 0x90) + 0x58);
      (**(code **)(*plVar35 + 0x10))(plVar35,*plVar38 + 0x60,1);
    }
    *(undefined1 *)(lVar37 + 0x98) = 0;
    if (plVar31 != (long *)0x0) {
      plVar38 = plVar31 + 10;
      do {
        iVar29 = (int)*plVar38 + -1;
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar28) {
          *(int *)plVar38 = iVar29;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 == 0) {
        (**(code **)(*plVar31 + 0x10))(plVar31);
      }
    }
  }
  FUN_02b1642c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x60) + 0x40),uVar51);
  lVar37 = *(long *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x60) + 0x40);
  if (*(char *)(lVar37 + 0x98) != '\0') {
    plVar31 = *(long **)(*(long *)(**(long **)(lVar37 + 0x58) + 0x78) + 0x40);
    if (plVar31 != (long *)0x0) {
      plVar38 = plVar31 + 10;
      do {
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar28) {
          *(int *)plVar38 = (int)*plVar38 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar36 = (long *)plVar31[0x1d];
    for (plVar38 = (long *)plVar31[0x1c]; plVar38 != plVar36; plVar38 = plVar38 + 1) {
      plVar35 = (long *)(*(long *)(lVar37 + 0x90) + 0x58);
      (**(code **)(*plVar35 + 0x10))(plVar35,*plVar38 + 0x60,1);
    }
    *(undefined1 *)(lVar37 + 0x98) = 0;
    if (plVar31 != (long *)0x0) {
      plVar38 = plVar31 + 10;
      do {
        iVar29 = (int)*plVar38 + -1;
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar28) {
          *(int *)plVar38 = iVar29;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 == 0) {
        (**(code **)(*plVar31 + 0x10))(plVar31);
      }
    }
  }
  plVar31 = *(long **)(*(long *)(param_1 + 0xa0) + 0x58);
  if (plVar31 == (long *)0x0) {
    plVar38 = *(long **)(param_1 + 0x88);
    if (plVar38 != (long *)0x0) {
      plVar31 = plVar38 + 10;
      do {
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar28) {
          *(int *)plVar31 = (int)*plVar31 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar31 = _DAT_000000b8;
    if (_DAT_000000b8 != (long *)0x0) {
      plVar36 = _DAT_000000b8 + 10;
      _DAT_000000b8 = plVar38;
      do {
        iVar29 = (int)*plVar36 + -1;
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar36,0x10);
        if (bVar28) {
          *(int *)plVar36 = iVar29;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar38 = _DAT_000000b8;
      if (iVar29 == 0) {
        lVar37 = *plVar31;
        goto LAB_02c0ffc4;
      }
    }
LAB_02c0fe6c:
    _DAT_000000b8 = plVar38;
    lVar37 = *(long *)(param_1 + 0x60);
    if (lVar37 == 0) goto LAB_02c0ffd4;
LAB_02c0fe74:
    lVar47 = *(long *)(lVar37 + 0x370);
    auVar73 = *(undefined1 (*) [16])(lVar37 + 0x380);
  }
  else {
    plVar38 = plVar31 + 10;
    do {
      cVar3 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar28) {
        *(int *)plVar38 = (int)*plVar38 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar37 = *(long *)(param_1 + 0x88);
    if (lVar37 != 0) {
      piVar1 = (int *)(lVar37 + 0x50);
      do {
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar28) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar36 = (long *)plVar31[0x17];
    plVar31[0x17] = lVar37;
    if (plVar36 != (long *)0x0) {
      plVar35 = plVar36 + 10;
      do {
        iVar29 = (int)*plVar35 + -1;
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar35,0x10);
        if (bVar28) {
          *(int *)plVar35 = iVar29;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 == 0) {
        (**(code **)(*plVar36 + 0x10))();
      }
    }
    do {
      iVar29 = (int)*plVar38 + -1;
      cVar3 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar28) {
        *(int *)plVar38 = iVar29;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar38 = _DAT_000000b8;
    if (iVar29 != 0) goto LAB_02c0fe6c;
    lVar37 = *plVar31;
LAB_02c0ffc4:
    (**(code **)(lVar37 + 0x10))(plVar31);
    lVar37 = *(long *)(param_1 + 0x60);
    if (lVar37 != 0) goto LAB_02c0fe74;
LAB_02c0ffd4:
    lVar47 = 0;
    auVar73 = ZEXT816(0);
  }
  auVar73 = NEON_ext(auVar73,auVar73,8,1);
  plVar31 = *(long **)(*(long *)(param_1 + 0xa0) + 0x58);
  if (plVar31 == (long *)0x0) {
    lVar37 = *(long *)(param_1 + 0x60);
    _DAT_000000c0 = lVar47;
    _DAT_000000c8 = (ulong)auVar73._0_4_;
joined_r0x02c10048:
    if (lVar37 != 0) goto LAB_02c1002c;
LAB_02c1004c:
    uVar54 = 0x3f800000;
    uVar34 = 0x3f800000;
    uVar62 = 0x3f800000;
  }
  else {
    plVar38 = plVar31 + 10;
    do {
      cVar3 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar28) {
        *(int *)plVar38 = (int)*plVar38 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar31[0x19] = (ulong)auVar73._0_4_;
    plVar31[0x18] = lVar47;
    do {
      iVar29 = (int)*plVar38 + -1;
      cVar3 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar28) {
        *(int *)plVar38 = iVar29;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar31 + 0x10))();
      lVar37 = *(long *)(param_1 + 0x60);
      goto joined_r0x02c10048;
    }
    lVar37 = *(long *)(param_1 + 0x60);
    if (lVar37 == 0) goto LAB_02c1004c;
LAB_02c1002c:
    uVar62 = *(undefined4 *)(lVar37 + 0x290);
    uVar34 = (ulong)*(uint *)(lVar37 + 0x294);
    uVar54 = *(undefined4 *)(lVar37 + 0x298);
  }
  plVar31 = *(long **)(*(long *)(param_1 + 0xa0) + 0x58);
  if (plVar31 == (long *)0x0) {
    _DAT_000000d0 = CONCAT44(uVar54,uVar62);
    _DAT_000000d8 = uVar34;
joined_r0x02c100d4:
    if ((param_2 & 1) != 0) goto LAB_02c100a4;
LAB_02c100d8:
    uVar34 = 0;
  }
  else {
    plVar38 = plVar31 + 10;
    do {
      cVar3 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar28) {
        *(int *)plVar38 = (int)*plVar38 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar31[0x1b] = uVar34;
    plVar31[0x1a] = CONCAT44(uVar54,uVar62);
    do {
      iVar29 = (int)*plVar38 + -1;
      cVar3 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar28) {
        *(int *)plVar38 = iVar29;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar31 + 0x10))();
      goto joined_r0x02c100d4;
    }
    if ((param_2 & 1) == 0) goto LAB_02c100d8;
LAB_02c100a4:
    uVar34 = *(long *)(*(long *)(param_1 + 0x60) + 0x2f0) -
             *(long *)(*(long *)(param_1 + 0x60) + 0x2e8) >> 7;
  }
  lVar37 = *(long *)(param_1 + 0xb0);
  plVar31 = *(long **)(param_1 + 0xb8);
  uVar46 = (long)plVar31 - lVar37 >> 3;
  if (uVar46 < uVar34) {
    puVar44 = (undefined8 *)(param_1 + 200);
    if ((ulong)(*(long *)(param_1 + 0xc0) - (long)plVar31 >> 3) < uVar34 - uVar46) {
      uVar42 = *(ulong *)(param_1 + 0xd0);
      if (0x7ffffffffffffffe < uVar42) {
        uVar42 = 0x7fffffffffffffff;
      }
      if (uVar42 < uVar34) {
LAB_02c10964:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar37 = *(long *)(param_1 + 0xc0) - lVar37;
      if ((ulong)(lVar37 >> 3) < uVar42 >> 1) {
        uVar39 = lVar37 >> 2;
        uVar42 = uVar34;
        if (uVar34 <= uVar39) {
          uVar42 = uVar39;
        }
      }
      if (uVar42 == 0) {
        lVar37 = 0;
      }
      else {
        lVar37 = (**(code **)(*(long *)*puVar44 + 0x10))((long *)*puVar44,uVar42 << 3,8);
        if (lVar37 == 0) {
          (**(code **)(*(long *)*puVar44 + 0xb8))();
        }
      }
      plVar38 = (long *)(lVar37 + uVar46 * 8);
      lVar47 = uVar46 - uVar34;
      plVar31 = plVar38;
      do {
        FUN_02c144e4(puVar44,plVar31);
        plVar31 = plVar31 + 1;
        bVar28 = lVar47 != -1;
        lVar47 = lVar47 + 1;
      } while (bVar28);
      plVar36 = *(long **)(param_1 + 0xb0);
      plVar35 = *(long **)(param_1 + 0xb8);
      if (plVar35 == plVar36) {
        plVar35 = plVar36;
      }
      else {
        do {
          uVar51 = *puVar44;
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar29 = __cxa_guard_acquire(PTR_DAT_04379520), iVar29 != 0)) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar47 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar47 != 0) {
            if (0xf < *(ulong *)(lVar47 + 0x80)) goto LAB_02c1095c;
            *(undefined8 *)(lVar47 + *(ulong *)(lVar47 + 0x80) * 8) = uVar51;
            *(long *)(lVar47 + 0x80) = *(long *)(lVar47 + 0x80) + 1;
          }
          plVar35 = plVar35 + -1;
          lVar48 = *plVar35;
          plVar38 = plVar38 + -1;
          *plVar38 = lVar48;
          if (lVar48 != 0) {
            piVar1 = (int *)(lVar48 + 0x50);
            do {
              cVar3 = '\x01';
              bVar28 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar28) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (lVar47 != 0) {
            *(long *)(lVar47 + 0x80) = *(long *)(lVar47 + 0x80) + -1;
          }
        } while (plVar35 != plVar36);
        plVar36 = *(long **)(param_1 + 0xb8);
        plVar35 = *(long **)(param_1 + 0xb0);
      }
      *(long **)(param_1 + 0xb0) = plVar38;
      *(long **)(param_1 + 0xb8) = plVar31;
      lVar47 = *(long *)(param_1 + 0xc0);
      *(ulong *)(param_1 + 0xc0) = lVar37 + uVar42 * 8;
LAB_02c10318:
      if (plVar36 != plVar35) {
        while( true ) {
          plVar36 = plVar36 + -1;
          plVar31 = (long *)*plVar36;
          if (plVar31 == (long *)0x0) break;
          plVar38 = plVar31 + 10;
          do {
            iVar29 = (int)*plVar38 + -1;
            cVar3 = '\x01';
            bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
            if (bVar28) {
              *(int *)plVar38 = iVar29;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar29 != 0) break;
          (**(code **)(*plVar31 + 0x10))();
          if (plVar36 == plVar35) goto LAB_02c10354;
        }
        goto LAB_02c10318;
      }
LAB_02c10354:
      if (plVar35 != (long *)0x0) {
        plVar31 = (long *)*puVar44;
        lVar47 = lVar47 - (long)plVar35;
        uVar46 = (**(code **)(*plVar31 + 0xc0))(plVar31);
        if ((uVar46 & 1) != 0) {
          lVar37 = tpidr_el0;
          if (*(char *)(lVar37 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar37 + 0x38d488) = 1;
            *(undefined8 *)(lVar37 + 0x38d478) = 0;
            *(undefined8 *)(lVar37 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar37 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar37 + 0x38d480)) {
            FUN_02bcc824(plVar31,plVar35,lVar47,8);
            goto LAB_02c103d4;
          }
        }
        (**(code **)(*plVar31 + 0x18))(plVar31,plVar35,lVar47,8);
      }
    }
    else {
      lVar37 = uVar46 - uVar34;
      do {
        FUN_02c144e4(puVar44,plVar31);
        plVar31 = (long *)(*(long *)(param_1 + 0xb8) + 8);
        bVar28 = lVar37 != -1;
        lVar37 = lVar37 + 1;
        *(long **)(param_1 + 0xb8) = plVar31;
      } while (bVar28);
    }
  }
  else if (uVar34 < uVar46) {
    plVar38 = (long *)(lVar37 + uVar34 * 8);
    while (plVar38 != plVar31) {
      plVar31 = plVar31 + -1;
      plVar36 = (long *)*plVar31;
      if (plVar36 != (long *)0x0) {
        plVar35 = plVar36 + 10;
        do {
          iVar29 = (int)*plVar35 + -1;
          cVar3 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(plVar35,0x10);
          if (bVar28) {
            *(int *)plVar35 = iVar29;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar29 == 0) {
          (**(code **)(*plVar36 + 0x10))();
        }
      }
    }
    *(long **)(param_1 + 0xb8) = plVar38;
  }
LAB_02c103d4:
  lVar37 = *(long *)(param_1 + 0x120);
  plVar31 = *(long **)(param_1 + 0x128);
  uVar46 = (long)plVar31 - lVar37 >> 3;
  if (uVar34 <= uVar46) {
    if (uVar34 < uVar46) {
      plVar38 = (long *)(lVar37 + uVar34 * 8);
      while (plVar38 != plVar31) {
        plVar31 = plVar31 + -1;
        plVar36 = (long *)*plVar31;
        if (plVar36 != (long *)0x0) {
          plVar35 = plVar36 + 10;
          do {
            iVar29 = (int)*plVar35 + -1;
            cVar3 = '\x01';
            bVar28 = (bool)ExclusiveMonitorPass(plVar35,0x10);
            if (bVar28) {
              *(int *)plVar35 = iVar29;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar29 == 0) {
            (**(code **)(*plVar36 + 0x10))();
          }
        }
      }
      *(long **)(param_1 + 0x128) = plVar38;
    }
    goto LAB_02c106cc;
  }
  puVar44 = (undefined8 *)(param_1 + 0x138);
  if (uVar34 - uVar46 <= (ulong)(*(long *)(param_1 + 0x130) - (long)plVar31 >> 3)) {
    lVar37 = uVar46 - uVar34;
    do {
      FUN_02c145b0(puVar44,plVar31);
      plVar31 = (long *)(*(long *)(param_1 + 0x128) + 8);
      bVar28 = lVar37 != -1;
      lVar37 = lVar37 + 1;
      *(long **)(param_1 + 0x128) = plVar31;
    } while (bVar28);
    goto LAB_02c106cc;
  }
  uVar42 = *(ulong *)(param_1 + 0x140);
  if (0x7ffffffffffffffe < uVar42) {
    uVar42 = 0x7fffffffffffffff;
  }
  if (uVar42 < uVar34) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar37 = *(long *)(param_1 + 0x130) - lVar37;
  if ((ulong)(lVar37 >> 3) < uVar42 >> 1) {
    uVar42 = lVar37 >> 2;
    uVar39 = uVar34;
    if (uVar34 <= uVar42) goto LAB_02c10434;
LAB_02c1043c:
    lVar37 = (**(code **)(*(long *)*puVar44 + 0x10))((long *)*puVar44,uVar39 << 3,8);
    uVar42 = uVar39;
    if (lVar37 == 0) {
      (**(code **)(*(long *)*puVar44 + 0xb8))();
    }
  }
  else {
LAB_02c10434:
    uVar39 = uVar42;
    if (uVar42 != 0) goto LAB_02c1043c;
    lVar37 = 0;
  }
  plVar38 = (long *)(lVar37 + uVar46 * 8);
  lVar47 = uVar46 - uVar34;
  plVar31 = plVar38;
  do {
    FUN_02c145b0(puVar44,plVar31);
    plVar31 = plVar31 + 1;
    bVar28 = lVar47 != -1;
    lVar47 = lVar47 + 1;
  } while (bVar28);
  plVar36 = *(long **)(param_1 + 0x120);
  plVar35 = *(long **)(param_1 + 0x128);
  if (plVar35 == plVar36) {
    plVar35 = plVar36;
  }
  else {
    do {
      uVar51 = *puVar44;
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar29 = __cxa_guard_acquire(PTR_DAT_04379520), iVar29 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar47 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (lVar47 != 0) {
        if (0xf < *(ulong *)(lVar47 + 0x80)) goto LAB_02c1095c;
        *(undefined8 *)(lVar47 + *(ulong *)(lVar47 + 0x80) * 8) = uVar51;
        *(long *)(lVar47 + 0x80) = *(long *)(lVar47 + 0x80) + 1;
      }
      plVar35 = plVar35 + -1;
      lVar48 = *plVar35;
      plVar38 = plVar38 + -1;
      *plVar38 = lVar48;
      if (lVar48 != 0) {
        piVar1 = (int *)(lVar48 + 0x50);
        do {
          cVar3 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar28) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (lVar47 != 0) {
        *(long *)(lVar47 + 0x80) = *(long *)(lVar47 + 0x80) + -1;
      }
    } while (plVar35 != plVar36);
    plVar36 = *(long **)(param_1 + 0x128);
    plVar35 = *(long **)(param_1 + 0x120);
  }
  lVar47 = *(long *)(param_1 + 0x130);
  *(ulong *)(param_1 + 0x130) = lVar37 + uVar42 * 8;
  *(long **)(param_1 + 0x120) = plVar38;
  *(long **)(param_1 + 0x128) = plVar31;
LAB_02c10610:
  if (plVar36 != plVar35) {
    while( true ) {
      plVar36 = plVar36 + -1;
      plVar31 = (long *)*plVar36;
      if (plVar31 == (long *)0x0) break;
      plVar38 = plVar31 + 10;
      do {
        iVar29 = (int)*plVar38 + -1;
        cVar3 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar28) {
          *(int *)plVar38 = iVar29;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar29 != 0) break;
      (**(code **)(*plVar31 + 0x10))();
      if (plVar36 == plVar35) goto LAB_02c1064c;
    }
    goto LAB_02c10610;
  }
LAB_02c1064c:
  if (plVar35 != (long *)0x0) {
    plVar31 = (long *)*puVar44;
    lVar47 = lVar47 - (long)plVar35;
    uVar46 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar46 & 1) != 0) {
      lVar37 = tpidr_el0;
      if (*(char *)(lVar37 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar37 + 0x38d488) = 1;
        *(undefined8 *)(lVar37 + 0x38d478) = 0;
        *(undefined8 *)(lVar37 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar37 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar37 + 0x38d480)) {
        FUN_02bcc824(plVar31,plVar35,lVar47,8);
        goto LAB_02c106cc;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,plVar35,lVar47,8);
  }
LAB_02c106cc:
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(ulong *)(param_1 + 0x170) = uVar34;
  return;
}


