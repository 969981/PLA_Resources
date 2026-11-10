/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c94d28; name: FUN_02c94d28
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c94d28(long param_1,long param_2,long *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined2 uVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  ulong uVar38;
  undefined8 uVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  bool bVar43;
  int iVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  long *plVar48;
  char *pcVar49;
  undefined8 uVar50;
  uint uVar51;
  ulong uVar52;
  code *pcVar53;
  long lVar54;
  ulong uVar55;
  long lVar56;
  ulong uVar57;
  void *pvVar58;
  undefined8 uVar59;
  void *__src;
  long *plVar60;
  void *pvVar61;
  void *__dest;
  void *pvVar62;
  undefined8 uVar63;
  void *pvVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  undefined1 auVar69 [16];
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined8 uVar105;
  undefined1 auVar106 [12];
  undefined1 auVar107 [16];
  float fVar108;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  byte bVar111;
  undefined1 uVar112;
  undefined1 uVar113;
  undefined1 uVar114;
  undefined8 uVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  undefined8 uVar128;
  undefined8 uVar129;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined8 local_70;
  undefined1 auStack_68 [8];
  
  plVar60 = *(long **)(param_1 + 8);
  plVar48 = plVar60;
  if (param_3 != (long *)0x0) {
    plVar48 = param_3;
  }
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar45 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar40 = PTR_DAT_04379528;
    if (iVar45 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar40,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar46 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar46 + 0x80)) {
LAB_02c95c54:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar46 + *(ulong *)(lVar46 + 0x80) * 8) = plVar60;
  *(long *)(lVar46 + 0x80) = *(long *)(lVar46 + 0x80) + 1;
  lVar47 = (**(code **)(*plVar60 + 0x10))(plVar60,0x18b0,0x10);
  if (lVar47 == 0) {
    (**(code **)(*plVar60 + 0xb8))(plVar60);
  }
  FUN_02c99460(lVar47,param_2,plVar48);
  *(long **)(lVar47 + 8) = plVar60;
  *(long *)(lVar47 + 0x10) = lVar47;
  *(undefined8 *)(lVar47 + 0x18) = 0x18b0;
  *(undefined8 *)(lVar47 + 0x20) = 0x10;
  *(long *)(lVar46 + 0x80) = *(long *)(lVar46 + 0x80) + -1;
  if (lVar47 != 0) {
    piVar1 = (int *)(lVar47 + 0x50);
    do {
      cVar6 = '\x01';
      bVar43 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar43) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar48 = *(long **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar48 != (long *)0x0) {
    plVar60 = plVar48 + 10;
    do {
      iVar45 = (int)*plVar60 + -1;
      cVar6 = '\x01';
      bVar43 = (bool)ExclusiveMonitorPass(plVar60,0x10);
      if (bVar43) {
        *(int *)plVar60 = iVar45;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar45 == 0) {
      (**(code **)(*plVar48 + 0x10))();
    }
  }
  lVar46 = *(long *)(param_1 + 0x468);
  *(long *)(param_1 + 0x58) = lVar47;
  lVar54 = *(long *)(param_1 + 0x460);
  lVar56 = lVar46 - lVar54 >> 3;
  uVar52 = (ulong)*(int *)(param_2 + 0x48);
  lVar47 = lVar56 * 0x51b3bea3677d46cf - uVar52;
  if ((ulong)(lVar56 * 0x51b3bea3677d46cf) < uVar52) {
    puVar2 = (undefined8 *)(param_1 + 0x478);
    if ((ulong)((*(long *)(param_1 + 0x470) - lVar46 >> 3) * 0x51b3bea3677d46cf) <
        uVar52 + lVar56 * -0x51b3bea3677d46cf) {
      uVar57 = *(ulong *)(param_1 + 0x480);
      if (0x7ffffffffffffffe < uVar57) {
        uVar57 = 0x7fffffffffffffff;
      }
      if (uVar57 < uVar52) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar46 = *(long *)(param_1 + 0x470) - lVar54 >> 3;
      uVar55 = lVar46 * -0x5c9882b931057262;
      if (uVar52 <= uVar55) {
        uVar52 = uVar55;
      }
      if ((ulong)(lVar46 * 0x51b3bea3677d46cf) < uVar57 >> 1) {
        uVar57 = uVar52;
      }
      if (uVar57 == 0) {
        lVar46 = 0;
      }
      else {
        lVar46 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar57 * 0x178,8);
        if (lVar46 == 0) {
          (**(code **)(*(long *)*puVar2 + 0xb8))();
        }
      }
      __dest = (void *)(lVar46 + lVar56 * 8);
      pvVar61 = __dest;
      do {
        FUN_02c974b0(puVar2,pvVar61);
        pvVar61 = (void *)((long)pvVar61 + 0x178);
        bVar43 = lVar47 != -1;
        lVar47 = lVar47 + 1;
      } while (bVar43);
      pvVar58 = *(void **)(param_1 + 0x460);
      if (*(void **)(param_1 + 0x468) == pvVar58) {
        pvVar62 = pvVar58;
      }
      else {
        pvVar62 = __dest;
        pvVar64 = *(void **)(param_1 + 0x468);
        do {
          uVar59 = *puVar2;
          if ((*PTR_DAT_04379520 & 1) == 0) {
            iVar45 = __cxa_guard_acquire(PTR_DAT_04379520);
            puVar40 = PTR_DAT_04379528;
            if (iVar45 != 0) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar40,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
          }
          lVar47 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar47 != 0) {
            if (0xf < *(ulong *)(lVar47 + 0x80)) goto LAB_02c95c54;
            *(undefined8 *)(lVar47 + *(ulong *)(lVar47 + 0x80) * 8) = uVar59;
            *(long *)(lVar47 + 0x80) = *(long *)(lVar47 + 0x80) + 1;
          }
          __dest = (void *)((long)pvVar62 + -0x178);
          __src = (void *)((long)pvVar64 + -0x178);
          memcpy(__dest,__src,0x140);
          *(undefined8 *)((long)pvVar62 + -0x38) = *(undefined8 *)((long)pvVar64 + -0x38);
          *(undefined8 *)((long)pvVar62 + -0x30) = *(undefined8 *)((long)pvVar64 + -0x30);
          *(undefined8 *)((long)pvVar62 + -0x28) = *(undefined8 *)((long)pvVar64 + -0x28);
          plVar48 = *(long **)((long)pvVar64 + -0x20);
          *(long **)((long)pvVar62 + -0x20) = plVar48;
          if (plVar48 != (long *)0x0) {
            (**(code **)(*plVar48 + 0x18))();
          }
          *(undefined4 *)((long)pvVar62 + -0x18) = *(undefined4 *)((long)pvVar64 + -0x18);
          lVar54 = *(long *)((long)pvVar64 + -0x10);
          *(long *)((long)pvVar62 + -0x10) = lVar54;
          if (lVar54 != 0) {
            lVar54 = *(long *)(lVar54 + 0x58);
            if (*(undefined8 **)(lVar54 + 0x18) == (undefined8 *)0x0) goto LAB_02c95c3c;
            if (*(long *)(lVar54 + 0x10) == 0) {
              uVar59 = (**(code **)**(undefined8 **)(lVar54 + 0x18))();
              *(undefined8 *)(lVar54 + 0x10) = uVar59;
            }
            piVar1 = (int *)(lVar54 + 0xc);
            do {
              cVar6 = '\x01';
              bVar43 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar43) {
                *piVar1 = *piVar1 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          uVar5 = *(undefined4 *)((long)pvVar64 + -8);
          *(undefined1 *)((long)pvVar62 + -4) = *(undefined1 *)((long)pvVar64 + -4);
          *(undefined4 *)((long)pvVar62 + -8) = uVar5;
          if (lVar47 != 0) {
            *(long *)(lVar47 + 0x80) = *(long *)(lVar47 + 0x80) + -1;
          }
          pvVar62 = __dest;
          pvVar64 = __src;
        } while (__src != pvVar58);
        pvVar58 = *(void **)(param_1 + 0x468);
        pvVar62 = *(void **)(param_1 + 0x460);
      }
      lVar47 = *(long *)(param_1 + 0x470);
      *(void **)(param_1 + 0x460) = __dest;
      *(void **)(param_1 + 0x468) = pvVar61;
      *(ulong *)(param_1 + 0x470) = lVar46 + uVar57 * 0x178;
      while (pvVar58 != pvVar62) {
        plVar48 = *(long **)((long)pvVar58 + -0x10);
        if (plVar48 != (long *)0x0) {
          lVar46 = plVar48[0xb];
          piVar1 = (int *)(lVar46 + 0xc);
          do {
            iVar45 = *piVar1;
            cVar6 = '\x01';
            bVar43 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar43) {
              *piVar1 = iVar45 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar45 + -1 == 0) {
            *(undefined8 *)(lVar46 + 0x18) = 0;
            (**(code **)(*plVar48 + 0x20))();
          }
        }
        plVar48 = (long *)((long)pvVar58 + -0x20);
        pvVar58 = (void *)((long)pvVar58 + -0x178);
        if ((long *)*plVar48 != (long *)0x0) {
          (**(code **)(*(long *)*plVar48 + 0x20))();
        }
      }
      if (pvVar62 != (void *)0x0) {
        plVar48 = (long *)*puVar2;
        lVar47 = lVar47 - (long)pvVar62;
        uVar52 = (**(code **)(*plVar48 + 0xc0))(plVar48);
        if ((uVar52 & 1) != 0) {
          lVar46 = tpidr_el0;
          if (*(char *)(lVar46 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar46 + 0x38d488) = 1;
            *(undefined8 *)(lVar46 + 0x38d478) = 0;
            *(undefined8 *)(lVar46 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar46 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar46 + 0x38d480)) {
            FUN_02bcc824(plVar48,pvVar62,lVar47,8);
            goto LAB_02c95200;
          }
        }
        (**(code **)(*plVar48 + 0x18))(plVar48,pvVar62,lVar47,8);
      }
    }
    else {
      do {
        FUN_02c974b0(puVar2,lVar46);
        lVar46 = *(long *)(param_1 + 0x468) + 0x178;
        bVar43 = lVar47 != -1;
        lVar47 = lVar47 + 1;
        *(long *)(param_1 + 0x468) = lVar46;
      } while (bVar43);
    }
  }
  else if (lVar47 != 0) {
    lVar54 = lVar54 + uVar52 * 0x178;
    while (lVar54 != lVar46) {
      plVar48 = *(long **)(lVar46 + -0x10);
      if (plVar48 != (long *)0x0) {
        lVar47 = plVar48[0xb];
        piVar1 = (int *)(lVar47 + 0xc);
        do {
          iVar45 = *piVar1;
          cVar6 = '\x01';
          bVar43 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar43) {
            *piVar1 = iVar45 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar45 + -1 == 0) {
          *(undefined8 *)(lVar47 + 0x18) = 0;
          (**(code **)(*plVar48 + 0x20))();
        }
      }
      plVar48 = (long *)(lVar46 + -0x20);
      lVar46 = lVar46 + -0x178;
      if ((long *)*plVar48 != (long *)0x0) {
        (**(code **)(*(long *)*plVar48 + 0x20))();
      }
    }
    *(long *)(param_1 + 0x468) = lVar54;
  }
LAB_02c95200:
  FUN_0028422c(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x80),0xffffffff,&LAB_02c95c60);
  FUN_02c9df2c(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x50));
  uVar39 = _DAT_03889270;
  fVar35 = *(float *)(param_1 + 0x4a0);
  fVar36 = *(float *)(param_1 + 0x4a4);
  fVar37 = *(float *)(param_1 + 0x4a8);
  fVar10 = fVar35 + (float)_DAT_038891c0;
  fVar11 = fVar36 + (float)((ulong)_DAT_038891c0 >> 0x20);
  fVar12 = fVar37 + (float)_UNK_038891c8;
  fVar108 = *(float *)(param_1 + 0x4ac) + (float)((ulong)_UNK_038891c8 >> 0x20);
  fVar67 = fVar10 * fVar10;
  fVar68 = fVar11 * fVar11;
  uVar96 = (undefined1)((uint)fVar68 >> 8);
  uVar97 = (undefined1)((uint)fVar68 >> 0x10);
  uVar98 = (undefined1)((uint)fVar68 >> 0x18);
  fVar16 = fVar12 * fVar12;
  uVar99 = (undefined1)((uint)fVar16 >> 8);
  uVar100 = (undefined1)((uint)fVar16 >> 0x10);
  uVar101 = (undefined1)((uint)fVar16 >> 0x18);
  fVar66 = fVar108 * fVar108;
  uVar102 = (undefined1)((uint)fVar66 >> 8);
  uVar103 = (undefined1)((uint)fVar66 >> 0x10);
  uVar104 = (undefined1)((uint)fVar66 >> 0x18);
  auVar13[4] = SUB41(fVar68,0);
  auVar13._0_4_ = fVar67;
  auVar13[5] = uVar96;
  auVar13[6] = uVar97;
  auVar13[7] = uVar98;
  auVar13[8] = SUB41(fVar16,0);
  auVar13[9] = uVar99;
  auVar13[10] = uVar100;
  auVar13[0xb] = uVar101;
  auVar13[0xc] = SUB41(fVar66,0);
  auVar13[0xd] = uVar102;
  auVar13[0xe] = uVar103;
  auVar13[0xf] = uVar104;
  auVar14[4] = SUB41(fVar68,0);
  auVar14._0_4_ = fVar67;
  auVar14[5] = uVar96;
  auVar14[6] = uVar97;
  auVar14[7] = uVar98;
  auVar14[8] = SUB41(fVar16,0);
  auVar14[9] = uVar99;
  auVar14[10] = uVar100;
  auVar14[0xb] = uVar101;
  auVar14[0xc] = SUB41(fVar66,0);
  auVar14[0xd] = uVar102;
  auVar14[0xe] = uVar103;
  auVar14[0xf] = uVar104;
  auVar107 = NEON_ext(auVar13,auVar14,8,1);
  fVar67 = auVar107._0_4_ + fVar67;
  fVar68 = auVar107._4_4_ + fVar68;
  fVar65 = fVar67 + fVar68;
  fVar67 = fVar67 + fVar68;
  uVar96 = SUB41(fVar67,0);
  uVar97 = (undefined1)((uint)fVar67 >> 8);
  uVar98 = (undefined1)((uint)fVar67 >> 0x10);
  uVar99 = (undefined1)((uint)fVar67 >> 0x18);
  uVar100 = (undefined1)DAT_0388a148;
  uVar101 = (undefined1)((ulong)DAT_0388a148 >> 8);
  uVar102 = (undefined1)((ulong)DAT_0388a148 >> 0x10);
  uVar103 = (undefined1)((ulong)DAT_0388a148 >> 0x18);
  uVar104 = (undefined1)((ulong)DAT_0388a148 >> 0x20);
  uVar112 = (undefined1)((ulong)DAT_0388a148 >> 0x28);
  uVar113 = (undefined1)((ulong)DAT_0388a148 >> 0x30);
  uVar114 = (undefined1)((ulong)DAT_0388a148 >> 0x38);
  auVar17[4] = uVar96;
  auVar17._0_4_ = fVar65;
  auVar17[5] = uVar97;
  auVar17[6] = uVar98;
  auVar17[7] = uVar99;
  auVar17[8] = SUB41(fVar65,0);
  auVar17[9] = (char)((uint)fVar65 >> 8);
  auVar17[10] = (char)((uint)fVar65 >> 0x10);
  auVar17[0xb] = (char)((uint)fVar65 >> 0x18);
  auVar17[0xc] = uVar96;
  auVar17[0xd] = uVar97;
  auVar17[0xe] = uVar98;
  auVar17[0xf] = uVar99;
  auVar107 = NEON_frsqrte(auVar17,4);
  fVar68 = auVar107._4_4_ * fVar67;
  fVar16 = auVar107._8_4_ * fVar65;
  uVar18 = (undefined2)(CONCAT15(uVar97,CONCAT14(uVar96,fVar65)) >> 0x20);
  fVar66 = auVar107._12_4_ * (float)CONCAT13(uVar99,CONCAT12(uVar98,uVar18));
  auVar15[4] = SUB41(fVar68,0);
  auVar15._0_4_ = auVar107._0_4_ * fVar65;
  auVar15[5] = (char)((uint)fVar68 >> 8);
  auVar15[6] = (char)((uint)fVar68 >> 0x10);
  auVar15[7] = (char)((uint)fVar68 >> 0x18);
  auVar15[8] = SUB41(fVar16,0);
  auVar15[9] = (char)((uint)fVar16 >> 8);
  auVar15[10] = (char)((uint)fVar16 >> 0x10);
  auVar15[0xb] = (char)((uint)fVar16 >> 0x18);
  auVar15[0xc] = SUB41(fVar66,0);
  auVar15[0xd] = (char)((uint)fVar66 >> 8);
  auVar15[0xe] = (char)((uint)fVar66 >> 0x10);
  auVar15[0xf] = (char)((uint)fVar66 >> 0x18);
  auVar109 = NEON_frsqrts(auVar107,auVar15,4);
  fVar68 = auVar107._0_4_ * auVar109._0_4_;
  fVar16 = auVar107._4_4_ * auVar109._4_4_;
  fVar66 = auVar107._8_4_ * auVar109._8_4_;
  fVar22 = auVar107._12_4_ * auVar109._12_4_;
  auVar110._0_4_ = fVar65 * fVar68;
  auVar110._4_4_ = fVar67 * fVar16;
  auVar110._8_4_ = fVar65 * fVar66;
  auVar110._12_4_ = (float)CONCAT13(uVar99,CONCAT12(uVar98,uVar18)) * fVar22;
  auVar23[8] = uVar100;
  auVar23._0_8_ = DAT_0388a140;
  auVar23[9] = uVar101;
  auVar23[10] = uVar102;
  auVar23[0xb] = uVar103;
  auVar23[0xc] = uVar104;
  auVar23[0xd] = uVar112;
  auVar23[0xe] = uVar113;
  auVar23[0xf] = uVar114;
  uVar31 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a880);
  iVar45 = -(uint)(fVar65 == 0.0);
  iVar44 = -(uint)(fVar67 == 0.0);
  iVar19 = -(uint)(fVar65 == 0.0);
  iVar20 = -(uint)((float)CONCAT13(uVar99,CONCAT12(uVar98,uVar18)) == 0.0);
  auVar21[4] = SUB41(fVar16,0);
  auVar21._0_4_ = fVar68;
  auVar21[5] = (char)((uint)fVar16 >> 8);
  auVar21[6] = (char)((uint)fVar16 >> 0x10);
  auVar21[7] = (char)((uint)fVar16 >> 0x18);
  auVar21[8] = SUB41(fVar66,0);
  auVar21[9] = (char)((uint)fVar66 >> 8);
  auVar21[10] = (char)((uint)fVar66 >> 0x10);
  auVar21[0xb] = (char)((uint)fVar66 >> 0x18);
  auVar21[0xc] = SUB41(fVar22,0);
  auVar21[0xd] = (char)((uint)fVar22 >> 8);
  auVar21[0xe] = (char)((uint)fVar22 >> 0x10);
  auVar21[0xf] = (char)((uint)fVar22 >> 0x18);
  auVar107 = NEON_frsqrts(auVar21,auVar110,4);
  fVar10 = fVar10 * fVar68 * auVar107._0_4_;
  fVar11 = fVar11 * fVar16 * auVar107._4_4_;
  fVar12 = fVar12 * fVar66 * auVar107._8_4_;
  fVar108 = fVar108 * fVar22 * auVar107._12_4_;
  bVar80 = SUB41(fVar10,0) & ~(byte)iVar45;
  bVar81 = (byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar45 >> 8);
  bVar82 = (byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
  bVar83 = (byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
  bVar84 = SUB41(fVar11,0) & ~(byte)iVar44;
  bVar85 = (byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar44 >> 8);
  bVar86 = (byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10);
  bVar87 = (byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18);
  bVar88 = SUB41(fVar12,0) & ~(byte)iVar19;
  bVar89 = (byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar19 >> 8);
  bVar90 = (byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10);
  bVar91 = (byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18);
  bVar92 = SUB41(fVar108,0) & ~(byte)iVar20;
  bVar93 = (byte)((uint)fVar108 >> 8) & ~(byte)((uint)iVar20 >> 8);
  bVar94 = (byte)((uint)fVar108 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10);
  bVar95 = (byte)((uint)fVar108 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18);
  auVar24[8] = uVar100;
  auVar24._0_8_ = DAT_0388a140;
  auVar24[9] = uVar101;
  auVar24[10] = uVar102;
  auVar24[0xb] = uVar103;
  auVar24[0xc] = uVar104;
  auVar24[0xd] = uVar112;
  auVar24[0xe] = uVar113;
  auVar24[0xf] = uVar114;
  uVar105 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a6f0);
  auVar107[1] = bVar81;
  auVar107[0] = bVar80;
  auVar107[2] = bVar82;
  auVar107[3] = bVar83;
  auVar107[4] = bVar84;
  auVar107[5] = bVar85;
  auVar107[6] = bVar86;
  auVar107[7] = bVar87;
  auVar107[8] = bVar88;
  auVar107[9] = bVar89;
  auVar107[10] = bVar90;
  auVar107[0xb] = bVar91;
  auVar107[0xc] = bVar92;
  auVar107[0xd] = bVar93;
  auVar107[0xe] = bVar94;
  auVar107[0xf] = bVar95;
  uVar128 = a64_TBL(ZEXT816(0),auVar107,DAT_0388a6d8);
  auVar109[1] = bVar81;
  auVar109[0] = bVar80;
  auVar109[2] = bVar82;
  auVar109[3] = bVar83;
  auVar109[4] = bVar84;
  auVar109[5] = bVar85;
  auVar109[6] = bVar86;
  auVar109[7] = bVar87;
  auVar109[8] = bVar88;
  auVar109[9] = bVar89;
  auVar109[10] = bVar90;
  auVar109[0xb] = bVar91;
  auVar109[0xc] = bVar92;
  auVar109[0xd] = bVar93;
  auVar109[0xe] = bVar94;
  auVar109[0xf] = bVar95;
  uVar63 = a64_TBL(ZEXT816(0),auVar109,DAT_0388a680);
  auVar25[8] = uVar100;
  auVar25._0_8_ = DAT_0388a140;
  auVar25[9] = uVar101;
  auVar25[10] = uVar102;
  auVar25[0xb] = uVar103;
  auVar25[0xc] = uVar104;
  auVar25[0xd] = uVar112;
  auVar25[0xe] = uVar113;
  auVar25[0xf] = uVar114;
  uVar129 = a64_TBL(ZEXT816(0),auVar25,DAT_0388a680);
  auVar26[8] = uVar100;
  auVar26._0_8_ = DAT_0388a140;
  auVar26[9] = uVar101;
  auVar26[10] = uVar102;
  auVar26[0xb] = uVar103;
  auVar26[0xc] = uVar104;
  auVar26[0xd] = uVar112;
  auVar26[0xe] = uVar113;
  auVar26[0xf] = uVar114;
  uVar59 = a64_TBL(ZEXT816(0),auVar26,DAT_0388a6d8);
  auVar8[1] = bVar81;
  auVar8[0] = bVar80;
  auVar8[2] = bVar82;
  auVar8[3] = bVar83;
  auVar8[4] = bVar84;
  auVar8[5] = bVar85;
  auVar8[6] = bVar86;
  auVar8[7] = bVar87;
  auVar8[8] = bVar88;
  auVar8[9] = bVar89;
  auVar8[10] = bVar90;
  auVar8[0xb] = bVar91;
  auVar8[0xc] = bVar92;
  auVar8[0xd] = bVar93;
  auVar8[0xe] = bVar94;
  auVar8[0xf] = bVar95;
  uVar115 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a880);
  auVar9[1] = bVar81;
  auVar9[0] = bVar80;
  auVar9[2] = bVar82;
  auVar9[3] = bVar83;
  auVar9[4] = bVar84;
  auVar9[5] = bVar85;
  auVar9[6] = bVar86;
  auVar9[7] = bVar87;
  auVar9[8] = bVar88;
  auVar9[9] = bVar89;
  auVar9[10] = bVar90;
  auVar9[0xb] = bVar91;
  auVar9[0xc] = bVar92;
  auVar9[0xd] = bVar93;
  auVar9[0xe] = bVar94;
  auVar9[0xf] = bVar95;
  uVar50 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a6f0);
  fVar10 = (float)((ulong)uVar63 >> 0x20);
  fVar67 = (float)uVar105 * (float)uVar128;
  fVar68 = (float)((ulong)uVar105 >> 0x20) * (float)((ulong)uVar128 >> 0x20);
  fVar65 = (float)((ulong)uVar115 >> 0x20);
  fVar11 = (float)uVar31 * (float)uVar63 - (float)uVar129 * (float)uVar115;
  fVar12 = (float)((ulong)uVar31 >> 0x20) * fVar10 - (float)((ulong)uVar129 >> 0x20) * fVar65;
  fVar108 = fVar67 - (float)uVar59 * (float)uVar50;
  fVar67 = (float)CONCAT13((char)((uint)fVar68 >> 0x18),
                           CONCAT12((char)((uint)fVar68 >> 0x10),
                                    (short)(CONCAT15((char)((uint)fVar68 >> 8),
                                                     CONCAT14(SUB41(fVar68,0),fVar67)) >> 0x20))) -
           (float)((ulong)uVar59 >> 0x20) * (float)((ulong)uVar50 >> 0x20);
  fVar68 = fVar11 * fVar11;
  fVar16 = fVar12 * fVar12;
  uVar96 = (undefined1)((uint)fVar16 >> 8);
  uVar97 = (undefined1)((uint)fVar16 >> 0x10);
  uVar98 = (undefined1)((uint)fVar16 >> 0x18);
  fVar66 = fVar108 * fVar108;
  uVar99 = (undefined1)((uint)fVar66 >> 8);
  uVar100 = (undefined1)((uint)fVar66 >> 0x10);
  uVar101 = (undefined1)((uint)fVar66 >> 0x18);
  fVar22 = fVar67 * fVar67;
  uVar102 = (undefined1)((uint)fVar22 >> 8);
  uVar103 = (undefined1)((uint)fVar22 >> 0x10);
  uVar104 = (undefined1)((uint)fVar22 >> 0x18);
  auVar32[4] = SUB41(fVar16,0);
  auVar32._0_4_ = fVar68;
  auVar32[5] = uVar96;
  auVar32[6] = uVar97;
  auVar32[7] = uVar98;
  auVar32[8] = SUB41(fVar66,0);
  auVar32[9] = uVar99;
  auVar32[10] = uVar100;
  auVar32[0xb] = uVar101;
  auVar32[0xc] = SUB41(fVar22,0);
  auVar32[0xd] = uVar102;
  auVar32[0xe] = uVar103;
  auVar32[0xf] = uVar104;
  auVar33[4] = SUB41(fVar16,0);
  auVar33._0_4_ = fVar68;
  auVar33[5] = uVar96;
  auVar33[6] = uVar97;
  auVar33[7] = uVar98;
  auVar33[8] = SUB41(fVar66,0);
  auVar33[9] = uVar99;
  auVar33[10] = uVar100;
  auVar33[0xb] = uVar101;
  auVar33[0xc] = SUB41(fVar22,0);
  auVar33[0xd] = uVar102;
  auVar33[0xe] = uVar103;
  auVar33[0xf] = uVar104;
  auVar107 = NEON_ext(auVar32,auVar33,8,1);
  fVar68 = auVar107._0_4_ + fVar68;
  fVar16 = auVar107._4_4_ + fVar16;
  fVar66 = fVar68 + fVar16;
  fVar68 = fVar68 + fVar16;
  uVar96 = SUB41(fVar68,0);
  uVar97 = (undefined1)((uint)fVar68 >> 8);
  uVar98 = (undefined1)((uint)fVar68 >> 0x10);
  uVar99 = (undefined1)((uint)fVar68 >> 0x18);
  lVar46 = *(long *)(param_1 + 0x460);
  auVar34[4] = uVar96;
  auVar34._0_4_ = fVar66;
  auVar34[5] = uVar97;
  auVar34[6] = uVar98;
  auVar34[7] = uVar99;
  auVar34[8] = SUB41(fVar66,0);
  auVar34[9] = (char)((uint)fVar66 >> 8);
  auVar34[10] = (char)((uint)fVar66 >> 0x10);
  auVar34[0xb] = (char)((uint)fVar66 >> 0x18);
  auVar34[0xc] = uVar96;
  auVar34[0xd] = uVar97;
  auVar34[0xe] = uVar98;
  auVar34[0xf] = uVar99;
  auVar107 = NEON_frsqrte(auVar34,4);
  lVar47 = *(long *)(param_1 + 0x468);
  auVar131._0_4_ = auVar107._0_4_ * fVar66;
  auVar131._4_4_ = auVar107._4_4_ * fVar68;
  auVar131._8_4_ = auVar107._8_4_ * fVar66;
  uVar18 = (undefined2)(CONCAT15(uVar97,CONCAT14(uVar96,fVar66)) >> 0x20);
  auVar131._12_4_ = auVar107._12_4_ * (float)CONCAT13(uVar99,CONCAT12(uVar98,uVar18));
  auVar109 = NEON_frsqrts(auVar107,auVar131,4);
  auVar130._0_4_ = auVar107._0_4_ * auVar109._0_4_;
  auVar130._4_4_ = auVar107._4_4_ * auVar109._4_4_;
  auVar130._8_4_ = auVar107._8_4_ * auVar109._8_4_;
  auVar130._12_4_ = auVar107._12_4_ * auVar109._12_4_;
  auVar132._0_4_ = fVar66 * auVar130._0_4_;
  auVar132._4_4_ = fVar68 * auVar130._4_4_;
  auVar132._8_4_ = fVar66 * auVar130._8_4_;
  auVar132._12_4_ = (float)CONCAT13(uVar99,CONCAT12(uVar98,uVar18)) * auVar130._12_4_;
  iVar45 = -(uint)(fVar66 == 0.0);
  iVar44 = -(uint)(fVar68 == 0.0);
  iVar19 = -(uint)(fVar66 == 0.0);
  iVar20 = -(uint)((float)CONCAT13(uVar99,CONCAT12(uVar98,uVar18)) == 0.0);
  auVar107 = NEON_frsqrts(auVar130,auVar132,4);
  fVar11 = fVar11 * auVar130._0_4_ * auVar107._0_4_;
  fVar12 = fVar12 * auVar130._4_4_ * auVar107._4_4_;
  fVar108 = fVar108 * auVar130._8_4_ * auVar107._8_4_;
  fVar67 = fVar67 * auVar130._12_4_ * auVar107._12_4_;
  bVar116 = SUB41(fVar11,0) & ~(byte)iVar45;
  bVar117 = (byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar45 >> 8);
  bVar118 = (byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
  bVar119 = (byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
  bVar120 = SUB41(fVar12,0) & ~(byte)iVar44;
  bVar121 = (byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar44 >> 8);
  bVar122 = (byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10);
  bVar123 = (byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18);
  bVar124 = SUB41(fVar108,0) & ~(byte)iVar19;
  bVar125 = (byte)((uint)fVar108 >> 8) & ~(byte)((uint)iVar19 >> 8);
  bVar126 = (byte)((uint)fVar108 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10);
  bVar127 = (byte)((uint)fVar108 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18);
  bVar92 = SUB41(fVar67,0) & ~(byte)iVar20;
  bVar93 = (byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar20 >> 8);
  bVar94 = (byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10);
  bVar95 = (byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18);
  auVar27[1] = bVar117;
  auVar27[0] = bVar116;
  auVar27[2] = bVar118;
  auVar27[3] = bVar119;
  auVar27[4] = bVar120;
  auVar27[5] = bVar121;
  auVar27[6] = bVar122;
  auVar27[7] = bVar123;
  auVar27[8] = bVar124;
  auVar27[9] = bVar125;
  auVar27[10] = bVar126;
  auVar27[0xb] = bVar127;
  auVar27[0xc] = bVar92;
  auVar27[0xd] = bVar93;
  auVar27[0xe] = bVar94;
  auVar27[0xf] = bVar95;
  uVar129 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a680);
  auVar28[1] = bVar117;
  auVar28[0] = bVar116;
  auVar28[2] = bVar118;
  auVar28[3] = bVar119;
  auVar28[4] = bVar120;
  auVar28[5] = bVar121;
  auVar28[6] = bVar122;
  auVar28[7] = bVar123;
  auVar28[8] = bVar124;
  auVar28[9] = bVar125;
  auVar28[10] = bVar126;
  auVar28[0xb] = bVar127;
  auVar28[0xc] = bVar92;
  auVar28[0xd] = bVar93;
  auVar28[0xe] = bVar94;
  auVar28[0xf] = bVar95;
  uVar31 = a64_TBL(ZEXT816(0),auVar28,DAT_0388a6d8);
  auVar29[1] = bVar117;
  auVar29[0] = bVar116;
  auVar29[2] = bVar118;
  auVar29[3] = bVar119;
  auVar29[4] = bVar120;
  auVar29[5] = bVar121;
  auVar29[6] = bVar122;
  auVar29[7] = bVar123;
  auVar29[8] = bVar124;
  auVar29[9] = bVar125;
  auVar29[10] = bVar126;
  auVar29[0xb] = bVar127;
  auVar29[0xc] = bVar92;
  auVar29[0xd] = bVar93;
  auVar29[0xe] = bVar94;
  auVar29[0xf] = bVar95;
  uVar59 = a64_TBL(ZEXT816(0),auVar29,DAT_0388a880);
  auVar30[1] = bVar117;
  auVar30[0] = bVar116;
  auVar30[2] = bVar118;
  auVar30[3] = bVar119;
  auVar30[4] = bVar120;
  auVar30[5] = bVar121;
  auVar30[6] = bVar122;
  auVar30[7] = bVar123;
  auVar30[8] = bVar124;
  auVar30[9] = bVar125;
  auVar30[10] = bVar126;
  auVar30[0xb] = bVar127;
  auVar30[0xc] = bVar92;
  auVar30[0xd] = bVar93;
  auVar30[0xe] = bVar94;
  auVar30[0xf] = bVar95;
  uVar105 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a6f0);
  bVar111 = (byte)_UNK_0388a138;
  uVar52 = (ulong)_UNK_0388a138 >> 8;
  uVar57 = (ulong)_UNK_0388a138 >> 0x10;
  uVar55 = (ulong)_UNK_0388a138 >> 0x18;
  fVar108 = (float)uVar115 * (float)uVar129 - (float)uVar63 * (float)uVar59;
  fVar67 = fVar65 * (float)((ulong)uVar129 >> 0x20) - fVar10 * (float)((ulong)uVar59 >> 0x20);
  fVar68 = (float)uVar50 * (float)uVar31 - (float)uVar128 * (float)uVar105;
  auVar107 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x4f8) = _UNK_03889278;
  *(undefined8 *)(param_1 + 0x4f0) = uVar39;
  uVar31 = _UNK_03889b18;
  uVar63 = _DAT_03889b10;
  uVar59 = _DAT_038890c0;
  *(undefined8 *)(param_1 + 0x518) = _UNK_038890c8;
  *(undefined8 *)(param_1 + 0x510) = uVar59;
  puVar40 = PTR_DAT_0437b4f8;
  uVar59 = _DAT_03889400;
  uVar50 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x508) = _UNK_03889408;
  *(undefined8 *)(param_1 + 0x500) = uVar59;
  bVar92 = (byte)_DAT_038897c0;
  bVar93 = (byte)((ulong)_DAT_038897c0 >> 8);
  bVar94 = (byte)((ulong)_DAT_038897c0 >> 0x10);
  bVar95 = (byte)((ulong)_DAT_038897c0 >> 0x18);
  bVar70 = (byte)((ulong)_DAT_038897c0 >> 0x20);
  bVar71 = (byte)((ulong)_DAT_038897c0 >> 0x28);
  bVar72 = (byte)((ulong)_DAT_038897c0 >> 0x30);
  bVar73 = (byte)((ulong)_DAT_038897c0 >> 0x38);
  bVar74 = (byte)_UNK_038897c8;
  bVar75 = (byte)((ulong)_UNK_038897c8 >> 8);
  bVar76 = (byte)((ulong)_UNK_038897c8 >> 0x10);
  bVar77 = (byte)((ulong)_UNK_038897c8 >> 0x18);
  uVar7 = (ulong)_UNK_038897c8 >> 0x20;
  uVar38 = (ulong)_UNK_038897c8 >> 0x28;
  bVar78 = (byte)((ulong)_UNK_038897c8 >> 0x30);
  bVar79 = (byte)((ulong)_UNK_038897c8 >> 0x38);
  *(undefined8 *)(param_1 + 0x528) = uVar31;
  *(undefined8 *)(param_1 + 0x520) = uVar63;
  fVar10 = 0.0 - ((float)CONCAT13(bVar119,CONCAT12(bVar118,CONCAT11(bVar117,bVar116))) * fVar35 +
                  (float)CONCAT13(bVar123,CONCAT12(bVar122,(short)(CONCAT12(bVar121,CONCAT11(bVar120
                                                  ,bVar83)) >> 8))) * fVar36 +
                  (float)CONCAT13(bVar127,CONCAT12(bVar126,(short)(CONCAT12(bVar125,CONCAT11(bVar124
                                                  ,bVar123)) >> 8))) * fVar37 + auVar107._0_4_ * 0.0
                 );
  fVar11 = 0.0 - (fVar108 * fVar35 + fVar67 * fVar36 + fVar68 * fVar37 + auVar107._4_4_ * 0.0);
  fVar12 = 0.0 - ((float)CONCAT13(bVar83,CONCAT12(bVar82,CONCAT11(bVar81,bVar80))) * fVar35 +
                  (float)CONCAT13(bVar87,CONCAT12(bVar86,CONCAT11(bVar85,bVar84))) * fVar36 +
                  (float)CONCAT13(bVar91,CONCAT12(bVar90,CONCAT11(bVar89,bVar88))) * fVar37 +
                 auVar107._8_4_ * 0.0);
  auVar106._0_8_ =
       CONCAT17((byte)((uint)fVar108 >> 0x18) & bVar73,
                CONCAT16((byte)((uint)fVar108 >> 0x10) & bVar72,
                         CONCAT15((byte)((uint)fVar108 >> 8) & bVar71,
                                  CONCAT14(SUB41(fVar108,0) & bVar70,
                                           CONCAT13(bVar119 & bVar95,
                                                    CONCAT12(bVar118 & bVar94,
                                                             CONCAT11(bVar117 & bVar93,
                                                                      bVar116 & bVar92)))))));
  auVar106[8] = bVar80 & bVar74;
  auVar106[9] = bVar81 & bVar75;
  auVar106[10] = bVar82 & bVar76;
  auVar106[0xb] = bVar83 & bVar77;
  *(ulong *)(param_1 + 0x4b8) = (ulong)auVar106._8_4_;
  *(undefined8 *)(param_1 + 0x4b0) = auVar106._0_8_;
  auVar69._0_8_ =
       CONCAT17((byte)((uint)fVar11 >> 0x18) & bVar73,
                CONCAT16((byte)((uint)fVar11 >> 0x10) & bVar72,
                         CONCAT15((byte)((uint)fVar11 >> 8) & bVar71,
                                  CONCAT14(SUB41(fVar11,0) & bVar70,
                                           CONCAT13((byte)((uint)fVar10 >> 0x18) & bVar95,
                                                    CONCAT12((byte)((uint)fVar10 >> 0x10) & bVar94,
                                                             CONCAT11((byte)((uint)fVar10 >> 8) &
                                                                      bVar93,SUB41(fVar10,0) &
                                                                             bVar92)))))));
  auVar69[8] = SUB41(fVar12,0) & bVar74;
  auVar69[9] = (byte)((uint)fVar12 >> 8) & bVar75;
  auVar69[10] = (byte)((uint)fVar12 >> 0x10) & bVar76;
  auVar69[0xb] = (byte)((uint)fVar12 >> 0x18) & bVar77;
  auVar69._12_2_ = 0;
  auVar69[0xe] = bVar78 & 0x80;
  auVar69[0xf] = bVar79 & 0x3f;
  *(ulong *)(param_1 + 0x4c8) =
       (ulong)CONCAT13(bVar87 & bVar77,
                       CONCAT12(bVar86 & bVar76,CONCAT11(bVar85 & bVar75,bVar84 & bVar74)));
  *(ulong *)(param_1 + 0x4c0) =
       CONCAT17((byte)((uint)fVar67 >> 0x18) & bVar73,
                CONCAT16((byte)((uint)fVar67 >> 0x10) & bVar72,
                         CONCAT15((byte)((uint)fVar67 >> 8) & bVar71,
                                  CONCAT14(SUB41(fVar67,0) & bVar70,
                                           CONCAT13(bVar123 & bVar95,
                                                    CONCAT12(bVar122 & bVar94,
                                                             CONCAT11(bVar121 & bVar93,
                                                                      bVar120 & bVar92)))))));
  *(byte *)(param_1 + 0x4d8) = bVar88 & bVar74;
  *(byte *)(param_1 + 0x4d9) = bVar89 & bVar75;
  *(byte *)(param_1 + 0x4da) = bVar90 & bVar76;
  *(byte *)(param_1 + 0x4db) = bVar91 & bVar77;
  *(byte *)(param_1 + 0x4dc) = bVar111 & (byte)uVar7;
  *(byte *)(param_1 + 0x4dd) = (byte)uVar52 & (byte)uVar38;
  *(byte *)(param_1 + 0x4de) = (byte)uVar57 & bVar78;
  *(byte *)(param_1 + 0x4df) = (byte)uVar55 & bVar79;
  *(byte *)(param_1 + 0x4d0) = bVar124 & bVar92;
  *(byte *)(param_1 + 0x4d1) = bVar125 & bVar93;
  *(byte *)(param_1 + 0x4d2) = bVar126 & bVar94;
  *(byte *)(param_1 + 0x4d3) = bVar127 & bVar95;
  *(byte *)(param_1 + 0x4d4) = SUB41(fVar68,0) & bVar70;
  *(byte *)(param_1 + 0x4d5) = (byte)((uint)fVar68 >> 8) & bVar71;
  *(byte *)(param_1 + 0x4d6) = (byte)((uint)fVar68 >> 0x10) & bVar72;
  *(byte *)(param_1 + 0x4d7) = (byte)((uint)fVar68 >> 0x18) & bVar73;
  puVar41 = PTR_DAT_0437b500;
  *(long *)(param_1 + 0x4e8) = auVar69._8_8_;
  *(undefined8 *)(param_1 + 0x4e0) = auVar69._0_8_;
  puVar42 = PTR_DAT_0437b508;
  if (lVar46 != lVar47) {
    iVar45 = 0;
    do {
      local_70 = 0;
      plVar48 = (long *)FUN_00957dc4(auStack_68,uVar50,&local_70);
      plVar48[0x3c] = plVar48[0x3c] | 8;
      if (plVar48 != (long *)0x0) {
        lVar54 = plVar48[0xb];
        if (*(undefined8 **)(lVar54 + 0x18) == (undefined8 *)0x0) goto LAB_02c95c3c;
        if (*(long *)(lVar54 + 0x10) == 0) {
          uVar59 = (**(code **)**(undefined8 **)(lVar54 + 0x18))();
          *(undefined8 *)(lVar54 + 0x10) = uVar59;
        }
        piVar1 = (int *)(lVar54 + 0xc);
        do {
          cVar6 = '\x01';
          bVar43 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar43) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      pcVar53 = (code *)plVar48[0x75];
      if (pcVar53 != (code *)0x0) {
        plVar48[0x76] = 0;
        plVar48[0x77] = 0;
        plVar48[0x74] = 0;
        plVar48[0x75] = 0;
        (*pcVar53)(plVar48 + 0x78);
      }
      plVar48[0x74] = (long)FUN_02c975ac;
      plVar48[0x75] = (long)&LAB_02c97944;
      plVar48[0x76] = (long)&LAB_02c97948;
      plVar48[0x78] = param_1;
      plVar48[0x79] = lVar46;
      plVar48[0x77] = (long)&LAB_02c97954;
      (**(code **)(*plVar48 + 0x40))(plVar48,0);
      lVar54 = nn::os::GetCurrentThread();
      plVar60 = plVar48 + 0x41;
      do {
        if (*plVar60 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar48 + 0x1fc));
            while (*plVar60 == 0) {
              cVar6 = '\x01';
              bVar43 = (bool)ExclusiveMonitorPass(plVar60,0x10);
              if (bVar43) {
                *plVar60 = lVar54;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_02c95558;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar6 = '\x01';
        bVar43 = (bool)ExclusiveMonitorPass(plVar60,0x10);
        if (bVar43) {
          *plVar60 = lVar54;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_02c95558:
      if (((*puVar40 & 1) == 0) && (iVar44 = __cxa_guard_acquire(puVar40), iVar44 != 0)) {
        FUN_00100250(PTR_LAB_0437b590,puVar41,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar40);
      }
      lVar54 = *(long *)puVar41;
      *(long *)puVar42 = lVar54;
      uVar59 = *(undefined8 *)(lVar54 + 0x50);
      if (((*puVar40 & 1) == 0) && (iVar44 = __cxa_guard_acquire(puVar40), iVar44 != 0)) {
        FUN_00100250(PTR_LAB_0437b590,puVar41,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar40);
      }
      lVar54 = *(long *)puVar41;
      *(long *)puVar42 = lVar54;
      uVar63 = *(undefined8 *)(lVar54 + 0x58);
      FUN_02a70468(plVar48,uVar59,0);
      FUN_02a70468(plVar48,0,uVar63);
      plVar48[0x41] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar48 + 0x1fc));
      plVar60 = *(long **)(lVar46 + 0x168);
      *(undefined8 *)(lVar46 + 0x168) = 0;
      if (plVar60 != (long *)0x0) {
        lVar54 = plVar60[0xb];
        piVar1 = (int *)(lVar54 + 0xc);
        do {
          iVar44 = *piVar1;
          cVar6 = '\x01';
          bVar43 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar43) {
            *piVar1 = iVar44 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar44 + -1 == 0) {
          *(undefined8 *)(lVar54 + 0x18) = 0;
          (**(code **)(*plVar60 + 0x20))();
        }
      }
      *(int *)(lVar46 + 0x170) = iVar45;
      iVar45 = iVar45 + 1;
      *(long **)(lVar46 + 0x168) = plVar48;
      uVar50 = *(undefined8 *)(param_1 + 8);
      lVar46 = lVar46 + 0x178;
    } while (lVar46 != lVar47);
  }
  local_70 = 0;
  lVar46 = FUN_00957dc4(auStack_68,uVar50,&local_70);
  *(ulong *)(lVar46 + 0x1e0) = *(ulong *)(lVar46 + 0x1e0) | 8;
  if (lVar46 != 0) {
    lVar47 = *(long *)(lVar46 + 0x58);
    if (*(undefined8 **)(lVar47 + 0x18) == (undefined8 *)0x0) {
LAB_02c95c3c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar47 + 0x10) == 0) {
      uVar59 = (**(code **)**(undefined8 **)(lVar47 + 0x18))();
      *(undefined8 *)(lVar47 + 0x10) = uVar59;
    }
    piVar1 = (int *)(lVar47 + 0xc);
    do {
      cVar6 = '\x01';
      bVar43 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar43) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar48 = *(long **)(param_1 + 0x530);
  *(undefined8 *)(param_1 + 0x530) = 0;
  if (plVar48 != (long *)0x0) {
    lVar47 = plVar48[0xb];
    piVar1 = (int *)(lVar47 + 0xc);
    do {
      iVar45 = *piVar1;
      cVar6 = '\x01';
      bVar43 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar43) {
        *piVar1 = iVar45 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar45 + -1 == 0) {
      *(undefined8 *)(lVar47 + 0x18) = 0;
      (**(code **)(*plVar48 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x530) = lVar46;
  pcVar53 = *(code **)(lVar46 + 0x3a8);
  if (pcVar53 != (code *)0x0) {
    *(undefined8 *)(lVar46 + 0x3b0) = 0;
    *(undefined8 *)(lVar46 + 0x3b8) = 0;
    *(undefined8 *)(lVar46 + 0x3a0) = 0;
    *(undefined8 *)(lVar46 + 0x3a8) = 0;
    (*pcVar53)(lVar46 + 0x3c0);
  }
  *(undefined1 **)(lVar46 + 0x3a0) = &LAB_02c97960;
  *(undefined1 **)(lVar46 + 0x3a8) = &LAB_02c99440;
  *(long *)(lVar46 + 0x3c0) = param_1;
  *(undefined1 **)(lVar46 + 0x3b0) = &LAB_02c99444;
  *(undefined1 **)(lVar46 + 0x3b8) = &LAB_02c99450;
  lVar47 = *(long *)(param_1 + 0x530);
  lVar46 = nn::os::GetCurrentThread();
  plVar48 = (long *)(lVar47 + 0x208);
  do {
    if (*plVar48 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar47 + 0x1fc));
        while (*plVar48 == 0) {
          cVar6 = '\x01';
          bVar43 = (bool)ExclusiveMonitorPass(plVar48,0x10);
          if (bVar43) {
            *plVar48 = lVar46;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_02c957e0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar43 = (bool)ExclusiveMonitorPass(plVar48,0x10);
    if (bVar43) {
      *plVar48 = lVar46;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_02c957e0:
  if (((*puVar40 & 1) == 0) && (iVar45 = __cxa_guard_acquire(PTR_DAT_0437b4f8), iVar45 != 0)) {
    FUN_00100250(PTR_LAB_0437b590,PTR_DAT_0437b500,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4f8);
  }
  lVar46 = *(long *)puVar41;
  *(long *)puVar42 = lVar46;
  uVar59 = *(undefined8 *)(lVar46 + 0x50);
  if (((*puVar40 & 1) == 0) && (iVar45 = __cxa_guard_acquire(PTR_DAT_0437b4f8), iVar45 != 0)) {
    FUN_00100250(PTR_LAB_0437b590,PTR_DAT_0437b500,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4f8);
  }
  lVar46 = *(long *)puVar41;
  *(long *)puVar42 = lVar46;
  uVar63 = *(undefined8 *)(lVar46 + 0x58);
  FUN_02a70468(lVar47,uVar59,0);
  FUN_02a70468(lVar47,0,uVar63);
  plVar48 = *(long **)(*(long *)(DAT_043ef5a0 + 0x60) + 0x68);
  if (plVar48 != (long *)0x0) {
    plVar60 = plVar48 + 10;
    do {
      cVar6 = '\x01';
      bVar43 = (bool)ExclusiveMonitorPass(plVar60,0x10);
      if (bVar43) {
        *(int *)plVar60 = (int)*plVar60 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  uVar52 = plVar48[0x27];
  if (uVar52 != 0) {
    uVar57 = uVar52 - (uVar52 >> 1 & 0x5555555555555555);
    uVar57 = (uVar57 & 0x3333333333333333) + (uVar57 >> 2 & 0x3333333333333333);
    uVar57 = (uVar57 + (uVar57 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar57 < 2) {
      uVar55 = uVar52 - 1 & 0x5e1771f463b934e6;
    }
    else {
      uVar55 = 0x5e1771f463b934e6;
      if (uVar52 < 0x5e1771f463b934e7) {
        uVar55 = 0;
        if (uVar52 != 0) {
          uVar55 = 0x5e1771f463b934e6 / uVar52;
        }
        uVar55 = 0x5e1771f463b934e6 - uVar55 * uVar52;
      }
    }
    plVar60 = *(long **)(plVar48[0x26] + uVar55 * 8);
    if ((plVar60 != (long *)0x0) && (plVar60 = (long *)*plVar60, plVar60 != (long *)0x0)) {
      if (uVar57 < 2) {
        do {
          if (plVar60[1] == 0x5e1771f463b934e6) {
            if (plVar60[2] == 0x5e1771f463b934e6) goto LAB_02c95a88;
          }
          else if ((plVar60[1] & uVar52 - 1) != uVar55) break;
          plVar60 = (long *)*plVar60;
        } while (plVar60 != (long *)0x0);
      }
      else {
        do {
          uVar57 = plVar60[1];
          if (uVar57 == 0x5e1771f463b934e6) {
            if (plVar60[2] == 0x5e1771f463b934e6) goto LAB_02c95a88;
          }
          else {
            if (uVar52 <= uVar57) {
              uVar7 = 0;
              if (uVar52 != 0) {
                uVar7 = uVar57 / uVar52;
              }
              uVar57 = uVar57 - uVar7 * uVar52;
            }
            if (uVar57 != uVar55) break;
          }
          plVar60 = (long *)*plVar60;
        } while (plVar60 != (long *)0x0);
      }
    }
  }
  plVar60 = (long *)0x0;
LAB_02c95950:
  uVar4 = *(uint *)(plVar60 + 0x14);
  lVar46 = *(long *)(param_1 + 0x58);
  uVar51 = (uint)*(ulong *)(plVar60[0x13] + 0x138);
  if (uVar4 < 3) {
    uVar51 = uVar51 & uVar4 - 1;
  }
  else {
    iVar45 = 0;
    if ((ulong)uVar4 != 0) {
      iVar45 = (int)(*(ulong *)(plVar60[0x13] + 0x138) / (ulong)uVar4);
    }
    uVar51 = uVar51 - iVar45 * uVar4;
  }
  pcVar49 = (char *)FUN_02bc0470((long)(int)uVar51,plVar60 + 0xb);
  if (*pcVar49 != '\0' && *(long *)(pcVar49 + 8) != 0) {
    FUN_00878414(*(long *)(*(long *)(*(long *)(lVar46 + 0x58) + 0x58) + 0x6140) + 0x110,
                 param_1 + 0xaa0,*(undefined4 *)(*(long *)(pcVar49 + 8) + 0x80));
  }
  lVar46 = *(long *)(DAT_043ef598 + 0x80);
  if (*(char *)(lVar46 + 8) == '\0') {
    auVar107 = FUN_02b5b7f0(lVar46,0,0);
    *(undefined1 (*) [16])(lVar46 + 8) = auVar107;
  }
  else {
    auVar107 = *(undefined1 (*) [16])(lVar46 + 8);
  }
  if (((auVar107._0_8_ & 0xff) != 0) && (auVar107._8_8_ != 0)) {
    FUN_00878414(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x58) + 0x6160) +
                 0x110,param_1 + 0xaa8,*(undefined4 *)(auVar107._8_8_ + 0x68));
  }
  if (plVar60 != (long *)0x0) {
    plVar3 = plVar60 + 10;
    do {
      iVar45 = (int)*plVar3 + -1;
      cVar6 = '\x01';
      bVar43 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar43) {
        *(int *)plVar3 = iVar45;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar45 == 0) {
      (**(code **)(*plVar60 + 0x10))(plVar60);
    }
  }
  if (plVar48 != (long *)0x0) {
    plVar60 = plVar48 + 10;
    do {
      iVar45 = (int)*plVar60 + -1;
      cVar6 = '\x01';
      bVar43 = (bool)ExclusiveMonitorPass(plVar60,0x10);
      if (bVar43) {
        *(int *)plVar60 = iVar45;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar45 == 0) {
      (**(code **)(*plVar48 + 0x10))(plVar48);
    }
  }
  *(undefined8 *)(lVar47 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar47 + 0x1fc));
  return;
LAB_02c95a88:
  plVar60 = (long *)plVar60[6];
  if (plVar60 != (long *)0x0) {
    plVar3 = plVar60 + 10;
    do {
      cVar6 = '\x01';
      bVar43 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar43) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  goto LAB_02c95950;
}


