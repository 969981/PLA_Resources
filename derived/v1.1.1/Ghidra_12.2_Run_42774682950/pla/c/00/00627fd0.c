/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00627fd0; name: FUN_00627fd0
 */


/* WARNING: Removing unreachable block (ram,0x00628e48) */
/* WARNING: Removing unreachable block (ram,0x00628990) */
/* WARNING: Removing unreachable block (ram,0x006291a0) */

void FUN_00627fd0(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  long *local_78;
  ulong local_70;
  
  uVar9 = (ulong)&local_90 | 1;
LAB_00628000:
  puVar10 = param_2 + -10;
  puVar19 = param_2 + -5;
  puVar16 = param_1;
LAB_0062801c:
  param_1 = puVar16;
  uVar11 = (long)param_2 - (long)param_1;
  switch(((long)uVar11 >> 3) * -0x3333333333333333) {
  case 0:
  case 1:
    goto switchD_00628f54_caseD_0;
  case 2:
    uVar9 = param_1[4];
    bVar6 = uVar9 <= param_2[-1];
    if (param_2[-1] == uVar9) {
      bVar4 = (byte)*param_1;
      uVar11 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar11 = param_1[1];
      }
      bVar5 = (byte)param_2[-5];
      uVar14 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar14 = param_2[-4];
      }
      sVar3 = uVar11;
      if (uVar14 <= uVar11) {
        sVar3 = uVar14;
      }
      if (sVar3 != 0) {
        pbVar13 = (byte *)param_2[-3];
        if ((bVar5 & 1) == 0) {
          pbVar13 = (byte *)((long)param_2 + -0x27);
        }
        pbVar12 = (byte *)param_1[2];
        if ((bVar4 & 1) == 0) {
          pbVar12 = (byte *)((long)param_1 + 1);
        }
        iVar7 = memcmp(pbVar13,pbVar12,sVar3);
        if (iVar7 != 0) {
          if (-1 < iVar7) {
            return;
          }
          goto LAB_00629050;
        }
      }
      bVar6 = uVar11 <= uVar14;
    }
    if (bVar6) {
      return;
    }
