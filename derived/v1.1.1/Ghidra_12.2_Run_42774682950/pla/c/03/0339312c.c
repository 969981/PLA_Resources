/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339312c; name: FUN_0339312c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0339312c(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,int param_7)

{
  uint *puVar1;
  ushort *puVar2;
  double *******pppppppdVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  char cVar7;
  ushort uVar8;
  short sVar9;
  uint uVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  ulong *puVar24;
  double *******pppppppdVar25;
  undefined1 *puVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  undefined1 *puVar34;
  double *******pppppppdVar35;
  long lVar36;
  double *******pppppppdVar37;
  long lVar38;
  double *******pppppppdVar39;
  double *******pppppppdVar40;
  int iVar41;
  ulong uVar42;
  long lVar43;
  long lVar44;
  ulong uVar45;
  ulong uVar46;
  long *plVar47;
  undefined8 uVar48;
  long lVar49;
  long *plVar50;
  uint uVar51;
  uint uVar52;
  long *plVar53;
  ulong uVar54;
  long *plVar55;
  long lVar56;
  float fVar57;
  double ******ppppppdVar58;
  undefined1 *local_2c90;
  undefined8 local_2c88;
  undefined1 auStack_2c80 [3072];
  double *******local_2080;
  ulong local_2078;
  ulong local_2070;
  double *******local_80;
  long lStack_78;
  ulong local_70;
  
  puVar11 = PTR_PTR_0434a090;
  local_2c90 = auStack_2c80;
  local_2c88 = 0x8000004000000000;
  if (0 < param_7) {
    uVar27 = (uint)param_5;
    lVar36 = (long)(int)uVar27;
    uVar28 = (uint)param_6;
    lVar43 = (long)(int)uVar28;
    lVar29 = lVar43 * 2;
    iVar21 = 0;
    lVar38 = lVar36 * 2;
    do {
      lVar30 = (long)iVar21;
      uVar10 = param_7 - iVar21;
      uVar22 = uVar10;
      if (0x3ff < (int)uVar10) {
        uVar22 = 0x400;
      }
      iVar5 = *(int *)(param_2 + 0x10);
      if (iVar5 != 0) {
        iVar41 = 0;
        lVar17 = lVar36 * lVar30;
        uVar42 = (ulong)uVar22;
        lVar31 = uVar42 - (uVar42 & 1);
        lVar44 = lVar36 * (lVar30 + 1);
        do {
          lVar56 = *(long *)(param_2 + 8);
          lVar32 = lVar56 + (long)iVar41 * 0x38;
          if (0xc < *(byte *)(lVar32 + 8) - 1) goto switchD_033945f4_caseD_3;
          lVar49 = (long)iVar41;
          uVar54 = (ulong)*(ushort *)(lVar32 + 0xc);
          uVar8 = *(ushort *)(lVar32 + 10);
          pppppppdVar37 = (double *******)(param_3 + lVar30 * lVar36 + uVar54);
          pppppppdVar35 = (double *******)(param_4 + lVar30 * lVar43 + (ulong)uVar8);
          switch((uint)*(byte *)(lVar32 + 8)) {
          case 1:
            lVar32 = *(long *)(lVar56 + lVar49 * 0x38 + 0x20);
            uVar54 = FUN_032e35d8(lVar32);
            plVar55 = (long *)0x0;
            if ((uVar54 & 0x1f) != 2) {
              lVar32 = 0;
            }
            if ((lVar32 != 0) && (plVar55 = (long *)FUN_032e3508(lVar32), ((ulong)plVar55 & 1) != 0)
               ) {
              FUN_032e0c28((ulong)plVar55 & 0xfffffffffffffffe);
            }
            lVar56 = *(long *)(lVar56 + lVar49 * 0x38 + 0x18);
            uVar54 = FUN_032e35d8(lVar56);
            plVar53 = (long *)0x0;
            if ((uVar54 & 0x1f) != 2) {
              lVar56 = 0;
            }
            if ((lVar56 != 0) && (plVar53 = (long *)FUN_032e3508(lVar56), ((ulong)plVar53 & 1) != 0)
               ) {
              FUN_032e0c28((ulong)plVar53 & 0xfffffffffffffffe);
            }
            if ((int)uVar10 < 1) {
              uVar6 = true;
            }
            else {
              iVar16 = 0;
              do {
                local_2080 = (double *******)((ulong)local_2080 & 0xffffffffffffff00);
                plVar47 = (long *)((ulong)plVar53 & 0xfffffffffffffffe);
                (**(code **)(*plVar47 + 0x38))(plVar47,pppppppdVar35,lVar56,&local_2080);
                plVar50 = (long *)((ulong)plVar55 & 0xfffffffffffffffe);
                iVar13 = (**(code **)(*plVar50 + 0x30))
                                   (plVar50,pppppppdVar37,lVar32,(ulong)local_2080 & 0xff);
                if (iVar13 < 0) {
                  uVar6 = false;
                  goto joined_r0x033944a0;
                }
                if (((ulong)plVar55 & 1) != 0) {
                  FUN_032e0c40(plVar50);
                }
                pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                if (((ulong)plVar53 & 1) != 0) {
                  FUN_032e0c40(plVar47);
                }
                iVar16 = iVar16 + 1;
                plVar55 = plVar50;
                plVar53 = plVar47;
              } while (iVar16 < (int)uVar22);
              uVar6 = true;
            }
            goto joined_r0x033944a0;
          case 2:
            lVar32 = *(long *)(lVar56 + lVar49 * 0x38 + 0x20);
            uVar54 = FUN_032e35d8(lVar32);
            plVar55 = (long *)0x0;
            if ((uVar54 & 0x1f) != 4) {
              lVar32 = 0;
            }
            if ((lVar32 != 0) && (plVar55 = (long *)FUN_032e3508(lVar32), ((ulong)plVar55 & 1) != 0)
               ) {
              FUN_032e0c28((ulong)plVar55 & 0xfffffffffffffffe);
            }
            lVar56 = *(long *)(lVar56 + lVar49 * 0x38 + 0x18);
            uVar54 = FUN_032e35d8(lVar56);
            plVar53 = (long *)0x0;
            if ((uVar54 & 0x1f) != 4) {
              lVar56 = 0;
            }
            if ((lVar56 != 0) && (plVar53 = (long *)FUN_032e3508(lVar56), ((ulong)plVar53 & 1) != 0)
               ) {
              FUN_032e0c28((ulong)plVar53 & 0xfffffffffffffffe);
            }
            if ((int)uVar10 < 1) {
              uVar6 = true;
            }
            else {
              iVar16 = 0;
              do {
                local_2080 = (double *******)0x0;
                plVar47 = (long *)((ulong)plVar53 & 0xfffffffffffffffe);
                local_2078 = local_2078 & 0xffffffffffffff00;
                (**(code **)(*plVar47 + 0x38))(plVar47,pppppppdVar35,lVar56,&local_2080);
                plVar50 = (long *)((ulong)plVar55 & 0xfffffffffffffffe);
                iVar13 = (**(code **)(*plVar50 + 0x30))(plVar50,pppppppdVar37,lVar32,&local_2080);
                if (iVar13 < 0) {
                  uVar6 = false;
                  goto joined_r0x033944a0;
                }
                if (((ulong)plVar55 & 1) != 0) {
                  FUN_032e0c40(plVar50);
                }
                pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                if (((ulong)plVar53 & 1) != 0) {
                  FUN_032e0c40(plVar47);
                }
                iVar16 = iVar16 + 1;
                plVar55 = plVar50;
                plVar53 = plVar47;
              } while (iVar16 < (int)uVar22);
              uVar6 = true;
            }
joined_r0x033944a0:
            if (((ulong)plVar53 & 1) != 0) {
              FUN_032e0c40((ulong)plVar53 & 0xfffffffffffffffe);
            }
            if (((ulong)plVar55 & 1) != 0) {
LAB_03395134:
              FUN_032e0c40((ulong)plVar55 & 0xfffffffffffffffe);
            }
joined_r0x0339427c:
            if (!(bool)uVar6) goto LAB_03394a00;
            break;
          case 3:
            lVar32 = *(long *)(lVar56 + lVar49 * 0x38 + 0x20);
            uVar54 = FUN_032e35d8(lVar32);
            plVar55 = (long *)0x0;
            if ((uVar54 & 0x1f) != 5) {
              lVar32 = 0;
            }
            if ((lVar32 != 0) && (plVar55 = (long *)FUN_032e3508(lVar32), ((ulong)plVar55 & 1) != 0)
               ) {
              FUN_032e0c28((ulong)plVar55 & 0xfffffffffffffffe);
            }
            lVar56 = *(long *)(lVar56 + lVar49 * 0x38 + 0x18);
            uVar54 = FUN_032e35d8(lVar56);
            plVar53 = (long *)0x0;
            if ((uVar54 & 0x1f) != 5) {
              lVar56 = 0;
            }
            if ((lVar56 != 0) && (plVar53 = (long *)FUN_032e3508(lVar56), ((ulong)plVar53 & 1) != 0)
               ) {
              FUN_032e0c28((ulong)plVar53 & 0xfffffffffffffffe);
            }
            if ((int)uVar10 < 1) {
              uVar6 = true;
            }
            else {
              iVar16 = 0;
              do {
                local_2080 = (double *******)0x0;
                plVar50 = (long *)((ulong)plVar53 & 0xfffffffffffffffe);
                (**(code **)(*plVar50 + 0x38))(plVar50,pppppppdVar35,lVar56,&local_2080);
                plVar47 = (long *)((ulong)plVar55 & 0xfffffffffffffffe);
                iVar13 = (**(code **)(*plVar47 + 0x30))(local_2080,plVar47,pppppppdVar37,lVar32);
                if (iVar13 < 0) {
                  uVar6 = false;
                  goto joined_r0x03394450;
                }
                if (((ulong)plVar55 & 1) != 0) {
                  FUN_032e0c40(plVar47);
                }
                pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                if (((ulong)plVar53 & 1) != 0) {
                  FUN_032e0c40(plVar50);
                }
                iVar16 = iVar16 + 1;
                plVar53 = plVar50;
                plVar55 = plVar47;
              } while (iVar16 < (int)uVar22);
              uVar6 = true;
            }
joined_r0x03394450:
            if (((ulong)plVar53 & 1) != 0) {
              FUN_032e0c40((ulong)plVar53 & 0xfffffffffffffffe);
            }
            if (((ulong)plVar55 & 1) == 0) goto joined_r0x0339427c;
            goto LAB_03395134;
          case 4:
            uVar45 = *(ulong *)(lVar56 + lVar49 * 0x38 + 0x20);
            uVar54 = FUN_032e35d8(uVar45);
            if ((uVar54 & 0x1f) != 6) {
              uVar45 = 0;
            }
            uVar46 = 0;
            local_2080 = pppppppdVar37;
            local_2078 = uVar45;
            if (uVar45 != 0) {
              uVar46 = FUN_032e3508(uVar45);
            }
            local_2070 = uVar46;
            if ((uVar46 & 1) != 0) {
              FUN_032e0c28(uVar46 & 0xfffffffffffffffe);
            }
            lVar32 = *(long *)(lVar56 + lVar49 * 0x38 + 0x18);
            uVar54 = FUN_032e35d8(lVar32);
            if ((uVar54 & 0x1f) == 6) {
              lStack_78 = lVar32;
              if (lVar32 == 0) goto LAB_03393b68;
              local_80 = pppppppdVar35;
              local_70 = FUN_032e3508(lVar32);
              if ((local_70 & 1) != 0) {
                uVar54 = local_70 & 0xfffffffffffffffe;
                FUN_032e0c28(uVar54);
                FUN_033980f0(param_1,&local_2080,&local_80,param_5,param_6,uVar22);
                FUN_032e0c40(uVar54);
                goto joined_r0x033950ec;
              }
            }
            else {
              lStack_78 = 0;
LAB_03393b68:
              local_70 = 0;
              local_80 = pppppppdVar35;
            }
            FUN_033980f0(param_1,&local_2080,&local_80,param_5,param_6,uVar22);
            goto joined_r0x033950ec;
          case 5:
            if ((int)(local_2c88._4_4_ & 0x3fffffff) < (int)((int)local_2c88 + uVar22)) {
              local_2c90 = (undefined1 *)
                           FUN_03315ae4(puVar11,(int)local_2c88 + uVar22,local_2c90,
                                        local_2c88 & 0xffffffff,(long)&local_2c88 + 4);
            }
            uVar45 = *(ulong *)(lVar56 + lVar49 * 0x38 + 0x20);
            uVar54 = FUN_032e35d8(uVar45);
            if ((uVar54 & 0x1f) == 3) {
              if (uVar45 == 0) goto LAB_033936e4;
              uVar46 = FUN_032e3508(uVar45);
              if ((uVar46 & 1) != 0) {
                FUN_032e0c28(uVar46 & 0xfffffffffffffffe);
              }
            }
            else {
              uVar45 = 0;
LAB_033936e4:
              uVar46 = 0;
            }
            lVar32 = *(long *)(lVar56 + lVar49 * 0x38 + 0x18);
            uVar54 = FUN_032e35d8(lVar32);
            if ((uVar54 & 0x1f) == 3) {
              if (lVar32 == 0) goto LAB_03393714;
              uVar54 = FUN_032e3508(lVar32);
              if ((uVar54 & 1) != 0) {
                FUN_032e0c28(uVar54 & 0xfffffffffffffffe);
              }
            }
            else {
              lVar32 = 0;
LAB_03393714:
              uVar54 = 0;
            }
            if ((int)uVar10 < 1) {
              if ((uVar54 & 1) != 0) {
                FUN_032e0c40(uVar54 & 0xfffffffffffffffe);
              }
              if ((uVar46 & 1) != 0) {
                uVar46 = uVar46 & 0xfffffffffffffffe;
                goto LAB_033950f4;
              }
            }
            else {
              iVar16 = 0;
              do {
                if ((uVar46 & 1) != 0) {
                  FUN_032e0c28(uVar46 & 0xfffffffffffffffe);
                }
                if ((uVar54 & 1) != 0) {
                  FUN_032e0c28(uVar54 & 0xfffffffffffffffe);
                }
                iVar13 = (int)local_2c88 + 1;
                iVar20 = (int)local_2c88;
                if ((int)(local_2c88._4_4_ & 0x3fffffff) <= (int)local_2c88) {
                  local_2c90 = (undefined1 *)
                               FUN_03315ae4(puVar11,iVar13,local_2c90,local_2c88 & 0xffffffff,
                                            (long)&local_2c88 + 4);
                  iVar20 = (int)local_2c88;
                }
                puVar24 = (ulong *)(local_2c90 + (long)iVar20 * 0x30);
                puVar24[2] = uVar46;
                *puVar24 = (ulong)pppppppdVar37;
                puVar24[1] = uVar45;
                if ((uVar46 & 1) != 0) {
                  FUN_032e0c28(uVar46 & 0xfffffffffffffffe);
                }
                *(double ********)(local_2c90 + (long)iVar20 * 0x30 + 0x18) = pppppppdVar35;
                *(long *)(local_2c90 + (long)iVar20 * 0x30 + 0x20) = lVar32;
                *(ulong *)(local_2c90 + (long)iVar20 * 0x30 + 0x28) = uVar54;
                if ((uVar54 & 1) == 0) {
                  local_2c88 = CONCAT44(local_2c88._4_4_,iVar13);
                }
                else {
                  FUN_032e0c28(uVar54 & 0xfffffffffffffffe);
                  local_2c88 = CONCAT44(local_2c88._4_4_,iVar13);
                  FUN_032e0c40(uVar54 & 0xfffffffffffffffe);
                }
                uVar18 = uVar46 & 0xfffffffffffffffe;
                if ((uVar46 & 1) != 0) {
                  FUN_032e0c40(uVar18);
                  FUN_032e0c40(uVar18);
                }
                pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                if ((uVar54 & 1) != 0) {
                  FUN_032e0c40(uVar54 & 0xfffffffffffffffe);
                }
                iVar16 = iVar16 + 1;
                uVar54 = uVar54 & 0xfffffffffffffffe;
                uVar46 = uVar18;
              } while (iVar16 < (int)uVar22);
            }
            break;
          case 6:
            lVar32 = *(long *)(lVar56 + lVar49 * 0x38 + 0x20);
            if (lVar32 == 0) {
              uVar54 = 0;
            }
            else {
              uVar54 = FUN_032e3508(lVar32);
              if ((uVar54 & 1) != 0) {
                FUN_032e0c28(uVar54 & 0xfffffffffffffffe);
              }
            }
            lVar33 = *(long *)(lVar56 + lVar49 * 0x38 + 0x18);
            if (lVar33 == 0) {
              uVar45 = 0;
            }
            else {
              uVar45 = FUN_032e3508(lVar33);
              if ((uVar45 & 1) != 0) {
                FUN_032e0c28(uVar45 & 0xfffffffffffffffe);
              }
            }
            iVar16 = (**(code **)(lVar56 + lVar49 * 0x38 + 0x28))
                               (pppppppdVar37,lVar32,pppppppdVar35,lVar33,uVar22);
            if ((uVar45 & 1) != 0) {
              FUN_032e0c40(uVar45 & 0xfffffffffffffffe);
            }
            if ((uVar54 & 1) != 0) {
              FUN_032e0c40(uVar54 & 0xfffffffffffffffe);
            }
            if (iVar16 < 0) goto LAB_03394a00;
            break;
          case 7:
            lVar56 = lVar56 + lVar49 * 0x38;
            uVar48 = *(undefined8 *)(lVar56 + 0x20);
            uVar45 = FUN_032e35d8(uVar48);
            if ((uVar45 & 0x1f) != 4) {
              uVar48 = 0;
            }
            uVar45 = FUN_032e35d8(uVar48);
            uVar48 = *(undefined8 *)(lVar56 + 0x18);
            uVar46 = FUN_032e35d8(uVar48);
            if ((uVar46 & 0x1f) != 4) {
              uVar48 = 0;
            }
            uVar46 = FUN_032e35d8(uVar48);
            uVar14 = ((uint)(uVar45 >> 10) & 0x3fffff) + 7 >> 3;
            uVar18 = (ulong)uVar14;
            uVar23 = ((uint)(uVar46 >> 10) & 0x3fffff) + 7 >> 3;
            uVar19 = (ulong)uVar23;
            uVar51 = (uint)uVar46;
            iVar16 = uVar14 - uVar23;
            uVar52 = ((uint)uVar45 ^ uVar51) >> 8 & 1;
            if (iVar16 < 1) {
              if ((uVar46 & 0x100) != 0) {
                pppppppdVar35 = (double *******)((long)pppppppdVar35 + (long)-iVar16);
              }
              if (uVar52 == 0) {
                if (uVar14 == uVar27 && uVar14 == uVar28) goto LAB_03394524;
                if ((uVar14 != 0) && (0 < (int)uVar10)) {
                  uVar23 = 0;
                  do {
                    if (uVar18 - 1 < 7) {
                      lVar32 = 0;
                    }
                    else {
                      lVar32 = 0;
                      do {
                        puVar26 = (undefined1 *)((long)pppppppdVar35 + lVar32);
                        puVar34 = (undefined1 *)((long)pppppppdVar37 + lVar32);
                        lVar32 = lVar32 + 8;
                        *puVar34 = *puVar26;
                        puVar34[1] = puVar26[1];
                        puVar34[2] = puVar26[2];
                        puVar34[3] = puVar26[3];
                        puVar34[4] = puVar26[4];
                        puVar34[5] = puVar26[5];
                        puVar34[6] = puVar26[6];
                        puVar34[7] = puVar26[7];
                      } while (uVar18 - (uVar18 & 7) != lVar32);
                    }
                    if ((uVar14 & 7) != 0) {
                      uVar54 = uVar18 & 7;
                      do {
                        uVar54 = uVar54 - 1;
                        *(undefined1 *)((long)pppppppdVar37 + lVar32) =
                             *(undefined1 *)((long)pppppppdVar35 + lVar32);
                        lVar32 = lVar32 + 1;
                      } while (uVar54 != 0);
                    }
                    uVar23 = uVar23 + 1;
                    pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                    pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                  } while (uVar23 != uVar22);
                }
              }
              else if (0 < (int)uVar10) {
                switch(uVar14) {
                case 1:
                  if (uVar42 - 1 < 3) {
                    lVar32 = 0;
                  }
                  else {
                    lVar32 = 0;
                    lVar56 = param_3 + uVar54;
                    pppppppdVar37 = pppppppdVar35;
                    do {
                      *(undefined1 *)(lVar17 + lVar56) = *(undefined1 *)pppppppdVar37;
                      lVar32 = lVar32 + 4;
                      *(undefined1 *)(lVar44 + lVar56) =
                           *(undefined1 *)(lVar43 + (long)pppppppdVar37);
                      *(undefined1 *)(lVar36 * (lVar30 + 2) + lVar56) =
                           *(undefined1 *)(lVar29 + (long)pppppppdVar37);
                      puVar26 = (undefined1 *)(lVar43 * 3 + (long)pppppppdVar37);
                      pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar43 * 4);
                      *(undefined1 *)(lVar36 * (lVar30 + 3) + lVar56) = *puVar26;
                      lVar56 = lVar56 + lVar36 * 4;
                    } while (uVar42 - (uVar42 & 3) != lVar32);
                  }
                  if ((uVar22 & 3) != 0) {
                    pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43 * lVar32);
                    puVar26 = (undefined1 *)(param_3 + lVar36 * (lVar30 + lVar32) + uVar54);
                    uVar54 = uVar42 & 3;
                    do {
                      *puVar26 = *(undefined1 *)pppppppdVar35;
                      uVar54 = uVar54 - 1;
                      pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                      puVar26 = puVar26 + lVar36;
                    } while (uVar54 != 0);
                  }
                  break;
                case 2:
                  if (uVar42 == 1) {
                    lVar32 = 0;
                  }
                  else {
                    lVar32 = 0;
                    lVar56 = param_3 + uVar54;
                    pppppppdVar25 = pppppppdVar35;
                    do {
                      *(ushort *)(lVar17 + lVar56) =
                           *(ushort *)pppppppdVar25 >> 8 | *(ushort *)pppppppdVar25 << 8;
                      lVar32 = lVar32 + 2;
                      puVar2 = (ushort *)(lVar43 + (long)pppppppdVar25);
                      pppppppdVar25 = (double *******)((long)pppppppdVar25 + lVar29);
                      *(ushort *)(lVar44 + lVar56) = *puVar2 >> 8 | *puVar2 << 8;
                      lVar56 = lVar56 + lVar38;
                    } while (lVar31 != lVar32);
                  }
                  if ((uVar22 & 1) != 0) {
                    uVar8 = *(ushort *)(lVar32 * lVar43 + (long)pppppppdVar35);
                    *(ushort *)(lVar32 * lVar36 + (long)pppppppdVar37) = uVar8 >> 8 | uVar8 << 8;
                  }
                  break;
                case 4:
                  if (uVar42 == 1) {
                    lVar32 = 0;
                  }
                  else {
                    lVar32 = 0;
                    lVar56 = param_3 + uVar54;
                    pppppppdVar25 = pppppppdVar35;
                    do {
                      uVar14 = (*(uint *)pppppppdVar25 & 0xff00ff00) >> 8 |
                               (*(uint *)pppppppdVar25 & 0xff00ff) << 8;
                      lVar32 = lVar32 + 2;
                      *(uint *)(lVar17 + lVar56) = uVar14 >> 0x10 | uVar14 << 0x10;
                      puVar1 = (uint *)(lVar43 + (long)pppppppdVar25);
                      pppppppdVar25 = (double *******)((long)pppppppdVar25 + lVar29);
                      uVar14 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
                      *(uint *)(lVar44 + lVar56) = uVar14 >> 0x10 | uVar14 << 0x10;
                      lVar56 = lVar56 + lVar38;
                    } while (lVar31 != lVar32);
                  }
                  if ((uVar22 & 1) != 0) {
                    uVar14 = *(uint *)(lVar32 * lVar43 + (long)pppppppdVar35);
                    uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
                    *(uint *)(lVar32 * lVar36 + (long)pppppppdVar37) =
                         uVar14 >> 0x10 | uVar14 << 0x10;
                  }
                  break;
                case 8:
                  if (uVar42 == 1) {
                    lVar32 = 0;
                  }
                  else {
                    lVar32 = 0;
                    lVar56 = param_3 + uVar54;
                    pppppppdVar25 = pppppppdVar35;
                    do {
                      uVar54 = ((ulong)*pppppppdVar25 & 0xff00ff00ff00ff00) >> 8 |
                               ((ulong)*pppppppdVar25 & 0xff00ff00ff00ff) << 8;
                      uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar54 & 0xffff0000ffff) << 0x10;
                      lVar32 = lVar32 + 2;
                      *(ulong *)(lVar17 + lVar56) = uVar54 >> 0x20 | uVar54 << 0x20;
                      puVar24 = (ulong *)(lVar43 + (long)pppppppdVar25);
                      pppppppdVar25 = (double *******)((long)pppppppdVar25 + lVar29);
                      uVar54 = (*puVar24 & 0xff00ff00ff00ff00) >> 8 |
                               (*puVar24 & 0xff00ff00ff00ff) << 8;
                      uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar54 & 0xffff0000ffff) << 0x10;
                      *(ulong *)(lVar44 + lVar56) = uVar54 >> 0x20 | uVar54 << 0x20;
                      lVar56 = lVar56 + lVar38;
                    } while (lVar31 != lVar32);
                  }
                  if ((uVar22 & 1) != 0) {
                    ppppppdVar58 = *(double *******)(lVar32 * lVar43 + (long)pppppppdVar35);
                    uVar54 = ((ulong)ppppppdVar58 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)ppppppdVar58 & 0xff00ff00ff00ff) << 8;
                    uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar54 & 0xffff0000ffff) << 0x10;
                    *(double *******)(lVar32 * lVar36 + (long)pppppppdVar37) =
                         (double ******)(uVar54 >> 0x20 | uVar54 << 0x20);
                  }
                }
              }
            }
            else {
              bVar12 = (uVar45 & 0x100) != 0;
              lVar32 = 0;
              if (bVar12) {
                lVar32 = (long)iVar16;
              }
              uVar14 = uVar23 - 1;
              lVar56 = 1;
              if (bVar12) {
                uVar14 = uVar23;
                lVar56 = (long)-iVar16;
              }
              if (0 < (int)uVar10) {
                lVar49 = (long)(int)uVar14;
                if (uVar52 == 0) {
                  if (uVar23 == 0) {
                    uVar14 = uVar22;
                    do {
                      FUN_032c4a00(lVar32 + (long)pppppppdVar37,pppppppdVar35,0);
                      if ((uVar51 >> 9 & 1) != 0) {
                        FUN_032c4b00((char *)((long)pppppppdVar37 + lVar49) + lVar56,
                                     (int)*(char *)((long)pppppppdVar37 + lVar49) >> 0x1f & 0xff,
                                     iVar16);
                      }
                      pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                      pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                      uVar14 = uVar14 - 1;
                    } while (uVar14 != 0);
                  }
                  else {
                    uVar14 = 0;
                    do {
                      if (uVar19 - 1 < 7) {
                        lVar33 = 0;
                      }
                      else {
                        lVar33 = 0;
                        do {
                          puVar26 = (undefined1 *)((long)pppppppdVar35 + lVar33 + 3);
                          puVar34 = (undefined1 *)((long)pppppppdVar37 + lVar33 + lVar32 + 3);
                          lVar33 = lVar33 + 8;
                          puVar34[-3] = puVar26[-3];
                          puVar34[-2] = puVar26[-2];
                          puVar34[-1] = puVar26[-1];
                          *puVar34 = *puVar26;
                          puVar34[1] = puVar26[1];
                          puVar34[2] = puVar26[2];
                          puVar34[3] = puVar26[3];
                          puVar34[4] = puVar26[4];
                        } while (uVar19 - (uVar19 & 7) != lVar33);
                      }
                      if ((uVar23 & 7) != 0) {
                        puVar26 = (undefined1 *)((long)pppppppdVar37 + lVar33 + lVar32);
                        puVar34 = (undefined1 *)((long)pppppppdVar35 + lVar33);
                        uVar54 = uVar19 & 7;
                        do {
                          uVar54 = uVar54 - 1;
                          *puVar26 = *puVar34;
                          puVar26 = puVar26 + 1;
                          puVar34 = puVar34 + 1;
                        } while (uVar54 != 0);
                      }
                      if ((uVar51 >> 9 & 1) != 0) {
                        FUN_032c4b00((char *)((long)pppppppdVar37 + lVar49) + lVar56,
                                     (int)*(char *)((long)pppppppdVar37 + lVar49) >> 0x1f & 0xff,
                                     iVar16);
                      }
                      pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                      uVar14 = uVar14 + 1;
                      pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                    } while (uVar14 != uVar22);
                  }
                }
                else {
                  if (uVar23 != 1) {
                    uVar14 = uVar22;
                    if (uVar23 != 2) goto LAB_03393440;
                    do {
                      *(ushort *)((long)pppppppdVar37 + lVar32) =
                           *(ushort *)pppppppdVar35 >> 8 | *(ushort *)pppppppdVar35 << 8;
                      while( true ) {
                        if ((uVar51 >> 9 & 1) != 0) {
                          FUN_032c4b00((char *)((long)pppppppdVar37 + lVar49) + lVar56,
                                       (int)*(char *)((long)pppppppdVar37 + lVar49) >> 0x1f & 0xff,
                                       iVar16);
                        }
                        pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                        pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                        uVar14 = uVar14 - 1;
                        if (uVar14 == 0) goto switchD_033945f4_caseD_3;
                        if (uVar23 == 2) break;
LAB_03393440:
                        if (uVar23 == 4) {
                          uVar52 = (*(uint *)pppppppdVar35 & 0xff00ff00) >> 8 |
                                   (*(uint *)pppppppdVar35 & 0xff00ff) << 8;
                          *(uint *)((long)pppppppdVar37 + lVar32) = uVar52 >> 0x10 | uVar52 << 0x10;
                        }
                        else if (uVar23 == 8) {
                          uVar54 = ((ulong)*pppppppdVar35 & 0xff00ff00ff00ff00) >> 8 |
                                   ((ulong)*pppppppdVar35 & 0xff00ff00ff00ff) << 8;
                          uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar54 & 0xffff0000ffff) << 0x10;
                          *(ulong *)((long)pppppppdVar37 + lVar32) = uVar54 >> 0x20 | uVar54 << 0x20
                          ;
                        }
                      }
                    } while( true );
                  }
                  uVar14 = uVar22;
                  do {
                    *(undefined1 *)(lVar32 + (long)pppppppdVar37) = *(undefined1 *)pppppppdVar35;
                    if ((uVar51 >> 9 & 1) != 0) {
                      FUN_032c4b00((char *)((long)pppppppdVar37 + lVar49) + lVar56,
                                   (int)*(char *)((long)pppppppdVar37 + lVar49) >> 0x1f & 0xff,
                                   iVar16);
                    }
                    pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                    pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                    uVar14 = uVar14 - 1;
                  } while (uVar14 != 0);
                }
              }
            }
            break;
          case 8:
            lVar56 = lVar56 + lVar49 * 0x38;
            uVar48 = *(undefined8 *)(lVar56 + 0x20);
            uVar54 = FUN_032e35d8(uVar48);
            if ((uVar54 & 0x1f) != 5) {
              uVar48 = 0;
            }
            uVar54 = FUN_032e35d8(uVar48);
            uVar48 = *(undefined8 *)(lVar56 + 0x18);
            uVar45 = FUN_032e35d8(uVar48);
            if ((uVar45 & 0x1f) != 5) {
              uVar48 = 0;
            }
            uVar14 = FUN_032e35d8(uVar48);
            bVar12 = (uVar14 & 0x100) == 0;
            pppppppdVar25 = (double *******)&local_2080;
            if (bVar12) {
              pppppppdVar25 = pppppppdVar35;
            }
            uVar23 = 8;
            if (bVar12) {
              uVar23 = uVar28;
            }
            if ((uVar14 >> 8 & 1) != 0) {
              switch((uVar14 >> 10 & 1) + (uVar14 >> 0xb & 0x1f) + (uVar14 >> 0x10 & 0xff) + 7 >> 3)
              {
              case 1:
                pppppppdVar3 = (double *******)((long)&local_2080 + (long)(int)(uVar22 << 3));
                if (&local_2080 < pppppppdVar3) {
                  pppppppdVar40 = (double *******)&local_2080;
                  do {
                    uVar6 = *(undefined1 *)pppppppdVar35;
                    pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                    pppppppdVar39 = pppppppdVar40 + 1;
                    *(undefined1 *)pppppppdVar40 = uVar6;
                    pppppppdVar40 = pppppppdVar39;
                  } while (pppppppdVar39 < pppppppdVar3);
                }
                break;
              case 2:
                pppppppdVar3 = (double *******)((long)&local_2080 + (long)(int)(uVar22 << 3));
                if (&local_2080 < pppppppdVar3) {
                  pppppppdVar40 = (double *******)&local_2080;
                  do {
                    uVar8 = *(ushort *)pppppppdVar35;
                    pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                    pppppppdVar39 = pppppppdVar40 + 1;
                    *(ushort *)pppppppdVar40 = uVar8 >> 8 | uVar8 << 8;
                    pppppppdVar40 = pppppppdVar39;
                  } while (pppppppdVar39 < pppppppdVar3);
                }
                break;
              case 4:
                pppppppdVar3 = (double *******)((long)&local_2080 + (long)(int)(uVar22 << 3));
                if (&local_2080 < pppppppdVar3) {
                  pppppppdVar40 = (double *******)&local_2080;
                  do {
                    uVar52 = *(uint *)pppppppdVar35;
                    pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                    uVar52 = (uVar52 & 0xff00ff00) >> 8 | (uVar52 & 0xff00ff) << 8;
                    pppppppdVar39 = pppppppdVar40 + 1;
                    *(uint *)pppppppdVar40 = uVar52 >> 0x10 | uVar52 << 0x10;
                    pppppppdVar40 = pppppppdVar39;
                  } while (pppppppdVar39 < pppppppdVar3);
                }
                break;
              case 8:
                pppppppdVar3 = (double *******)((long)&local_2080 + (long)(int)(uVar22 << 3));
                if (&local_2080 < pppppppdVar3) {
                  pppppppdVar40 = (double *******)&local_2080;
                  do {
                    ppppppdVar58 = *pppppppdVar35;
                    pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                    uVar45 = ((ulong)ppppppdVar58 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)ppppppdVar58 & 0xff00ff00ff00ff) << 8;
                    uVar45 = (uVar45 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar45 & 0xffff0000ffff) << 0x10;
                    pppppppdVar39 = pppppppdVar40 + 1;
                    *pppppppdVar40 = (double ******)(uVar45 >> 0x20 | uVar45 << 0x20);
                    pppppppdVar40 = pppppppdVar39;
                  } while (pppppppdVar39 < pppppppdVar3);
                }
              }
              uVar14 = uVar14 & 0xfffffeff;
            }
            uVar52 = (uint)uVar54;
            bVar12 = (uVar54 & 0x100) == 0;
            pppppppdVar35 = (double *******)&local_2080;
            if (bVar12) {
              pppppppdVar35 = pppppppdVar37;
            }
            uVar51 = 8;
            if (bVar12) {
              uVar51 = uVar27;
            }
            uVar4 = uVar52 & 0xfffffeff;
            if (uVar14 == 0x345e05) {
              if (uVar4 == 0x345e05) {
                pppppppdVar3 = (double *******)((long)pppppppdVar35 + (long)(int)(uVar51 * uVar22));
                if (pppppppdVar35 < pppppppdVar3) {
                  do {
                    *pppppppdVar35 = *pppppppdVar25;
                    pppppppdVar35 = (double *******)((long)pppppppdVar35 + (long)(int)uVar51);
                    pppppppdVar25 = (double *******)((long)pppppppdVar25 + (long)(int)uVar23);
                  } while (pppppppdVar35 < pppppppdVar3);
                }
              }
              else if (uVar4 == 0x174605) {
                pppppppdVar3 = (double *******)((long)pppppppdVar35 + (long)(int)(uVar51 * uVar22));
                if (pppppppdVar35 < pppppppdVar3) {
                  do {
                    ppppppdVar58 = *pppppppdVar25;
                    pppppppdVar25 = (double *******)((long)pppppppdVar25 + (long)(int)uVar23);
                    *(float *)pppppppdVar35 = (float)(double)ppppppdVar58;
                    pppppppdVar35 = (double *******)((long)pppppppdVar35 + (long)(int)uVar51);
                  } while (pppppppdVar35 < pppppppdVar3);
                }
              }
              else if ((uVar4 == 0x74605) &&
                      (pppppppdVar3 = (double *******)
                                      ((long)pppppppdVar35 + (long)(int)(uVar51 * uVar22)),
                      pppppppdVar35 < pppppppdVar3)) {
                do {
                  ppppppdVar58 = *pppppppdVar25;
                  pppppppdVar25 = (double *******)((long)pppppppdVar25 + (long)(int)uVar23);
                  *(short *)pppppppdVar35 =
                       (short)((uint)((float)(double)ppppppdVar58 * 1.0039062) >> 0x10);
                  pppppppdVar35 = (double *******)((long)pppppppdVar35 + (long)(int)uVar51);
                } while (pppppppdVar35 < pppppppdVar3);
              }
            }
            else if (uVar14 == 0x174605) {
              if (uVar4 == 0x345e05) {
                pppppppdVar3 = (double *******)((long)pppppppdVar35 + (long)(int)(uVar51 * uVar22));
                if (pppppppdVar35 < pppppppdVar3) {
                  do {
                    fVar57 = *(float *)pppppppdVar25;
                    pppppppdVar25 = (double *******)((long)pppppppdVar25 + (long)(int)uVar23);
                    *pppppppdVar35 = (double ******)(double)fVar57;
                    pppppppdVar35 = (double *******)((long)pppppppdVar35 + (long)(int)uVar51);
                  } while (pppppppdVar35 < pppppppdVar3);
                }
              }
              else if (uVar4 == 0x174605) {
                pppppppdVar3 = (double *******)((long)pppppppdVar35 + (long)(int)(uVar51 * uVar22));
                if (pppppppdVar35 < pppppppdVar3) {
                  do {
                    *(uint *)pppppppdVar35 = *(uint *)pppppppdVar25;
                    pppppppdVar35 = (double *******)((long)pppppppdVar35 + (long)(int)uVar51);
                    pppppppdVar25 = (double *******)((long)pppppppdVar25 + (long)(int)uVar23);
                  } while (pppppppdVar35 < pppppppdVar3);
                }
              }
              else if ((uVar4 == 0x74605) &&
                      (pppppppdVar3 = (double *******)
                                      ((long)pppppppdVar35 + (long)(int)(uVar51 * uVar22)),
                      pppppppdVar35 < pppppppdVar3)) {
                do {
                  fVar57 = *(float *)pppppppdVar25;
                  pppppppdVar25 = (double *******)((long)pppppppdVar25 + (long)(int)uVar23);
                  *(short *)pppppppdVar35 = (short)((uint)(fVar57 * 1.0039062) >> 0x10);
                  pppppppdVar35 = (double *******)((long)pppppppdVar35 + (long)(int)uVar51);
                } while (pppppppdVar35 < pppppppdVar3);
              }
            }
            else if (uVar14 == 0x74605) {
              if (uVar4 == 0x345e05) {
                pppppppdVar3 = (double *******)((long)pppppppdVar35 + (long)(int)(uVar51 * uVar22));
                if (pppppppdVar35 < pppppppdVar3) {
                  do {
                    uVar8 = *(ushort *)pppppppdVar25;
                    pppppppdVar25 = (double *******)((long)pppppppdVar25 + (long)(int)uVar23);
                    *pppppppdVar35 = (double ******)(double)(float)((uint)uVar8 << 0x10);
                    pppppppdVar35 = (double *******)((long)pppppppdVar35 + (long)(int)uVar51);
                  } while (pppppppdVar35 < pppppppdVar3);
                }
              }
              else if (uVar4 == 0x174605) {
                pppppppdVar3 = (double *******)((long)pppppppdVar35 + (long)(int)(uVar51 * uVar22));
                if (pppppppdVar35 < pppppppdVar3) {
                  do {
                    uVar8 = *(ushort *)pppppppdVar25;
                    pppppppdVar25 = (double *******)((long)pppppppdVar25 + (long)(int)uVar23);
                    *(uint *)pppppppdVar35 = (uint)uVar8 << 0x10;
                    pppppppdVar35 = (double *******)((long)pppppppdVar35 + (long)(int)uVar51);
                  } while (pppppppdVar35 < pppppppdVar3);
                }
              }
              else if ((uVar4 == 0x74605) &&
                      (pppppppdVar3 = (double *******)
                                      ((long)pppppppdVar35 + (long)(int)(uVar51 * uVar22)),
                      pppppppdVar35 < pppppppdVar3)) {
                do {
                  *(undefined2 *)pppppppdVar35 = *(undefined2 *)pppppppdVar25;
                  pppppppdVar35 = (double *******)((long)pppppppdVar35 + (long)(int)uVar51);
                  pppppppdVar25 = (double *******)((long)pppppppdVar25 + (long)(int)uVar23);
                } while (pppppppdVar35 < pppppppdVar3);
              }
            }
            if (((uVar52 >> 8 & 1) != 0) &&
               (uVar14 = (uVar52 >> 10 & 1) + (uVar52 >> 0xb & 0x1f) +
                         ((uint)(uVar54 >> 0x10) & 0xff) + 7 >> 3, uVar14 - 1 < 8)) {
              pppppppdVar35 = (double *******)((long)pppppppdVar37 + (long)(int)(uVar22 * uVar27));
              switch(uVar14) {
              case 1:
                if (pppppppdVar37 < pppppppdVar35) {
                  pppppppdVar25 = (double *******)&local_2080;
                  do {
                    *(undefined1 *)pppppppdVar37 = *(undefined1 *)pppppppdVar25;
                    pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                    pppppppdVar25 = pppppppdVar25 + 1;
                  } while (pppppppdVar37 < pppppppdVar35);
                }
                break;
              case 2:
                if (pppppppdVar37 < pppppppdVar35) {
                  pppppppdVar25 = (double *******)&local_2080;
                  do {
                    *(ushort *)pppppppdVar37 =
                         *(ushort *)pppppppdVar25 >> 8 | *(ushort *)pppppppdVar25 << 8;
                    pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                    pppppppdVar25 = pppppppdVar25 + 1;
                  } while (pppppppdVar37 < pppppppdVar35);
                }
                break;
              case 4:
                if (pppppppdVar37 < pppppppdVar35) {
                  pppppppdVar25 = (double *******)&local_2080;
                  do {
                    uVar14 = (*(uint *)pppppppdVar25 & 0xff00ff00) >> 8 |
                             (*(uint *)pppppppdVar25 & 0xff00ff) << 8;
                    *(uint *)pppppppdVar37 = uVar14 >> 0x10 | uVar14 << 0x10;
                    pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                    pppppppdVar25 = pppppppdVar25 + 1;
                  } while (pppppppdVar37 < pppppppdVar35);
                }
                break;
              case 8:
                if (pppppppdVar37 < pppppppdVar35) {
                  pppppppdVar25 = (double *******)&local_2080;
                  do {
                    uVar54 = ((ulong)*pppppppdVar25 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)*pppppppdVar25 & 0xff00ff00ff00ff) << 8;
                    uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar54 & 0xffff0000ffff) << 0x10;
                    *pppppppdVar37 = (double ******)(uVar54 >> 0x20 | uVar54 << 0x20);
                    pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                    pppppppdVar25 = pppppppdVar25 + 1;
                  } while (pppppppdVar37 < pppppppdVar35);
                }
              }
            }
            break;
          case 9:
            lVar56 = lVar56 + lVar49 * 0x38;
            FUN_032e2120(*(undefined8 *)(lVar56 + 0x20));
            FUN_032e2120(*(undefined8 *)(lVar56 + 0x18));
            uVar48 = *(undefined8 *)(lVar56 + 0x20);
            uVar15 = FUN_032e2120(*(undefined8 *)(lVar56 + 0x18));
            iVar16 = FUN_032e2120(uVar48);
            pppppppdVar25 = (double *******)((long)pppppppdVar37 + (long)(int)(uVar22 * uVar27));
            if (pppppppdVar37 < pppppppdVar25) {
              switch(uVar15) {
              case 1:
                switch(iVar16) {
                case 1:
                  do {
                    cVar7 = *(char *)pppppppdVar35;
                    pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                    *(bool *)pppppppdVar37 = cVar7 != '\0';
                    pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                  } while (pppppppdVar37 < pppppppdVar25);
                  break;
                case 2:
                  do {
                    cVar7 = *(char *)pppppppdVar35;
                    pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                    *(ushort *)pppppppdVar37 = (ushort)(cVar7 != '\0');
                    pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                  } while (pppppppdVar37 < pppppppdVar25);
                  break;
                default:
switchD_03394340_caseD_3:
                  do {
                  } while( true );
                case 4:
                  do {
                    cVar7 = *(char *)pppppppdVar35;
                    pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                    *(uint *)pppppppdVar37 = (uint)(cVar7 != '\0');
                    pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                  } while (pppppppdVar37 < pppppppdVar25);
                  break;
                case 8:
                  do {
                    cVar7 = *(char *)pppppppdVar35;
                    pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                    *pppppppdVar37 = (double ******)(ulong)(cVar7 != '\0');
                    pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                  } while (pppppppdVar37 < pppppppdVar25);
                }
                break;
              case 2:
                switch(iVar16) {
                case 1:
                  do {
                    sVar9 = *(short *)pppppppdVar35;
                    pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                    *(bool *)pppppppdVar37 = sVar9 != 0;
                    pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                  } while (pppppppdVar37 < pppppppdVar25);
                  break;
                case 2:
                  do {
                    sVar9 = *(short *)pppppppdVar35;
                    pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                    *(ushort *)pppppppdVar37 = (ushort)(sVar9 != 0);
                    pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                  } while (pppppppdVar37 < pppppppdVar25);
                  break;
                default:
                  goto switchD_03394340_caseD_3;
                case 4:
                  do {
                    sVar9 = *(short *)pppppppdVar35;
                    pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                    *(uint *)pppppppdVar37 = (uint)(sVar9 != 0);
                    pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                  } while (pppppppdVar37 < pppppppdVar25);
                  break;
                case 8:
                  do {
                    sVar9 = *(short *)pppppppdVar35;
                    pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                    *pppppppdVar37 = (double ******)(ulong)(sVar9 != 0);
                    pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                  } while (pppppppdVar37 < pppppppdVar25);
                }
                break;
              default:
                do {
                } while( true );
              case 4:
                do {
                  if (7 < iVar16 - 1U) goto switchD_03394340_caseD_3;
                  uVar14 = *(uint *)pppppppdVar35;
                  switch(iVar16) {
                  case 1:
                    *(bool *)pppppppdVar37 = uVar14 != 0;
                    break;
                  case 2:
                    *(ushort *)pppppppdVar37 = (ushort)(uVar14 != 0);
                    break;
                  default:
                    goto switchD_03394340_caseD_3;
                  case 4:
                    *(uint *)pppppppdVar37 = (uint)(uVar14 != 0);
                    break;
                  case 8:
                    *pppppppdVar37 = (double ******)(ulong)(uVar14 != 0);
                  }
                  pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                  pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                } while (pppppppdVar37 < pppppppdVar25);
                break;
              case 8:
                do {
                  if (7 < iVar16 - 1U) goto switchD_03394340_caseD_3;
                  ppppppdVar58 = *pppppppdVar35;
                  switch(iVar16) {
                  case 1:
                    *(bool *)pppppppdVar37 = ppppppdVar58 != (double ******)0x0;
                    break;
                  case 2:
                    *(ushort *)pppppppdVar37 = (ushort)(ppppppdVar58 != (double ******)0x0);
                    break;
                  default:
                    goto switchD_03394340_caseD_3;
                  case 4:
                    *(uint *)pppppppdVar37 = (uint)(ppppppdVar58 != (double ******)0x0);
                    break;
                  case 8:
                    *pppppppdVar37 = (double ******)(ulong)(ppppppdVar58 != (double ******)0x0);
                  }
                  pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                  pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
                } while (pppppppdVar37 < pppppppdVar25);
              }
            }
            break;
          case 10:
            lVar56 = lVar56 + lVar49 * 0x38;
            FUN_032e2120(*(undefined8 *)(lVar56 + 0x20));
            FUN_032e2120(*(undefined8 *)(lVar56 + 0x18));
            lVar32 = *(long *)(lVar56 + 0x18);
            local_2078 = *(ulong *)(lVar56 + 0x20);
            uVar54 = 0;
            local_2080 = pppppppdVar37;
            if (local_2078 != 0) {
              uVar54 = FUN_032e3508();
            }
            local_2070 = uVar54;
            if ((uVar54 & 1) == 0) {
              if (lVar32 != 0) goto LAB_03395018;
LAB_03393904:
              uVar54 = 0;
              local_70 = 0;
              local_80 = pppppppdVar35;
              lStack_78 = lVar32;
            }
            else {
              FUN_032e0c28(uVar54 & 0xfffffffffffffffe);
              if (lVar32 == 0) goto LAB_03393904;
LAB_03395018:
              local_80 = pppppppdVar35;
              lStack_78 = lVar32;
              uVar54 = FUN_032e3508(lVar32);
              local_70 = uVar54;
              if ((uVar54 & 1) != 0) {
                FUN_032e0c28(uVar54 & 0xfffffffffffffffe);
              }
            }
            uVar14 = uVar22;
            if (0 < (int)uVar10) {
              do {
                while( true ) {
                  FUN_0331f800(param_1,&local_2080,&local_80);
                  uVar45 = local_2070 & 0xfffffffffffffffe;
                  local_2080 = (double *******)((long)local_2080 + lVar36);
                  uVar54 = local_2070 & 1;
                  local_2070 = uVar45;
                  if (uVar54 != 0) {
                    FUN_032e0c40();
                  }
                  uVar54 = local_70 & 0xfffffffffffffffe;
                  local_80 = (double *******)((long)local_80 + lVar43);
                  if ((local_70 & 1) != 0) break;
                  uVar14 = uVar14 - 1;
                  local_70 = uVar54;
                  if (uVar14 == 0) goto LAB_03393974;
                }
                local_70 = uVar54;
                FUN_032e0c40();
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
LAB_03393974:
              uVar54 = local_70;
            }
            if ((uVar54 & 1) != 0) {
              FUN_032e0c40(uVar54 & 0xfffffffffffffffe);
            }
            if ((local_2070 & 1) == 0) break;
            uVar46 = local_2070 & 0xfffffffffffffffe;
            goto LAB_033950f4;
          case 0xb:
            uVar45 = *(ulong *)(lVar56 + lVar49 * 0x38 + 0x20);
            uVar46 = FUN_032e35d8(uVar45);
            if ((uVar46 & 0x1f) != 8) {
              uVar45 = 0;
            }
            uVar18 = FUN_032e35d8(uVar45);
            uVar46 = 0;
            if ((uVar18 & 0x1f) != 8) {
              uVar45 = 0;
            }
            local_2080 = pppppppdVar37;
            local_2078 = uVar45;
            if (uVar45 != 0) {
              uVar46 = FUN_032e3508(uVar45);
            }
            local_2070 = uVar46;
            if ((uVar46 & 1) != 0) {
              FUN_032e0c28(uVar46 & 0xfffffffffffffffe);
            }
            lVar32 = *(long *)(lVar56 + lVar49 * 0x38 + 0x18);
            uVar19 = FUN_032e35d8(lVar32);
            uVar18 = 0;
            if ((uVar19 & 0x1f) != 8) {
              lVar32 = 0;
            }
            local_80 = pppppppdVar35;
            lStack_78 = lVar32;
            if (lVar32 != 0) {
              uVar18 = FUN_032e3508(lVar32);
            }
            local_70 = uVar18;
            if ((uVar18 & 1) != 0) {
              FUN_032e0c28(uVar18 & 0xfffffffffffffffe);
            }
            FUN_03397ff8(param_1,uVar22);
            if ((int)uVar10 < 1) {
              if ((uVar18 & 1) != 0) {
                FUN_032e0c40(uVar18 & 0xfffffffffffffffe);
              }
            }
            else {
              pppppppdVar37 = (double *******)(param_4 + lVar43 * (lVar30 + 1) + (ulong)uVar8);
              iVar16 = 0;
              pppppppdVar35 = (double *******)(param_3 + lVar44 + uVar54);
              uVar54 = uVar46;
              do {
                FUN_03398044(param_1,&local_2080,&local_80);
                uVar46 = uVar54 & 0xfffffffffffffffe;
                local_2080 = pppppppdVar35;
                local_2078 = uVar45;
                if ((uVar54 & 1) != 0) {
                  FUN_032e0c40(uVar46);
                }
                uVar19 = uVar18 & 0xfffffffffffffffe;
                local_2070 = uVar46;
                local_80 = pppppppdVar37;
                lStack_78 = lVar32;
                if ((uVar18 & 1) != 0) {
                  FUN_032e0c40(uVar19);
                }
                iVar16 = iVar16 + 1;
                pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar43);
                pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar36);
                uVar54 = uVar46;
                uVar18 = uVar19;
                local_70 = uVar19;
              } while (iVar16 < (int)uVar22);
            }
