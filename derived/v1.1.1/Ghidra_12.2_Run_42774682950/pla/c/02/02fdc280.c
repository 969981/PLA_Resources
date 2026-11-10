/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fdc280; name: FUN_02fdc280
 */


void FUN_02fdc280(long *param_1,undefined1 param_2 [16],undefined8 *param_3,undefined8 *param_4)

{
  undefined1 (*pauVar1) [12];
  uint uVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  bool bVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  int iVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar33;
  undefined1 auVar25 [12];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uVar34;
  undefined1 auVar35 [12];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  ulong uStack_738;
  long *local_550;
  long local_548;
  long local_540;
  undefined8 uStack_538;
  long local_530;
  undefined8 uStack_528;
  undefined8 *local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  float fStack_504;
  float fStack_4f4;
  long *local_108;
  long local_100 [6];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined2 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined7 uStack_90;
  undefined1 local_89;
  undefined7 uStack_88;
  undefined8 *local_80;
  undefined8 local_78;
  float local_54;
  
  puVar9 = PTR_PTR_0434a080;
  auVar27._0_8_ = param_2._0_8_;
  local_54 = param_2._0_4_;
  uVar34 = param_2._8_8_;
  local_80 = (undefined8 *)*param_3;
  local_78 = param_3[1];
  local_c0 = *(undefined2 *)(param_4 + 2);
  local_d0 = *param_4;
  uStack_c8 = param_4[1];
  local_b0 = 0xffffffff;
  uStack_a8 = 1;
  local_b8 = &DAT_042d95d8;
  local_a0 = param_4[6];
  local_98 = *(undefined4 *)(param_4 + 7);
  lVar17 = param_4[8];
  uStack_88 = (undefined7)((ulong)*(undefined8 *)((long)param_4 + 0x47) >> 8);
  uStack_90 = (undefined7)lVar17;
  local_89 = (undefined1)((ulong)lVar17 >> 0x38);
  if (lVar17 != 0) {
    iVar12 = (int)local_78;
    local_520 = (undefined8 *)CONCAT44(local_520._4_4_,(int)local_78);
    if ((int)local_78 < 1) {
      iVar12 = 0;
      puVar13 = (undefined8 *)0x0;
      uVar20 = 0x80000000;
    }
    else {
      puVar13 = (undefined8 *)FUN_032cf190(PTR_PTR_0434a080,0x10,&local_520);
      uVar20 = (uint)local_520;
      if (0 < (int)local_78) {
        lVar17 = 0;
        puVar14 = puVar13;
        do {
          pauVar1 = (undefined1 (*) [12])((long)local_80 + (long)(local_78._4_4_ * (int)lVar17));
          uVar8 = *(undefined8 *)*pauVar1;
          uVar39 = 0;
          if (0xf < local_78._4_4_) {
            uVar39 = *(undefined4 *)pauVar1[1];
          }
          auVar26._12_4_ = uVar39;
          auVar26._0_12_ = *pauVar1;
          puVar14[1] = auVar26._8_8_;
          *puVar14 = uVar8;
          FUN_032cc3fc(puVar14,CONCAT17(local_89,uStack_90),puVar14);
          lVar17 = lVar17 + 1;
          puVar14 = puVar14 + 2;
        } while (lVar17 < (int)local_78);
      }
    }
    auVar27._8_8_ = uVar34;
    uStack_90 = 0;
    local_89 = 0;
    uStack_518 = CONCAT44(0x10,iVar12);
    local_520 = puVar13;
    FUN_02fdc280(param_1,auVar27,&local_520,&local_d0);
    if ((int)uVar20 < 0) {
      return;
    }
    if (puVar13 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)(*(long *)puVar9 + 0x18))(puVar9,puVar13,(ulong)(uVar20 & 0x3fffffff) << 4);
    return;
  }
  uStack_c8._4_4_ = (float)((ulong)uStack_c8 >> 0x20);
  bVar11 = 0.0 <= uStack_c8._4_4_;
  if (bVar11) {
    fVar22 = (float)FUN_0335fa00(&local_520,&local_80);
    if (uStack_c8._4_4_ <= fVar22) {
      uStack_740 = CONCAT44(fStack_504 + 0.0,uStack_518._4_4_ + 0.0);
      uStack_748 = (ulong)(uint)(0.0 - fStack_4f4);
      local_750 = CONCAT44(0.0 - fStack_504,0.0 - uStack_518._4_4_);
      uStack_738 = (ulong)(uint)(fStack_4f4 + 0.0);
      auVar28._8_8_ = uVar34;
      auVar28._0_8_ = auVar27._0_8_;
      uStack_90 = SUB87(&local_520,0);
      local_89 = (undefined1)((ulong)&local_520 >> 0x38);
      FUN_02fd74cc(local_100,auVar28,&local_750,&local_d0);
      *param_1 = local_100[0];
      return;
    }
  }
  FUN_001b1d70(local_100);
  puVar9 = PTR_PTR_0434a080;
  local_520 = &local_510;
  local_108 = (long *)0x0;
  uStack_518 = 0x8000004000000000;
  if ((char)local_c0 == '\0') {
    if ((int)local_78 < 0xfd) {
      if (0 < (int)local_78) {
        iVar12 = 1;
        puVar13 = local_80;
        uVar20 = 0x80000040;
        uVar16 = 0;
        while( true ) {
          puVar14 = local_520;
          uVar2 = uVar16 + 1;
          if ((int)uVar16 < (int)(uVar20 & 0x3fffffff)) {
          }
          else {
            if (0x3ffffffe < (int)uVar16) {
              FUN_032bd0a8(uVar2);
              uVar20 = (uint)uStack_518._4_4_;
            }
            uVar20 = (uVar20 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar20) {
              uVar20 = 0x3fffffff;
            }
            uVar4 = uVar2;
            if ((int)uVar2 <= (int)uVar20) {
              uVar4 = uVar20;
            }
            local_520 = (undefined8 *)
                        FUN_032bd1d4(puVar9,uVar4,0x10,puVar14,uVar16,(ulong)&local_520 | 0xc);
            uVar16 = (uint)uStack_518;
          }
          uStack_518 = CONCAT44(uStack_518._4_4_,uVar2);
          uVar34 = *puVar13;
          (local_520 + (long)(int)uVar16 * 2)[1] =
               CONCAT44(*(undefined4 *)(puVar13 + 1),*(undefined4 *)(puVar13 + 1));
          local_520[(long)(int)uVar16 * 2] = uVar34;
          if ((int)local_78 <= iVar12) break;
          puVar13 = (undefined8 *)((long)local_78._4_4_ + (long)puVar13);
          iVar12 = iVar12 + 1;
          uVar20 = (uint)uStack_518._4_4_;
          uVar16 = uVar2;
        }
      }
    }
    else {
      iVar12 = FUN_02fdcc60(&local_80,&local_54,&local_d0,local_100,&local_108);
      if (iVar12 < 0) {
        FUN_0331fefc(&local_530,&local_750,0x200);
        FUN_0332448c(&local_530,
                     "Couldn\'t create and simplify the hull from provided vertices! Dropping anything after 252nd vertex!"
                    );
        FUN_03320af0(0xabba3579,&local_750,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Physics/Physics/Collide/Shape/Convex/hknpConvexShape.cpp"
                     ,0x206);
        FUN_0331ff7c(&local_530);
        puVar9 = PTR_PTR_0434a080;
        if (0 < (int)local_78) {
          iVar12 = 0;
          puVar13 = local_80;
          do {
            uVar10 = uStack_518;
            puVar14 = local_520;
            uVar20 = (uint)uStack_518 + 1;
            if ((int)(uint)uStack_518 < (int)((uint)uStack_518._4_4_ & 0x3fffffff)) {
              iVar21 = (uint)uStack_518;
            }
            else {
              if (0x3ffffffe < (int)(uint)uStack_518) {
                FUN_032bd0a8(uVar20);
              }
              uVar16 = ((uint)uStack_518._4_4_ & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar16) {
                uVar16 = 0x3fffffff;
              }
              uVar2 = uVar20;
              if ((int)uVar20 <= (int)uVar16) {
                uVar2 = uVar16;
              }
              local_520 = (undefined8 *)
                          FUN_032bd1d4(puVar9,uVar2,0x10,puVar14,uVar10 & 0xffffffff,
                                       (ulong)&local_520 | 0xc);
              iVar21 = (uint)uStack_518;
            }
            uStack_518 = CONCAT44(uStack_518._4_4_,uVar20);
            uVar34 = *puVar13;
            iVar12 = iVar12 + 1;
            (local_520 + (long)iVar21 * 2)[1] =
                 CONCAT44(*(undefined4 *)(puVar13 + 1),*(undefined4 *)(puVar13 + 1));
            local_520[(long)iVar21 * 2] = uVar34;
            puVar13 = (undefined8 *)((long)local_78._4_4_ + (long)puVar13);
            iVar21 = (int)local_78;
            if (0xfb < (int)local_78) {
              iVar21 = 0xfc;
            }
          } while (iVar12 < iVar21);
        }
        plVar15 = local_108;
        local_108 = (long *)0x0;
        if ((plVar15 == (long *)0x0) || (plVar15[1] == 0)) goto LAB_02fdc838;
        plVar3 = plVar15 + 2;
        do {
          lVar17 = *plVar3 + -1;
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar11) {
            *plVar3 = lVar17;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto LAB_02fdc834;
      }
      FUN_001bb028(local_100,1,&local_520);
    }
  }
  else {
    *param_1 = 0;
    if ((int)local_78 == 3) {
      uVar24 = 0;
      uVar23 = 0;
      local_750 = *local_80;
      uVar39 = uVar24;
      if (0xf < local_78._4_4_) {
        uVar39 = *(undefined4 *)((long)local_80 + 0xc);
      }
      plVar15 = (long *)((long)local_80 + (long)local_78._4_4_);
      uStack_748 = CONCAT44(uVar39,*(undefined4 *)(local_80 + 1));
      local_530 = *plVar15;
      if (0xf < local_78._4_4_) {
        uVar24 = *(undefined4 *)((long)plVar15 + 0xc);
      }
      pauVar1 = (undefined1 (*) [12])((long)local_80 + (long)local_78._4_4_ * 2);
      uStack_528 = CONCAT44(uVar24,(int)plVar15[1]);
      auVar25 = *pauVar1;
      if (0xf < local_78._4_4_) {
        uVar23 = *(undefined4 *)pauVar1[1];
      }
      auVar36._12_4_ = uVar23;
      auVar36._0_12_ = auVar25;
      auVar29._8_8_ = uVar34;
      auVar29._0_8_ = auVar27._0_8_;
      uStack_538 = auVar36._8_8_;
      local_540 = auVar25._0_8_;
      FUN_02fda744(&local_548,auVar29,&local_750,&local_530,&local_540);
      *param_1 = local_548;
joined_r0x02fdc720:
      if ((local_548 != 0) &&
         (local_c0._1_1_ = (char)((ushort)local_c0 >> 8), bVar11 = local_c0._1_1_ != '\0', bVar11))
      {
        FUN_02feceb0(local_548,&local_b8);
      }
joined_r0x02fdc7f8:
      if (local_548 != 0) goto LAB_02fdc9d0;
    }
    else {
      if ((int)local_78 == 2) {
        uVar39 = 0;
        uVar24 = 0;
        local_750 = *local_80;
        if (0xf < local_78._4_4_) {
          uVar39 = *(undefined4 *)((long)local_80 + 0xc);
        }
        uStack_748 = CONCAT44(uVar39,*(undefined4 *)(local_80 + 1));
        auVar25 = *(undefined1 (*) [12])((long)local_80 + (long)local_78._4_4_);
        if (0xf < local_78._4_4_) {
          uVar24 = *(undefined4 *)((undefined1 (*) [12])((long)local_80 + (long)local_78._4_4_))[1];
        }
        auVar37._12_4_ = uVar24;
        auVar37._0_12_ = auVar25;
        auVar30._8_8_ = uVar34;
        auVar30._0_8_ = auVar27._0_8_;
        uStack_528 = auVar37._8_8_;
        local_530 = auVar25._0_8_;
        FUN_02fd86b0(&local_540,auVar30,&local_750,&local_530);
        *param_1 = local_540;
        local_548 = local_540;
        goto joined_r0x02fdc720;
      }
      if ((int)local_78 == 1) {
        local_750 = *local_80;
        if (local_78._4_4_ < 0x10) {
          uVar39 = 0;
        }
        else {
          uVar39 = *(undefined4 *)((long)local_80 + 0xc);
        }
        uStack_748 = CONCAT44(uVar39,*(undefined4 *)(local_80 + 1));
        auVar31._8_8_ = uVar34;
        auVar31._0_8_ = auVar27._0_8_;
        FUN_02fd8bf8(&local_530,auVar31,&local_750);
        *param_1 = local_530;
        local_548 = local_530;
        goto joined_r0x02fdc720;
      }
      iVar12 = FUN_02fdcc60(&local_80,&local_54,&local_d0,local_100,&local_108);
      if (-1 < iVar12) {
        local_550 = local_108;
        if (local_108 != (long *)0x0) {
          FUN_032d645c();
        }
        local_548 = FUN_02fdd29c(local_100,&local_550,&local_d0);
        if (local_548 != 0) {
          *param_1 = local_548;
        }
        if ((local_550 != (long *)0x0) && (local_550[1] != 0)) {
          plVar15 = local_550 + 2;
          do {
            lVar17 = *plVar15;
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar11) {
              *plVar15 = lVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar17 + -1 == 0) {
            (**(code **)(*local_550 + 0x18))();
          }
        }
        goto joined_r0x02fdc7f8;
      }
    }
    FUN_001bb028(local_100,1,&local_520);
    plVar15 = local_108;
    local_108 = (long *)0x0;
    if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
      plVar3 = plVar15 + 2;
      do {
        lVar17 = *plVar3 + -1;
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar11) {
          *plVar3 = lVar17;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_02fdc834:
      local_108 = (long *)0x0;
      if (lVar17 == 0) {
        (**(code **)(*plVar15 + 0x18))();
      }
    }
  }
LAB_02fdc838:
  uVar16 = (uint)uStack_518;
  uVar20 = (uint)uStack_518 * 0xc + 0x8f & 0xfffffff0;
  lVar17 = tpidr_el0;
  lVar18 = *(long *)(lVar17 + 0x38d490);
  if (lVar18 == 0) {
    lVar18 = FUN_0333d16c(0,1);
    *(long *)(lVar17 + 0x38d490) = lVar18;
  }
  plVar15 = *(long **)(*(long *)(lVar18 + 8) + 0x58);
  puVar13 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15,(long)(int)uVar20,0);
  memset(puVar13,0,(ulong)uVar20);
  puVar13[2] = 1;
  *(undefined4 *)(puVar13 + 3) = 0x10200;
  *puVar13 = &PTR_LAB_042ba6e0;
  puVar13[1] = (long)(int)uVar20;
  *(undefined2 *)(puVar13 + 0xe) = 0x7f7f;
  *(undefined1 *)((long)puVar13 + 0x1c) = 0;
  puVar13[5] = 0;
  *(float *)(puVar13 + 4) = local_54;
  puVar13[6] = 0;
  puVar13[7] = 0;
  *(undefined4 *)(puVar13 + 8) = 0x40;
  *(uint *)((long)puVar13 + 0x44) = uVar16 & 0xffff;
  puVar13[9] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  if ((uint)uStack_518 == 1) {
    *(undefined2 *)((long)puVar13 + 0x1a) = 0x11;
LAB_02fdc908:
    lVar17 = 0;
    auVar32._8_4_ = 0x7f7fffee;
    auVar32._0_8_ = 0x7f7fffee7f7fffee;
    auVar32._12_4_ = 0x7f7fffee;
    auVar38._8_4_ = 0xff7fffee;
    auVar38._0_8_ = 0xff7fffeeff7fffee;
    auVar38._12_4_ = 0xff7fffee;
    puVar14 = puVar13 + 0x11;
    do {
      pauVar1 = (undefined1 (*) [12])(local_520 + lVar17 * 2);
      uVar39 = (undefined4)*(undefined8 *)(*pauVar1 + 8);
      auVar35 = *pauVar1;
      auVar25 = *pauVar1;
      puVar14[-1] = *(undefined8 *)*pauVar1;
      *(undefined4 *)puVar14 = uVar39;
      puVar14 = (undefined8 *)((long)puVar14 + 0xc);
      lVar17 = lVar17 + 1;
      auVar6._12_4_ = uVar39;
      auVar6._0_12_ = auVar25;
      auVar32 = NEON_fmin(auVar32,auVar6,4);
      auVar25 = auVar32._0_12_;
      auVar7._12_4_ = uVar39;
      auVar7._0_12_ = auVar35;
      auVar38 = NEON_fmax(auVar38,auVar7,4);
      auVar35 = auVar38._0_12_;
    } while (lVar17 < (int)(uint)uStack_518);
    fVar22 = *(float *)(puVar13 + 4);
  }
  else {
    if (0 < (int)(uint)uStack_518) goto LAB_02fdc908;
    auVar35._8_4_ = 0xff7fffee;
    auVar35._0_8_ = 0xff7fffeeff7fffee;
    auVar25._8_4_ = 0x7f7fffee;
    auVar25._0_8_ = 0x7f7fffee7f7fffee;
    fVar22 = local_54;
  }
  uVar34 = CONCAT44((auVar35._4_4_ - auVar25._4_4_) * 0.5,(auVar35._0_4_ - auVar25._0_4_) * 0.5);
  fVar33 = (auVar35._8_4_ - auVar25._8_4_) * 0.5;
  uVar34 = NEON_fminp(uVar34,uVar34,4);
  uVar34 = NEON_fmin(CONCAT44(fVar33,fVar33),uVar34,4);
  *(short *)(puVar13 + 0xe) =
       (short)((uint)(DAT_042b0ab0 * (fVar22 + (float)uVar34) * 1.0039062) >> 0x10);
  if (local_c0._1_1_ != '\0') {
    if (local_108 == (long *)0x0) {
      FUN_02feceb0(puVar13,&local_b8);
    }
    else {
      FUN_0328ef98(local_108 + 4,&local_750);
      FUN_02fed11c(puVar13,&local_750);
    }
  }
  *param_1 = (long)puVar13;
LAB_02fdc9d0:
  uVar10 = uStack_518;
  uVar19 = (ulong)(uint)uStack_518._4_4_;
  uStack_518 = (ulong)(uint)uStack_518._4_4_ << 0x20;
  if ((-1 < (long)uVar10) && (local_520 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_520,(uVar19 & 0x3fffffff) << 4);
  }
  if ((local_108 != (long *)0x0) && (local_108[1] != 0)) {
    plVar15 = local_108 + 2;
    do {
      lVar17 = *plVar15;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar11) {
        *plVar15 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 + -1 == 0) {
      (**(code **)(*local_108 + 0x18))();
    }
  }
  FUN_001b1ed4(local_100);
  return;
}