LAB_00629050:
    uStack_88 = param_1[1];
    local_90 = *param_1;
    local_78 = (long *)param_1[3];
    local_80 = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    local_70 = uVar9;
    if (((long *)param_1[3] == (long *)param_2[-2]) ||
       (uVar9 = (**(code **)(*(long *)param_1[3] + 0x20))(), (uVar9 & 1) != 0)) {
      if ((*param_1 & 1) == 0) {
        *(undefined2 *)param_1 = 0;
      }
      else {
        *(undefined1 *)param_1[2] = 0;
        param_1[1] = 0;
        if ((*param_1 & 1) != 0) {
          (**(code **)(*(long *)param_1[3] + 0x18))
                    ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
          *param_1 = 0;
        }
      }
      uVar11 = param_2[-4];
      uVar9 = *puVar19;
      param_1[2] = param_2[-3];
      param_1[1] = uVar11;
      *param_1 = uVar9;
      param_2[-4] = 0;
      param_2[-3] = 0;
      *puVar19 = 0;
    }
    else if (param_1 != puVar19) {
      uVar9 = param_2[-4];
      pbVar13 = (byte *)param_2[-3];
      if (((byte)param_2[-5] & 1) == 0) {
        pbVar13 = (byte *)((long)param_2 + -0x27);
        uVar9 = (ulong)(byte)((byte)param_2[-5] >> 1);
      }
                    /* try { // try from 00629104 to 0062910b has its CatchHandler @ 00629204 */
      FUN_02762710(param_1,pbVar13,uVar9);
    }
    param_1[4] = param_2[-1];
    if (((long *)param_2[-2] == local_78) ||
       (uVar9 = (**(code **)(*(long *)param_2[-2] + 0x20))(), (uVar9 & 1) != 0)) {
      if ((*puVar19 & 1) == 0) {
        *(undefined2 *)puVar19 = 0;
      }
      else {
        *(undefined1 *)param_2[-3] = 0;
        param_2[-4] = 0;
        if ((param_2[-5] & 1) != 0) {
          (**(code **)(*(long *)param_2[-2] + 0x18))
                    ((long *)param_2[-2],param_2[-3],param_2[-5] & 0xfffffffffffffffe,1);
          param_2[-5] = 0;
        }
      }
      param_2[-3] = local_80;
      param_2[-4] = uStack_88;
      *puVar19 = local_90;
      param_2[-1] = local_70;
      return;
    }
    if (puVar19 != &local_90) {
      uVar9 = local_90 >> 1 & 0x7f;
      uVar11 = (ulong)&local_90 | 1;
      if ((local_90 & 1) != 0) {
        uVar9 = uStack_88;
        uVar11 = local_80;
      }
                    /* try { // try from 006291cc to 006291d3 has its CatchHandler @ 00629204 */
      FUN_02762710(puVar19,uVar11,uVar9);
    }
    param_2[-1] = local_70;
    if ((local_90 & 1) == 0) {
      return;
    }
    (**(code **)(*local_78 + 0x18))(local_78,local_80,local_90 & 0xfffffffffffffffe,1);
    return;
  case 3:
    FUN_00629290(param_1,param_1 + 5,puVar19,param_3);
    return;
  case 4:
    FUN_00629dd0(param_1,param_1 + 5,param_1 + 10,puVar19,param_3);
    return;
  case 5:
    FUN_0062a510(param_1,param_1 + 5,param_1 + 10,param_1 + 0xf,puVar19,param_3);
    return;
  default:
    if ((long)uVar11 < 0x118) {
      FUN_0062aea0(param_1,param_2,param_3);
      return;
    }
    uVar14 = uVar11 / 0x50;
    puVar16 = param_1 + uVar14 * 5;
    if ((long)uVar11 < 0x9c19) {
      iVar7 = FUN_00629290(param_1,puVar16,puVar19,param_3);
    }
    else {
      iVar7 = FUN_0062a510(param_1,param_1 + (uVar11 / 0xa0) * 5,puVar16,
                           puVar16 + (uVar11 / 0xa0) * 5,puVar19,param_3);
    }
    uVar11 = param_1[4];
    uVar20 = param_1[uVar14 * 5 + 4];
    if (uVar11 == uVar20) {
      bVar4 = (byte)*puVar16;
      uVar2 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar2 = param_1[uVar14 * 5 + 1];
      }
      bVar5 = (byte)*param_1;
      uVar1 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar1 = param_1[1];
      }
      sVar3 = uVar2;
      if (uVar1 <= uVar2) {
        sVar3 = uVar1;
      }
      if (sVar3 != 0) {
        pbVar13 = (byte *)param_1[2];
        if ((bVar5 & 1) == 0) {
          pbVar13 = (byte *)((long)param_1 + 1);
        }
        pbVar12 = (byte *)param_1[uVar14 * 5 + 2];
        if ((bVar4 & 1) == 0) {
          pbVar12 = (byte *)((long)puVar16 + 1);
        }
        iVar8 = memcmp(pbVar13,pbVar12,sVar3);
        if (iVar8 != 0) {
          if (-1 < iVar8) goto LAB_006281c0;
          goto LAB_00628130;
        }
      }
      if (uVar2 <= uVar1) {
LAB_006281c0:
        if (param_1 != puVar10) {
          bVar6 = uVar20 <= param_2[-6];
          puVar17 = puVar10;
          if (param_2[-6] != uVar20) goto LAB_006281fc;
          do {
            bVar4 = (byte)*puVar16;
            uVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              uVar2 = param_1[uVar14 * 5 + 1];
            }
            bVar5 = (byte)*puVar17;
            uVar1 = (ulong)(bVar5 >> 1);
            if ((bVar5 & 1) != 0) {
              uVar1 = puVar17[1];
            }
            sVar3 = uVar2;
            if (uVar1 <= uVar2) {
              sVar3 = uVar1;
            }
            if (sVar3 == 0) {
LAB_006281f4:
              bVar6 = uVar2 <= uVar1;
              goto LAB_006281fc;
            }
            pbVar13 = (byte *)puVar17[2];
            if ((bVar5 & 1) == 0) {
              pbVar13 = (byte *)((long)puVar17 + 1);
            }
            pbVar12 = (byte *)((long)puVar16 + 1);
            if ((bVar4 & 1) != 0) {
              pbVar12 = (byte *)param_1[uVar14 * 5 + 2];
            }
            iVar8 = memcmp(pbVar13,pbVar12,sVar3);
            if (iVar8 == 0) goto LAB_006281f4;
            puVar15 = puVar17;
            if (iVar8 < 0) {
LAB_00628278:
              uStack_88 = param_1[1];
              local_90 = *param_1;
              local_78 = (long *)param_1[3];
              local_80 = param_1[2];
              *param_1 = 0;
              param_1[1] = 0;
              param_1[2] = 0;
              local_70 = uVar11;
              if (((long *)param_1[3] == (long *)puVar17[3]) ||
                 (uVar11 = (**(code **)(*(long *)param_1[3] + 0x20))(), (uVar11 & 1) != 0)) {
                if ((*param_1 & 1) == 0) {
                  *(undefined2 *)param_1 = 0;
                }
                else {
                  *(undefined1 *)param_1[2] = 0;
                  param_1[1] = 0;
                  if ((*param_1 & 1) != 0) {
                    (**(code **)(*(long *)param_1[3] + 0x18))
                              ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
                    *param_1 = 0;
                  }
                }
                uVar14 = puVar17[1];
                uVar11 = *puVar17;
                param_1[2] = puVar17[2];
                param_1[1] = uVar14;
                *param_1 = uVar11;
                puVar17[1] = 0;
                puVar17[2] = 0;
                *puVar17 = 0;
              }
              else {
                uVar11 = puVar17[1];
                pbVar13 = (byte *)puVar17[2];
                if (((byte)*puVar17 & 1) == 0) {
                  pbVar13 = (byte *)((long)puVar17 + 1);
                  uVar11 = (ulong)(byte)((byte)*puVar17 >> 1);
                }
                    /* try { // try from 00628644 to 0062864b has its CatchHandler @ 00629224 */
                FUN_02762710(param_1,pbVar13,uVar11);
              }
              param_1[4] = puVar17[4];
              if (((long *)puVar17[3] == local_78) ||
                 (uVar11 = (**(code **)(*(long *)puVar17[3] + 0x20))(), (uVar11 & 1) != 0)) {
                if ((*puVar17 & 1) == 0) {
                  *(undefined2 *)puVar17 = 0;
                }
                else {
                  *(undefined1 *)puVar17[2] = 0;
                  puVar17[1] = 0;
                  if ((*puVar17 & 1) != 0) {
                    (**(code **)(*(long *)puVar17[3] + 0x18))
                              ((long *)puVar17[3],puVar17[2],*puVar17 & 0xfffffffffffffffe,1);
                    *puVar17 = 0;
                  }
                }
                puVar17[2] = local_80;
                puVar17[1] = uStack_88;
                *puVar17 = local_90;
                uStack_88 = 0;
                local_80 = 0;
                local_90 = 0;
                puVar17[4] = local_70;
              }
              else {
                if (&local_90 != puVar17) {
                  uVar11 = local_90 >> 1 & 0x7f;
                  uVar14 = uVar9;
                  if ((local_90 & 1) != 0) {
                    uVar11 = uStack_88;
                    uVar14 = local_80;
                  }
                    /* try { // try from 00628710 to 00628717 has its CatchHandler @ 00629224 */
                  FUN_02762710(puVar17,uVar14,uVar11);
                }
                puVar17[4] = local_70;
                if ((local_90 & 1) != 0) {
                  (**(code **)(*local_78 + 0x18))(local_78,local_80,local_90 & 0xfffffffffffffffe,1)
                  ;
                }
              }
              iVar7 = iVar7 + 1;
              puVar15 = param_1 + 5;
              if (puVar17 <= puVar15) goto LAB_00628144;
              goto LAB_00628768;
            }
            while( true ) {
              puVar17 = puVar15 + -5;
              if (param_1 == puVar17) goto LAB_006282c4;
              bVar6 = uVar20 <= puVar15[-1];
              if (puVar15[-1] == uVar20) break;
LAB_006281fc:
              puVar15 = puVar17;
              if (!bVar6) goto LAB_00628278;
            }
          } while( true );
        }
