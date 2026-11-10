/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d55928; name: FUN_00d55928
 */


void FUN_00d55928(undefined1 param_1 [16],float param_2,long *param_3,ulong param_4,uint param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int iVar6;
  byte bVar7;
  ushort uVar8;
  char cVar9;
  bool bVar10;
  long *plVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined2 uVar18;
  long *plVar19;
  long *plVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  undefined8 uVar29;
  long *plVar30;
  long lVar31;
  ulong uVar32;
  long *plVar33;
  float fVar34;
  float local_b8;
  float fStack_b4;
  long *local_a0;
  undefined8 local_98;
  long local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  
  plVar30 = (long *)param_3[0x59];
  if (plVar30 != (long *)0x0) {
    plVar3 = plVar30 + 10;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar10) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  iVar12 = (**(code **)(*param_3 + 0x180))(param_3,(int)param_3[0xdd]);
  param_3[0x2c1] = param_3[0xdd];
  param_3[0x2c2] = param_3[0xde];
  if (((param_4 & 1) == 0) || (uVar14 = FUN_00d5a978(param_3), (uVar14 & 1) != 0)) {
    bVar7 = 0;
  }
  else {
    iVar6 = (int)param_3[0xdb];
    *(int *)(param_3 + 0x2c1) = iVar6;
    iVar1 = 0;
    if (iVar6 != 2) {
      iVar1 = iVar6;
    }
    lVar15 = FUN_00d2ee28(param_3 + 0x30,&DAT_043ab7d8 + (long)iVar1 * 0x28);
    lVar15 = *(long *)(lVar15 + 0x8b0);
    puVar4 = (undefined4 *)(lVar15 + 0x20);
    if (*(int *)(lVar15 + 0x28) != 0) {
      puVar4 = (undefined4 *)(lVar15 + 0x24);
    }
    *(short *)((long)param_3 + 0x160c) =
         (short)*(undefined4 *)(lVar15 + 0x14) +
         (short)*puVar4 * (short)*(undefined4 *)(lVar15 + 0x10);
    bVar7 = 1;
  }
  *(byte *)(param_3 + 0x2c4) = bVar7 ^ 1;
  plVar3 = param_3 + (long)(int)param_3[0xdd] * 0xc + 200;
  param_3[0xde] = 0;
  param_3[0x2c2] = 0;
  if ((bool)(bVar7 ^ 1)) {
    uVar14 = FUN_00d5aa28(param_3,&local_b8,iVar12);
    uVar32 = uVar14 & 0xffffffff;
    if ((uVar14 & 1) != 0) {
      FUN_00d533f0(&local_90,uVar14,2,0);
      fVar34 = (float)FUN_0283ad10(plVar30,&local_90);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      *(float *)(param_3 + 0xde) = (local_b8 - fVar34) * 0.25;
      *(float *)((long)param_3 + 0x6f4) = (fStack_b4 - param_2) * 0.25;
    }
    if ((iVar12 == 0) &&
       (uVar13 = (uint)*(byte *)((long)param_3 + 0x6ef), *(byte *)((long)param_3 + 0x6ef) != 0)) {
      uVar21 = (uint)*(byte *)((long)param_3 + 0x6ee);
      uVar24 = 0;
      do {
        if (uVar21 == 0) {
          uVar21 = 0;
        }
        else {
          uVar14 = (ulong)(uVar24 * uVar21);
          lVar31 = param_3[uVar14 * 10 + 0xe5];
          lVar16 = *(long *)(*(long *)(param_3[(long)(int)param_3[0xdd] * 0xc + 199] + 0xa8) +
                            (ulong)((uint)*(ushort *)((long)param_3 + 0x6ec) + (int)*plVar3 * uVar24
                                   ) * 0x10);
          lVar15 = param_3[uVar14 * 10 + 0xe2];
          lVar23 = param_3[uVar14 * 10 + 0xe3];
          *(long *)(lVar16 + 0x20) = param_3[uVar14 * 10 + 0xe4];
          *(long *)(lVar16 + 0x28) = lVar31;
          *(long *)(lVar16 + 0x10) = lVar15;
          *(long *)(lVar16 + 0x18) = lVar23;
          lVar23 = param_3[uVar14 * 10 + 0xe8];
          lVar15 = param_3[uVar14 * 10 + 0xe6];
          lVar31 = param_3[uVar14 * 10 + 0xe7];
          *(int *)(lVar16 + 0x48) = (int)param_3[uVar14 * 10 + 0xe9];
          *(long *)(lVar16 + 0x38) = lVar31;
          *(long *)(lVar16 + 0x40) = lVar23;
          *(long *)(lVar16 + 0x30) = lVar15;
          *(long *)(lVar16 + 8) = param_3[uVar14 * 10 + 0xe1];
          uVar21 = (uint)*(byte *)((long)param_3 + 0x6ee);
          if (1 < uVar21) {
            uVar13 = 1;
            do {
              uVar27 = uVar13 + uVar24 * uVar21;
              uVar21 = uVar13 + (uint)*(ushort *)((long)param_3 + 0x6ec) + uVar24 * (int)*plVar3;
              uVar13 = uVar13 + 1;
              lVar16 = *(long *)(*(long *)(param_3[(long)(int)param_3[0xdd] * 0xc + 199] + 0xa8) +
                                (ulong)uVar21 * 0x10);
              uVar14 = (ulong)uVar27;
              lVar15 = param_3[uVar14 * 10 + 0xe2];
              lVar31 = param_3[uVar14 * 10 + 0xe3];
              lVar23 = param_3[uVar14 * 10 + 0xe5];
              *(long *)(lVar16 + 0x20) = param_3[uVar14 * 10 + 0xe4];
              *(long *)(lVar16 + 0x28) = lVar23;
              *(long *)(lVar16 + 0x10) = lVar15;
              *(long *)(lVar16 + 0x18) = lVar31;
              lVar23 = param_3[uVar14 * 10 + 0xe8];
              lVar15 = param_3[uVar14 * 10 + 0xe6];
              lVar31 = param_3[uVar14 * 10 + 0xe7];
              *(int *)(lVar16 + 0x48) = (int)param_3[uVar14 * 10 + 0xe9];
              *(long *)(lVar16 + 0x38) = lVar31;
              *(long *)(lVar16 + 0x40) = lVar23;
              *(long *)(lVar16 + 0x30) = lVar15;
              *(long *)(lVar16 + 8) = param_3[uVar14 * 10 + 0xe1];
              uVar21 = (uint)*(byte *)((long)param_3 + 0x6ee);
            } while (uVar13 < uVar21);
          }
          uVar13 = (uint)*(byte *)((long)param_3 + 0x6ef);
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar13);
    }
    goto LAB_00d55f60;
  }
  lVar15 = param_3[0x2c1];
  if (((int)param_3[0xdc] == 2) || (uVar14 = FUN_00d59cdc(param_3), (uVar14 & 1) == 0)) {
    uVar13 = 0;
    if (iVar12 != 0) goto LAB_00d56338;
LAB_00d55d34:
    plVar33 = param_3 + (long)(int)lVar15 * 0xc + 200;
    uVar24 = (uint)*(byte *)((long)param_3 + 0x6ef);
    if (*(ushort *)((long)param_3 + 0x6ec) < *(ushort *)((long)param_3 + 0x160c)) {
      uVar21 = uVar24;
      if (uVar24 != 0) {
        do {
          uVar21 = uVar21 - 1;
          bVar7 = *(byte *)((long)param_3 + 0x6ee);
          uVar24 = uVar24 - 1;
          uVar27 = (uint)bVar7;
          if (uVar27 != 0) {
            while( true ) {
              uVar27 = uVar27 - 1;
              if ((int)param_3[(long)(int)(uVar27 + uVar21 * bVar7) * 10 + 0xe1] != 1) {
                lVar28 = *(long *)(*(long *)(param_3[(long)(int)param_3[0x2c1] * 0xc + 199] + 0xa8)
                                  + (ulong)(uVar27 + (uint)*(ushort *)((long)param_3 + 0x160c) +
                                                     uVar21 * (int)*plVar33) * 0x10);
                lVar15 = *(long *)(*(long *)(param_3[(long)(int)param_3[0xdd] * 0xc + 199] + 0xa8) +
                                  (ulong)(uVar27 + (uint)*(ushort *)((long)param_3 + 0x6ec) +
                                                   uVar21 * (int)*plVar3) * 0x10);
                uVar17 = *(undefined8 *)(lVar28 + 0x10);
                uVar5 = *(undefined8 *)(lVar28 + 0x18);
                uVar29 = *(undefined8 *)(lVar28 + 0x28);
                *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)(lVar28 + 0x20);
                *(undefined8 *)(lVar15 + 0x28) = uVar29;
                *(undefined8 *)(lVar15 + 0x10) = uVar17;
                *(undefined8 *)(lVar15 + 0x18) = uVar5;
                uVar29 = *(undefined8 *)(lVar28 + 0x40);
                uVar17 = *(undefined8 *)(lVar28 + 0x30);
                uVar5 = *(undefined8 *)(lVar28 + 0x38);
                *(undefined4 *)(lVar15 + 0x48) = *(undefined4 *)(lVar28 + 0x48);
                *(undefined8 *)(lVar15 + 0x38) = uVar5;
                *(undefined8 *)(lVar15 + 0x40) = uVar29;
                *(undefined8 *)(lVar15 + 0x30) = uVar17;
                *(undefined8 *)(lVar15 + 8) = *(undefined8 *)(lVar28 + 8);
                lVar16 = (long)(int)(uVar27 + uVar21 * *(byte *)((long)param_3 + 0x6ee));
                *(long *)(lVar28 + 8) = param_3[lVar16 * 10 + 0xe1];
                lVar15 = param_3[lVar16 * 10 + 0xe2];
                lVar31 = param_3[lVar16 * 10 + 0xe3];
                lVar23 = param_3[lVar16 * 10 + 0xe5];
                *(long *)(lVar28 + 0x20) = param_3[lVar16 * 10 + 0xe4];
                *(long *)(lVar28 + 0x28) = lVar23;
                *(long *)(lVar28 + 0x10) = lVar15;
                *(long *)(lVar28 + 0x18) = lVar31;
                lVar23 = param_3[lVar16 * 10 + 0xe8];
                lVar15 = param_3[lVar16 * 10 + 0xe6];
                lVar31 = param_3[lVar16 * 10 + 0xe7];
                *(int *)(lVar28 + 0x48) = (int)param_3[lVar16 * 10 + 0xe9];
                *(long *)(lVar28 + 0x38) = lVar31;
                *(long *)(lVar28 + 0x40) = lVar23;
                *(long *)(lVar28 + 0x30) = lVar15;
              }
              if ((int)uVar27 < 1) break;
              bVar7 = *(byte *)((long)param_3 + 0x6ee);
            }
          }
        } while (0 < (int)uVar24);
      }
    }
    else if (*(byte *)((long)param_3 + 0x6ef) != 0) {
      uVar26 = (uint)*(byte *)((long)param_3 + 0x6ee);
      uVar21 = 0;
      uVar27 = uVar26;
      uVar25 = uVar26;
      do {
        if (uVar26 == 0) {
          uVar26 = 0;
        }
        else {
          uVar24 = uVar21 * uVar26;
          uVar26 = uVar25;
          if ((int)param_3[(ulong)uVar24 * 10 + 0xe1] != 1) {
            lVar16 = *(long *)(*(long *)(param_3[(long)(int)param_3[0x2c1] * 0xc + 199] + 0xa8) +
                              (ulong)((uint)*(ushort *)((long)param_3 + 0x160c) +
                                     (int)*plVar33 * uVar21) * 0x10);
            lVar15 = *(long *)(*(long *)(param_3[(long)(int)param_3[0xdd] * 0xc + 199] + 0xa8) +
                              (ulong)((uint)*(ushort *)((long)param_3 + 0x6ec) +
                                     (int)*plVar3 * uVar21) * 0x10);
            uVar17 = *(undefined8 *)(lVar16 + 0x10);
            uVar5 = *(undefined8 *)(lVar16 + 0x18);
            uVar29 = *(undefined8 *)(lVar16 + 0x28);
            *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)(lVar16 + 0x20);
            *(undefined8 *)(lVar15 + 0x28) = uVar29;
            *(undefined8 *)(lVar15 + 0x10) = uVar17;
            *(undefined8 *)(lVar15 + 0x18) = uVar5;
            uVar29 = *(undefined8 *)(lVar16 + 0x40);
            uVar17 = *(undefined8 *)(lVar16 + 0x30);
            uVar5 = *(undefined8 *)(lVar16 + 0x38);
            *(undefined4 *)(lVar15 + 0x48) = *(undefined4 *)(lVar16 + 0x48);
            *(undefined8 *)(lVar15 + 0x38) = uVar5;
            *(undefined8 *)(lVar15 + 0x40) = uVar29;
            *(undefined8 *)(lVar15 + 0x30) = uVar17;
            *(undefined8 *)(lVar15 + 8) = *(undefined8 *)(lVar16 + 8);
            uVar14 = (ulong)(uVar21 * *(byte *)((long)param_3 + 0x6ee));
            *(long *)(lVar16 + 8) = param_3[uVar14 * 10 + 0xe1];
            lVar15 = param_3[uVar14 * 10 + 0xe2];
            lVar31 = param_3[uVar14 * 10 + 0xe3];
            lVar23 = param_3[uVar14 * 10 + 0xe5];
            *(long *)(lVar16 + 0x20) = param_3[uVar14 * 10 + 0xe4];
            *(long *)(lVar16 + 0x28) = lVar23;
            *(long *)(lVar16 + 0x10) = lVar15;
            *(long *)(lVar16 + 0x18) = lVar31;
            lVar23 = param_3[uVar14 * 10 + 0xe8];
            lVar15 = param_3[uVar14 * 10 + 0xe6];
            lVar31 = param_3[uVar14 * 10 + 0xe7];
            *(int *)(lVar16 + 0x48) = (int)param_3[uVar14 * 10 + 0xe9];
            *(long *)(lVar16 + 0x38) = lVar31;
            *(long *)(lVar16 + 0x40) = lVar23;
            *(long *)(lVar16 + 0x30) = lVar15;
            uVar27 = (uint)*(byte *)((long)param_3 + 0x6ee);
            uVar26 = uVar27;
          }
          if (1 < uVar27) {
            uVar24 = 1;
            do {
              if ((int)param_3[(ulong)(uVar24 + uVar21 * uVar27) * 10 + 0xe1] != 1) {
                lVar15 = *(long *)(*(long *)(param_3[(long)(int)param_3[0xdd] * 0xc + 199] + 0xa8) +
                                  (ulong)(uVar24 + (uint)*(ushort *)((long)param_3 + 0x6ec) +
                                                   uVar21 * (int)*plVar3) * 0x10);
                lVar16 = *(long *)(*(long *)(param_3[(long)(int)param_3[0x2c1] * 0xc + 199] + 0xa8)
                                  + (ulong)(uVar24 + (uint)*(ushort *)((long)param_3 + 0x160c) +
                                                     uVar21 * (int)*plVar33) * 0x10);
                uVar17 = *(undefined8 *)(lVar16 + 0x10);
                uVar5 = *(undefined8 *)(lVar16 + 0x18);
                uVar29 = *(undefined8 *)(lVar16 + 0x28);
                *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)(lVar16 + 0x20);
                *(undefined8 *)(lVar15 + 0x28) = uVar29;
                *(undefined8 *)(lVar15 + 0x10) = uVar17;
                *(undefined8 *)(lVar15 + 0x18) = uVar5;
                uVar29 = *(undefined8 *)(lVar16 + 0x40);
                uVar17 = *(undefined8 *)(lVar16 + 0x30);
                uVar5 = *(undefined8 *)(lVar16 + 0x38);
                *(undefined4 *)(lVar15 + 0x48) = *(undefined4 *)(lVar16 + 0x48);
                *(undefined8 *)(lVar15 + 0x38) = uVar5;
                *(undefined8 *)(lVar15 + 0x40) = uVar29;
                *(undefined8 *)(lVar15 + 0x30) = uVar17;
                *(undefined8 *)(lVar15 + 8) = *(undefined8 *)(lVar16 + 8);
                uVar14 = (ulong)(uVar24 + uVar21 * *(byte *)((long)param_3 + 0x6ee));
                *(long *)(lVar16 + 8) = param_3[uVar14 * 10 + 0xe1];
                lVar15 = param_3[uVar14 * 10 + 0xe2];
                lVar31 = param_3[uVar14 * 10 + 0xe3];
                lVar23 = param_3[uVar14 * 10 + 0xe5];
                *(long *)(lVar16 + 0x20) = param_3[uVar14 * 10 + 0xe4];
                *(long *)(lVar16 + 0x28) = lVar23;
                *(long *)(lVar16 + 0x10) = lVar15;
                *(long *)(lVar16 + 0x18) = lVar31;
                lVar23 = param_3[uVar14 * 10 + 0xe8];
                lVar15 = param_3[uVar14 * 10 + 0xe6];
                lVar31 = param_3[uVar14 * 10 + 0xe7];
                *(int *)(lVar16 + 0x48) = (int)param_3[uVar14 * 10 + 0xe9];
                *(long *)(lVar16 + 0x38) = lVar31;
                *(long *)(lVar16 + 0x40) = lVar23;
                *(long *)(lVar16 + 0x30) = lVar15;
                uVar27 = (uint)*(byte *)((long)param_3 + 0x6ee);
                uVar26 = uVar27;
              }
              uVar24 = uVar24 + 1;
            } while (uVar24 < uVar27);
          }
          uVar24 = (uint)*(byte *)((long)param_3 + 0x6ef);
          uVar25 = uVar26;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar24);
    }
  }
  else {
    local_98 = 0;
    uVar13 = FUN_00d5aa28(param_3,&local_98,iVar12);
    iVar1 = (int)param_3[0x2c1];
    uVar8 = *(ushort *)((long)param_3 + 0x160c);
    if (iVar1 == 2) {
      iVar1 = 0;
    }
    uVar13 = uVar13 & 1;
    lVar16 = FUN_00d2ee28(param_3 + 0x30,&DAT_043ab7d8 + (long)iVar1 * 0x28);
    lVar31 = **(long **)(lVar16 + 0x838);
    lVar23 = (*(long **)(lVar16 + 0x838))[1];
    if ((lVar31 != lVar23) &&
       ((*(char *)(lVar31 + 0x20) != '\0' || (*(uint *)(lVar31 + 0x24) != (uint)uVar8)))) {
      lVar28 = lVar31 + 0x30;
      do {
        lVar22 = lVar28;
        lVar31 = lVar23;
        if (lVar23 == lVar22) break;
        lVar28 = lVar22 + 0x30;
      } while ((*(char *)(lVar22 + 0x20) != '\0') ||
              (lVar31 = lVar22, *(uint *)(lVar22 + 0x24) != (uint)uVar8));
    }
    if ((lVar31 != 0) && ((lVar23 != lVar31 && (*(int *)(lVar31 + 0x28) != -1)))) {
      FUN_00d533f0(&local_90,lVar16,(int)param_3[0x2c1]);
      fVar34 = (float)FUN_0283ad10(plVar30,&local_90);
      plVar11 = local_78;
      *(float *)(param_3 + 0x2c2) = ((float)local_98 - fVar34) * 0.25;
      *(float *)((long)param_3 + 0x1614) = (local_98._4_4_ - param_2) * 0.25;
      plVar33 = (long *)plVar30[0x29];
      lVar31 = plVar30[0x2a];
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x18))(local_78);
      }
      plVar20 = plVar33;
      if ((lVar31 != 0) && (*plVar33 != local_90)) {
        lVar23 = lVar31 * 0x30;
        plVar19 = plVar33 + lVar31 * 6;
        do {
          lVar23 = lVar23 + -0x30;
          plVar20 = plVar19;
          if (lVar23 == 0) break;
          plVar2 = plVar33 + 6;
          plVar33 = plVar33 + 6;
          plVar20 = plVar33;
        } while (*plVar2 != local_90);
      }
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
      *(byte *)(plVar20[4] + 0x58) = *(byte *)(plVar20[4] + 0x58) & 0xfe;
      lVar31 = *(long *)(*(long *)(param_3[(long)(int)param_3[0x2c1] * 0xc + 199] + 0xa8) +
                        (ulong)*(ushort *)((long)param_3 + 0x160c) * 0x10);
      FUN_00d53568(param_3,lVar31,0x2f,2);
      FUN_00d53960(param_3,2,0x2f,*(undefined4 *)(lVar31 + 0x48));
      uVar17 = FUN_00d54178(param_3,(int)param_3[0x2c1],*(undefined2 *)((long)param_3 + 0x160c),2,
                            0x2f);
      FUN_00d533f0(&local_b8,uVar17,2,0x2f);
      plVar33 = (long *)plVar30[0x29];
      lVar31 = plVar30[0x2a];
      lVar23 = CONCAT44(fStack_b4,local_b8);
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x18))(local_a0);
      }
      plVar11 = plVar33;
      if ((lVar31 != 0) && (*plVar33 != lVar23)) {
        lVar16 = lVar31 * 0x30;
        plVar20 = plVar33 + lVar31 * 6;
        do {
          lVar16 = lVar16 + -0x30;
          plVar11 = plVar20;
          if (lVar16 == 0) break;
          plVar19 = plVar33 + 6;
          plVar33 = plVar33 + 6;
          plVar11 = plVar33;
        } while (*plVar19 != lVar23);
      }
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x20))(local_a0);
      }
      *(byte *)(plVar11[4] + 0x58) = *(byte *)(plVar11[4] + 0x58) | 1;
      plVar33 = (long *)plVar30[0x29];
      lVar31 = plVar30[0x2a];
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x18))(local_a0);
      }
      plVar11 = plVar33;
      if ((lVar31 != 0) && (*plVar33 != lVar23)) {
        lVar16 = lVar31 * 0x30;
        plVar20 = plVar33 + lVar31 * 6;
        do {
          lVar16 = lVar16 + -0x30;
          plVar11 = plVar20;
          if (lVar16 == 0) break;
          plVar19 = plVar33 + 6;
          plVar33 = plVar33 + 6;
          plVar11 = plVar33;
        } while (*plVar19 != lVar23);
      }
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x20))(local_a0);
      }
      lVar31 = plVar11[4];
      *(float *)(lVar31 + 0x30) = fVar34;
      *(float *)(lVar31 + 0x34) = param_2;
      *(undefined4 *)(lVar31 + 0x38) = 0;
      *(byte *)(lVar31 + 0x58) = *(byte *)(lVar31 + 0x58) | 0x10;
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x20))(local_a0);
      }
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      uVar13 = 1;
    }
    if (iVar12 == 0) goto LAB_00d55d34;
