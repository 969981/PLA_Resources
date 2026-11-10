/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff2fb8; name: FUN_02ff2fb8
 */


void FUN_02ff2fb8(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  void *__src;
  int iVar4;
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  void *__dest;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  long *plVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long local_280;
  uint local_278;
  undefined8 local_270;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined7 uStack_257;
  
  plVar19 = (long *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x98) = 0;
  lVar3 = 0;
  if (*plVar19 != 0) {
    lVar3 = *plVar19 + (long)plVar19;
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_0331fefc(&local_280,&local_270,0x200);
    FUN_0332448c(&local_280,
                 "Trying to get enabled instances without calling MaskWriter::commitChanges() after modifying the mask. The result might be wrong. Please call commitChanges first."
                );
    FUN_03320af0(0x36b7e737,&local_270,
                 "../..\\Physics/Physics/Collide/Shape/Decorator/Masked/Compound/hknpMaskedCompoundShape.inl"
                 ,0x1b);
    FUN_0331ff7c(&local_280);
    if ((*(int *)(param_1 + 0x50) != 0) && (0 < *(int *)(param_1 + 0x98))) {
      uVar20 = 0;
      goto LAB_02ff30a0;
    }
  }
  lVar16 = *(long *)(param_1 + 0x48);
  lVar2 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar2 = *(long *)(param_1 + 0x40) + (long)plVar19;
  }
  uVar18 = *(uint *)(lVar2 + 0x50);
  lVar14 = 0;
  if (lVar16 != 0) {
    lVar14 = lVar16 + param_1 + 0x48;
  }
  if ((int)uVar18 < 1) {
    uVar20 = 0xffffffff;
  }
  else {
    uVar20 = 0;
    plVar1 = (long *)(lVar2 + 0x48);
    do {
      uVar17 = (ulong)(uVar20 & 0xffff);
      if ((((*(byte *)((long)plVar1 + uVar17 * 0x40 + *plVar1 + 0x1e) & 1) == 0) &&
          (uVar12 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar14 + 0x18) * 0x40 + 0x4040))
                              (lVar14,uVar17), (uVar12 & 1) != 0)) &&
         ((*(byte *)((long)plVar1 + uVar17 * 0x40 + *plVar1 + 0x1e) >> 6 & 1) != 0))
      goto LAB_02ff30a0;
      uVar20 = uVar20 + 1;
    } while (uVar18 != uVar20);
    uVar20 = 0xffffffff;
  }