LAB_006282c4:
        puVar15 = param_1 + 5;
        if (uVar11 == param_2[-1]) {
          bVar4 = (byte)param_2[-5];
          uVar14 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar14 = param_2[-4];
          }
          bVar5 = (byte)*param_1;
          uVar20 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            uVar20 = param_1[1];
          }
          sVar3 = uVar14;
          if (uVar20 <= uVar14) {
            sVar3 = uVar20;
          }
          if (sVar3 != 0) {
            pbVar13 = (byte *)param_1[2];
            if ((bVar5 & 1) == 0) {
              pbVar13 = (byte *)((long)param_1 + 1);
            }
            pbVar12 = (byte *)((long)param_2 + -0x27);
            if ((bVar4 & 1) != 0) {
              pbVar12 = (byte *)param_2[-3];
            }
            iVar7 = memcmp(pbVar13,pbVar12,sVar3);
            if (iVar7 != 0) {
              if (-1 < iVar7) goto LAB_0062834c;
              goto LAB_00628c04;
            }
          }
          if (uVar14 <= uVar20) goto LAB_0062834c;
        }
        else if (param_2[-1] <= uVar11) {
LAB_0062834c:
          if (puVar15 == puVar19) {
            return;
          }
          puVar15 = param_1 + 10;
          uVar14 = param_1[9];
          bVar6 = uVar14 <= uVar11;
          if (uVar11 != uVar14) goto LAB_00628370;
          do {
            bVar4 = (byte)puVar15[-5];
            uVar20 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              uVar20 = puVar15[-4];
            }
            bVar5 = (byte)*param_1;
            uVar2 = (ulong)(bVar5 >> 1);
            if ((bVar5 & 1) != 0) {
              uVar2 = param_1[1];
            }
            sVar3 = uVar20;
            if (uVar2 <= uVar20) {
              sVar3 = uVar2;
            }
            if (sVar3 == 0) {
LAB_0062836c:
              bVar6 = uVar20 <= uVar2;
              goto LAB_00628370;
            }
            pbVar13 = (byte *)((long)param_1 + 1);
            if ((bVar5 & 1) != 0) {
              pbVar13 = (byte *)param_1[2];
            }
            pbVar12 = (byte *)((long)puVar15 + -0x27);
            if ((bVar4 & 1) != 0) {
              pbVar12 = (byte *)puVar15[-3];
            }
            iVar7 = memcmp(pbVar13,pbVar12,sVar3);
            if (iVar7 == 0) goto LAB_0062836c;
            puVar16 = puVar15;
            if (iVar7 < 0) goto LAB_006283e8;
            while( true ) {
              puVar15 = puVar16 + 5;
              if (param_2 == puVar15) {
                return;
              }
              uVar14 = puVar16[4];
              bVar6 = uVar14 <= uVar11;
              if (uVar11 == uVar14) break;
LAB_00628370:
              puVar16 = puVar15;
              if (!bVar6) goto LAB_006283e8;
            }
          } while( true );
        }
        goto LAB_00628c04;
      }
    }
    else if (uVar20 <= uVar11) goto LAB_006281c0;
