/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c3bd0; name: FUN_010c3bd0
 */


void FUN_010c3bd0(undefined1 param_1 [16],float param_2,long *param_3,undefined8 param_4,
                 ushort *param_5,long param_6,int param_7,undefined4 param_8)

{
  long *plVar1;
  byte bVar2;
  ushort uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ushort *puVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  ushort *puVar13;
  long lVar14;
  short *psVar15;
  uint uVar16;
  ushort *puVar17;
  ushort *puVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  long *plVar22;
  long *plVar23;
  short *psVar24;
  long lVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float local_68;
  float fStack_64;
  
  puVar5 = PTR_DAT_04379678;
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  puVar7 = PTR_DAT_04379688;
  puVar6 = PTR_DAT_04379680;
  lVar14 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar14;
  plVar23 = *(long **)(lVar14 + 0xd0);
  if (plVar23 != (long *)0x0) {
    plVar22 = plVar23 + 10;
    do {
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar9) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar14 = plVar23[0x10];
  if (*(char *)(lVar14 + 0x7c) != '\0') {
    uVar16 = (uint)*(ushort *)(lVar14 + 0x78);
    if (*(ushort *)(lVar14 + 0x78) == 0) {
      iVar10 = 0;
    }
    else {
      puVar17 = *(ushort **)(lVar14 + 0x58);
      iVar10 = 0;
      do {
        while( true ) {
          uVar3 = *param_5;
          *puVar17 = uVar3;
          if (uVar3 == 0x10) break;
          if (uVar3 == 0) goto LAB_010c3d70;
          puVar17 = puVar17 + 1;
          param_5 = param_5 + 1;
          iVar10 = iVar10 + 1;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_010c41f8;
        }
        uVar3 = param_5[1];
        uVar20 = uVar3 + 2;
        bVar9 = uVar16 < uVar20;
        uVar16 = uVar16 - uVar20;
        if (bVar9 || uVar16 == 0) {
          *puVar17 = 0;
          goto LAB_010c3d70;
        }
        uVar11 = uVar3 + 1;
        uVar19 = uVar11 & 7;
        puVar18 = puVar17 + 1;
        *puVar18 = uVar3;
        puVar8 = param_5 + 1;
        puVar13 = param_5;
        if (uVar19 != 0) {
          lVar25 = 0;
          do {
            lVar26 = lVar25;
            uVar11 = uVar11 - 1;
            uVar19 = uVar19 - 1;
            *(undefined2 *)((long)puVar17 + lVar26 + 4) =
                 *(undefined2 *)((long)param_5 + lVar26 + 4);
            lVar25 = lVar26 + 2;
          } while (uVar19 != 0);
          puVar18 = (ushort *)((long)puVar17 + lVar26 + 4);
          puVar13 = (ushort *)((long)param_5 + lVar26 + 2);
          puVar8 = puVar13 + 1;
          puVar17 = puVar18;
        }
        param_5 = puVar8;
        if (6 < uVar3) {
          puVar17 = puVar18;
          do {
            puVar17[1] = puVar13[2];
            puVar17[2] = param_5[2];
            puVar17[3] = param_5[3];
            puVar17[4] = param_5[4];
            puVar17[5] = param_5[5];
            puVar17[6] = param_5[6];
            puVar13 = param_5 + 7;
            puVar17[7] = *puVar13;
            param_5 = param_5 + 8;
            uVar11 = uVar11 - 8;
            puVar17 = puVar17 + 8;
            *puVar17 = *param_5;
          } while (uVar11 != 0);
        }
        iVar10 = uVar20 + iVar10;
      } while (uVar16 != 0);
LAB_010c41f8:
      if (iVar10 != 0) {
        iVar10 = iVar10 + -1;
        puVar17[-1] = 0;
      }
    }
LAB_010c3d70:
    *(short *)(lVar14 + 0x7a) = (short)iVar10;
    lVar14 = plVar23[0x10];
  }
  lVar25 = plVar23[0xf];
  lVar26 = plVar23[0x11];
  *(undefined4 *)(lVar25 + 0x124) = 0;
  *(undefined2 *)(lVar25 + 0x128) = 0;
  *(undefined4 *)(lVar25 + 300) = 0;
  *(undefined4 *)(lVar25 + 0x134) = 0;
  FUN_02c33414(lVar25,lVar14);
  if (*(char *)(lVar26 + 0x7c) != '\0') {
    **(undefined2 **)(lVar26 + 0x58) = 0;
    *(undefined2 *)(lVar26 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar25,lVar26,lVar14,0,0);
  plVar22 = (long *)plVar23[0x11];
  if (plVar22 != (long *)0x0) {
    plVar1 = plVar22 + 10;
    do {
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar1 = plVar23 + 10;
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *(int *)plVar1 = iVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
  }
  psVar24 = (short *)plVar22[0xb];
  plVar23 = (long *)FUN_0024eda0(param_3);
  if ((plVar23 == (long *)0x0) || (iVar10 = (**(code **)(*plVar23 + 0x48))(), iVar10 != 1)) {
    if ((param_7 == 10) || (DAT_043ba508 == param_7)) {
LAB_010c3e38:
      if (param_6 != 0) goto LAB_010c3e3c;
LAB_010c44dc:
      puVar21 = &DAT_043ba4d0;
      DAT_043ba500 = 0;
      DAT_043ba4f0 = 0;
      DAT_043ba4e8._0_4_ = 0;
    }
    else {
      if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar14 = *(long *)puVar6;
      *(long *)puVar7 = lVar14;
      plVar23 = *(long **)(lVar14 + 0xd0);
      if (plVar23 == (long *)0x0) {
        FUN_00d85604(&local_68,0,psVar24,param_7);
      }
      else {
        plVar1 = plVar23 + 10;
        do {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        FUN_00d85604(&local_68,plVar23,psVar24,param_7);
        do {
          iVar10 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = iVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
      plVar23 = (long *)CONCAT44(fStack_64,local_68);
      psVar24 = (short *)plVar23[0xb];
      if (plVar23 == (long *)0x0) goto LAB_010c3e38;
      plVar1 = plVar23 + 10;
      do {
        iVar10 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *(int *)plVar1 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != 0) goto LAB_010c3e38;
      (**(code **)(*plVar23 + 0x10))();
      if (param_6 == 0) goto LAB_010c44dc;
LAB_010c3e3c:
      puVar21 = *(undefined8 **)(param_6 + 0x58);
      puVar21[6] = 0;
      *(undefined1 *)(puVar21 + 4) = 0;
      *(int *)(puVar21 + 3) = (int)*(float *)(param_3 + 10);
    }
    *(ushort *)((long)param_3 + 0x114) =
         *(ushort *)((long)param_3 + 0x114) & 0xfffb |
         (*(ushort *)((long)param_3 + 0x114) >> 2 & 1 |
         (ushort)((undefined8 *)param_3[0x21] != puVar21)) << 2;
    if ((undefined8 *)param_3[0x21] != puVar21) {
      param_3[0x21] = (long)puVar21;
    }
    if (param_7 == 10) {
      param_7 = DAT_043ba508;
    }
    lVar14 = FUN_002443dc(param_3,&DAT_03917c20);
    lVar25 = FUN_0024eda0(param_3);
    puVar7 = PTR_DAT_0437b238;
    puVar6 = PTR_DAT_0437b230;
    puVar5 = PTR_DAT_0437b228;
    if (lVar25 == 0) {
LAB_010c3edc:
      if (lVar14 == 0) goto LAB_010c4210;
      uVar16 = *(uint *)(lVar14 + 4);
      if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b228);
      }
      *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
      iVar10 = *(int *)(lVar14 + (ulong)uVar16);
      if (iVar10 == 0x1c) {
        lVar14 = 0;
        bVar2 = *puVar5;
      }
      else if (iVar10 < 0x2a) {
        if (iVar10 != 0x20) goto LAB_010c4210;
        lVar14 = 1;
        bVar2 = *puVar5;
      }
      else if (iVar10 == 0x2a) {
LAB_010c4210:
        lVar14 = 2;
        bVar2 = *puVar5;
      }
      else if (iVar10 == 0x36) {
        lVar14 = 3;
        bVar2 = *puVar5;
      }
      else {
        if (iVar10 != 100) goto LAB_010c4210;
        lVar14 = 4;
        bVar2 = *puVar5;
      }
      if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b228);
      }
      uVar16 = (uint)lVar14;
      lVar25 = *(long *)puVar6;
      *(long *)puVar7 = lVar25;
      if (param_7 - 2U < 8) {
        lVar26 = *(long *)(&DAT_03a78c88 + (long)(int)(param_7 - 2U) * 8);
      }
      else {
        lVar26 = 0;
      }
      lVar25 = *(long *)(lVar25 + lVar26 * 0x28 + lVar14 * 8 + 0xd8);
      lVar14 = FUN_0024eda0(param_3);
      if (lVar14 == 0) {
        FUN_0024eda8(param_3,lVar25 + 0x68);
      }
    }
    else {
      plVar23 = (long *)FUN_0024eda0(param_3);
      iVar10 = (**(code **)(*plVar23 + 0x48))();
      if (iVar10 == 2) goto LAB_010c3edc;
      uVar16 = 2;
    }
    *(uint *)((long)puVar21 + 0x24) = uVar16;
    lVar14 = FUN_002443dc(param_3,&DAT_0391dd0c);
    if (lVar14 == 0) {
      lVar14 = FUN_002443dc(param_3,"g2d_fw");
      bVar2 = *puVar5;
    }
    else {
      bVar2 = *puVar5;
    }
    if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b228);
    }
    lVar25 = *(long *)puVar6;
    *(long *)puVar7 = lVar25;
    if (param_7 - 2U < 8) {
      lVar26 = *(long *)(&DAT_03a78c88 + (long)(int)(param_7 - 2U) * 8);
    }
    else {
      lVar26 = 0;
    }
    FUN_0024eda8(param_3,*(long *)(lVar25 + lVar26 * 0x28 + (ulong)uVar16 * 8 + 0xd8) + 0x68);
    if (lVar14 == 0) {
      local_68 = (float)FUN_010b7c2c(uVar16,10);
      fStack_64 = param_2;
    }
    else {
      fVar28 = *(float *)(lVar14 + (ulong)*(uint *)(lVar14 + 4));
      lVar14 = FUN_002443dc(param_3,&DAT_039134da);
      if (lVar14 == 0) {
        FUN_002443dc(param_3,"no_short");
      }
      lVar14 = FUN_0024eda0(param_3);
      if (lVar14 != 0) {
        uVar12 = FUN_0024eda0(param_3);
        iVar10 = FUN_010c4570(fVar28,psVar24,uVar12,0);
        param_2 = (float)iVar10;
        if (*(float *)(param_3 + 10) < param_2) {
          fVar27 = *(float *)(param_3 + 10) / param_2;
          param_2 = -0.05;
          fVar28 = fVar28 * fVar27 + -0.05;
        }
      }
      FUN_010b7c2c(uVar16,10);
      local_68 = fVar28;
      fStack_64 = param_2;
    }
    FUN_0024ef5c(param_3,&local_68);
    uVar20 = 0;
    psVar15 = psVar24;
    do {
      if (*psVar15 == 0x10) {
        lVar14 = (ulong)(ushort)psVar15[1] + 2;
        psVar15 = psVar15 + lVar14;
      }
      else {
        if (*psVar15 == 0) break;
        psVar15 = psVar15 + 1;
        lVar14 = 1;
      }
      uVar20 = (int)lVar14 + uVar20;
    } while (uVar20 < 0x800);
    uVar11 = FUN_0024d260(param_3);
    if ((uVar11 & 0xffff) < uVar20) {
      (**(code **)(*param_3 + 0x130))(param_3,&DAT_03a759e8,0,0);
      goto joined_r0x010c4374;
    }
    if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b228);
    }
    uVar12 = *(undefined8 *)puVar6;
    uVar20 = 0;
    *(undefined8 *)puVar7 = uVar12;
    psVar15 = psVar24;
    do {
      if (*psVar15 == 0x10) {
        lVar14 = (ulong)(ushort)psVar15[1] + 2;
        psVar15 = psVar15 + lVar14;
      }
      else {
        if (*psVar15 == 0) break;
        psVar15 = psVar15 + 1;
        lVar14 = 1;
      }
      uVar20 = (int)lVar14 + uVar20;
    } while (uVar20 < 0x800);
    FUN_010b6e2c(uVar12,psVar24,param_3,param_4,uVar20,param_7,uVar16,param_8);
    uVar16 = 0;
    psVar15 = psVar24;
    do {
      if (*psVar15 == 0x10) {
        lVar14 = (ulong)(ushort)psVar15[1] + 2;
        psVar15 = psVar15 + lVar14;
      }
      else {
        if (*psVar15 == 0) break;
        psVar15 = psVar15 + 1;
        lVar14 = 1;
      }
      uVar16 = (int)lVar14 + uVar16;
    } while (uVar16 < 0x800);
  }
  else {
    uVar16 = 0;
    psVar15 = psVar24;
    do {
      if (*psVar15 == 0x10) {
        lVar14 = (ulong)(ushort)psVar15[1] + 2;
        psVar15 = psVar15 + lVar14;
      }
      else {
        if (*psVar15 == 0) break;
        psVar15 = psVar15 + 1;
        lVar14 = 1;
      }
      uVar16 = (int)lVar14 + uVar16;
    } while (uVar16 < 0x800);
  }
  (**(code **)(*param_3 + 0x130))(param_3,psVar24,0);
joined_r0x010c4374:
  if (plVar22 != (long *)0x0) {
    plVar23 = plVar22 + 10;
    do {
      iVar10 = (int)*plVar23 + -1;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar9) {
        *(int *)plVar23 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
  }
  return;
}