joined_r0x033950ec:
            if ((uVar46 & 1) != 0) {
              uVar46 = uVar46 & 0xfffffffffffffffe;
LAB_033950f4:
              FUN_032e0c40(uVar46);
            }
            break;
          case 0xc:
            lVar32 = *(long *)(lVar56 + lVar49 * 0x38 + 0x20);
            uVar54 = FUN_032e35d8(lVar32);
            if ((uVar54 & 0x1f) != 7) {
              lVar32 = 0;
            }
            uVar54 = FUN_032e35d8(lVar32);
            uVar45 = 0;
            if (((uVar54 & 0x1f) == 7 && lVar32 != 0) &&
               (uVar45 = FUN_032e3508(lVar32), (uVar45 & 1) != 0)) {
              FUN_032e0c28(uVar45 & 0xfffffffffffffffe);
            }
            lVar32 = *(long *)(lVar56 + lVar49 * 0x38 + 0x18);
            uVar54 = FUN_032e35d8(lVar32);
            uVar46 = 0;
            if (((lVar32 != 0) && ((uVar54 & 0x1f) == 7)) &&
               (uVar46 = FUN_032e3508(lVar32), (uVar46 & 1) != 0)) {
              FUN_032e0c28(uVar46 & 0xfffffffffffffffe);
            }
            if ((int)uVar10 < 1) {
              uVar6 = true;
            }
            else {
              uVar54 = FUN_0331fc10(&DAT_0436f1c8,"Not implemented");
              uVar6 = false;
              if ((uVar54 & 1) != 0) {
                CallSupervisor(0x26);
              }
            }
            if ((uVar46 & 1) != 0) {
              FUN_032e0c40(uVar46 & 0xfffffffffffffffe);
            }
            if ((uVar45 & 1) != 0) {
              FUN_032e0c40(uVar45 & 0xfffffffffffffffe);
            }
            goto joined_r0x0339427c;
          case 0xd:
            uVar14 = *(uint *)(lVar56 + lVar49 * 0x38 + 0x18);
            uVar54 = (ulong)uVar14;
            if (uVar14 == uVar27 && uVar14 == uVar28) {
LAB_03394524:
              FUN_032c4a00(pppppppdVar37,pppppppdVar35,uVar22 * uVar28);
            }
            else if ((0 < (int)uVar10) && (0 < (int)uVar14)) {
              uVar23 = 0;
              do {
                if (uVar54 - 1 < 7) {
                  lVar32 = 0;
                }
                else {
                  lVar32 = 0;
                  do {
                    puVar26 = (undefined1 *)((long)pppppppdVar35 + lVar32);
                    puVar34 = (undefined1 *)((long)pppppppdVar37 + lVar32);
                    lVar32 = lVar32 + 8;
                    *puVar34 = *puVar26;
                    puVar34[1] = puVar26[1];
                    puVar34[2] = puVar26[2];
                    puVar34[3] = puVar26[3];
                    puVar34[4] = puVar26[4];
                    puVar34[5] = puVar26[5];
                    puVar34[6] = puVar26[6];
                    puVar34[7] = puVar26[7];
                  } while (uVar54 - (uVar54 & 7) != lVar32);
                }
                if ((uVar14 & 7) != 0) {
                  uVar45 = uVar54 & 7;
                  do {
                    uVar45 = uVar45 - 1;
                    *(undefined1 *)((long)pppppppdVar37 + lVar32) =
                         *(undefined1 *)((long)pppppppdVar35 + lVar32);
                    lVar32 = lVar32 + 1;
                  } while (uVar45 != 0);
                }
                uVar23 = uVar23 + 1;
                pppppppdVar37 = (double *******)((long)pppppppdVar37 + lVar36);
                pppppppdVar35 = (double *******)((long)pppppppdVar35 + lVar43);
              } while (uVar23 != uVar22);
            }
          }