LAB_00628130:
    puVar15 = param_1 + 5;
    puVar17 = puVar19;
    if (puVar15 < puVar19) {
LAB_00628768:
      do {
        uVar11 = puVar16[4];
        uVar14 = puVar15[4];
        if (uVar14 == uVar11) goto LAB_00628790;
LAB_0062877c:
        puVar18 = puVar15;
        if (uVar14 < uVar11) {
LAB_00628780:
          do {
            puVar15 = puVar18 + 5;
            uVar14 = puVar18[9];
            if (uVar14 != uVar11) goto LAB_0062877c;
LAB_00628790:
            bVar4 = (byte)*puVar16;
            uVar20 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              uVar20 = puVar16[1];
            }
            bVar5 = (byte)*puVar15;
            uVar2 = (ulong)(bVar5 >> 1);
            if ((bVar5 & 1) != 0) {
              uVar2 = puVar15[1];
            }
            sVar3 = uVar20;
            if (uVar2 <= uVar20) {
              sVar3 = uVar2;
            }
            puVar18 = puVar15;
            if (sVar3 != 0) {
              pbVar13 = (byte *)puVar15[2];
              if ((bVar5 & 1) == 0) {
                pbVar13 = (byte *)((long)puVar15 + 1);
              }
              pbVar12 = (byte *)((long)puVar16 + 1);
              if ((bVar4 & 1) != 0) {
                pbVar12 = (byte *)puVar16[2];
              }
              iVar8 = memcmp(pbVar13,pbVar12,sVar3);
              if (iVar8 != 0) {
                if (-1 < iVar8) break;
                goto LAB_00628780;
              }
            }
            if (uVar20 <= uVar2) break;
          } while( true );
        }
LAB_006287fc:
        do {
          puVar18 = puVar17;
          puVar17 = puVar18 + -5;
          if (puVar18[-1] != uVar11) {
            if (puVar18[-1] < uVar11) break;
            goto LAB_006287fc;
          }
          bVar4 = (byte)*puVar16;
          uVar20 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar20 = puVar16[1];
          }
          bVar5 = (byte)*puVar17;
          uVar2 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            uVar2 = puVar18[-4];
          }
          sVar3 = uVar20;
          if (uVar2 <= uVar20) {
            sVar3 = uVar2;
          }
          if (sVar3 == 0) {
LAB_00628868:
            if (uVar2 < uVar20) break;
            goto LAB_006287fc;
          }
          pbVar13 = (byte *)puVar18[-3];
          if ((bVar5 & 1) == 0) {
            pbVar13 = (byte *)((long)puVar18 + -0x27);
          }
          pbVar12 = (byte *)((long)puVar16 + 1);
          if ((bVar4 & 1) != 0) {
            pbVar12 = (byte *)puVar16[2];
          }
          iVar8 = memcmp(pbVar13,pbVar12,sVar3);
          if (iVar8 == 0) goto LAB_00628868;
        } while (-1 < iVar8);
        if (puVar17 < puVar15) goto LAB_00628a2c;
        uStack_88 = puVar15[1];
        local_90 = *puVar15;
        local_78 = (long *)puVar15[3];
        local_80 = puVar15[2];
        *puVar15 = 0;
        puVar15[1] = 0;
        puVar15[2] = 0;
        local_70 = uVar14;
        if ((long *)puVar15[3] == (long *)puVar18[-2]) {
LAB_006288b4:
          *(undefined2 *)puVar15 = 0;
LAB_006288b8:
          uVar14 = puVar18[-4];
          uVar11 = *puVar17;
          puVar15[2] = puVar18[-3];
          puVar15[1] = uVar14;
          *puVar15 = uVar11;
          puVar18[-4] = 0;
          puVar18[-3] = 0;
          *puVar17 = 0;
        }
        else {
          uVar11 = (**(code **)(*(long *)puVar15[3] + 0x20))();
          if ((uVar11 & 1) != 0) {
            if ((*puVar15 & 1) == 0) goto LAB_006288b4;
            *(undefined1 *)puVar15[2] = 0;
            puVar15[1] = 0;
            if ((*puVar15 & 1) != 0) {
              (**(code **)(*(long *)puVar15[3] + 0x18))
                        ((long *)puVar15[3],puVar15[2],*puVar15 & 0xfffffffffffffffe,1);
              *puVar15 = 0;
            }
            goto LAB_006288b8;
          }
          if (puVar15 != puVar17) {
            uVar11 = puVar18[-4];
            pbVar13 = (byte *)puVar18[-3];
            if (((byte)*puVar17 & 1) == 0) {
              pbVar13 = (byte *)((long)puVar18 + -0x27);
              uVar11 = (ulong)(byte)((byte)*puVar17 >> 1);
            }
                    /* try { // try from 006288f4 to 006288fb has its CatchHandler @ 00629254 */
            FUN_02762710(puVar15,pbVar13,uVar11);
          }
        }
        puVar15[4] = puVar18[-1];
        if (((long *)puVar18[-2] == local_78) ||
           (uVar11 = (**(code **)(*(long *)puVar18[-2] + 0x20))(), (uVar11 & 1) != 0)) {
          if ((*puVar17 & 1) == 0) {
            *(undefined2 *)puVar17 = 0;
          }
          else {
            *(undefined1 *)puVar18[-3] = 0;
            puVar18[-4] = 0;
            if ((*puVar17 & 1) != 0) {
              (**(code **)(*(long *)puVar18[-2] + 0x18))
                        ((long *)puVar18[-2],puVar18[-3],*puVar17 & 0xfffffffffffffffe,1);
              *puVar17 = 0;
            }
          }
          puVar18[-3] = local_80;
          puVar18[-4] = uStack_88;
          *puVar17 = local_90;
          uStack_88 = 0;
          local_80 = 0;
          local_90 = 0;
          puVar18[-1] = local_70;
        }
        else {
          if (&local_90 != puVar17) {
            uVar11 = local_90 >> 1 & 0x7f;
            uVar14 = uVar9;
            if ((local_90 & 1) != 0) {
              uVar11 = uStack_88;
              uVar14 = local_80;
            }
                    /* try { // try from 006289bc to 006289c3 has its CatchHandler @ 00629254 */
            FUN_02762710(puVar17,uVar14,uVar11);
          }
          puVar18[-1] = local_70;
          if ((local_90 & 1) != 0) {
            (**(code **)(*local_78 + 0x18))(local_78,local_80,local_90 & 0xfffffffffffffffe,1);
          }
        }
        iVar7 = iVar7 + 1;
        puVar18 = puVar17;
        if (puVar16 != puVar15) {
          puVar18 = puVar16;
        }
        puVar15 = puVar15 + 5;
        puVar16 = puVar18;
      } while( true );
    }
