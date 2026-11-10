/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00163c30; name: FUN_00163c30
 */


void FUN_00163c30(long param_1)

{
  ushort uVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined1 uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 uVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  long *plVar21;
  ulong unaff_x21;
  long *plVar22;
  undefined8 uVar23;
  uint unaff_w22;
  long unaff_x23;
  ulong unaff_x24;
  long lVar24;
  long unaff_x25;
  int unaff_w26;
  ulong *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined1 local_a0;
  char local_9f;
  undefined1 local_9e;
  ulong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  ulong local_80;
  int local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  
  uVar18 = *(uint *)(param_1 + 4);
  uVar20 = (ulong)uVar18;
  uVar1 = *(short *)(*(long *)(param_1 + 0x38) + 0xc6) + 1;
  *(ushort *)(*(long *)(param_1 + 0x38) + 0xc6) = uVar1;
  if (200 < uVar1) {
LAB_00164b24:
    FUN_00163bb0(*(undefined8 *)(param_1 + 0x30),200,"C levels");
LAB_00164b38:
    if (*(uint *)(param_1 + 4) != uVar18) {
      uVar23 = *(undefined8 *)(param_1 + 0x38);
      uVar11 = FUN_0016a120(param_1,0x106);
      uVar13 = 0x10b;
      goto LAB_00164c20;
    }
LAB_00164bc8:
    FUN_00166920(param_1,0x106);
LAB_00164bd4:
    FUN_00166920(param_1,0x120);
LAB_00164be0:
    FUN_00166920(param_1,0x10c);
LAB_00164bec:
    uVar23 = *(undefined8 *)(param_1 + 0x38);
    uVar11 = FUN_0016a120(param_1,0x115);
    uVar13 = 0x111;
LAB_00164c20:
    uVar13 = FUN_0016a120(param_1,uVar13);
    uVar11 = FUN_00162fa0(uVar23,"%s expected (to close %s at line %d)",uVar11,uVar13,uVar20);
                    /* WARNING: Subroutine does not return */
    FUN_0016a180(param_1,uVar11);
  }
  switch(*(int *)(param_1 + 0x10)) {
  case 0x102:
  case 0x10a:
    uVar9 = FUN_001670f0(*(undefined8 *)(param_1 + 0x30));
    FUN_00164c80(param_1,uVar9);
    goto LAB_00164a20;
  case 0x103:
    FUN_0016a400(param_1);
    lVar15 = *(long *)(param_1 + 0x30);
    uVar7 = local_70 >> 0x10;
    lVar16 = *(long *)(*(long *)(lVar15 + 0x10) + 0x58);
    local_78 = *(int *)(lVar16 + 0x28);
    uStack_74 = *(undefined4 *)(lVar16 + 0x18);
    local_70._0_2_ = (ushort)*(byte *)(lVar15 + 0x3a);
    local_70 = CONCAT62((int6)uVar7,(ushort)local_70) & 0xffffffffff00ffff;
    local_80 = *(ulong *)(lVar15 + 0x18);
    *(ulong **)(lVar15 + 0x18) = &local_80;
    do {
      iVar17 = *(int *)(param_1 + 0x10);
      uVar12 = iVar17 - 0x104;
      if (uVar12 < 0x1e && (1 << (ulong)(uVar12 & 0x1f) & 0x20020007U) != 0) break;
      FUN_00163c30(param_1);
    } while (iVar17 != 0x112);
    FUN_00165020(lVar15);
    if (*(int *)(param_1 + 0x10) != 0x106) {
LAB_00164b88:
      if (*(uint *)(param_1 + 4) != uVar18) {
        uVar23 = *(undefined8 *)(param_1 + 0x38);
        uVar11 = FUN_0016a120(param_1,0x106);
        uVar13 = 0x103;
        goto LAB_00164c20;
      }
      goto LAB_00164bc8;
    }
    break;
  case 0x104:
  case 0x105:
  case 0x106:
  case 0x107:
  case 0x10c:
  case 0x10e:
  case 0x10f:
  case 0x110:
  case 0x113:
  case 0x114:
  case 0x115:
  case 0x117:
  case 0x118:
  case 0x119:
  case 0x11a:
  case 0x11b:
  case 0x11c:
  case 0x11d:
  case 0x11e:
  case 0x11f:
switchD_00163c98_caseD_104:
    plVar21 = *(long **)(param_1 + 0x30);
    FUN_00165e50(param_1,&local_78);
    if ((*(int *)(param_1 + 0x10) == 0x3d) || (*(int *)(param_1 + 0x10) == 0x2c)) {
      local_80 = 0;
      FUN_00166d60(param_1,&local_80,1);
    }
    else {
      if (local_78 != 0xd) {
                    /* WARNING: Subroutine does not return */
        FUN_0016a180(param_1,"syntax error");
      }
      lVar16 = *(long *)(*plVar21 + 0x38);
      *(uint *)(lVar16 + (long)(int)local_70 * 4) =
           *(uint *)(lVar16 + (long)(int)local_70 * 4) & 0xff803fff | 0x4000;
    }
    goto LAB_00164a20;
  case 0x108:
    unaff_x21 = *(ulong *)(param_1 + 0x30);
    local_86 = 1;
    local_88 = *(undefined1 *)(unaff_x21 + 0x3a);
    lVar16 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x58);
    local_90 = *(undefined4 *)(lVar16 + 0x28);
    uStack_8c = *(undefined4 *)(lVar16 + 0x18);
    local_87 = 0;
    local_98 = *(ulong *)(unaff_x21 + 0x18);
    *(ulong **)(unaff_x21 + 0x18) = &local_98;
    FUN_0016a400(param_1);
    if (*(int *)(param_1 + 0x10) != 0x124) goto LAB_001646ec;
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    FUN_0016a400(param_1);
    iVar17 = *(int *)(param_1 + 0x10);
    if ((iVar17 != 0x2c) && (iVar17 != 0x10c)) {
      if (iVar17 != 0x3d) {
                    /* WARNING: Subroutine does not return */
        FUN_0016a180(param_1,"\'=\' or \'in\' expected");
      }
      lVar16 = *(long *)(param_1 + 0x30);
      uVar3 = *(undefined1 *)(lVar16 + 0x3c);
      uVar13 = FUN_0016a2d0(param_1,"(for index)",0xb);
      FUN_00166260(param_1,uVar13);
      uVar13 = FUN_0016a2d0(param_1,"(for limit)",0xb);
      FUN_00166260(param_1,uVar13);
      uVar13 = FUN_0016a2d0(param_1,"(for step)",10);
      FUN_00166260(param_1,uVar13);
      FUN_00166260(param_1,uVar11);
      if (*(int *)(param_1 + 0x10) != 0x3d) {
        FUN_00166920(param_1,0x3d);
LAB_00164c6c:
        FUN_00166920(param_1,0x2c);
                    /* WARNING: Does not return */
        pcVar6 = (code *)UndefinedInstructionException(0,0x164c78);
        (*pcVar6)();
      }
      FUN_0016a400(param_1);
      FUN_00165360(param_1,&local_80,0);
      FUN_00167c00(*(undefined8 *)(param_1 + 0x30),&local_80);
      if (*(int *)(param_1 + 0x10) != 0x2c) goto LAB_00164c6c;
      FUN_0016a400(param_1);
      FUN_00165360(param_1,&local_80,0);
      FUN_00167c00(*(undefined8 *)(param_1 + 0x30),&local_80);
      if (*(int *)(param_1 + 0x10) == 0x2c) {
        FUN_0016a400(param_1);
        FUN_00165360(param_1,&local_80,0);
        FUN_00167c00(*(undefined8 *)(param_1 + 0x30),&local_80);
      }
      else {
        uVar5 = *(undefined1 *)(lVar16 + 0x3c);
        uVar9 = FUN_00167960(lVar16,1);
        FUN_00167680(lVar16,uVar5,uVar9);
        FUN_00167750(lVar16,1);
      }
      FUN_00166960(param_1,uVar3,uVar20,1,1);
      iVar17 = *(int *)(param_1 + 0x10);
joined_r0x00164aa8:
      if (iVar17 == 0x106) {
        FUN_0016a400(param_1);
        goto LAB_0016465c;
      }
      if (*(uint *)(param_1 + 4) != uVar18) {
        uVar23 = *(undefined8 *)(param_1 + 0x38);
        uVar11 = FUN_0016a120(param_1,0x106);
        uVar13 = 0x108;
        goto LAB_00164c20;
      }
      goto LAB_00164bc8;
    }
    unaff_x23 = *(long *)(param_1 + 0x30);
    unaff_w22 = (uint)*(byte *)(unaff_x23 + 0x3c);
    uVar13 = FUN_0016a2d0(param_1,"(for generator)",0xf);
    FUN_00166260(param_1,uVar13);
    uVar13 = FUN_0016a2d0(param_1,"(for state)",0xb);
    FUN_00166260(param_1,uVar13);
    uVar13 = FUN_0016a2d0(param_1,"(for control)",0xd);
    FUN_00166260(param_1,uVar13);
    FUN_00166260(param_1,uVar11);
    unaff_x24 = 1;
    iVar17 = *(int *)(param_1 + 0x10);
    while (iVar17 == 0x2c) {
      FUN_0016a400(param_1);
      if (*(int *)(param_1 + 0x10) != 0x124) goto LAB_001646ec;
      unaff_x25 = *(long *)(param_1 + 0x18);
      FUN_0016a400(param_1);
      FUN_00166260(param_1,unaff_x25);
      unaff_x24 = (ulong)((int)unaff_x24 + 1);
      iVar17 = *(int *)(param_1 + 0x10);
    }
    if (iVar17 == 0x10c) {
      FUN_0016a400(param_1);
      uVar9 = *(undefined4 *)(param_1 + 4);
      FUN_00165360(param_1,&local_80,0);
      iVar17 = 1;
      iVar19 = *(int *)(param_1 + 0x10);
      while (iVar19 == 0x2c) {
        FUN_0016a400(param_1);
        FUN_00167c00(*(undefined8 *)(param_1 + 0x30),&local_80);
        FUN_00165360(param_1,&local_80,0);
        iVar17 = iVar17 + 1;
        iVar19 = *(int *)(param_1 + 0x10);
      }
      FUN_00166c80(param_1,3,iVar17,&local_80);
      FUN_00167700(unaff_x23,3);
      FUN_00166960(param_1,unaff_w22,uVar9,unaff_x24,0);
      iVar17 = *(int *)(param_1 + 0x10);
      goto joined_r0x00164aa8;
    }
    goto LAB_00164be0;
  case 0x109:
    FUN_0016a400(param_1);
    if (*(int *)(param_1 + 0x10) == 0x124) {
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      FUN_0016a400(param_1);
      uVar11 = *(undefined8 *)(param_1 + 0x30);
      FUN_00166640(uVar11,uVar13,&local_98,1);
      if ((int)local_98 == 0) {
        FUN_00166640(uVar11,*(undefined8 *)(param_1 + 0x68),&local_98,1);
        local_78 = FUN_001677a0(*(undefined8 *)(param_1 + 0x30),uVar13);
        local_70 = 0xffffffffffffffff;
        local_80 = CONCAT44(local_80._4_4_,4);
        FUN_00168d90(uVar11,&local_98,&local_80);
      }
      while (iVar17 = *(int *)(param_1 + 0x10), iVar17 == 0x2e) {
        FUN_001663c0(param_1,&local_98);
      }
      if (iVar17 == 0x3a) {
        FUN_001663c0(param_1,&local_98);
      }
      FUN_001659e0(param_1,&local_80,iVar17 == 0x3a,uVar20);
      FUN_001685f0(*(undefined8 *)(param_1 + 0x30),&local_98,&local_80);
      FUN_00169ae0(*(undefined8 *)(param_1 + 0x30),uVar20);
      goto LAB_00164a20;
    }
    goto LAB_001646ec;
  case 0x10b:
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    local_98 = CONCAT44(local_98._4_4_,0xffffffff);
    do {
      FUN_00164e30(param_1,&local_98);
      iVar17 = *(int *)(param_1 + 0x10);
    } while (iVar17 == 0x105);
    if (iVar17 == 0x104) {
      FUN_0016a400(param_1);
      lVar15 = *(long *)(param_1 + 0x30);
      uVar7 = local_70 >> 0x10;
      lVar16 = *(long *)(*(long *)(lVar15 + 0x10) + 0x58);
      local_78 = *(int *)(lVar16 + 0x28);
      uStack_74 = *(undefined4 *)(lVar16 + 0x18);
      local_70._0_2_ = (ushort)*(byte *)(lVar15 + 0x3a);
      local_70 = CONCAT62((int6)uVar7,(ushort)local_70) & 0xffffffffff00ffff;
      local_80 = *(ulong *)(lVar15 + 0x18);
      *(ulong **)(lVar15 + 0x18) = &local_80;
      do {
        iVar17 = *(int *)(param_1 + 0x10);
        uVar12 = iVar17 - 0x104;
        if (uVar12 < 0x1e && (1 << (ulong)(uVar12 & 0x1f) & 0x20020007U) != 0) break;
        FUN_00163c30(param_1);
      } while (iVar17 != 0x112);
      FUN_00165020(lVar15);
      iVar17 = *(int *)(param_1 + 0x10);
    }
    if (iVar17 == 0x106) {
      FUN_0016a400(param_1);
      FUN_00167200(uVar11,local_98 & 0xffffffff);
      goto LAB_00164a20;
    }
    goto LAB_00164b38;
  case 0x10d:
    FUN_0016a400(param_1);
    if (*(int *)(param_1 + 0x10) == 0x109) {
      FUN_0016a400(param_1);
      if (*(int *)(param_1 + 0x10) == 0x124) {
        plVar22 = *(long **)(param_1 + 0x30);
        uVar11 = *(undefined8 *)(param_1 + 0x18);
        FUN_0016a400(param_1);
        FUN_00166260(param_1,uVar11);
        plVar21 = *(long **)(param_1 + 0x30);
        bVar4 = *(char *)((long)plVar21 + 0x3a) + 1;
        *(byte *)((long)plVar21 + 0x3a) = bVar4;
        *(int *)(*(long *)(*plVar21 + 0x50) +
                 (long)*(short *)(**(long **)(plVar21[2] + 0x58) +
                                 (long)(int)(*(int *)((long)plVar21 + 0x34) + (uint)bVar4 + -1) * 2)
                 * 0x10 + 8) = (int)plVar21[4];
        FUN_001659e0(param_1,&local_80,0,*(undefined4 *)(param_1 + 4));
        *(int *)(*(long *)(*plVar22 + 0x50) +
                 (long)*(short *)(**(long **)(plVar22[2] + 0x58) +
                                 (long)(*(int *)((long)plVar22 + 0x34) + local_78) * 2) * 0x10 + 8)
             = (int)plVar22[4];
        goto LAB_00164a20;
      }
    }
    else if (*(int *)(param_1 + 0x10) == 0x124) {
      unaff_x21 = 0xffffffff;
      unaff_w22 = 1;
      do {
        uVar20 = *(ulong *)(param_1 + 0x18);
        FUN_0016a400(param_1);
        FUN_00166260(param_1,uVar20);
        iVar17 = (int)unaff_x21;
        if (*(int *)(param_1 + 0x10) != 0x2c) {
          if (*(int *)(param_1 + 0x10) == 0x3d) {
            FUN_0016a400(param_1);
            FUN_00165360(param_1,&local_80,0);
            iVar19 = 1;
            iVar2 = *(int *)(param_1 + 0x10);
            while (iVar2 == 0x2c) {
              FUN_0016a400(param_1);
              FUN_00167c00(*(undefined8 *)(param_1 + 0x30),&local_80);
              FUN_00165360(param_1,&local_80,0);
              iVar19 = iVar19 + 1;
              iVar2 = *(int *)(param_1 + 0x10);
            }
          }
          else {
            iVar19 = 0;
            local_80 = local_80 & 0xffffffff00000000;
          }
          FUN_00166c80(param_1,-iVar17,iVar19,&local_80);
          plVar21 = *(long **)(param_1 + 0x30);
          bVar4 = *(byte *)((long)plVar21 + 0x3a);
          *(byte *)((long)plVar21 + 0x3a) = bVar4 - (char)unaff_x21;
          *(int *)(*(long *)(*plVar21 + 0x50) +
                   (long)*(short *)(**(long **)(plVar21[2] + 0x58) +
                                   (long)(int)(*(int *)((long)plVar21 + 0x34) +
                                               (bVar4 + unaff_w22 & 0xff) + iVar17) * 2) * 0x10 + 8)
               = (int)plVar21[4];
          while (iVar17 != -1) {
            iVar17 = iVar17 + 1;
            *(int *)(*(long *)(*plVar21 + 0x50) +
                     (long)*(short *)(**(long **)(plVar21[2] + 0x58) +
                                     (long)(int)(iVar17 + *(int *)((long)plVar21 + 0x34) +
                                                          (uint)*(byte *)((long)plVar21 + 0x3a)) * 2
                                     ) * 0x10 + 8) = (int)plVar21[4];
          }
          goto LAB_00164a20;
        }
        FUN_0016a400(param_1);
        unaff_x21 = (ulong)(iVar17 - 1);
        unaff_w22 = unaff_w22 + 1;
      } while (*(int *)(param_1 + 0x10) == 0x124);
    }
LAB_001646ec:
    uVar18 = (uint)uVar20;
    FUN_00166920(param_1,0x124);
LAB_001646f8:
    lVar16 = FUN_00161400(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(unaff_x23 + 0x20));
    *(long *)(unaff_x23 + 0x20) = lVar16;
LAB_00164718:
    lVar15 = unaff_x25 * 0x18;
    *(ulong *)(lVar16 + lVar15) = unaff_x24;
    *(uint *)(*(long *)(unaff_x23 + 0x20) + lVar15 + 0xc) = uVar18;
    *(undefined1 *)(*(long *)(unaff_x23 + 0x20) + lVar15 + 0x10) =
         *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x3a);
    *(uint *)(*(long *)(unaff_x23 + 0x20) + lVar15 + 8) = unaff_w22;
    *(int *)(unaff_x23 + 0x28) = unaff_w26;
    iVar17 = *(int *)(param_1 + 0x10);
    if (iVar17 < 0x120) goto LAB_0016477c;
    while (iVar17 == 0x120) {
      while( true ) {
        FUN_00163c30(param_1);
        iVar17 = *(int *)(param_1 + 0x10);
        if (0x11f < iVar17) break;
LAB_0016477c:
        if (iVar17 != 0x3b) {
          if (2 < iVar17 - 0x104U) goto LAB_001647a8;
          goto LAB_00164790;
        }
      }
    }
    if (iVar17 == 0x121) {
LAB_00164790:
      *(undefined1 *)(*(long *)(unaff_x23 + 0x20) + unaff_x25 * 0x18 + 0x10) =
           *(undefined1 *)(*(long *)(unaff_x21 + 0x18) + 0x10);
    }