LAB_02ff30a0:
  uVar18 = 0;
  local_280 = param_1;
  if (uVar20 == 0xffffffff) {
    auVar21._8_4_ = 0xff7fffee;
    auVar21._0_8_ = 0xff7fffeeff7fffee;
    auVar21._12_4_ = 0xff7fffee;
    auVar22._8_4_ = 0x7f7fffee;
    auVar22._0_8_ = 0x7f7fffee7f7fffee;
    auVar22._12_4_ = 0x7f7fffee;
    local_278 = 0xffffffff;
  }
  else {
    auVar22._8_4_ = 0x7f7fffee;
    auVar22._0_8_ = 0x7f7fffee7f7fffee;
    auVar22._12_4_ = 0x7f7fffee;
    auVar21._8_4_ = 0xff7fffee;
    auVar21._0_8_ = 0xff7fffeeff7fffee;
    auVar21._12_4_ = 0xff7fffee;
    local_278 = uVar20;
    do {
      uVar13 = FUN_02ff3b64(&local_280);
      uVar18 = uVar18 + 1;
      FUN_02fa2840(uVar13,&local_270);
      auVar8[8] = uStack_268;
      auVar8._0_8_ = local_270;
      auVar5[8] = uStack_258;
      auVar5._0_8_ = uStack_260;
      auVar5[9] = (char)uStack_257;
      auVar5[10] = (char)((uint7)uStack_257 >> 8);
      auVar5[0xb] = (char)((uint7)uStack_257 >> 0x10);
      auVar5[0xc] = (char)((uint7)uStack_257 >> 0x18);
      auVar5[0xd] = (char)((uint7)uStack_257 >> 0x20);
      auVar5[0xe] = (char)((uint7)uStack_257 >> 0x28);
      auVar5[0xf] = (char)((uint7)uStack_257 >> 0x30);
      auVar21 = NEON_fmax(auVar21,auVar5,4);
      auVar8[9] = (char)uStack_267;
      auVar8[10] = (char)((uint7)uStack_267 >> 8);
      auVar8[0xb] = (char)((uint7)uStack_267 >> 0x10);
      auVar8[0xc] = (char)((uint7)uStack_267 >> 0x18);
      auVar8[0xd] = (char)((uint7)uStack_267 >> 0x20);
      auVar8[0xe] = (char)((uint7)uStack_267 >> 0x28);
      auVar8[0xf] = (char)((uint7)uStack_267 >> 0x30);
      auVar22 = NEON_fmin(auVar22,auVar8,4);
      if ((*(int *)(param_1 + 0x50) == 0) || (*(int *)(param_1 + 0x98) < 1)) {
        lVar2 = 0;
        if (*plVar19 != 0) {
          lVar2 = *plVar19 + (long)plVar19;
        }
        lVar14 = *(long *)(param_1 + 0x48);
        iVar4 = *(int *)(lVar2 + 0x50);
        local_278 = uVar20 + 1;
        lVar16 = 0;
        if (lVar14 != 0) {
          lVar16 = lVar14 + param_1 + 0x48;
        }
        if (iVar4 <= (int)local_278) {
LAB_02ff31f4:
          local_278 = 0xffffffff;
          break;
        }
        plVar1 = (long *)(lVar2 + 0x48);
        while( true ) {
          uVar20 = local_278;
          uVar17 = (ulong)(local_278 & 0xffff);
          if ((((*(byte *)((long)plVar1 + uVar17 * 0x40 + *plVar1 + 0x1e) & 1) == 0) &&
              (uVar12 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar16 + 0x18) * 0x40 + 0x4040)
                        )(lVar16,uVar17), (uVar12 & 1) != 0)) &&
             ((*(byte *)((long)plVar1 + uVar17 * 0x40 + *plVar1 + 0x1e) >> 6 & 1) != 0)) break;
          local_278 = uVar20 + 1;
          if (iVar4 <= (int)local_278) goto LAB_02ff31f4;
        }
      }
      else {
        local_278 = 0xffffffff;
        if ((int)(uVar20 + 1) < *(int *)(param_1 + 0x98)) {
          local_278 = uVar20 + 1;
        }
        uVar20 = local_278;
      }
    } while (uVar20 != 0xffffffff);
  }
  if ((int)(uVar18 * 4) < *(int *)(lVar3 + 0x5c)) {
    uVar20 = *(uint *)(param_1 + 0x9c) & 0x7fffffff;
    if ((int)uVar20 <= (int)*(uint *)(param_1 + 0x98)) {
      uVar20 = *(uint *)(param_1 + 0x98);
    }
    lVar2 = param_1 + 0x90;
    if ((int)uVar20 < (int)uVar18) {
      lVar16 = tpidr_el0;
      lVar14 = *(long *)(lVar16 + 0x38d490);
      if (lVar14 == 0) {
        lVar14 = FUN_0333d16c(0,1);
        *(long *)(lVar16 + 0x38d490) = lVar14;
      }
      plVar19 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
      __dest = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar18 << 1,0);
      __src = (void *)0x0;
      if (*(long *)(param_1 + 0x90) != 0) {
        __src = (void *)(*(long *)(param_1 + 0x90) + lVar2);
      }
      memcpy(__dest,__src,(long)*(int *)(param_1 + 0x98) << 1);
      if ((int)*(uint *)(param_1 + 0x9c) < 0) {
        uVar20 = *(uint *)(param_1 + 0x9c) & 0x7fffffff;
        if ((int)uVar20 <= (int)*(uint *)(param_1 + 0x98)) {
          uVar20 = *(uint *)(param_1 + 0x98);
        }
        lVar14 = 0;
        if (*(long *)(param_1 + 0x90) != 0) {
          lVar14 = *(long *)(param_1 + 0x90) + lVar2;
        }
        lVar15 = *(long *)(lVar16 + 0x38d490);
        if (lVar15 == 0) {
          lVar15 = FUN_0333d16c(0,1,uVar20 << 1);
          *(long *)(lVar16 + 0x38d490) = lVar15;
        }
        plVar19 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar14,uVar20 << 1);
      }
      lVar16 = 0;
      if (__dest != (void *)0x0) {
        lVar16 = (long)__dest - lVar2;
      }
      *(long *)(param_1 + 0x90) = lVar16;
      *(uint *)(param_1 + 0x9c) = uVar18 | 0x80000000;
    }
    plVar19 = (long *)(lVar3 + 0x48);
    uVar20 = 0;
    do {
      uVar18 = uVar20;
      if (*(int *)(lVar3 + 0x50) <= (int)uVar18) goto LAB_02ff338c;
      lVar16 = *plVar19;
      uVar20 = uVar18 + 1;
    } while ((*(byte *)((long)plVar19 + (ulong)(uVar18 & 0xffff) * 0x40 + lVar16 + 0x1e) & 1) != 0);
    if (uVar18 + 1 != 0) {
      do {
        if ((*(byte *)((long)plVar19 + (ulong)(uVar18 & 0xffff) * 0x40 + lVar16 + 0x1e) >> 6 & 1) !=
            0) {
          lVar14 = *(long *)(param_1 + 0x48);
          lVar16 = 0;
          if (lVar14 != 0) {
            lVar16 = lVar14 + param_1 + 0x48;
          }
          uVar17 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar16 + 0x18) * 0x40 + 0x4040))();
          if ((uVar17 & 1) != 0) {
            iVar4 = *(int *)(param_1 + 0x98);
            if (*(int *)(param_1 + 0x9c) == 0) {
              *(int *)(param_1 + 0x9c) = iVar4;
            }
            *(int *)(param_1 + 0x98) = iVar4 + 1;
            *(short *)(*(long *)(param_1 + 0x90) + lVar2 + (long)iVar4 * 2) = (short)uVar18;
          }
        }
        uVar20 = uVar18 + 1;
        do {
          uVar18 = uVar20;
          if (*(int *)(lVar3 + 0x50) <= (int)uVar18) goto LAB_02ff338c;
          lVar16 = *plVar19;
          uVar20 = uVar18 + 1;
        } while ((*(byte *)((long)plVar19 + (ulong)(uVar18 & 0xffff) * 0x40 + lVar16 + 0x1e) & 1) !=
                 0);
      } while (uVar18 + 1 != 0);
    }
  }