LAB_00628144:
    puVar15 = param_1 + 5;
    if (puVar15 != puVar16) goto LAB_0062814c;
    goto LAB_00628a38;
  }
LAB_006283e8:
  uStack_88 = puVar15[-4];
  local_90 = puVar15[-5];
  puVar16 = puVar15 + -5;
  local_78 = (long *)puVar15[-2];
  local_80 = puVar15[-3];
  puVar15[-5] = 0;
  puVar15[-4] = 0;
  puVar15[-3] = 0;
  local_70 = uVar14;
  if ((long *)puVar15[-2] == (long *)param_2[-2]) {
LAB_0062842c:
    *(undefined2 *)(puVar15 + -5) = 0;
  }
  else {
    uVar11 = (**(code **)(*(long *)puVar15[-2] + 0x20))();
    if ((uVar11 & 1) == 0) {
      uVar11 = (ulong)(byte)((byte)param_2[-5] >> 1);
      pbVar13 = (byte *)((long)param_2 + -0x27);
      if (((byte)param_2[-5] & 1) != 0) {
        uVar11 = param_2[-4];
        pbVar13 = (byte *)param_2[-3];
      }
                    /* try { // try from 00628b08 to 00628b0f has its CatchHandler @ 00629214 */
      FUN_02762710(puVar16,pbVar13,uVar11);
      goto LAB_00628b10;
    }
    if ((*puVar16 & 1) == 0) goto LAB_0062842c;
    *(undefined1 *)puVar15[-3] = 0;
    puVar15[-4] = 0;
    if ((puVar15[-5] & 1) != 0) {
      (**(code **)(*(long *)puVar15[-2] + 0x18))
                ((long *)puVar15[-2],puVar15[-3],puVar15[-5] & 0xfffffffffffffffe,1);
      puVar15[-5] = 0;
    }
  }
  uVar14 = param_2[-4];
  uVar11 = *puVar19;
  puVar15[-3] = param_2[-3];
  puVar15[-4] = uVar14;
  *puVar16 = uVar11;
  param_2[-4] = 0;
  param_2[-3] = 0;
  *puVar19 = 0;
