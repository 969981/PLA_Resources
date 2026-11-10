/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a7194; name: FUN_032a7194
 */


void FUN_032a7194(void)

{
  ulong *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  ulong uStack_80;
  undefined4 local_78;
  float fStack_74;
  ulong local_68;
  
  if (DAT_044402f0 != 0) {
    DAT_044402f0 = 0;
    FUN_032c2628(&DAT_044402f8);
  }
  puVar6 = PTR_PTR_0434a080;
  if (DAT_044402e0 != (long *)0x0) {
    plVar15 = DAT_044402e0;
    do {
      auVar23 = (**(code **)(*plVar15 + 0x10))(plVar15);
      iVar4 = (int)((ulong)(auVar23._8_8_ - auVar23._0_8_) >> 2) * -0x55555555;
      if (iVar4 != 0) {
        iVar19 = 0;
        do {
          puVar13 = (undefined8 *)(auVar23._0_8_ + (long)iVar19 * 0xc);
          uVar2 = *(undefined4 *)puVar13;
          uVar3 = *(undefined4 *)((long)puVar13 + 4);
          uVar5 = *puVar13;
          local_a0 = uVar5;
          FUN_032a76a4(&local_88,plVar15);
          lVar8 = FUN_032ad970(uVar2,uVar3);
          if (lVar8 == 0) {
            fVar22 = 3.40282e+38;
          }
          else {
            fVar22 = *(float *)(DAT_044402e8 + (long)*(int *)(lVar8 + 4) * 0x20 + 0x1c);
          }
          if (fStack_74 < fVar22) {
            uVar7 = FUN_032ada28(&local_a0);
            if (DAT_044402f0 == uVar7) {
              uVar14 = uVar7;
              if ((int)(DAT_044402f4 & 0x3fffffff) <= (int)uVar7) {
                DAT_044402e8 = FUN_032adb50(puVar6,uVar7 + 1);
                uVar14 = DAT_044402f0;
              }
              puVar13 = (undefined8 *)(DAT_044402e8 + (long)(int)uVar14 * 0x20);
              puVar13[2] = uStack_80;
              puVar13[3] = CONCAT44(fStack_74,local_78);
              *puVar13 = uVar5;
              puVar13[1] = local_88;
              DAT_044402f0 = uVar7 + 1;
            }
            else {
              lVar8 = DAT_044402e8 + ((long)((ulong)uVar7 << 0x20) >> 0x1b);
              *(ulong *)(lVar8 + 0x10) = uStack_80;
              *(ulong *)(lVar8 + 0x18) = CONCAT44(fStack_74,local_78);
              *(ulong *)(lVar8 + 8) = local_88;
            }
          }
          iVar19 = iVar19 + 1;
        } while (iVar4 != iVar19);
      }
      plVar15 = (long *)plVar15[1];
    } while (plVar15 != (long *)0x0);
  }
  uVar16 = 0;
  uVar18 = 0;
  do {
    local_68 = uVar16 | uVar18;
    local_a0 = CONCAT44((int)uVar18,(int)uVar18);
    local_98 = CONCAT44(local_98._4_4_,1);
    FUN_032a76a4(&local_88,0,&local_a0);
    FUN_032a77ac(&local_68,&local_88);
    puVar6 = PTR_PTR_0434a080;
    uVar18 = uVar18 + 1;
    uVar16 = uVar16 + 0x100000000;
  } while (uVar18 != 0x116);
  lVar8 = 0;
  uVar18 = 1;
  do {
    lVar20 = 0;
    uVar16 = 1;
    if (uVar18 != 1) goto LAB_032a73d4;
    while( true ) {
      uVar16 = uVar16 + 1;
      lVar20 = lVar20 + 1;
      if (uVar16 == 0x116) break;
      if (uVar18 != uVar16) {
LAB_032a73d4:
        lVar9 = FUN_032ad970(uVar16 & 0xffffffff,uVar18 & 0xffffffff);
        if ((lVar9 != 0) &&
           (*(float *)(DAT_044402e8 + (long)*(int *)(lVar9 + 4) * 0x20 + 0x1c) < 3.40282e+38)) {
          lVar9 = 0;
          uVar17 = 0x100000000;
          if (lVar20 != 0) goto LAB_032a7458;
LAB_032a7440:
          lVar9 = lVar9 + 1;
          uVar17 = uVar17 + 0x100000000;
          if (lVar9 != 0x115) {
            if (lVar20 != lVar9) {
LAB_032a7458:
              if (lVar8 != lVar9) {
                uVar21 = uVar17 | uVar16;
                local_68 = uVar21;
                lVar10 = FUN_032ad970(uVar18 & 0xffffffff,(int)lVar9 + 1);
                lVar12 = DAT_044402e8;
                if ((lVar10 != 0) &&
                   (lVar10 = DAT_044402e8 + (long)*(int *)(lVar10 + 4) * 0x20,
                   *(float *)(lVar10 + 0x1c) < 3.40282e+38)) {
                  local_a0 = 0;
                  local_98 = 0;
                  uStack_90 = 0x7f7fffee00000000;
                  lVar11 = FUN_032ad970(uVar16 & 0xffffffff,uVar18 & 0xffffffff);
                  if (lVar11 == 0) {
                    puVar13 = &local_a0;
                  }
                  else {
                    puVar13 = (undefined8 *)(lVar12 + (long)*(int *)(lVar11 + 4) * 0x20 + 8);
                  }
                  FUN_032a7878(&local_88,puVar13,lVar10 + 8);
                  fVar22 = fStack_74;
                  if (fStack_74 < 3.40282e+38) {
                    lVar12 = FUN_032ad970(uVar16 & 0xffffffff,uVar21 >> 0x20);
                    if (lVar12 == 0) {
                      if (3.40282e+38 <= fVar22) goto LAB_032a7440;
                    }
                    else if (*(float *)(DAT_044402e8 + (long)*(int *)(lVar12 + 4) * 0x20 + 0x1c) <=
                             fVar22) goto LAB_032a7440;
                    uVar7 = FUN_032ada28(&local_68);
                    if (DAT_044402f0 == uVar7) {
                      uVar14 = uVar7;
                      if ((int)(DAT_044402f4 & 0x3fffffff) <= (int)uVar7) {
                        DAT_044402e8 = FUN_032adb50(puVar6,uVar7 + 1);
                        uVar14 = DAT_044402f0;
                      }
                      puVar1 = (ulong *)(DAT_044402e8 + (long)(int)uVar14 * 0x20);
                      puVar1[2] = uStack_80;
                      puVar1[3] = CONCAT44(fStack_74,local_78);
                      *puVar1 = uVar21;
                      puVar1[1] = local_88;
                      DAT_044402f0 = uVar7 + 1;
                    }
                    else {
                      lVar12 = DAT_044402e8 + ((long)((ulong)uVar7 << 0x20) >> 0x1b);
                      *(ulong *)(lVar12 + 0x10) = uStack_80;
                      *(ulong *)(lVar12 + 0x18) = CONCAT44(fStack_74,local_78);
                      *(ulong *)(lVar12 + 8) = local_88;
                    }
                  }
                }
              }
            }
            goto LAB_032a7440;
          }
        }
      }
    }
    uVar18 = uVar18 + 1;
    lVar8 = lVar8 + 1;
    if (uVar18 == 0x116) {
      DAT_04440330 = 1;
      return;
    }
  } while( true );
}


