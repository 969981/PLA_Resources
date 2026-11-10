/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01845ac4; name: FUN_01845ac4
 */


void FUN_01845ac4(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  undefined1 *puVar19;
  long *plVar20;
  long lVar21;
  byte bVar22;
  long *plVar23;
  undefined8 *puVar24;
  long lVar25;
  long *plVar26;
  undefined1 *puVar27;
  undefined1 *unaff_x27;
  undefined *puVar28;
  undefined1 *puVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 in_q3 [16];
  long local_c0;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  long *local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 uStack_80;
  long local_78;
  
  puVar28 = PTR_DAT_043794c8;
  puVar5 = PTR_DAT_043794b8;
  puVar4 = PTR_DAT_043794b0;
  uVar10 = in_q3._8_8_;
  uVar12 = in_q3._0_8_;
  fVar35 = in_q3._8_4_;
  lVar25 = *(long *)(*param_2 + 0x1a8);
  if (lVar25 == 0) {
LAB_01845afc:
    plVar20 = (long *)0x0;
    puVar28 = unaff_x27;
  }
  else {
    if (*(int *)(lVar25 + 0xc) == 0) goto LAB_01845afc;
    piVar1 = (int *)(lVar25 + 0xc);
    iVar7 = *(int *)(lVar25 + 0xc);
    do {
      puVar24 = *(undefined8 **)(lVar25 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar8 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar11;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar28 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar5 = puVar28;
        __cxa_guard_release(puVar4);
        fVar35 = (float)uVar10;
      }
      else {
        fVar35 = (float)uVar10;
      }
      unaff_x27 = puVar28;
      if (puVar24 == (undefined8 *)0x0) goto LAB_01845afc;
      while (fVar35 = (float)uVar10, puVar24 != (undefined8 *)puVar5) {
        puVar24 = (undefined8 *)*puVar24;
        plVar20 = (long *)0x0;
        if (puVar24 == (undefined8 *)0x0) goto LAB_01845b00;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar7) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar20 = (long *)0x0;
          if (*(long *)(lVar25 + 0x18) != 0) {
            plVar20 = (long *)(*(long *)(lVar25 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar20 = (long *)0x0;
      iVar7 = iVar8;
    } while (iVar8 != 0);
  }
LAB_01845b00:
  plVar23 = *(long **)(param_1 + 8);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar4 = PTR_DAT_04379528;
    if (iVar7 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar25 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar25 + 0x80)) goto LAB_01846e04;
  *(long **)(lVar25 + *(ulong *)(lVar25 + 0x80) * 8) = plVar23;
  *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x78,8);
  if (plVar9 == (long *)0x0) {
    (**(code **)(*plVar23 + 0xb8))(plVar23);
  }
  local_88 = plVar20;
  if (plVar20 != (long *)0x0) {
    lVar21 = plVar20[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_01846dec;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_98 = (long *)*param_2;
  if (local_98 == (long *)0x0) {
    FUN_0184c248(plVar9,&local_88,&local_98);
  }
  else {
    lVar21 = local_98[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_01846dec;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar10;
    }
    plVar15 = local_98;
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_0184c248(plVar9,&local_88,&local_98);
    if (plVar15 != (long *)0x0) {
      lVar21 = plVar15[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
    }
  }
  if (local_88 != (long *)0x0) {
    lVar21 = local_88[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
  plVar9[1] = (long)plVar23;
  plVar9[2] = (long)plVar9;
  plVar9[3] = 0x78;
  plVar9[4] = 8;
  *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + -1;
  if (plVar9 != (long *)0x0) {
    lVar25 = plVar9[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01846dec;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_88 = (long *)0x0;
  uStack_80 = 0;
  FUN_008802f0(&local_88,*param_2 + 0x58);
  local_98 = (long *)0x0;
  uStack_90 = 0;
  FUN_00b5f91c(&local_98,&local_88);
  plVar23 = local_88;
  if (local_88 != (long *)0x0) {
    plVar15 = local_88 + 1;
    do {
      iVar7 = (int)*plVar15 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *(int *)plVar15 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar25 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar25;
      local_78 = *plVar23;
      FUN_02a44274(lVar25 + 0xd8,&local_78);
    }
  }
  if (local_98 == (long *)0x0) {
    puVar27 = (undefined1 *)0x0;
  }
  else {
    puVar27 = (undefined1 *)*local_98;
  }
  puVar29 = *(undefined1 **)(param_1 + 0x110);
  plVar23 = (long *)(param_1 + 0x108);
  if (puVar29 == (undefined1 *)0x0) {
LAB_01845ddc:
    plVar15 = (long *)(**(code **)(**(long **)(param_1 + 0x140) + 0x10))
                                (*(long **)(param_1 + 0x140),0x20,8);
    if (plVar15 == (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x140) + 0xb8))();
    }
    uVar10 = *(undefined8 *)(param_1 + 0x140);
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar4 = PTR_DAT_04379528;
      if (iVar7 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar25 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (lVar25 != 0) {
      if (0xf < *(ulong *)(lVar25 + 0x80)) goto LAB_01846e04;
      *(undefined8 *)(lVar25 + *(ulong *)(lVar25 + 0x80) * 8) = uVar10;
      *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + 1;
    }
    plVar15[2] = (long)puVar27;
    plVar15[3] = (long)plVar9;
    if (plVar9 != (long *)0x0) {
      lVar21 = plVar9[0xb];
      if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_01846dec;
      if (*(long *)(lVar21 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
        *(undefined8 *)(lVar21 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lVar25 != 0) {
      *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + -1;
    }
    *plVar15 = 0;
    plVar15[1] = (long)puVar27;
    fVar30 = (float)(*(long *)(param_1 + 0x160) + 1);
    if ((puVar29 == (undefined1 *)0x0) || (*(float *)(param_1 + 0x168) * (float)puVar29 < fVar30)) {
      uVar14 = (ulong)(puVar29 < (undefined1 *)0x3 || ((ulong)puVar29 & (ulong)(puVar29 + -1)) != 0)
               | (long)puVar29 << 1;
      uVar18 = (ulong)(fVar30 / *(float *)(param_1 + 0x168));
      if (uVar18 <= uVar14) {
        uVar18 = uVar14;
      }
      if (uVar18 - 1 == 0) {
        uVar18 = 2;
      }
      else if ((uVar18 & uVar18 - 1) != 0) {
        uVar18 = std::__next_prime(uVar18);
      }
      uVar14 = *(ulong *)(param_1 + 0x110);
      if (uVar14 < uVar18) {
LAB_018461c4:
        FUN_0184b4dc(plVar23);
      }
      else if (uVar18 < uVar14) {
        uVar13 = (ulong)((float)*(ulong *)(param_1 + 0x160) / *(float *)(param_1 + 0x168));
        if ((uVar14 < 3) ||
           (uVar16 = uVar14 - (uVar14 >> 1 & 0x5555555555555555),
           uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333),
           1 < (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar13 = std::__next_prime(uVar13);
        }
        else if (1 < uVar13) {
          uVar13 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar13 - 1) & 0x3f);
        }
        if (uVar13 <= uVar18) {
          uVar13 = uVar18;
        }
        if (uVar13 < uVar14) goto LAB_018461c4;
      }
      puVar29 = *(undefined1 **)(param_1 + 0x110);
      if (((ulong)puVar29 & (ulong)(puVar29 + -1)) == 0) {
        puVar28 = (undefined *)((ulong)(puVar29 + -1) & (ulong)puVar27);
      }
      else if (puVar27 < puVar29) {
        puVar28 = puVar27;
      }
      else {
        uVar14 = 0;
        if (puVar29 != (undefined1 *)0x0) {
          uVar14 = (ulong)puVar27 / (ulong)puVar29;
        }
        puVar28 = puVar27 + -(uVar14 * (long)puVar29);
      }
    }
    plVar26 = *(long **)(*plVar23 + (long)puVar28 * 8);
    if (plVar26 == (long *)0x0) {
      *plVar15 = *(long *)(param_1 + 0x138);
      *(long **)(param_1 + 0x138) = plVar15;
      *(long *)(*(long *)(param_1 + 0x108) + (long)puVar28 * 8) = param_1 + 0x138;
      if (*plVar15 != 0) {
        puVar27 = *(undefined1 **)(*plVar15 + 8);
        if (((ulong)puVar29 & (ulong)(puVar29 + -1)) == 0) {
          puVar27 = (undefined1 *)((ulong)puVar27 & (ulong)(puVar29 + -1));
        }
        else if (puVar29 <= puVar27) {
          uVar14 = 0;
          if (puVar29 != (undefined1 *)0x0) {
            uVar14 = (ulong)puVar27 / (ulong)puVar29;
          }
          puVar27 = puVar27 + -(uVar14 * (long)puVar29);
        }
        plVar26 = (long *)(*plVar23 + (long)puVar27 * 8);
        goto LAB_01845f1c;
      }
    }
    else {
      *plVar15 = *plVar26;
LAB_01845f1c:
      *plVar26 = (long)plVar15;
    }
    *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
  }
  else {
    uVar14 = (long)puVar29 - ((ulong)puVar29 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      puVar28 = (undefined *)((ulong)(puVar29 + -1) & (ulong)puVar27);
    }
    else {
      puVar28 = puVar27;
      if (puVar29 <= puVar27) {
        uVar18 = 0;
        if (puVar29 != (undefined1 *)0x0) {
          uVar18 = (ulong)puVar27 / (ulong)puVar29;
        }
        puVar28 = puVar27 + -(uVar18 * (long)puVar29);
      }
    }
    plVar15 = *(long **)(*plVar23 + (long)puVar28 * 8);
    if (plVar15 == (long *)0x0) goto LAB_01845ddc;
    if (uVar14 < 2) {
      do {
        plVar15 = (long *)*plVar15;
        if ((plVar15 == (long *)0x0) ||
           ((undefined1 *)plVar15[1] != puVar27 &&
            (undefined1 *)((ulong)plVar15[1] & (ulong)(puVar29 + -1)) != puVar28))
        goto LAB_01845ddc;
      } while ((undefined1 *)plVar15[2] != puVar27);
    }
    else {
      do {
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) goto LAB_01845ddc;
        puVar17 = (undefined1 *)plVar15[1];
        if (puVar17 != puVar27) {
          if (puVar29 <= puVar17) {
            uVar14 = 0;
            if (puVar29 != (undefined1 *)0x0) {
              uVar14 = (ulong)puVar17 / (ulong)puVar29;
            }
            puVar17 = puVar17 + -(uVar14 * (long)puVar29);
          }
          if (puVar17 != puVar28) goto LAB_01845ddc;
        }
      } while ((undefined1 *)plVar15[2] != puVar27);
    }
  }
  plVar23 = local_98;
  if (local_98 != (long *)0x0) {
    plVar15 = local_98 + 1;
    do {
      iVar7 = (int)*plVar15 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *(int *)plVar15 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      local_98[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar25 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar25;
      local_88 = (long *)*plVar23;
      FUN_02a44274(lVar25 + 0xd8,&local_88);
    }
  }
  lVar25 = *param_2;
  plVar15 = (long *)(param_1 + 0x68);
  (**(code **)(*plVar15 + 0x20))(&local_88,plVar15);
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  FUN_01800100(&local_b0,&local_88);
  plVar23 = local_88;
  if (local_88 != (long *)0x0) {
    plVar26 = local_88 + 1;
    do {
      iVar7 = (int)*plVar26 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *(int *)plVar26 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar21 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar21;
      local_98 = (long *)*plVar23;
      FUN_02a44274(lVar21 + 0xd8,&local_98);
    }
  }
  local_a0 = plVar15;
  FUN_0095aa3c(lVar25 + 0x368,&local_b0);
  puVar24 = local_b0;
  *(long **)(lVar25 + 0x378) = local_a0;
  if (local_b0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_b0 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_b0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar25 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar25;
      local_88 = (long *)*puVar24;
      FUN_02a44274(lVar25 + 0xd8,&local_88);
    }
  }
  lVar25 = *param_2;
  puVar27 = *(undefined1 **)(lVar25 + 0x1f0);
  if (puVar27 != &DAT_cbf29ce484222645) {
    puVar29 = *(undefined1 **)(param_1 + 0xa8);
    if (puVar29 == (undefined1 *)0x0) {
      bVar22 = 1;
    }
    else {
      uVar14 = (long)puVar29 - ((ulong)puVar29 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar18 = 0;
      if (puVar29 != (undefined1 *)0x0) {
        uVar18 = (ulong)puVar27 / (ulong)puVar29;
      }
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        puVar17 = (undefined1 *)((ulong)(puVar29 + -1) & (ulong)puVar27);
      }
      else {
        puVar17 = puVar27;
        if (puVar29 <= puVar27) {
          puVar17 = puVar27 + -(uVar18 * (long)puVar29);
        }
      }
      plVar23 = *(long **)(*(long *)(param_1 + 0xa0) + (long)puVar17 * 8);
      if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
        if (uVar14 < 2) {
          do {
            if ((undefined1 *)plVar23[1] == puVar27) {
              if ((undefined1 *)plVar23[2] == puVar27) goto LAB_018464b8;
            }
            else if ((undefined1 *)((ulong)plVar23[1] & (ulong)(puVar29 + -1)) != puVar17) break;
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
        else {
          do {
            puVar19 = (undefined1 *)plVar23[1];
            if (puVar19 == puVar27) {
              if ((undefined1 *)plVar23[2] == puVar27) goto LAB_018464b8;
            }
            else {
              if (puVar29 <= puVar19) {
                uVar13 = 0;
                if (puVar29 != (undefined1 *)0x0) {
                  uVar13 = (ulong)puVar19 / (ulong)puVar29;
                }
                puVar19 = puVar19 + -(uVar13 * (long)puVar29);
              }
              if (puVar19 != puVar17) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
      }
      if (uVar14 < 2) {
        puVar28 = (undefined *)((ulong)(puVar29 + -1) & (ulong)puVar27);
      }
      else {
        puVar28 = puVar27;
        if (puVar29 <= puVar27) {
          puVar28 = puVar27 + -(uVar18 * (long)puVar29);
        }
      }
      plVar23 = *(long **)(*(long *)(param_1 + 0xa0) + (long)puVar28 * 8);
      if (plVar23 != (long *)0x0) {
        if (uVar14 < 2) {
          do {
            plVar23 = (long *)*plVar23;
            if ((plVar23 == (long *)0x0) ||
               ((undefined1 *)plVar23[1] != puVar27 &&
                (undefined1 *)((ulong)plVar23[1] & (ulong)(puVar29 + -1)) != puVar28))
            goto LAB_0184635c;
          } while ((undefined1 *)plVar23[2] != puVar27);
        }
        else {
          do {
            plVar23 = (long *)*plVar23;
            if (plVar23 == (long *)0x0) goto LAB_0184635c;
            puVar17 = (undefined1 *)plVar23[1];
            if (puVar17 != puVar27) {
              if (puVar29 <= puVar17) {
                uVar14 = 0;
                if (puVar29 != (undefined1 *)0x0) {
                  uVar14 = (ulong)puVar17 / (ulong)puVar29;
                }
                puVar17 = puVar17 + -(uVar14 * (long)puVar29);
              }
              if (puVar17 != puVar28) goto LAB_0184635c;
            }
          } while ((undefined1 *)plVar23[2] != puVar27);
        }
        goto LAB_018464b8;
      }
LAB_0184635c:
      bVar22 = 0;
    }
    local_c0 = param_1 + 0xa0;
    plVar23 = (long *)(**(code **)(**(long **)(param_1 + 0xd8) + 0x10))
                                (*(long **)(param_1 + 0xd8),0x20,8);
    if (plVar23 == (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xd8) + 0xb8))();
    }
    uVar10 = *(undefined8 *)(param_1 + 0xd8);
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar4 = PTR_DAT_04379528;
      if (iVar7 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar25 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (lVar25 != 0) {
      if (0xf < *(ulong *)(lVar25 + 0x80)) {
LAB_01846e04:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar25 + *(ulong *)(lVar25 + 0x80) * 8) = uVar10;
      *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + 1;
    }
    plVar23[2] = (long)puVar27;
    plVar23[3] = (long)plVar9;
    if (plVar9 != (long *)0x0) {
      lVar21 = plVar9[0xb];
      if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_01846dec;
      if (*(long *)(lVar21 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
        *(undefined8 *)(lVar21 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lVar25 != 0) {
      *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + -1;
    }
    *plVar23 = 0;
    plVar23[1] = (long)puVar27;
    fVar30 = (float)(*(long *)(param_1 + 0xf8) + 1);
    if (!(bool)(fVar30 <= *(float *)(param_1 + 0x100) * (float)puVar29 & (bVar22 ^ 1))) {
      uVar14 = (ulong)(puVar29 < (undefined1 *)0x3 || ((ulong)puVar29 & (ulong)(puVar29 + -1)) != 0)
               | (long)puVar29 << 1;
      uVar18 = (ulong)(fVar30 / *(float *)(param_1 + 0x100));
      if (uVar18 <= uVar14) {
        uVar18 = uVar14;
      }
      if (uVar18 - 1 == 0) {
        uVar18 = 2;
      }
      else if ((uVar18 & uVar18 - 1) != 0) {
        uVar18 = std::__next_prime(uVar18);
      }
      uVar14 = *(ulong *)(param_1 + 0xa8);
      if (uVar14 < uVar18) {
LAB_01846898:
        FUN_0184b938(local_c0);
      }
      else if (uVar18 < uVar14) {
        uVar13 = (ulong)((float)*(ulong *)(param_1 + 0xf8) / *(float *)(param_1 + 0x100));
        if ((uVar14 < 3) ||
           (uVar16 = uVar14 - (uVar14 >> 1 & 0x5555555555555555),
           uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333),
           1 < (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar13 = std::__next_prime(uVar13);
        }
        else if (1 < uVar13) {
          uVar13 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar13 - 1) & 0x3f);
        }
        if (uVar13 <= uVar18) {
          uVar13 = uVar18;
        }
        if (uVar13 < uVar14) goto LAB_01846898;
      }
      puVar29 = *(undefined1 **)(param_1 + 0xa8);
      if (((ulong)puVar29 & (ulong)(puVar29 + -1)) == 0) {
        puVar28 = (undefined *)((ulong)(puVar29 + -1) & (ulong)puVar27);
      }
      else if (puVar27 < puVar29) {
        puVar28 = puVar27;
      }
      else {
        uVar14 = 0;
        if (puVar29 != (undefined1 *)0x0) {
          uVar14 = (ulong)puVar27 / (ulong)puVar29;
        }
        puVar28 = puVar27 + -(uVar14 * (long)puVar29);
      }
    }
    plVar15 = *(long **)(*(long *)(param_1 + 0xa0) + (long)puVar28 * 8);
    if (plVar15 == (long *)0x0) {
      plVar15 = (long *)(param_1 + 0xd0);
      *plVar23 = *plVar15;
      *plVar15 = (long)plVar23;
      *(long **)(*(long *)(param_1 + 0xa0) + (long)puVar28 * 8) = plVar15;
      if (*plVar23 != 0) {
        puVar27 = *(undefined1 **)(*plVar23 + 8);
        if (((ulong)puVar29 & (ulong)(puVar29 + -1)) == 0) {
          puVar27 = (undefined1 *)((ulong)puVar27 & (ulong)(puVar29 + -1));
        }
        else if (puVar29 <= puVar27) {
          uVar14 = 0;
          if (puVar29 != (undefined1 *)0x0) {
            uVar14 = (ulong)puVar27 / (ulong)puVar29;
          }
          puVar27 = puVar27 + -(uVar14 * (long)puVar29);
        }
        plVar15 = (long *)(*(long *)(param_1 + 0xa0) + (long)puVar27 * 8);
        goto LAB_018464a4;
      }
    }
    else {
      *plVar23 = *plVar15;
LAB_018464a4:
      *plVar15 = (long)plVar23;
    }
    *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + 1;
    lVar25 = *param_2;
  }
LAB_018464b8:
  plVar23 = *(long **)(lVar25 + 0x208);
  if (plVar23 != (long *)0x0) {
    lVar25 = plVar23[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_01846dec;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar25 = *param_2;
  }
  FUN_009c69bc(&local_88,lVar25);
  (**(code **)(*local_88 + 0x40))();
  fVar31 = *(float *)(lVar25 + 0x3b8);
  fVar32 = *(float *)(lVar25 + 0x3bc);
  uVar10 = uVar12;
  fVar30 = fVar35;
  if (local_88 != (long *)0x0) {
    lVar25 = local_88[0xb];
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
  lVar25 = *param_2;
  FUN_009c69bc(&local_88,lVar25);
  (**(code **)(*local_88 + 0x40))();
  fVar33 = *(float *)(lVar25 + 0x3b8);
  fVar34 = *(float *)(lVar25 + 0x3bc);
  if (local_88 == (long *)0x0) {
LAB_0184659c:
    lVar25 = *(long *)(param_1 + 0x230);
  }
  else {
    lVar25 = local_88[0xb];
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 != 0) goto LAB_0184659c;
    *(undefined8 *)(lVar25 + 0x18) = 0;
    (**(code **)(*local_88 + 0x20))();
    lVar25 = *(long *)(param_1 + 0x230);
  }
  if (plVar23 != (long *)0x0) {
    lVar21 = plVar23[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_01846dec;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar10 = CONCAT44((float)((ulong)uVar10 >> 0x20) + 0.0,(float)uVar10 + fVar33);
  plVar26 = (long *)(lVar25 + 0x68);
  (**(code **)(*plVar26 + 0x10))(plVar26);
  (**(code **)(*plVar26 + 0x10))(plVar26);
  plVar15 = (long *)plVar23[0x13];
  plVar23[0x13] = (long)plVar26;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))();
  }
  (**(code **)(*(long *)(lVar25 + 0x68) + 0x18))(uVar10,plVar26);
  lVar21 = nn::os::GetCurrentThread();
  plVar15 = (long *)(lVar25 + 0x110);
  do {
    if (*plVar15 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x104));
        while (*plVar15 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = lVar21;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0184669c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar3) {
      *plVar15 = lVar21;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0184669c:
  uVar6 = FUN_01849b04(CONCAT44((float)((ulong)uVar12 >> 0x20) - 0.0,(float)uVar12 - fVar31),
                       fVar35 - fVar32,uVar10,fVar30 + fVar34,lVar25);
  local_88 = plVar23;
  if (plVar23 == (long *)0x0) {
    FUN_01849d88(lVar25,uVar6,&local_88);
  }
  else {
    lVar21 = plVar23[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) {
LAB_01846dec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar12;
    }
    plVar15 = local_88;
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_01849d88(lVar25,uVar6,&local_88);
    if (plVar15 != (long *)0x0) {
      lVar21 = plVar15[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
    }
  }
  *(undefined8 *)(lVar25 + 0x110) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar25 + 0x104));
  if (plVar23 != (long *)0x0) {
    lVar25 = plVar23[0xb];
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  if (*(char *)(plVar9[0xe] + 0x202) == '\0') {
    FUN_015916d0(plVar9[0xe],1,1,0);
  }
  if (*(int *)(param_1 + 0x238) != 0) {
    FUN_018394e4(plVar9[0xe]);
  }
  lVar25 = *param_2;
  if (*(int *)(lVar25 + 0x220) == 1) {
    local_88 = (long *)0x0;
    uStack_80 = 0;
    FUN_008802f0(&local_88,lVar25 + 0x58);
    local_98 = (long *)0x0;
    uStack_90 = 0;
    FUN_00b5f91c(&local_98,&local_88);
    plVar15 = local_88;
    if (local_88 != (long *)0x0) {
      plVar26 = local_88 + 1;
      do {
        iVar7 = (int)*plVar26 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar3) {
          *(int *)plVar26 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar25 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar25;
        local_78 = *plVar15;
        FUN_02a44274(lVar25 + 0xd8,&local_78);
      }
    }
    FUN_00b5fc1c(param_1 + 0x240,&local_98);
    plVar15 = local_98;
    if (local_98 != (long *)0x0) {
      plVar26 = local_98 + 1;
      do {
        iVar7 = (int)*plVar26 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar3) {
          *(int *)plVar26 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        local_98[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar25 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar25;
        local_88 = (long *)*plVar15;
        FUN_02a44274(lVar25 + 0xd8,&local_88);
      }
    }
    lVar25 = *param_2;
    cVar2 = *(char *)(lVar25 + 0x200);
  }
  else {
    cVar2 = *(char *)(lVar25 + 0x200);
  }
  if (cVar2 != '\0') {
    FUN_01836814(lVar25,1);
  }
  if (plVar23 != (long *)0x0) {
    lVar25 = plVar23[0xb];
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  lVar25 = plVar9[0xb];
  piVar1 = (int *)(lVar25 + 0xc);
  do {
    iVar7 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar7 + -1 == 0) {
    *(undefined8 *)(lVar25 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (plVar20 != (long *)0x0) {
    lVar25 = plVar20[0xb];
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
  }
  return;
}