LAB_00628b10:
  puVar15[-1] = param_2[-1];
  if (((long *)param_2[-2] == local_78) ||
     (uVar11 = (**(code **)(*(long *)param_2[-2] + 0x20))(), (uVar11 & 1) != 0)) {
    if ((*puVar19 & 1) == 0) {
      *(undefined2 *)puVar19 = 0;
    }
    else {
      *(undefined1 *)param_2[-3] = 0;
      param_2[-4] = 0;
      if ((param_2[-5] & 1) != 0) {
        (**(code **)(*(long *)param_2[-2] + 0x18))
                  ((long *)param_2[-2],param_2[-3],param_2[-5] & 0xfffffffffffffffe,1);
        param_2[-5] = 0;
      }
    }
    param_2[-3] = local_80;
    param_2[-4] = uStack_88;
    *puVar19 = local_90;
    uStack_88 = 0;
    local_80 = 0;
    local_90 = 0;
    param_2[-1] = local_70;
  }
  else {
    if (puVar19 != &local_90) {
      uVar11 = local_90 >> 1 & 0x7f;
      uVar14 = uVar9;
      if ((local_90 & 1) != 0) {
        uVar11 = uStack_88;
        uVar14 = local_80;
      }
                    /* try { // try from 00628bd0 to 00628bd7 has its CatchHandler @ 00629214 */
      FUN_02762710(puVar19,uVar14,uVar11);
    }
    param_2[-1] = local_70;
    if ((local_90 & 1) != 0) {
      (**(code **)(*local_78 + 0x18))(local_78,local_80,local_90 & 0xfffffffffffffffe,1);
    }
  }
LAB_00628c04:
  if (puVar15 == puVar19) {
    return;
  }
  uVar11 = param_1[4];
  uVar14 = puVar15[4];
  bVar6 = uVar14 <= uVar11;
  puVar17 = puVar19;
  if (uVar11 != uVar14) goto LAB_00628c3c;
LAB_00628c50:
  bVar4 = (byte)*puVar15;
  uVar20 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar20 = puVar15[1];
  }
  bVar5 = (byte)*param_1;
  uVar2 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar2 = param_1[1];
  }
  sVar3 = uVar20;
  if (uVar2 <= uVar20) {
    sVar3 = uVar2;
  }
  puVar16 = puVar15;
  if (sVar3 == 0) {
LAB_00628cac:
    if (uVar20 <= uVar2) goto LAB_00628c40;
  }
  else {
    pbVar13 = (byte *)((long)param_1 + 1);
    if ((bVar5 & 1) != 0) {
      pbVar13 = (byte *)param_1[2];
    }
    pbVar12 = (byte *)puVar15[2];
    if ((bVar4 & 1) == 0) {
      pbVar12 = (byte *)((long)puVar15 + 1);
    }
    iVar7 = memcmp(pbVar13,pbVar12,sVar3);
    if (iVar7 == 0) goto LAB_00628cac;
    if (-1 < iVar7) goto LAB_00628c40;
  }
LAB_00628cbc:
  do {
    while( true ) {
      puVar15 = puVar17;
      puVar17 = puVar15 + -5;
      if (uVar11 != puVar15[-1]) goto LAB_00628cb8;
      bVar4 = (byte)*puVar17;
      uVar20 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar20 = puVar15[-4];
      }
      bVar5 = (byte)*param_1;
      uVar2 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar2 = param_1[1];
      }
      sVar3 = uVar20;
      if (uVar2 <= uVar20) {
        sVar3 = uVar2;
      }
      if (sVar3 == 0) break;
      pbVar13 = (byte *)((long)param_1 + 1);
      if ((bVar5 & 1) != 0) {
        pbVar13 = (byte *)param_1[2];
      }
      pbVar12 = (byte *)puVar15[-3];
      if ((bVar4 & 1) == 0) {
        pbVar12 = (byte *)((long)puVar15 + -0x27);
      }
      iVar7 = memcmp(pbVar13,pbVar12,sVar3);
      if (iVar7 == 0) break;
      if (-1 < iVar7) goto LAB_00628d30;
    }
  } while (uVar2 < uVar20);
  goto LAB_00628d30;
LAB_00628cb8:
  if (uVar11 < puVar15[-1]) goto LAB_00628cbc;