LAB_001647a8:
    lVar16 = *(long *)(param_1 + 0x58);
    iVar17 = *(int *)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0xc);
    iVar19 = *(int *)(lVar16 + 0x18);
    if (iVar17 < iVar19) {
      plVar21 = (long *)(*(long *)(unaff_x23 + 0x20) + unaff_x25 * 0x18);
      do {
        while (*(long *)(*(long *)(lVar16 + 0x10) + (long)iVar17 * 0x18) != *plVar21) {
          iVar17 = iVar17 + 1;
          if (iVar19 <= iVar17) goto LAB_00164a20;
        }
        FUN_001667f0(param_1,iVar17,plVar21);
        iVar19 = *(int *)(lVar16 + 0x18);
      } while (iVar17 < iVar19);
    }
    goto LAB_00164a20;
  case 0x111:
    unaff_x21 = *(ulong *)(param_1 + 0x30);
    uVar9 = FUN_001671f0(unaff_x21);
    local_86 = 1;
    local_a0 = *(undefined1 *)(unaff_x21 + 0x3a);
    lVar16 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x58);
    local_90 = *(undefined4 *)(lVar16 + 0x28);
    uStack_8c = *(undefined4 *)(lVar16 + 0x18);
    local_87 = 0;
    local_98 = *(ulong *)(unaff_x21 + 0x18);
    local_b0 = &local_98;
    *(ulong **)(unaff_x21 + 0x18) = local_b0;
    local_9e = 0;
    lVar16 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x58);
    local_a8 = *(undefined4 *)(lVar16 + 0x28);
    uStack_a4 = *(undefined4 *)(lVar16 + 0x18);
    local_9f = '\0';
    *(ulong ***)(unaff_x21 + 0x18) = &local_b0;
    local_88 = local_a0;
    FUN_0016a400(param_1);
    do {
      iVar17 = *(int *)(param_1 + 0x10);
      if (iVar17 - 0x104U < 0x1e && (1 << (ulong)(iVar17 - 0x104U & 0x1f) & 0x20020007U) != 0)
      goto LAB_001641e4;
      FUN_00163c30(param_1);
    } while (iVar17 != 0x112);
    iVar17 = *(int *)(param_1 + 0x10);
