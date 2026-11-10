/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff2cfc; name: FUN_02ff2cfc
 */


void FUN_02ff2cfc(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  long local_280;
  uint local_278;
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  
  if ((param_2 & 1) == 0) goto LAB_02ff2d28;
  auVar12._8_4_ = 0x7f7fffee;
  auVar12._0_8_ = 0x7f7fffee7f7fffee;
  auVar12._12_4_ = 0x7f7fffee;
  *(long *)(param_1 + 0x78) = auVar12._8_8_;
  *(undefined8 *)(param_1 + 0x70) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(param_1 + 0x88) = 0xff7fffeeff7fffee;
  *(undefined8 *)(param_1 + 0x80) = 0xff7fffeeff7fffee;
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_0331fefc(&local_280,local_270,0x200);
    FUN_0332448c(&local_280,
                 "Trying to get enabled instances without calling MaskWriter::commitChanges() after modifying the mask. The result might be wrong. Please call commitChanges first."
                );
    FUN_03320af0(0x36b7e737,local_270,
                 "../..\\Physics/Physics/Collide/Shape/Decorator/Masked/Compound/hknpMaskedCompoundShape.inl"
                 ,0x1b);
    FUN_0331ff7c(&local_280);
    if (*(int *)(param_1 + 0x50) != 0) goto LAB_02ff2d7c;
LAB_02ff2f08:
    lVar8 = *(long *)(param_1 + 0x40);
    lVar2 = 0;
    if (lVar8 != 0) {
      lVar2 = lVar8 + param_1 + 0x40;
    }
    lVar9 = *(long *)(param_1 + 0x48);
    uVar4 = *(uint *)(lVar2 + 0x50);
    lVar8 = 0;
    if (lVar9 != 0) {
      lVar8 = lVar9 + param_1 + 0x48;
    }
    if ((int)uVar4 < 1) {
      uVar11 = 0xffffffff;
    }
    else {
      uVar11 = 0;
      plVar1 = (long *)(lVar2 + 0x48);
      do {
        uVar10 = (ulong)(uVar11 & 0xffff);
        if ((((*(byte *)((long)plVar1 + uVar10 * 0x40 + *plVar1 + 0x1e) & 1) == 0) &&
            (uVar7 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar8 + 0x18) * 0x40 + 0x4040))
                               (lVar8,uVar10), (uVar7 & 1) != 0)) &&
           ((*(byte *)((long)plVar1 + uVar10 * 0x40 + *plVar1 + 0x1e) >> 6 & 1) != 0))
        goto LAB_02ff2d8c;
        uVar11 = uVar11 + 1;
      } while (uVar4 != uVar11);
      uVar11 = 0xffffffff;
    }
  }
  else {
LAB_02ff2d7c:
    if (*(int *)(param_1 + 0x98) < 1) goto LAB_02ff2f08;
    uVar11 = 0;
  }
LAB_02ff2d8c:
  local_280 = param_1;
  local_278 = uVar11;
  if (uVar11 != 0xffffffff) {
    do {
      uVar6 = FUN_02ff3b64(&local_280);
      FUN_02fa2840(uVar6,local_270);
      auVar5._12_4_ = (int)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
      auVar5._0_12_ = *(undefined1 (*) [12])(param_1 + 0x70);
      auVar12 = NEON_fmin(auVar5,local_270,4);
      *(long *)(param_1 + 0x78) = auVar12._8_8_;
      *(long *)(param_1 + 0x70) = auVar12._0_8_;
      auVar12 = NEON_fmax(*(undefined1 (*) [16])(param_1 + 0x80),local_260,4);
      *(long *)(param_1 + 0x88) = auVar12._8_8_;
      *(long *)(param_1 + 0x80) = auVar12._0_8_;
      if ((*(int *)(param_1 + 0x50) == 0) || (*(int *)(param_1 + 0x98) < 1)) {
        lVar8 = *(long *)(param_1 + 0x40);
        lVar2 = 0;
        if (lVar8 != 0) {
          lVar2 = lVar8 + param_1 + 0x40;
        }
        lVar9 = *(long *)(param_1 + 0x48);
        iVar3 = *(int *)(lVar2 + 0x50);
        local_278 = uVar11 + 1;
        lVar8 = 0;
        if (lVar9 != 0) {
          lVar8 = lVar9 + param_1 + 0x48;
        }
        if (iVar3 <= (int)local_278) {
LAB_02ff2eb4:
          local_278 = 0xffffffff;
          break;
        }
        plVar1 = (long *)(lVar2 + 0x48);
        while( true ) {
          uVar11 = local_278;
          uVar10 = (ulong)(local_278 & 0xffff);
          if ((((*(byte *)((long)plVar1 + uVar10 * 0x40 + *plVar1 + 0x1e) & 1) == 0) &&
              (uVar7 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar8 + 0x18) * 0x40 + 0x4040))
                                 (lVar8,uVar10), (uVar7 & 1) != 0)) &&
             ((*(byte *)((long)plVar1 + uVar10 * 0x40 + *plVar1 + 0x1e) >> 6 & 1) != 0)) break;
          local_278 = uVar11 + 1;
          if (iVar3 <= (int)local_278) goto LAB_02ff2eb4;
        }
      }
      else {
        local_278 = 0xffffffff;
        if ((int)(uVar11 + 1) < *(int *)(param_1 + 0x98)) {
          local_278 = uVar11 + 1;
        }
        uVar11 = local_278;
      }
    } while (uVar11 != 0xffffffff);
  }
LAB_02ff2d28:
  FUN_02f6ff60(param_1 + 0x58,param_1,param_2);
  return;
}