LAB_00628d30:
  if (puVar17 <= puVar16) goto LAB_0062801c;
  uStack_88 = puVar16[1];
  local_90 = *puVar16;
  local_78 = (long *)puVar16[3];
  local_80 = puVar16[2];
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar16[2] = 0;
  local_70 = uVar14;
  if ((long *)puVar16[3] == (long *)puVar15[-2]) {
LAB_00628d74:
    *(undefined2 *)puVar16 = 0;
  }
  else {
    uVar11 = (**(code **)(*(long *)puVar16[3] + 0x20))();
    if ((uVar11 & 1) == 0) {
      uVar11 = puVar15[-4];
      pbVar13 = (byte *)puVar15[-3];
      if (((byte)*puVar17 & 1) == 0) {
        pbVar13 = (byte *)((long)puVar15 + -0x27);
        uVar11 = (ulong)(byte)((byte)*puVar17 >> 1);
      }
                    /* try { // try from 00628dac to 00628db3 has its CatchHandler @ 00629244 */
      FUN_02762710(puVar16,pbVar13,uVar11);
      goto LAB_00628db4;
    }
    if ((*puVar16 & 1) == 0) goto LAB_00628d74;
    *(undefined1 *)puVar16[2] = 0;
    puVar16[1] = 0;
    if ((*puVar16 & 1) != 0) {
      (**(code **)(*(long *)puVar16[3] + 0x18))
                ((long *)puVar16[3],puVar16[2],*puVar16 & 0xfffffffffffffffe,1);
      *puVar16 = 0;
    }
  }
  uVar14 = puVar15[-4];
  uVar11 = *puVar17;
  puVar16[2] = puVar15[-3];
  puVar16[1] = uVar14;
  *puVar16 = uVar11;
  puVar15[-4] = 0;
  puVar15[-3] = 0;
  *puVar17 = 0;
LAB_00628db4:
  puVar16[4] = puVar15[-1];
  if (((long *)puVar15[-2] == local_78) ||
     (uVar11 = (**(code **)(*(long *)puVar15[-2] + 0x20))(), (uVar11 & 1) != 0)) {
    if ((*puVar17 & 1) == 0) {
      *(undefined2 *)puVar17 = 0;
    }
    else {
      *(undefined1 *)puVar15[-3] = 0;
      puVar15[-4] = 0;
      if ((*puVar17 & 1) != 0) {
        (**(code **)(*(long *)puVar15[-2] + 0x18))
                  ((long *)puVar15[-2],puVar15[-3],*puVar17 & 0xfffffffffffffffe,1);
        *puVar17 = 0;
      }
    }
    puVar15[-3] = local_80;
    puVar15[-4] = uStack_88;
    *puVar17 = local_90;
    uStack_88 = 0;
    local_80 = 0;
    local_90 = 0;
    puVar15[-1] = local_70;
  }
  else {
    if (&local_90 != puVar17) {
      uVar11 = local_90 >> 1 & 0x7f;
      uVar14 = uVar9;
      if ((local_90 & 1) != 0) {
        uVar11 = uStack_88;
        uVar14 = local_80;
      }
                    /* try { // try from 00628e74 to 00628e7b has its CatchHandler @ 00629244 */
      FUN_02762710(puVar17,uVar14,uVar11);
    }
    puVar15[-1] = local_70;
    if ((local_90 & 1) != 0) {
      (**(code **)(*local_78 + 0x18))(local_78,local_80,local_90 & 0xfffffffffffffffe,1);
    }
  }
  puVar15 = puVar16 + 5;
  uVar11 = param_1[4];
  uVar14 = puVar16[9];
  bVar6 = uVar14 <= uVar11;
  if (uVar11 == uVar14) goto LAB_00628c50;
LAB_00628c3c:
  while( true ) {
    puVar16 = puVar15;
    if (!bVar6) break;
LAB_00628c40:
    puVar15 = puVar16 + 5;
    uVar14 = puVar16[9];
    bVar6 = uVar14 <= uVar11;
    if (uVar11 == uVar14) goto LAB_00628c50;
  }
  goto LAB_00628cbc;
LAB_00628a2c:
  if (puVar15 == puVar16) {
LAB_00628a38:
    if (iVar7 != 0) goto LAB_00628a70;
  }
  else {
LAB_0062814c:
    uVar11 = puVar15[4];
    if (puVar16[4] != uVar11) {
      if (puVar16[4] < uVar11) goto LAB_00628454;
      goto LAB_00628a38;
    }
    bVar4 = (byte)*puVar15;
    uVar14 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar14 = puVar15[1];
    }
    bVar5 = (byte)*puVar16;
    uVar20 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar20 = puVar16[1];
    }
    sVar3 = uVar14;
    if (uVar20 <= uVar14) {
      sVar3 = uVar20;
    }
    if (sVar3 != 0) {
      pbVar13 = (byte *)puVar16[2];
      if ((bVar5 & 1) == 0) {
        pbVar13 = (byte *)((long)puVar16 + 1);
      }
      pbVar12 = (byte *)puVar15[2];
      if ((bVar4 & 1) == 0) {
        pbVar12 = (byte *)((long)puVar15 + 1);
      }
      iVar8 = memcmp(pbVar13,pbVar12,sVar3);
      if (iVar8 != 0) {
        if (iVar8 < 0) goto LAB_00628454;
        goto LAB_00628a38;
      }
    }
    if (uVar14 <= uVar20) goto LAB_00628a38;