LAB_00d56338:
    uVar24 = (uint)*(byte *)((long)param_3 + 0x6ef);
    if (*(byte *)((long)param_3 + 0x6ef) != 0) {
      uVar25 = (uint)*(byte *)((long)param_3 + 0x6ee);
      uVar21 = 0;
      uVar27 = uVar25;
      if (*(byte *)((long)param_3 + 0x6ee) != 0) goto LAB_00d5637c;
      do {
        uVar25 = 0;
        while( true ) {
          uVar21 = uVar21 + 1;
          if (uVar24 <= uVar21) goto LAB_00d55f58;
          if (uVar25 == 0) break;
LAB_00d5637c:
          uVar24 = 0;
          do {
            iVar12 = uVar21 * uVar25;
            uVar25 = uVar27;
            if ((int)param_3[(ulong)(uVar24 + iVar12) * 10 + 0xe1] != 1) {
              uVar27 = uVar24 + uVar21 * uVar27;
              lVar31 = *(long *)(*(long *)(param_3[(long)(int)param_3[0x2c1] * 0xc + 199] + 0xa8) +
                                (ulong)(uVar24 + (uint)*(ushort *)((long)param_3 + 0x160c) +
                                                 uVar21 * (int)param_3[(long)(int)lVar15 * 0xc + 200
                                                                      ]) * 0x10);
              lVar23 = param_3[(ulong)uVar27 * 10 + 0xe3];
              lVar16 = param_3[(ulong)uVar27 * 10 + 0xe5];
              lVar28 = param_3[(ulong)uVar27 * 10 + 0xe2];
              *(long *)(lVar31 + 0x20) = param_3[(ulong)uVar27 * 10 + 0xe4];
              *(long *)(lVar31 + 0x28) = lVar16;
              *(long *)(lVar31 + 0x10) = lVar28;
              *(long *)(lVar31 + 0x18) = lVar23;
              lVar23 = param_3[(ulong)uVar27 * 10 + 0xe7];
              lVar16 = param_3[(ulong)uVar27 * 10 + 0xe8];
              lVar28 = param_3[(ulong)uVar27 * 10 + 0xe6];
              *(int *)(lVar31 + 0x48) = (int)param_3[(ulong)uVar27 * 10 + 0xe9];
              *(long *)(lVar31 + 0x38) = lVar23;
              *(long *)(lVar31 + 0x40) = lVar16;
              *(long *)(lVar31 + 0x30) = lVar28;
              *(long *)(lVar31 + 8) = param_3[(ulong)uVar27 * 10 + 0xe1];
              uVar25 = (uint)*(byte *)((long)param_3 + 0x6ee);
            }
            uVar24 = uVar24 + 1;
            uVar27 = uVar25;
          } while (uVar24 < uVar25);
          uVar24 = (uint)*(byte *)((long)param_3 + 0x6ef);
        }
      } while( true );
    }
  }
