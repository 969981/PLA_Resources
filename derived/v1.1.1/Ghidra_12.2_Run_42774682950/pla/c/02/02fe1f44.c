/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe1f44; name: FUN_02fe1f44
 */


undefined8
FUN_02fe1f44(long param_1,long param_2,short *param_3,long param_4,long param_5,int param_6,
            long *param_7,long *param_8)

{
  float *pfVar1;
  float *pfVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined1 uVar7;
  char cVar8;
  char cVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  undefined *puVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  short *psVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  float *pfVar24;
  long lVar25;
  char *pcVar26;
  ulong uVar27;
  short *psVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  int iVar31;
  long lVar32;
  int iVar33;
  ulong uVar34;
  undefined8 uVar35;
  uint *puVar36;
  ulong uVar37;
  int iVar38;
  uint *puVar39;
  long lVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong local_100;
  ulong local_90;
  int local_84;
  ulong local_80;
  undefined *local_78;
  int *local_70;
  
  puVar13 = PTR_PTR_0434a090;
  puVar36 = (uint *)((long)param_7 + 0xc);
  uVar19 = *puVar36;
  uVar12 = param_6 - (int)param_5;
  if ((int)(uVar19 & 0x3fffffff) < (int)uVar12) {
    lVar40 = *param_7;
    lVar14 = param_7[1];
    if (0x3fffffff < (int)uVar12) {
      FUN_032bd0a8(uVar12);
      uVar19 = *puVar36;
    }
    uVar19 = (uVar19 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar19) {
      uVar19 = 0x3fffffff;
    }
    uVar18 = uVar12;
    if ((int)uVar12 <= (int)uVar19) {
      uVar18 = uVar19;
    }
    lVar14 = FUN_032bd1d4(puVar13,uVar18,4,lVar40,(int)lVar14,puVar36);
    *param_7 = lVar14;
  }
  uVar19 = *(uint *)(param_7 + 1);
  if ((int)uVar19 < (int)uVar12) {
    *(uint *)(param_7 + 1) = uVar12;
    memset((void *)(*param_7 + (long)(int)uVar19 * 4),0xff,
           (ulong)((param_6 - (int)param_5) + ~uVar19) * 4 + 4);
  }
  else if ((int)uVar12 < (int)uVar19) {
    *(uint *)(param_7 + 1) = uVar12;
  }
  uVar43 = (param_2 - param_1 >> 2) * -0x5555555555555555;
  puVar39 = (uint *)((long)param_8 + 0xc);
  uVar19 = *puVar39;
  iVar20 = (int)uVar43;
  if ((int)(uVar19 & 0x3fffffff) < iVar20) {
    lVar40 = *param_8;
    lVar14 = param_8[1];
    if (0x3fffffff < iVar20) {
      FUN_032bd0a8(uVar43 & 0xffffffff);
      uVar19 = *puVar39;
    }
    uVar19 = (uVar19 & 0x3fffffff) << 1;
    uVar22 = (ulong)uVar19;
    if (0x3ffffffe < uVar19) {
      uVar22 = 0x3fffffff;
    }
    uVar27 = uVar43 & 0xffffffff;
    if (iVar20 <= (int)uVar22) {
      uVar27 = uVar22;
    }
    lVar14 = FUN_032bd1d4(puVar13,uVar27,4,lVar40,(int)lVar14,puVar39);
    *param_8 = lVar14;
  }
  uVar19 = *(uint *)(param_8 + 1);
  if ((int)uVar19 < iVar20) {
    *(int *)(param_8 + 1) = iVar20;
    memset((void *)(*param_8 + (long)(int)uVar19 * 4),0xff,(ulong)(~uVar19 + iVar20) * 4 + 4);
  }
  else if (iVar20 < (int)uVar19) {
    *(int *)(param_8 + 1) = iVar20;
  }
  uVar27 = param_4 - (long)param_3;
  psVar17 = (short *)((long)param_3 + ((long)(uVar27 * 0x40000000) >> 0x1e));
  uVar22 = (long)(uVar27 * 0x40000000) >> 0x20;
  do {
    uVar23 = uVar22;
    psVar17 = psVar17 + -2;
    if ((long)uVar23 < 1) break;
    uVar22 = uVar23 - 1;
  } while (*psVar17 == *param_3);
  iVar33 = (int)(uVar27 >> 2);
  local_100 = (uint)-iVar33 + uVar23;
  uVar22 = (long)iVar20;
  lVar14 = -((long)iVar20 << 0x20);
  pfVar24 = (float *)(param_1 + (long)iVar20 * 0xc);
  do {
    lVar40 = lVar14;
    uVar27 = uVar22;
    if ((((long)uVar27 < 2) || (pfVar24[-6] != pfVar24[-3])) || (pfVar24[-5] != pfVar24[-2])) break;
    pfVar2 = pfVar24 + -4;
    pfVar1 = pfVar24 + -1;
    uVar22 = uVar27 - 1;
    lVar14 = lVar40 + 0x100000000;
    pfVar24 = pfVar24 + -3;
  } while (*pfVar2 == *pfVar1);
  local_80 = 0x180;
  puVar15 = (undefined4 *)(**(code **)(*(long *)puVar13 + 0x10))(puVar13,0x180,&local_80);
  uVar19 = 0x3fffffff;
  if (local_80 < 0x17ffffffa) {
    uVar19 = (uint)(local_80 / 6);
  }
  uVar22 = (ulong)uVar19;
  iVar20 = (int)uVar23;
  if (iVar20 < 1) {
    iVar38 = 0;
  }
  else {
    uVar34 = 0;
    uVar41 = 0;
    do {
      puVar3 = (ushort *)(param_3 + uVar34 * 2);
      uVar19 = (uint)(byte)puVar3[1];
      if (uVar19 != 0) {
        uVar37 = 0;
        uVar19 = uVar19 - 1;
        uVar42 = uVar41;
        do {
          lVar14 = (ulong)*puVar3 + (long)(int)uVar19;
          cVar8 = *(char *)(param_5 + lVar14);
          cVar9 = *(char *)(param_5 + *puVar3 + uVar37);
          uVar19 = (uint)uVar34 & 0xffff | (uVar19 & 0xff) << 0x10 | (uint)uVar43 & 0xff000000;
          uVar43 = (ulong)uVar19;
          iVar38 = (int)uVar42;
          if (0 < iVar38) {
            lVar25 = 0;
            lVar32 = 0;
            pcVar26 = (char *)((long)puVar15 + 1);
            do {
              if (cVar9 == pcVar26[-1] && cVar8 == *pcVar26) {
                if ((int)lVar25 != 1) {
                  lVar32 = lVar32 >> 0x20;
                  puVar4 = (ushort *)(*param_7 + lVar14 * 4);
                  uVar10 = *(ushort *)((long)puVar15 + lVar32 * 6 + 2);
                  bVar6 = *(byte *)((long)puVar15 + lVar32 * 6 + 4);
                  uVar7 = *(undefined1 *)((long)puVar15 + lVar32 * 6 + 5);
                  uVar11 = param_3[(ulong)uVar10 * 2];
                  *puVar4 = uVar10;
                  *(byte *)(puVar4 + 1) = bVar6;
                  *(undefined1 *)((long)puVar4 + 3) = uVar7;
                  *(uint *)(*param_7 + ((ulong)uVar11 + (ulong)bVar6) * 4) = uVar19;
                  *(uint *)(*param_8 + (ulong)*(byte *)(param_5 + lVar14) * 4) = uVar19;
                  puVar4 = (ushort *)
                           (*param_8 + (ulong)*(byte *)(param_5 + (ulong)uVar11 + (ulong)bVar6) * 4)
                  ;
                  *puVar4 = uVar10;
                  *(byte *)(puVar4 + 1) = bVar6;
                  *(undefined1 *)((long)puVar4 + 3) = uVar7;
                  if (iVar38 + (int)lVar25 == 1) {
                    uVar41 = -lVar25;
                  }
                  else {
                    uVar41 = (long)iVar38 - 1;
                    puVar16 = (undefined4 *)((long)puVar15 + lVar32 * 6);
                    puVar29 = (undefined4 *)((long)puVar15 + uVar41 * 6);
                    uVar5 = *puVar29;
                    *(undefined2 *)(puVar16 + 1) = *(undefined2 *)(puVar29 + 1);
                    *puVar16 = uVar5;
                  }
                  goto LAB_02fe2628;
                }
                break;
              }
              lVar25 = lVar25 + -1;
              lVar32 = lVar32 + 0x100000000;
              pcVar26 = pcVar26 + 6;
            } while (uVar42 + lVar25 != 0);
          }
          uVar18 = (uint)uVar22;
          uVar12 = uVar18 & 0x3fffffff;
          uVar41 = (ulong)(iVar38 + 1U);
          puVar16 = puVar15;
          if ((int)uVar12 <= iVar38) {
            if (0x3ffffffe < iVar38) {
              FUN_032bd0a8(uVar41);
            }
            uVar21 = (uVar18 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar21) {
              uVar21 = 0x3fffffff;
            }
            uVar22 = uVar41;
            if ((int)(iVar38 + 1U) <= (int)uVar21) {
              uVar22 = (ulong)uVar21;
            }
            local_90 = uVar22 * 6;
            local_84 = (int)uVar22;
            if ((local_84 < (int)uVar12) || (0x3fffffff < local_84)) {
              local_80 = 1;
              local_70 = &local_84;
              local_78 = &DAT_0411b3b8;
              FUN_03320b50(0x65816502,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x5a,"Invalid requestedCapacity {}",&local_80);
            }
            puVar16 = (undefined4 *)
                      (**(code **)(*(long *)puVar13 + 0x10))(puVar13,local_90,&local_90);
            if (0 < iVar38) {
              puVar30 = puVar16;
              puVar29 = puVar15;
              do {
                uVar5 = *puVar29;
                uVar42 = uVar42 - 1;
                *(undefined2 *)(puVar30 + 1) = *(undefined2 *)(puVar29 + 1);
                puVar29 = (undefined4 *)((long)puVar29 + 6);
                *puVar30 = uVar5;
                puVar30 = (undefined4 *)((long)puVar30 + 6);
              } while (uVar42 != 0);
            }
            if (-1 < (int)uVar18) {
              (**(code **)(*(long *)puVar13 + 0x18))(puVar13,puVar15,(ulong)uVar12 * 6);
            }
            if (local_90 < 0x17ffffffa) {
              uVar22 = local_90 / 6;
            }
            else {
              uVar22 = 0x3fffffff;
            }
          }
          pcVar26 = (char *)((long)puVar16 + (long)iVar38 * 6);
          *pcVar26 = cVar8;
          pcVar26[1] = cVar9;
          *(uint *)(pcVar26 + 2) = uVar19;
          puVar15 = puVar16;
LAB_02fe2628:
          uVar19 = (uint)uVar37;
          uVar37 = (ulong)(uVar19 + 1);
          uVar42 = uVar41 & 0xffffffff;
        } while (uVar19 + 1 < (uint)(byte)puVar3[1]);
      }
      uVar19 = (uint)uVar22;
      uVar34 = uVar34 + 1;
      iVar38 = (int)uVar41;
      uVar41 = uVar41 & 0xffffffff;
    } while (uVar34 != (uVar23 & 0xffffffff));
  }
  iVar31 = (int)uVar27;
  if (((iVar31 == 0) || (iVar20 == 0)) || (iVar38 != 0)) {
    iVar20 = *(int *)((long)param_8 + 0xc);
    *(undefined4 *)(param_8 + 1) = 0;
    if ((-1 < iVar20) && (psVar17 = (short *)*param_8, psVar17 != (short *)0x0)) {
LAB_02fe2370:
      (**(code **)(*(long *)puVar13 + 0x18))(puVar13,psVar17,iVar20 << 2);
    }
LAB_02fe2384:
    *param_8 = 0;
    *(undefined4 *)((long)param_8 + 0xc) = 0x80000000;
    *(undefined4 *)(param_7 + 1) = 0;
    if ((-1 < *(int *)((long)param_7 + 0xc)) && (*param_7 != 0)) {
      (**(code **)(*(long *)puVar13 + 0x18))(puVar13,*param_7,*(int *)((long)param_7 + 0xc) << 2);
    }
    *param_7 = 0;
    *(undefined4 *)((long)param_7 + 0xc) = 0x80000000;
    uVar35 = 0x80040200;
  }
  else {
    if (0 < iVar31) {
      psVar17 = (short *)*param_8;
      uVar27 = uVar27 & 0xffffffff;
      psVar28 = psVar17;
      do {
        if (*psVar28 == -1) {
          iVar20 = *(int *)((long)param_8 + 0xc);
          *(undefined4 *)(param_8 + 1) = 0;
          if (iVar20 < 0) goto LAB_02fe2384;
          goto LAB_02fe2370;
        }
        uVar27 = uVar27 - 1;
        psVar28 = psVar28 + 2;
      } while (uVar27 != 0);
    }
    if (iVar20 < iVar33) {
      bVar6 = *(byte *)(param_3 + 1);
      do {
        iVar20 = (int)param_7[1];
        uVar18 = *(uint *)((long)param_7 + 0xc);
        uVar12 = iVar20 + (uint)bVar6;
        if ((int)(uVar18 & 0x3fffffff) < (int)uVar12) {
          lVar14 = *param_7;
          if (0x3fffffff < (int)uVar12) {
            FUN_032bd0a8(uVar12);
            uVar18 = *puVar36;
          }
          uVar18 = (uVar18 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar18) {
            uVar18 = 0x3fffffff;
          }
          uVar21 = uVar12;
          if ((int)uVar12 <= (int)uVar18) {
            uVar21 = uVar18;
          }
          lVar14 = FUN_032bd1d4(puVar13,uVar21,4,lVar14,iVar20,puVar36);
          *param_7 = lVar14;
        }
        else {
          lVar14 = *param_7;
        }
        *(uint *)(param_7 + 1) = uVar12;
        FUN_032c4a00(lVar14 + (long)iVar20 * 4,lVar14,(ulong)bVar6 << 2);
        iVar20 = (int)local_100;
        local_100 = (ulong)(iVar20 + 1);
      } while (iVar20 != -1);
    }
    iVar20 = (int)param_8[1];
    if (iVar31 < iVar20) {
      lVar14 = -lVar40 >> 0x20;
      do {
        *(undefined4 *)(*param_8 + lVar14 * 4) =
             *(undefined4 *)(*param_8 + (-0x100000000 - lVar40 >> 0x20) * 4);
        iVar20 = (int)param_8[1];
        lVar14 = lVar14 + 1;
      } while (lVar14 < iVar20);
    }
    if ((int)param_7[1] < (int)(*(uint *)((long)param_7 + 0xc) & 0x3fffffff)) {
      FUN_032bd3f0(puVar13,param_7,4,0,(int)param_7[1]);
      iVar20 = (int)param_8[1];
    }
    if (iVar20 < (int)(*puVar39 & 0x3fffffff)) {
      FUN_032bd3f0(puVar13,param_8,4,0);
      uVar35 = 0;
    }
    else {
      uVar35 = 0;
    }
  }
  if ((puVar15 != (undefined4 *)0x0) && (-1 < (int)uVar19)) {
    (**(code **)(*(long *)puVar13 + 0x18))(puVar13,puVar15,(ulong)(uVar19 & 0x3fffffff) * 6);
  }
  return uVar35;
}


