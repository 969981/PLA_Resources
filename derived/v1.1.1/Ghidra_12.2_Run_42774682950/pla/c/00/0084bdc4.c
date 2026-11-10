/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084bdc4; name: FUN_0084bdc4
 */


void FUN_0084bdc4(undefined8 param_1,long *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  short sVar14;
  uint uVar15;
  char *pcVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  undefined *local_638 [2];
  undefined *local_628;
  undefined8 local_620;
  byte local_618;
  uint auStack_614 [361];
  undefined *local_70 [2];
  undefined4 local_58 [2];
  
  if ((((int)param_2[0x99] == *(int *)PTR_DAT_043779d0) || (param_2[0x9b] == 0)) ||
     (param_2[1] == 0)) {
    local_628 = (undefined *)CONCAT44(local_628._4_4_,0x10408);
    local_70[0]._0_4_ = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_628 | 4),(Result *)local_70);
    ppuVar10 = &local_628;
    goto LAB_0084be84;
  }
  if ((*(byte *)((long)param_3 + 0x29) >> 5 & 1) == 0) {
    bVar2 = *(byte *)(param_3 + 5);
    uVar12 = 1;
    if ((bVar2 & 1) != 0) {
      uVar12 = 2;
    }
    if ((bVar2 & 2) != 0) {
      uVar12 = uVar12 + 2;
    }
    if ((bVar2 & 4) != 0) {
      uVar12 = uVar12 + 4;
    }
    uVar19 = (uint)*(ushort *)((long)param_3 + 0x2a);
    if ((bVar2 & 8) != 0) {
      uVar12 = uVar12 + 8;
    }
    lVar17 = *param_3 + (ulong)uVar12;
LAB_0084bf08:
    local_628 = PTR_DAT_04377fb0 + 0x10;
    memset(auStack_614,0,4);
    local_620 = 0;
    local_618 = 0;
    memset(auStack_614,0,4);
    FUN_00843368(local_70,&local_628,lVar17,uVar19);
    lVar18 = param_2[0x7f];
    lVar7 = FUN_00848874(param_3);
    lVar20 = param_2[0x80];
    uVar12 = 0;
    if (lVar18 != lVar7) {
      uVar12 = 0xfffffffd;
    }
    lVar7 = FUN_00848874(param_3);
    lVar18 = param_2[0x81];
    if (lVar20 == lVar7) {
      uVar12 = 1;
    }
    lVar7 = FUN_00848874(param_3);
    lVar20 = param_2[0x82];
    uVar15 = 2;
    if (lVar18 != lVar7) {
      uVar15 = uVar12;
    }
    lVar7 = FUN_00848874(param_3);
    lVar18 = param_2[0x83];
    uVar12 = 3;
    if (lVar20 != lVar7) {
      uVar12 = uVar15;
    }
    lVar7 = FUN_00848874(param_3);
    uVar15 = 4;
    if (lVar18 != lVar7) {
      uVar15 = uVar12;
    }
    lVar18 = param_2[0x84];
    lVar7 = FUN_00848874(param_3);
    lVar20 = param_2[0x85];
    uVar12 = 5;
    if (lVar18 != lVar7) {
      uVar12 = uVar15;
    }
    lVar7 = FUN_00848874(param_3);
    lVar18 = param_2[0x86];
    uVar15 = 6;
    if (lVar20 != lVar7) {
      uVar15 = uVar12;
    }
    lVar7 = FUN_00848874(param_3);
    lVar20 = param_2[0x87];
    uVar12 = 7;
    if (lVar18 != lVar7) {
      uVar12 = uVar15;
    }
    lVar7 = FUN_00848874(param_3);
    lVar18 = param_2[0x88];
    uVar15 = 8;
    if (lVar20 != lVar7) {
      uVar15 = uVar12;
    }
    lVar7 = FUN_00848874(param_3);
    lVar20 = param_2[0x89];
    uVar12 = 9;
    if (lVar18 != lVar7) {
      uVar12 = uVar15;
    }
    lVar7 = FUN_00848874(param_3);
    lVar18 = param_2[0x8a];
    uVar15 = 10;
    if (lVar20 != lVar7) {
      uVar15 = uVar12;
    }
    lVar7 = FUN_00848874(param_3);
    lVar20 = param_2[0x8b];
    uVar12 = 0xb;
    if (lVar18 != lVar7) {
      uVar12 = uVar15;
    }
    lVar7 = FUN_00848874(param_3);
    lVar18 = param_2[0x8c];
    uVar15 = 0xc;
    if (lVar20 != lVar7) {
      uVar15 = uVar12;
    }
    lVar7 = FUN_00848874(param_3);
    lVar20 = param_2[0x8d];
    uVar12 = 0xd;
    if (lVar18 != lVar7) {
      uVar12 = uVar15;
    }
    lVar7 = FUN_00848874(param_3);
    lVar18 = param_2[0x8e];
    uVar15 = 0xe;
    if (lVar20 != lVar7) {
      uVar15 = uVar12;
    }
    lVar7 = FUN_00848874(param_3);
    lVar20 = param_2[0x8f];
    uVar12 = 0xf;
    if (lVar18 != lVar7) {
      uVar12 = uVar15;
    }
    lVar7 = FUN_00848874(param_3);
    lVar18 = param_2[0x90];
    uVar15 = 0x10;
    if (lVar20 != lVar7) {
      uVar15 = uVar12;
    }
    lVar7 = FUN_00848874(param_3);
    lVar20 = param_2[0x91];
    uVar12 = 0x11;
    if (lVar18 != lVar7) {
      uVar12 = uVar15;
    }
    lVar7 = FUN_00848874(param_3);
    lVar18 = param_2[0x92];
    uVar15 = 0x12;
    if (lVar20 != lVar7) {
      uVar15 = uVar12;
    }
    lVar7 = FUN_00848874(param_3);
    lVar20 = param_2[0x93];
    uVar12 = 0x13;
    if (lVar18 != lVar7) {
      uVar12 = uVar15;
    }
    lVar7 = FUN_00848874(param_3);
    lVar18 = param_2[0x94];
    uVar15 = 0x14;
    if (lVar20 != lVar7) {
      uVar15 = uVar12;
    }
    lVar7 = FUN_00848874(param_3);
    lVar20 = param_2[0x95];
    uVar12 = 0x15;
    if (lVar18 != lVar7) {
      uVar12 = uVar15;
    }
    lVar7 = FUN_00848874(param_3);
    lVar18 = param_2[0x96];
    uVar15 = 0x16;
    if (lVar20 != lVar7) {
      uVar15 = uVar12;
    }
    lVar7 = FUN_00848874(param_3);
    uVar12 = 0x17;
    if (lVar18 != lVar7) {
      uVar12 = uVar15;
    }
    uVar8 = FUN_00848874(param_3);
    uVar9 = FUN_0084bc80(param_2,uVar8);
    if ((uVar9 & 1) != 0) {
      uVar15 = local_618 + 0x1f >> 3 & 0x3c;
      if (((uint)local_620._2_2_ <= 0x597 - uVar15) && (uVar19 == local_620._2_2_ + uVar15 + 9)) {
        cVar6 = local_620._1_1_;
        lVar7 = (**(code **)(*param_2 + 0x40))(param_2,uVar12);
        if ((cVar6 == *(char *)(lVar7 + 0x1e)) &&
           ((local_618 == 0 ||
            ((1 << (ulong)(*(byte *)(param_2 + 2) & 0x1f) &
             *(uint *)((long)auStack_614 + ((ulong)(*(byte *)(param_2 + 2) >> 3) & 0x1c))) != 0))))
        {
          lVar7 = (**(code **)(*param_2 + 0x40))(param_2,uVar12);
          *(uint *)(lVar7 + 0x20) = (uint)local_620._6_2_;
          uVar11 = *(ushort *)(lVar7 + 0x18);
          iVar5 = (uint)local_620._6_2_ - (uint)uVar11;
          if (0 < iVar5) {
            sVar14 = *(short *)(lVar7 + 0x1a);
            iVar13 = 0;
            if (sVar14 != 0) goto LAB_0084c2d0;
            do {
              uVar15 = (uint)*(ushort *)(lVar7 + 0x10);
              uVar19 = *(uint *)(lVar7 + 0x14);
LAB_0084c304:
              do {
                uVar19 = uVar15 + 1 + uVar19;
                do {
                  uVar19 = uVar19 - uVar15;
                } while (uVar15 <= uVar19);
                if (sVar14 == 0) {
                  sVar14 = 0;
                  sVar4 = *(short *)(lVar7 + 0x1c);
                }
                else {
                  sVar14 = sVar14 + -1;
                  *(short *)(lVar7 + 0x1a) = sVar14;
                  sVar4 = *(short *)(lVar7 + 0x1c);
                }
                if (sVar4 == 0) {
                  uVar11 = uVar11 + 1;
                  *(uint *)(lVar7 + 0x14) = uVar19;
                  *(undefined2 *)(lVar7 + 0x1c) = 0;
                  *(ushort *)(lVar7 + 0x18) = uVar11;
                  goto joined_r0x0084c2c4;
                }
                *(short *)(lVar7 + 0x1c) = sVar4 + -1;
              } while (((short)(sVar4 + -1) != 0) &&
                      (((sVar14 == 0 ||
                        (pcVar16 = (char *)(*(long *)(lVar7 + 8) + (ulong)uVar19 * 0x5b8),
                        pcVar16 == (char *)0x0)) || (*pcVar16 == '\0'))));
              *(uint *)(lVar7 + 0x14) = uVar19;
joined_r0x0084c2c4:
              if (iVar13 + 1 == iVar5) goto LAB_0084c388;
              iVar13 = iVar13 + 1;
            } while (sVar14 == 0);
LAB_0084c2d0:
            uVar19 = *(uint *)(lVar7 + 0x14);
            uVar3 = *(ushort *)(lVar7 + 0x10);
            uVar15 = (uint)uVar3;
            uVar1 = 0;
            if (uVar3 <= uVar19) {
              uVar1 = (uint)uVar3;
            }
            pcVar16 = (char *)(*(long *)(lVar7 + 8) + (ulong)(uVar19 - uVar1) * 0x5b8);
            if ((pcVar16 != (char *)0x0) && (*pcVar16 != '\0')) goto LAB_0084c388;
            goto LAB_0084c304;
          }
        }
LAB_0084c388:
        local_638[0]._0_4_ = 0;
        local_70[0]._0_4_ = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_638 | 4),(Result *)local_70);
        FUN_007ee578(local_70,local_638);
        if (((byte)local_620 >> 5 & 1) == 0) {
          if (((byte)local_620 >> 6 & 1) == 0) {
            if ((local_620 & 1) == 0) {
              (**(code **)(*param_2 + 0x68))(local_638,param_2,lVar17,&local_628,uVar12);
            }
            else {
              FUN_0084c6b8(local_638,param_2,lVar17,&local_628,uVar12);
            }
            FUN_007ee660(local_70,local_638);
          }
          else if ((local_618 == 0) ||
                  ((1 << (ulong)(*(byte *)(param_2 + 2) & 0x1f) &
                   *(uint *)((long)auStack_614 + ((ulong)(*(byte *)(param_2 + 2) >> 3) & 0x1c))) !=
                   0)) {
            uVar9 = (ulong)(uVar12 >> 3) & 0x1c;
            *(uint *)((long)param_2 + uVar9 + 0x4f4) =
                 *(uint *)((long)param_2 + uVar9 + 0x4f4) &
                 (1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU);
          }
        }
        else {
          FUN_0084c4d4(param_2,&local_628,uVar12);
        }
        if ((int)local_70[0] == 0) {
          local_638[0]._0_4_ = 0;
          local_58[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_638 | 4),(Result *)local_58);
          ppuVar10 = local_638;
        }
        else {
          ppuVar10 = local_70;
        }
        goto LAB_0084be84;
      }
      goto LAB_0084c280;
    }
    local_70[0]._0_4_ = 0x10408;
  }
  else {
    bVar2 = *(byte *)(param_3 + 5);
    uVar19 = 1;
    if ((bVar2 & 1) != 0) {
      uVar19 = 2;
    }
    if ((bVar2 & 2) != 0) {
      uVar19 = uVar19 + 2;
    }
    if ((bVar2 & 4) != 0) {
      uVar19 = uVar19 + 4;
    }
    if ((bVar2 & 8) != 0) {
      uVar19 = uVar19 + 8;
    }
    FUN_00844870(&local_628,param_2[0x9b],*param_3 + (ulong)uVar19,
                 *(undefined2 *)((long)param_3 + 0x2a));
    if ((int)local_628 == 0) {
      lVar17 = *(long *)(param_2[0x9b] + 0x28);
      uVar19 = *(uint *)(param_2[0x9b] + 0x30);
      goto LAB_0084bf08;
    }
LAB_0084c280:
    local_70[0]._0_4_ = 0x2c03;
  }
  local_638[0]._0_4_ = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_638);
  ppuVar10 = local_70;
LAB_0084be84:
  FUN_007ee578(param_1,ppuVar10);
  return;
}


