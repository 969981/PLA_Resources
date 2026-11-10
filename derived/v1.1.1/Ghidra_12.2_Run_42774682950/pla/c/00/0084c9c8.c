/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084c9c8; name: FUN_0084c9c8
 */


void FUN_0084c9c8(undefined8 param_1,long *param_2,uint *param_3,uint param_4)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  Result RVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint *puVar17;
  short *psVar18;
  ushort uVar19;
  uint *puVar20;
  uint uVar21;
  uint local_ea4;
  undefined8 local_ea0;
  undefined4 local_a0;
  uint local_80 [2];
  uint local_78 [4];
  int local_68 [2];
  
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  if ((int)param_2[0x99] == *(int *)PTR_DAT_043779d0) {
    local_ea0 = CONCAT44(local_ea0._4_4_,0x10408);
  }
  else {
    if ((param_2[0x9a] != 0) && (uVar7 = FUN_0084bae0(param_2), (uVar7 & 1) == 0)) {
      FUN_0084b940(param_2);
      memset(local_80,0,4);
      local_ea0 = 0;
      FUN_007ecf14(&local_ea0);
      uVar7 = local_ea0;
      uVar8 = FUN_0084d06c(param_2);
      lVar11 = param_2[0xa1];
      lVar13 = param_2[0x9f];
      local_ea0 = 0;
      FUN_007ecf14(&local_ea0);
      local_ea4 = 0;
      if ((ulong)(lVar13 + lVar11) <= local_ea0) {
        local_a0 = 0;
        FUN_0084d178(&local_ea0,param_2,param_2[0x9a],&local_a0,param_4);
        local_ea4 = local_a0;
      }
      lVar11 = param_2[0xa2];
      lVar13 = param_2[0x9f];
      local_ea0 = 0;
      FUN_007ecf14(&local_ea0);
      if ((ulong)(lVar13 + lVar11) <= local_ea0) {
        local_a0 = 0;
        FUN_0084d3cc(&local_ea0,param_2,param_2[0x9a],&local_a0,param_4 - local_ea4);
        if ((uint)local_ea0 == 0) {
          local_ea4 = local_a0 + local_ea4;
          memset(param_2 + 0xa3,0,4);
        }
      }
      lVar11 = param_2[0x98];
      lVar13 = param_2[0x9f];
      local_ea0 = 0;
      FUN_007ecf14(&local_ea0);
      if ((ulong)(lVar13 + lVar11) <= local_ea0) {
        local_68[0] = 0;
        lVar11 = param_2[0x9a];
        memset(&local_a0,0,4);
        memset(&local_a0,0xff,4);
        local_a0 = local_a0 & 0xffffff;
        (**(code **)(*param_2 + 0x58))
                  (&local_ea0,param_2,&local_a0,lVar11,local_68,param_4 - local_ea4,0);
        if ((uint)local_ea0 != 0) {
          if (param_3 != (uint *)0x0) {
            *param_3 = local_ea4;
          }
          local_a0 = 0;
          local_78[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)&local_a0 | 4),(Result *)local_78);
          puVar17 = &local_a0;
          goto LAB_0084ca58;
        }
        local_ea4 = local_68[0] + local_ea4;
        if (local_68[0] != 0) {
          memset(local_80,0xff,4);
          local_80[0] = local_80[0] & 0xffffff;
        }
      }
      memset(&local_a0,0,0x1c);
      if (*(short *)((long)param_2 + 0x32) != 0) {
        uVar21 = 0;
        uVar19 = 0;
        while( true ) {
          uVar12 = *(int *)((long)param_2 + 0x2c) + (uint)uVar19;
          lVar11 = param_2[4];
          uVar2 = 0;
          if (*(ushort *)(param_2 + 5) <= uVar12) {
            uVar2 = (uint)*(ushort *)(param_2 + 5);
          }
          uVar15 = (ulong)(uVar12 - uVar2);
          lVar13 = lVar11 + uVar15 * 0x5d0;
          bVar3 = *(byte *)(lVar13 + 0x20);
          if (((bVar3 >> 3 & 1) != 0) && (uVar21 != 0)) break;
          uVar5 = *(ushort *)(param_2 + 6);
          uVar12 = (uint)*(ushort *)(lVar11 + uVar15 * 0x5d0 + 0x24);
          if (((uVar12 == 0) && (uVar5 != 0)) || (0x7f < (int)(uVar12 - uVar5))) break;
          puVar17 = (uint *)(lVar11 + uVar15 * 0x5d0 + 0x2c);
          if (*puVar17 != 0) {
            lVar16 = lVar11 + uVar15 * 0x5d0;
            *(ushort *)(lVar16 + 0x26) = uVar5;
            *(undefined1 *)(lVar16 + 0x21) = *(undefined1 *)((long)param_2 + 0x36);
            local_68[0] = 0;
            FUN_00843160(local_78,lVar16 + 0x18,lVar16 + 0x30,local_68,0x5a0);
            if (*(ulong *)(lVar16 + 8) <= uVar7) {
              puVar20 = (uint *)(lVar11 + uVar15 * 0x5d0 + 0x10);
              if (*puVar20 <= param_4 - local_ea4) {
                psVar18 = (short *)(lVar11 + uVar15 * 0x5d0 + 0x14);
                lVar14 = param_2[0x9a];
                if (*psVar18 == 0) {
                  memset(local_78,0,4);
                  memset(local_78,0xff,4);
                  local_78[0] = local_78[0] & 0xffffff;
                  uVar9 = (**(code **)(*param_2 + 0x50))(param_2,local_78,lVar14,lVar13,0);
                }
                else {
                  memset(local_78,0,4);
                  memset(local_78,0xff,4);
                  local_78[0] = local_78[0] & 0xffffff;
                  uVar9 = (**(code **)(*param_2 + 0x50))(param_2,local_78,lVar14,lVar13,1);
                }
                if ((uVar9 & 1) != 0) {
                  local_80[0] = local_80[0] | *puVar17;
                  local_ea4 = *puVar20 + local_ea4;
                  *(ulong *)(lVar16 + 8) = uVar8;
                  *psVar18 = *psVar18 + 1;
                  *(undefined2 *)(lVar11 + uVar15 * 0x5d0 + 0x16) = 0;
                  goto LAB_0084ccd4;
                }
              }
              if (param_3 != (uint *)0x0) {
                *param_3 = local_ea4;
              }
              local_78[0] = 0;
              local_68[0] = 0;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_68);
              goto LAB_0084d060;
            }
            uVar15 = (ulong)*(ushort *)(lVar11 + uVar15 * 0x5d0 + 0x14);
            if (uVar15 < 0x1c) {
              bVar4 = *(byte *)((long)local_80 + (uVar15 - 0x20));
              if ((ulong)bVar4 < 0x10) {
                (&local_ea0)[uVar15 * 0x10 + (ulong)bVar4] = lVar13;
                *(byte *)((long)local_80 + (uVar15 - 0x20)) = bVar4 + 1;
              }
            }
          }
LAB_0084ccd4:
          uVar21 = uVar21 | (bVar3 & 8) >> 3;
          if (uVar19 < *(ushort *)((long)param_2 + 0x32)) {
            uVar19 = uVar19 + 1;
          }
          if (*(ushort *)((long)param_2 + 0x32) <= uVar19) break;
        }
      }
      if ((local_ea4 == 0) || (local_80[0] == 0)) {
        if (param_3 != (uint *)0x0) {
          *param_3 = local_ea4;
        }
      }
      else {
        uVar19 = *(ushort *)(param_2 + 0x9c);
        if ((uVar19 < param_4) && (param_4 = (uint)uVar19, uVar19 <= local_ea4)) {
          if (param_3 != (uint *)0x0) {
            *param_3 = local_ea4;
          }
        }
        else {
          local_68[0] = 0;
          (**(code **)(*param_2 + 0x58))
                    (local_78,param_2,local_80,param_2[0x9a],local_68,param_4 - local_ea4,0);
          puVar6 = &local_ea0;
          lVar11 = 0;
          RVar10 = local_a0._0_1_;
          while( true ) {
            if (RVar10 != (Result)0x0) {
              uVar7 = 0;
              do {
                plVar1 = puVar6 + uVar7;
                uVar7 = uVar7 + 1;
                *(short *)(*plVar1 + 0x16) = *(short *)(*plVar1 + 0x16) + 1;
              } while (uVar7 < *(byte *)((long)local_80 + lVar11 + -0x20));
            }
            puVar6 = puVar6 + 0x10;
            if (lVar11 + 1 == 0x1c) break;
            RVar10 = *(Result *)((long)local_80 + lVar11 + -0x1f);
            lVar11 = lVar11 + 1;
          }
          puVar6 = &local_ea0;
          local_ea4 = local_68[0] + local_ea4;
          lVar11 = 0;
          RVar10 = local_a0._0_1_;
          while( true ) {
            if (RVar10 != (Result)0x0) {
              uVar7 = 0;
              do {
                lVar13 = puVar6[uVar7];
                if (param_4 - local_ea4 < *(uint *)(lVar13 + 0x10)) goto LAB_0084d030;
                if ((*(ushort *)(lVar13 + 0x14) <= (ushort)*(byte *)(param_2 + 0xa0)) ||
                   ((*(byte *)((long)param_2 + 0x501) != 0 &&
                    ((ushort)*(byte *)((long)param_2 + 0x501) <= *(ushort *)(lVar13 + 0x16))))) {
                  uVar15 = (**(code **)(*param_2 + 0x50))(param_2,local_80,param_2[0x9a],lVar13,1);
                  if ((uVar15 & 1) == 0) goto LAB_0084d030;
                  local_ea4 = *(int *)(lVar13 + 0x10) + local_ea4;
                  *(ulong *)(lVar13 + 8) = uVar8;
                  *(short *)(lVar13 + 0x14) = *(short *)(lVar13 + 0x14) + 1;
                  *(undefined2 *)(lVar13 + 0x16) = 0;
                  RVar10 = *(Result *)((long)local_80 + lVar11 + -0x20);
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 < (byte)RVar10);
            }
            puVar6 = puVar6 + 0x10;
            if (lVar11 + 1 == 0x1c) break;
            RVar10 = *(Result *)((long)local_80 + lVar11 + -0x1f);
            lVar11 = lVar11 + 1;
          }
LAB_0084d030:
          if (param_3 != (uint *)0x0) {
            *param_3 = local_ea4;
          }
        }
      }
      local_78[0] = 0;
      local_68[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_68);
LAB_0084d060:
      puVar17 = local_78;
      goto LAB_0084ca58;
    }
    local_ea0 = (ulong)local_ea0._4_4_ << 0x20;
  }
  local_a0 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_ea0 | 4),(Result *)&local_a0);
  puVar17 = (uint *)&local_ea0;
LAB_0084ca58:
  FUN_007ee578(param_1,puVar17);
  return;
}