switchD_033945f4_caseD_3:
          iVar41 = iVar41 + 1;
        } while (iVar5 != iVar41);
      }
      iVar21 = uVar22 + iVar21;
    } while (iVar21 < param_7);
  }
  lVar29 = (long)(int)local_2c88;
  if ((int)local_2c88 != 0) {
    puVar26 = local_2c90;
    do {
      FUN_0339823c(param_1,puVar26,puVar26 + 0x18);
      puVar26 = puVar26 + 0x30;
    } while (puVar26 != local_2c90 + lVar29 * 0x30);
LAB_03394a00:
    if ((int)local_2c88 != 0) {
      lVar29 = (long)(int)local_2c88 * 0x30;
      do {
        while ((*(ulong *)(local_2c90 + lVar29 + -8) & 1) == 0) {
          uVar42 = *(ulong *)(local_2c90 + lVar29 + -0x20);
          if ((uVar42 & 1) != 0) goto LAB_03395154;
LAB_03394a58:
          lVar29 = lVar29 + -0x30;
          if (lVar29 == 0) goto LAB_03394a08;
        }
        FUN_032e0c40(*(ulong *)(local_2c90 + lVar29 + -8) & 0xfffffffffffffffe);
        uVar42 = *(ulong *)(local_2c90 + lVar29 + -0x20);
        if ((uVar42 & 1) == 0) goto LAB_03394a58;
LAB_03395154:
        FUN_032e0c40(uVar42 & 0xfffffffffffffffe);
        lVar29 = lVar29 + -0x30;
      } while (lVar29 != 0);
    }
  }
LAB_03394a08:
  uVar42 = local_2c88;
  uVar54 = (ulong)local_2c88._4_4_;
  local_2c88 = (ulong)local_2c88._4_4_ << 0x20;
  if ((-1 < (long)uVar42) && (local_2c90 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)puVar11 + 0x18))(puVar11,local_2c90,(uVar54 & 0x3fffffff) * 0x30);
  }
  return;
}