LAB_001641e4:
    if (iVar17 == 0x115) {
      FUN_0016a400(param_1);
      FUN_00165360(param_1,&local_80,0);
      if ((int)local_80 == 1) {
        local_80 = CONCAT44(local_80._4_4_,3);
      }
      FUN_00168820(*(undefined8 *)(param_1 + 0x30),&local_80);
      if (local_9f != '\0') {
        FUN_00167440(unaff_x21,local_70._4_4_,local_a0);
      }
      FUN_00165020(unaff_x21);
      FUN_001672a0(unaff_x21,local_70._4_4_,uVar9);
LAB_0016465c:
      FUN_00165020(unaff_x21);
      goto LAB_00164a20;
    }
    if (*(uint *)(param_1 + 4) == uVar18) {
      FUN_00166920(param_1,0x115);
      goto LAB_00164b88;
    }
    goto LAB_00164bec;
  case 0x112:
    FUN_0016a400(param_1);
    uVar18 = *(int *)(param_1 + 0x10) - 0x104;
    plVar21 = *(long **)(param_1 + 0x30);
    uVar12 = 0;
    if ((uVar18 < 0x1e) && ((1 << (ulong)(uVar18 & 0x1f) & 0x20020007U) != 0)) {
      iVar17 = 0;
    }
    else {
      iVar17 = 0;
      if (*(int *)(param_1 + 0x10) != 0x3b) {
        FUN_00165360(param_1,&local_80,0);
        iVar17 = 1;
        iVar19 = *(int *)(param_1 + 0x10);
        while (iVar19 == 0x2c) {
          FUN_0016a400(param_1);
          FUN_00167c00(*(undefined8 *)(param_1 + 0x30),&local_80);
          FUN_00165360(param_1,&local_80,0);
          iVar17 = iVar17 + 1;
          iVar19 = *(int *)(param_1 + 0x10);
        }
        if ((int)local_80 - 0xdU < 2) {
          FUN_001679a0(plVar21,&local_80,0xffffffff);
          if ((iVar17 == 1) && ((int)local_80 == 0xd)) {
            *(uint *)(*(long *)(*plVar21 + 0x38) + (long)local_78 * 4) =
                 *(uint *)(*(long *)(*plVar21 + 0x38) + (long)local_78 * 4) & 0xffffffc0 | 0x25;
          }
          uVar12 = (uint)*(byte *)((long)plVar21 + 0x3a);
          iVar17 = -1;
        }
        else if (iVar17 == 1) {
          uVar12 = FUN_00168360();
        }
        else {
          FUN_00167c00(plVar21,&local_80);
          uVar12 = (uint)*(byte *)((long)plVar21 + 0x3a);
        }
      }
    }
    FUN_001671d0(plVar21,uVar12,iVar17);
    if (*(int *)(param_1 + 0x10) != 0x3b) goto LAB_00164a20;
    break;
  case 0x116:
    lVar16 = *(long *)(param_1 + 0x30);
    FUN_0016a400(param_1);
    uVar9 = FUN_001671f0(lVar16);
    FUN_00165360(param_1,&local_80,0);
    if ((int)local_80 == 1) {
      local_80 = CONCAT44(local_80._4_4_,3);
    }
    FUN_00168820(*(undefined8 *)(param_1 + 0x30),&local_80);
    local_86 = 1;
    local_88 = *(undefined1 *)(lVar16 + 0x3a);
    lVar15 = *(long *)(*(long *)(lVar16 + 0x10) + 0x58);
    local_90 = *(undefined4 *)(lVar15 + 0x28);
    uStack_8c = *(undefined4 *)(lVar15 + 0x18);
    local_87 = 0;
    local_98 = *(ulong *)(lVar16 + 0x18);
    uVar8 = local_70._4_4_;
    *(ulong **)(lVar16 + 0x18) = &local_98;
    if (*(int *)(param_1 + 0x10) == 0x103) {
      FUN_0016a400(param_1);
      lVar24 = *(long *)(param_1 + 0x30);
      uVar7 = local_70 >> 0x10;
      lVar15 = *(long *)(*(long *)(lVar24 + 0x10) + 0x58);
      local_78 = *(int *)(lVar15 + 0x28);
      uStack_74 = *(undefined4 *)(lVar15 + 0x18);
      local_70._0_2_ = (ushort)*(byte *)(lVar24 + 0x3a);
      local_70 = CONCAT62((int6)uVar7,(ushort)local_70) & 0xffffffffff00ffff;
      local_80 = *(ulong *)(lVar24 + 0x18);
      *(ulong **)(lVar24 + 0x18) = &local_80;
      do {
        iVar17 = *(int *)(param_1 + 0x10);
        uVar12 = iVar17 - 0x104;
        if (uVar12 < 0x1e && (1 << (ulong)(uVar12 & 0x1f) & 0x20020007U) != 0) break;
        FUN_00163c30(param_1);
      } while (iVar17 != 0x112);
      FUN_00165020(lVar24);
      uVar10 = FUN_001670f0(lVar16);
      FUN_001672a0(lVar16,uVar10,uVar9);
      if (*(int *)(param_1 + 0x10) == 0x106) {
        FUN_0016a400(param_1);
        FUN_00165020(lVar16);
        FUN_00167200(lVar16,uVar8);
        goto LAB_00164a20;
      }
    }
    else {
      FUN_00166920(param_1,0x103);
    }
    if (*(uint *)(param_1 + 4) != uVar18) {
      uVar23 = *(undefined8 *)(param_1 + 0x38);
      uVar11 = FUN_0016a120(param_1,0x106);
      uVar13 = 0x116;
      goto LAB_00164c20;
    }
    goto LAB_00164bc8;
  case 0x120:
    FUN_0016a400(param_1);
    if (*(int *)(param_1 + 0x10) != 0x124) goto LAB_001646ec;
    unaff_x24 = *(ulong *)(param_1 + 0x18);
    FUN_0016a400(param_1);
    unaff_x21 = *(ulong *)(param_1 + 0x30);
    unaff_x23 = *(long *)(param_1 + 0x58);
    iVar17 = *(int *)(*(long *)(unaff_x21 + 0x18) + 8);
    if (iVar17 < *(int *)(unaff_x23 + 0x28)) {
      puVar14 = (ulong *)(*(long *)(unaff_x23 + 0x20) + (long)iVar17 * 0x18);
      lVar16 = (long)*(int *)(unaff_x23 + 0x28) - (long)iVar17;
      do {
        if (*puVar14 == unaff_x24) {
          uVar11 = FUN_00162fa0(*(undefined8 *)(*(long *)(unaff_x21 + 0x10) + 0x38),
                                "label \'%s\' already defined on line %d",unaff_x24 + 0x18,
                                *(undefined4 *)((long)puVar14 + 0xc));
          FUN_00166910(*(undefined8 *)(unaff_x21 + 0x10),uVar11);
          goto LAB_00164b24;
        }
        puVar14 = puVar14 + 3;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    if (*(int *)(param_1 + 0x10) != 0x120) goto LAB_00164bd4;
    FUN_0016a400(param_1);
    unaff_w22 = FUN_001671f0(unaff_x21);
    iVar17 = *(int *)(unaff_x23 + 0x28);
    unaff_x25 = (long)iVar17;
    unaff_w26 = iVar17 + 1;
    if (*(int *)(unaff_x23 + 0x2c) <= iVar17) goto LAB_001646f8;
    lVar16 = *(long *)(unaff_x23 + 0x20);
    goto LAB_00164718;
  default:
    if (*(int *)(param_1 + 0x10) != 0x3b) goto switchD_00163c98_caseD_104;
  }
  FUN_0016a400(param_1);
LAB_00164a20:
  *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x3c) =
       *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x3a);
  *(short *)(*(long *)(param_1 + 0x38) + 0xc6) = *(short *)(*(long *)(param_1 + 0x38) + 0xc6) + -1;
  return;
}


