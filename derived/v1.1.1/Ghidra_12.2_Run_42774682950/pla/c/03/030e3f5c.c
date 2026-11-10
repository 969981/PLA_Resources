/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030e3f5c; name: FUN_030e3f5c
 */


void FUN_030e3f5c(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  char *pcVar8;
  undefined *puVar9;
  long lVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  long lVar13;
  uint *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  int iVar19;
  ulong *puVar20;
  ulong *puVar21;
  uint *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong *puVar27;
  uint uVar28;
  uint uVar29;
  undefined8 *puVar30;
  ulong uVar31;
  long **pplVar32;
  long lVar33;
  uint uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  long **local_5a8;
  undefined8 *local_5a0;
  uint *local_598;
  undefined8 local_590;
  long *local_580;
  undefined4 local_578;
  char local_574;
  long *local_570;
  undefined8 local_568;
  long local_550 [24];
  char *local_490;
  ulong *local_478 [64];
  ulong *local_278 [3];
  long local_260;
  uint *local_258;
  uint local_250;
  undefined8 *local_248;
  ulong local_78;
  ulong uStack_70;
  
  iVar19 = *(int *)(param_2 + 8);
  if (iVar19 == 0) {
    return;
  }
  lVar10 = tpidr_el0;
  lVar13 = *(long *)(lVar10 + 0x38d490);
  if (lVar13 == 0) {
    lVar13 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar13;
  }
  lVar13 = *(long *)(lVar13 + 8);
  uVar35 = (ulong)(int)(iVar19 * 0x10 + 0x7fU & 0xffffff80);
  if (*(ulong *)(lVar13 + 0x10) < uVar35) {
LAB_030e4620:
    puVar11 = (ulong *)FUN_032ce670(lVar13,uVar35);
  }
  else {
    puVar11 = *(ulong **)(lVar13 + 0x18);
    if (*(ulong *)(lVar13 + 0x20) < (long)puVar11 + uVar35) goto LAB_030e4620;
    *(ulong *)(lVar13 + 0x18) = (long)puVar11 + uVar35;
  }
  puVar14 = (uint *)**(undefined8 **)(param_2 + 0x10);
  if ((*puVar14 & 0xffff) == 0) {
    uVar34 = 0;
  }
  else {
    puVar22 = puVar14 + 8;
    uVar28 = *puVar14 & 0xffff;
    puVar20 = puVar11 + 1;
    uVar29 = 0x7fffffff;
    uVar1 = 1;
    do {
      uVar34 = uVar1;
      uVar28 = uVar28 - 1;
      puVar20[-1] = (ulong)*puVar22 & 0xffffff | (ulong)(puVar22[1] & 0xffffff) << 0x20;
      *puVar20 = (ulong)puVar22;
      if ((int)uVar28 < 1) {
        if ((uVar29 == 0) || (puVar14 = *(uint **)(puVar14 + 2), puVar14 == (uint *)0x0)) break;
        uVar28 = *puVar14 & 0xffff;
        if ((int)uVar29 <= (int)(*puVar14 & 0xffff)) {
          uVar28 = uVar29;
        }
        if ((int)uVar28 < 1) break;
        uVar29 = uVar29 - uVar28;
        puVar22 = puVar14 + 8;
        Hint_Prefetch(*(long *)(puVar14 + 2),0,0,0);
        Hint_Prefetch(*(long *)(puVar14 + 2) + 0x40,0,0,0);
        Hint_Prefetch(puVar14 + 0x20,0,0,0);
        Hint_Prefetch(puVar14 + 0x30,0,0,0);
      }
      else {
        puVar22 = puVar22 + (ulong)*(byte *)((long)puVar22 + 9) * 4;
      }
      puVar20 = puVar20 + 2;
      uVar1 = uVar34 + 1;
    } while (puVar22 != (uint *)0x0);
  }
  local_570 = local_550;
  local_568 = 0x8000001800000000;
  puVar30 = *(undefined8 **)(param_1 + 0x4e0);
  local_580 = (long *)*puVar30;
  local_578 = 0;
  local_574 = '\0';
  iVar19 = *(int *)(puVar30 + 0xb) + -1;
  if (*(int *)(puVar30 + 0xb) < 1) {
    lVar13 = puVar30[1];
    (**(code **)(*local_580 + 0x20))(local_580,lVar13,6);
    *(undefined4 *)(puVar30 + 0xb) = 5;
    puVar30 = (undefined8 *)(lVar13 + 0x28);
  }
  else {
    *(int *)(puVar30 + 0xb) = iVar19;
    puVar30 = (undefined8 *)(puVar30[1] + (long)iVar19 * 8);
  }
  uVar36 = local_568;
  plVar17 = local_570;
  puVar30 = (undefined8 *)*puVar30;
  puVar30[2] = 0;
  puVar30[3] = 0;
  *puVar30 = 0;
  puVar30[1] = 0;
  *(int *)((long)puVar30 + 4) = (int)local_568;
  puVar9 = PTR_PTR_0434a080;
  uVar28 = (int)local_568 + 1;
  if ((int)(local_568._4_4_ & 0x3fffffff) <= (int)local_568) {
    if (0x3ffffffe < (int)local_568) {
      FUN_032bd0a8(uVar28);
    }
    uVar29 = (local_568._4_4_ & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar29) {
      uVar29 = 0x3fffffff;
    }
    uVar1 = uVar28;
    if ((int)uVar28 <= (int)uVar29) {
      uVar1 = uVar29;
    }
    local_570 = (long *)FUN_032bd1d4(puVar9,uVar1,8,plVar17,uVar36 & 0xffffffff,(long)&local_568 + 4
                                    );
  }
  local_570[(int)local_568] = (long)puVar30;
  local_568 = CONCAT44(local_568._4_4_,uVar28);
  local_490 = "hknpCollisionCacheSorter::cacheStreamOut";
  local_5a0 = *(undefined8 **)(param_1 + 0x4e0);
  local_598 = (uint *)*local_570;
  local_5a8 = &local_580;
  local_590 = 0;
  Hint_Prefetch(local_598,0,0,0);
  Hint_Prefetch(local_598 + 0x10,0,0,0);
  local_248 = local_5a0;
  if (1 < uVar34) {
    puVar20 = puVar11 + (long)(int)(uVar34 - 1) * 2;
    lVar13 = 0;
    local_278[0] = puVar11;
    local_478[0] = puVar20;
    puVar21 = puVar11;
LAB_030e4318:
    lVar13 = (long)(int)lVar13;
LAB_030e43f8:
    do {
      puVar24 = puVar20;
      do {
        puVar20 = puVar24;
        uVar36 = puVar21[((long)puVar20 - (long)puVar21 >> 5) * 2];
        puVar23 = puVar20;
        puVar26 = puVar21;
        do {
          while( true ) {
            puVar27 = puVar26 + -2;
            do {
              puVar25 = puVar27;
              puVar27 = puVar25 + 2;
            } while (*puVar27 < uVar36);
            uVar31 = *puVar23;
            puVar24 = puVar23;
            puVar26 = puVar23 + -2;
            puVar23 = puVar23 + -2;
            if (uVar36 < uVar31) {
              do {
                puVar24 = puVar26;
                puVar23 = puVar24 + -2;
                puVar26 = puVar23;
              } while (uVar36 < *puVar24);
            }
            if (puVar24 < puVar27) break;
            puVar26 = puVar25 + 4;
            if (puVar24 != puVar27) {
              local_78 = *puVar24;
              uStack_70 = puVar24[1];
              uVar31 = puVar25[3];
              *puVar24 = *puVar27;
              puVar24[1] = uVar31;
              *puVar27 = local_78;
              puVar25[3] = uStack_70;
            }
            puVar24 = puVar23;
            puVar27 = puVar26;
            if (puVar23 < puVar26) goto LAB_030e43ac;
          }
          puVar23 = puVar24;
          puVar26 = puVar27;
        } while (puVar27 <= puVar24);
LAB_030e43ac:
        if (puVar24 <= puVar21) {
          puVar21 = puVar27;
          if (puVar27 < puVar20) goto LAB_030e43f8;
          if ((int)lVar13 < 1) {
            local_248 = *(undefined8 **)(param_1 + 0x4e0);
            goto LAB_030e40a8;
          }
          lVar13 = (long)(int)lVar13 + -1;
          puVar21 = local_278[lVar13];
          puVar20 = local_478[lVar13];
          goto LAB_030e4318;
        }
      } while (puVar20 <= puVar27);
      puVar26 = puVar24;
      puVar23 = puVar21;
      if ((long)puVar20 - (long)puVar27 <= (long)puVar24 - (long)puVar21) {
        puVar26 = puVar20;
        puVar23 = puVar27;
        puVar20 = puVar24;
        puVar27 = puVar21;
      }
      local_278[lVar13] = puVar27;
      local_478[lVar13] = puVar20;
      puVar20 = puVar26;
      puVar21 = puVar23;
      lVar13 = lVar13 + 1;
    } while( true );
  }
LAB_030e40a8:
  local_260 = param_2 + 0x100;
  local_250 = 0;
  local_258 = (uint *)0x0;
  if (uVar34 != 0) {
    uVar36 = 0;
    uVar31 = 0xffffffffffffffff;
    do {
      uVar37 = puVar11[uVar36 * 2];
      puVar30 = (undefined8 *)puVar11[uVar36 * 2 + 1];
      if (uVar37 == uVar31) {
        FUN_0305bafc(puVar30,param_1,local_278,*(undefined4 *)((long)puVar30 + 4),
                     *(undefined4 *)puVar30);
      }
      else {
        bVar4 = *(byte *)((long)puVar30 + 9);
        uVar28 = (uint)bVar4;
        if ((int)(uVar28 * 0x10 + (int)local_590) < 0xee1) {
          puVar12 = (undefined8 *)((long)local_598 + (long)(int)local_590 + 0x20);
        }
        else {
          puVar12 = (undefined8 *)FUN_032bf82c(&local_5a8);
        }
        uVar29 = (uint)bVar4;
        puVar15 = puVar12;
        if (((uint)bVar4 + (uint)(uVar28 == 0) & 1) != 0) {
          uVar2 = *(undefined4 *)(puVar30 + 1);
          uVar3 = *(undefined4 *)((long)puVar30 + 0xc);
          *puVar12 = *puVar30;
          *(undefined4 *)(puVar12 + 1) = uVar2;
          *(undefined4 *)((long)puVar12 + 0xc) = uVar3;
          puVar30 = puVar30 + 2;
          uVar29 = bVar4 - 1;
          puVar15 = puVar12 + 2;
        }
        if ((bool)bVar4 != (uVar28 != 0)) {
          do {
            uVar29 = uVar29 - 2;
            uVar2 = *(undefined4 *)(puVar30 + 1);
            uVar3 = *(undefined4 *)((long)puVar30 + 0xc);
            *puVar15 = *puVar30;
            *(undefined4 *)(puVar15 + 1) = uVar2;
            *(undefined4 *)((long)puVar15 + 0xc) = uVar3;
            uVar2 = *(undefined4 *)(puVar30 + 3);
            uVar3 = *(undefined4 *)((long)puVar30 + 0x1c);
            puVar15[2] = puVar30[2];
            *(undefined4 *)(puVar15 + 3) = uVar2;
            *(undefined4 *)((long)puVar15 + 0x1c) = uVar3;
            puVar30 = puVar30 + 4;
            puVar15 = puVar15 + 4;
          } while (0 < (int)uVar29);
        }
        local_590 = CONCAT44(local_590._4_4_ + 1,(int)local_590 + uVar28 * 0x10);
        uVar31 = puVar11[uVar36 * 2 + 1];
        if ((((*(char *)(uVar31 + 8) == '\x02') && (2 < *(byte *)(uVar31 + 9))) && (puVar12[4] != 0)
            ) && ((*(byte *)((long)puVar12 + 0xb) >> 2 & 1) != 0)) {
          *(undefined8 **)((ulong)*(ushort *)(puVar12 + 5) + puVar12[4] + 0x20) = puVar12;
        }
        uVar31 = uVar37;
      }
      puVar30 = local_248;
      uVar36 = uVar36 + 1;
    } while (uVar36 != uVar34);
    if (local_250 != 0) {
      if (local_250 == (*local_258 & 0xffff)) {
        *(undefined8 *)(*(long *)(local_260 + 0x10) + (long)(int)local_258[1] * 8) = 0;
        *(undefined1 *)(local_260 + 0xc) = 1;
        iVar19 = *(int *)(local_248 + 0xb);
        lVar13 = local_248[1];
        *(uint **)(lVar13 + (long)iVar19 * 8) = local_258;
        *(int *)(local_248 + 0xb) = iVar19 + 1;
        if (*(int *)((long)local_248 + 0x5c) <= iVar19 + 1) {
          (**(code **)(*(long *)*local_248 + 0x28))
                    ((long *)*local_248,lVar13 + (long)(iVar19 + -5) * 8,6);
          *(int *)(puVar30 + 0xb) = iVar19 + -5;
        }
      }
      else {
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(local_258,0x10);
          if (bVar7) {
            *local_258 = *local_258 - local_250;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      local_250 = 0;
      *(undefined1 *)(local_260 + 0xc) = 1;
    }
  }
  puVar30 = local_5a0;
  if (local_590._4_4_ == 0) {
    pplVar32 = local_5a8 + 3;
    iVar19 = *(int *)pplVar32;
    if (1 < iVar19) {
      iVar5 = *(int *)(local_5a0 + 0xb);
      lVar33 = local_5a8[2][iVar19 + -2];
      lVar13 = local_5a0[1];
      *(long *)(lVar13 + (long)iVar5 * 8) = local_5a8[2][iVar19 + -1];
      *(int *)(local_5a0 + 0xb) = iVar5 + 1;
      if (*(int *)((long)local_5a0 + 0x5c) <= iVar5 + 1) {
        (**(code **)(*(long *)*local_5a0 + 0x28))
                  ((long *)*local_5a0,lVar13 + (long)(iVar5 + -5) * 8,6);
        *(int *)(puVar30 + 0xb) = iVar5 + -5;
      }
      *(undefined8 *)(lVar33 + 8) = 0;
      uVar28 = 0xffffffff;
      goto LAB_030e4220;
    }
  }
  pplVar32 = local_5a8 + 1;
  local_598[2] = 0;
  local_598[3] = 0;
  *local_598 = *local_598 & 0xffff0000 | local_590._4_4_ & 0xffff;
  *local_598 = *local_598 & 0xffff | (int)local_590 << 0x10;
  uVar28 = local_590._4_4_;
LAB_030e4220:
  *(uint *)pplVar32 = *(int *)pplVar32 + uVar28;
  FUN_032beab0(param_2,*(undefined8 *)(param_1 + 0x4e0));
  FUN_032bec88(param_2,*(undefined8 *)(param_1 + 0x4e0),&local_580);
  if (local_580 != (long *)0x0) {
    iVar19 = (int)local_568;
    if (local_574 != '\0') {
      plVar17 = local_570;
      if (0 < (int)local_568) {
        pcVar8 = local_490;
        puVar20 = local_478[0];
        puVar21 = local_278[0];
        lVar13 = local_260;
        puVar14 = local_258;
        uVar28 = local_250;
        puVar30 = local_248;
        uVar36 = local_78;
        uVar31 = uStack_70;
        if (*local_570 != 0) {
          *local_570 = *local_570;
          plVar17 = local_570 + 1;
          pcVar8 = local_490;
          puVar20 = local_478[0];
          puVar21 = local_278[0];
          lVar13 = local_260;
          puVar14 = local_258;
          uVar28 = local_250;
          puVar30 = local_248;
          uVar36 = local_78;
          uVar31 = uStack_70;
        }
        if ((int)local_568 != 1) {
          if (local_570[1] != 0) {
            *plVar17 = local_570[1];
            plVar17 = plVar17 + 1;
          }
          if ((int)local_568 != 2) {
            iVar19 = (int)local_568 + -2;
            plVar18 = local_570 + 2;
            plVar16 = plVar17;
            do {
              plVar17 = plVar16;
              if (*plVar18 != 0) {
                plVar17 = plVar16 + 1;
                *plVar16 = *plVar18;
              }
              plVar18 = plVar18 + 1;
              iVar19 = iVar19 + -1;
              plVar16 = plVar17;
            } while (iVar19 != 0);
          }
        }
        local_490 = pcVar8;
        local_478[0] = puVar20;
        local_278[0] = puVar21;
        local_260 = lVar13;
        local_258 = puVar14;
        local_250 = uVar28;
        local_248 = puVar30;
        local_78 = uVar36;
        uStack_70 = uVar31;
      }
      local_574 = '\0';
      iVar19 = (int)((ulong)((long)plVar17 - (long)local_570) >> 3);
    }
    if (iVar19 != 0) {
      (**(code **)(*local_580 + 0x28))(local_580,local_570);
    }
    local_568 = local_568 & 0xffffffff00000000;
    local_578 = 0;
  }
  uVar36 = local_568;
  uVar28 = local_568._4_4_;
  local_568 = (ulong)local_568._4_4_ << 0x20;
  if ((-1 < (long)uVar36) && (local_570 != (long *)0x0)) {
    FUN_032cf244(puVar9,local_570,8,uVar28 & 0x3fffffff);
  }
  lVar13 = *(long *)(lVar10 + 0x38d490);
  if (lVar13 == 0) {
    lVar13 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar13;
  }
  lVar10 = *(long *)(lVar13 + 8);
  if (((*(ulong *)(lVar10 + 0x10) < uVar35) || (*(long *)(lVar10 + 0x18) != (long)puVar11 + uVar35))
     || (*(ulong **)(lVar10 + 0x28) == puVar11)) {
    if (puVar11 != (ulong *)0x0) {
      if (*(ulong *)(lVar10 + 0x10) < uVar35) {
        *(int *)(*(long *)(lVar10 + 8) + 0x20) = *(int *)(*(long *)(lVar10 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar10 + 0x40) + 0x18))(*(long **)(lVar10 + 0x40),puVar11,uVar35);
      }
      else if (*(long *)(lVar10 + 0x18) == (long)puVar11 + uVar35) {
        *(ulong **)(lVar10 + 0x18) = puVar11;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar10,puVar11,uVar35);
      }
    }
  }
  else {
    *(ulong **)(lVar10 + 0x18) = puVar11;
  }
  return;
}