LAB_00d55f58:
  uVar32 = (ulong)(uVar13 != 0);
LAB_00d55f60:
  *(undefined2 *)(param_3 + 0x2c3) = 0;
  uVar18 = 0;
  if ((uVar32 & 1) == 0) {
    uVar18 = 4;
  }
  *(undefined2 *)((long)param_3 + 0x161a) = uVar18;
  FUN_00d5ad24(param_3,param_5 & 1);
  *(undefined1 *)(param_3 + 0xdf) = 0;
  FUN_00d59564(param_3,0);
  local_90 = 0x16445a137decbd35;
  pcStack_88 = "anime_L_inventory_parts_00_L_cursor_inventory_00_catch";
  local_80 = 0x36;
  local_78 = (long *)0x0;
  lVar15 = 0;
  if (param_3[0x59] != 0) {
    FUN_0283b430(param_3[0x59],&local_90);
    lVar15 = param_3[0x59];
  }
  local_90 = -0x4ce4c16abc8da8bd;
  pcStack_88 = "anime_L_inventory_parts_00_L_cursor_inventory_00_release";
  local_80 = 0x38;
  local_78 = (long *)0x0;
  if (lVar15 != 0) {
    FUN_0283b1e8(lVar15,&local_90);
  }
  *(undefined4 *)((long)param_3 + 0x5ac) = 8;
  if (plVar30 != (long *)0x0) {
    plVar3 = plVar30 + 10;
    do {
      iVar12 = (int)*plVar3 + -1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar10) {
        *(int *)plVar3 = iVar12;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar30 + 0x10))(plVar30);
    }
  }
  return;
}