LAB_00628454:
    uStack_88 = puVar15[1];
    local_90 = *puVar15;
    local_78 = (long *)puVar15[3];
    local_80 = puVar15[2];
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    local_70 = uVar11;
    if ((long *)puVar15[3] == (long *)puVar16[3]) {
LAB_00628490:
      *(undefined2 *)puVar15 = 0;
LAB_00628494:
      uVar14 = puVar16[1];
      uVar11 = *puVar16;
      puVar15[2] = puVar16[2];
      puVar15[1] = uVar14;
      *puVar15 = uVar11;
      puVar16[1] = 0;
      puVar16[2] = 0;
      *puVar16 = 0;
    }
    else {
      uVar11 = (**(code **)(*(long *)puVar15[3] + 0x20))();
      if ((uVar11 & 1) != 0) {
        if ((*puVar15 & 1) == 0) goto LAB_00628490;
        *(undefined1 *)puVar15[2] = 0;
        puVar15[1] = 0;
        if ((*puVar15 & 1) != 0) {
          (**(code **)(*(long *)puVar15[3] + 0x18))
                    ((long *)puVar15[3],puVar15[2],*puVar15 & 0xfffffffffffffffe,1);
          *puVar15 = 0;
        }
        goto LAB_00628494;
      }
      uVar11 = puVar16[1];
      pbVar13 = (byte *)puVar16[2];
      if (((byte)*puVar16 & 1) == 0) {
        pbVar13 = (byte *)((long)puVar16 + 1);
        uVar11 = (ulong)(byte)((byte)*puVar16 >> 1);
      }
                    /* try { // try from 006284d4 to 006284db has its CatchHandler @ 00629234 */
      FUN_02762710(puVar15,pbVar13,uVar11);
    }
    puVar15[4] = puVar16[4];
    if (((long *)puVar16[3] == local_78) ||
       (uVar11 = (**(code **)(*(long *)puVar16[3] + 0x20))(), (uVar11 & 1) != 0)) {
      if ((*puVar16 & 1) == 0) {
        *(undefined2 *)puVar16 = 0;
      }
      else {
        *(undefined1 *)puVar16[2] = 0;
        puVar16[1] = 0;
        if ((*puVar16 & 1) != 0) {
          (**(code **)(*(long *)puVar16[3] + 0x18))
                    ((long *)puVar16[3],puVar16[2],*puVar16 & 0xfffffffffffffffe,1);
          *puVar16 = 0;
        }
      }
      puVar16[2] = local_80;
      puVar16[1] = uStack_88;
      *puVar16 = local_90;
      uStack_88 = 0;
      local_80 = 0;
      local_90 = 0;
      puVar16[4] = local_70;
    }
    else {
      if (puVar16 != &local_90) {
        uVar11 = local_90 >> 1 & 0x7f;
        uVar14 = uVar9;
        if ((local_90 & 1) != 0) {
          uVar11 = uStack_88;
          uVar14 = local_80;
        }
                    /* try { // try from 0062859c to 006285a3 has its CatchHandler @ 00629234 */
        FUN_02762710(puVar16,uVar14,uVar11);
      }
      puVar16[4] = local_70;
      if ((local_90 & 1) != 0) {
        (**(code **)(*local_78 + 0x18))(local_78,local_80,local_90 & 0xfffffffffffffffe,1);
      }
    }
    if (iVar7 != -1) goto LAB_00628a70;
  }
  uVar11 = FUN_0062b260(param_1,puVar15,param_3);
  uVar14 = FUN_0062b260(puVar15 + 5,param_2,param_3);
  if ((uVar14 & 1) != 0) goto LAB_00628f34;
  puVar16 = puVar15 + 5;
  if ((uVar11 & 1) != 0) goto LAB_0062801c;
LAB_00628a70:
  if (((long)param_2 - (long)puVar15 >> 3) * -0x3333333333333333 <=
      ((long)puVar15 - (long)param_1 >> 3) * -0x3333333333333333) {
    FUN_00627fd0(puVar15 + 5,param_2,param_3);
    param_2 = puVar15;
    goto LAB_00628000;
  }
  FUN_00627fd0(param_1,puVar15,param_3);
  puVar16 = puVar15 + 5;
  goto LAB_0062801c;
LAB_00628f34:
  param_2 = puVar15;
  if ((uVar11 & 1) != 0) {
switchD_00628f54_caseD_0:
    return;
  }
  goto LAB_00628000;
}