LAB_02ff338c:
  iVar9 = -(uint)((float)*(undefined8 *)(param_1 + 0x80) == auVar21._0_4_);
  iVar10 = -(uint)((float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20) == auVar21._4_4_);
  iVar11 = -(uint)((float)*(undefined8 *)(param_1 + 0x88) == auVar21._8_4_);
  iVar4 = -(uint)((float)*(undefined8 *)(param_1 + 0x70) == auVar22._0_4_);
  iVar6 = -(uint)((float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20) == auVar22._4_4_);
  iVar7 = -(uint)((float)*(undefined8 *)(param_1 + 0x78) == auVar22._8_4_);
  if ((CONCAT13((byte)((uint)iVar9 >> 0x18) & (byte)((uint)iVar4 >> 0x18),
                CONCAT12((byte)((uint)iVar9 >> 0x10) & (byte)((uint)iVar4 >> 0x10),
                         CONCAT11((byte)((uint)iVar9 >> 8) & (byte)((uint)iVar4 >> 8),
                                  (byte)iVar9 & (byte)iVar4))) &
       CONCAT13((byte)((uint)iVar10 >> 0x18) & (byte)((uint)iVar6 >> 0x18),
                CONCAT12((byte)((uint)iVar10 >> 0x10) & (byte)((uint)iVar6 >> 0x10),
                         CONCAT11((byte)((uint)iVar10 >> 8) & (byte)((uint)iVar6 >> 8),
                                  (byte)iVar10 & (byte)iVar6))) &
      CONCAT13((byte)((uint)iVar11 >> 0x18) & (byte)((uint)iVar7 >> 0x18),
               CONCAT12((byte)((uint)iVar11 >> 0x10) & (byte)((uint)iVar7 >> 0x10),
                        CONCAT11((byte)((uint)iVar11 >> 8) & (byte)((uint)iVar7 >> 8),
                                 (byte)iVar11 & (byte)iVar7)))) == 0) {
    uVar13 = 0xb;
    *(long *)(param_1 + 0x78) = auVar22._8_8_;
    *(long *)(param_1 + 0x70) = auVar22._0_8_;
    *(long *)(param_1 + 0x88) = auVar21._8_8_;
    *(long *)(param_1 + 0x80) = auVar21._0_8_;
  }
  else {
    uVar13 = 10;
  }
  FUN_02f6ff60(param_1 + 0x58,param_1,uVar13);
  return;
}


