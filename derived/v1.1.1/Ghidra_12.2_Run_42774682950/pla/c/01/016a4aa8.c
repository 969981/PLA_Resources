/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016a4aa8; name: FUN_016a4aa8
 */


void FUN_016a4aa8(long param_1)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  uint uVar15;
  uint *puVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long *plVar24;
  long *plVar25;
  byte bVar26;
  ulong uVar27;
  ulong unaff_x25;
  undefined8 uVar28;
  float fVar29;
  int local_7c;
  ulong local_78;
  undefined4 local_70;
  undefined8 local_68;
  
  puVar23 = *(undefined8 **)(param_1 + 0x58);
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar23 == puVar3) {
    iVar11 = 0;
  }
  else {
    iVar11 = 0;
    do {
      plVar24 = (long *)*puVar23;
      if (plVar24 != (long *)0x0) {
        plVar25 = plVar24 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar6) {
            *(int *)plVar25 = (int)*plVar25 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      lVar12 = FUN_0161e300(plVar24);
      puVar16 = *(uint **)(*(long *)(lVar12 + 8) + 0x250);
      piVar2 = (int *)((long)puVar16 + (ulong)*puVar16);
      if (((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
          (uVar22 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar22 == 0)) ||
         (puVar16 = (uint *)((long)piVar2 + uVar22),
         piVar2 = (int *)((long)puVar16 + (ulong)*puVar16), piVar2 == (int *)0x0)) {
        bVar6 = false;
      }
      else {
        iVar11 = *piVar2 + iVar11;
        bVar6 = true;
      }
      if (plVar24 != (long *)0x0) {
        plVar25 = plVar24 + 10;
        do {
          iVar8 = (int)*plVar25 + -1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar7) {
            *(int *)plVar25 = iVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
      }
      if (!bVar6) {
        return;
      }
      puVar23 = puVar23 + 1;
    } while (puVar23 != puVar3);
  }
  lVar12 = param_1 + 0x100;
  FUN_016668d8(lVar12,iVar11);
  local_70 = 0;
  plVar24 = (long *)(param_1 + 0x98);
  local_78 = 0xc0ea47549ab5f3d9;
  local_68 = 0;
  FUN_016af080(plVar24,&local_78);
  if (*(long *)(param_1 + 0x108) == *(long *)(param_1 + 0x110)) {
    FUN_016af7f0(lVar12,&DAT_03a7c4a8);
  }
  else {
    FUN_016af9f8(param_1 + 0x118,*(long *)(param_1 + 0x108),&DAT_03a7c4a8);
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 8;
  }
  puVar13 = (undefined4 *)FUN_010f8318(param_1 + 0x138,&DAT_03a7c4a8);
  *puVar13 = 0xffffffff;
  plVar25 = *(long **)(param_1 + 0x58);
  plVar4 = *(long **)(param_1 + 0x60);
  if (plVar25 != plVar4) {
    plVar1 = (long *)(param_1 + 200);
    local_7c = 1;
    do {
      plVar17 = (long *)*plVar25;
      if (plVar17 != (long *)0x0) {
        plVar20 = plVar17 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar6) {
            *(int *)plVar20 = (int)*plVar20 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      lVar14 = FUN_0161e300(plVar17);
      puVar16 = *(uint **)(*(long *)(lVar14 + 8) + 0x250);
      piVar2 = (int *)((long)puVar16 + (ulong)*puVar16);
      if (((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
          (uVar22 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar22 == 0)) ||
         (puVar16 = (uint *)((long)piVar2 + uVar22),
         puVar16 = (uint *)((long)puVar16 + (ulong)*puVar16), puVar16 == (uint *)0x0)) {
        bVar26 = 1;
      }
      else {
        uVar15 = 0;
        if (*puVar16 != 0) {
          uVar22 = 0;
          do {
            piVar2 = (int *)((long)(puVar16 + uVar22 + 1) + (ulong)puVar16[uVar22 + 1]);
            if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
               (uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar18 == 0)) {
              uVar18 = 0;
            }
            else {
              uVar18 = *(ulong *)((long)piVar2 + uVar18);
            }
            uVar27 = *(ulong *)(param_1 + 0xa0);
            local_78 = uVar18;
            if (uVar27 == 0) {
LAB_016a4d30:
              plVar20 = (long *)(**(code **)(**(long **)(param_1 + 0xd0) + 0x10))
                                          (*(long **)(param_1 + 0xd0),0x30,8);
              if (plVar20 == (long *)0x0) {
                (**(code **)(**(long **)(param_1 + 0xd0) + 0xb8))();
              }
              uVar28 = *(undefined8 *)(param_1 + 0xd0);
              if ((*PTR_DAT_04379520 & 1) == 0) {
                iVar11 = __cxa_guard_acquire(PTR_DAT_04379520);
                puVar10 = PTR_DAT_04379528;
                if (iVar11 != 0) {
                  FUN_008a62a4(PTR_DAT_04379528);
                  FUN_00100250(PTR_LAB_04379530,puVar10,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379520);
                }
              }
              iVar11 = local_7c + (int)uVar22;
              lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
              if (lVar14 == 0) {
                plVar20[2] = local_78;
                plVar20[3] = uVar18;
                *(int *)(plVar20 + 4) = iVar11;
                plVar20[5] = (long)piVar2;
              }
              else {
                if (0xf < *(ulong *)(lVar14 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar28;
                *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
                plVar20[2] = local_78;
                plVar20[3] = uVar18;
                *(int *)(plVar20 + 4) = iVar11;
                plVar20[5] = (long)piVar2;
                *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
              }
              *plVar20 = 0;
              plVar20[1] = uVar18;
              fVar29 = (float)(*(long *)(param_1 + 0xf0) + 1);
              if ((uVar27 == 0) || (*(float *)(param_1 + 0xf8) * (float)uVar27 < fVar29)) {
                uVar27 = (ulong)(uVar27 < 3 || (uVar27 & uVar27 - 1) != 0) | uVar27 << 1;
                uVar19 = (ulong)(fVar29 / *(float *)(param_1 + 0xf8));
                if (uVar19 <= uVar27) {
                  uVar19 = uVar27;
                }
                FUN_016af344(plVar24,uVar19);
                uVar27 = *(ulong *)(param_1 + 0xa0);
                if ((uVar27 & uVar27 - 1) == 0) {
                  unaff_x25 = uVar27 - 1 & uVar18;
                }
                else if (uVar18 < uVar27) {
                  unaff_x25 = uVar18;
                }
                else {
                  uVar19 = 0;
                  if (uVar27 != 0) {
                    uVar19 = uVar18 / uVar27;
                  }
                  unaff_x25 = uVar18 - uVar19 * uVar27;
                }
              }
              plVar21 = *(long **)(*plVar24 + unaff_x25 * 8);
              if (plVar21 == (long *)0x0) {
                *plVar20 = *plVar1;
                *plVar1 = (long)plVar20;
                *(long **)(*plVar24 + unaff_x25 * 8) = plVar1;
                if (*plVar20 != 0) {
                  uVar18 = *(ulong *)(*plVar20 + 8);
                  if ((uVar27 & uVar27 - 1) == 0) {
                    uVar18 = uVar18 & uVar27 - 1;
                  }
                  else if (uVar27 <= uVar18) {
                    uVar19 = 0;
                    if (uVar27 != 0) {
                      uVar19 = uVar18 / uVar27;
                    }
                    uVar18 = uVar18 - uVar19 * uVar27;
                  }
                  plVar21 = (long *)(*plVar24 + uVar18 * 8);
                  goto LAB_016a4e34;
                }
              }
              else {
                *plVar20 = *plVar21;
LAB_016a4e34:
                *plVar21 = (long)plVar20;
              }
              *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + 1;
            }
            else {
              uVar19 = uVar27 - (uVar27 >> 1 & 0x5555555555555555);
              uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
              uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar19 < 2) {
                unaff_x25 = uVar27 - 1 & uVar18;
              }
              else {
                unaff_x25 = uVar18;
                if (uVar27 <= uVar18) {
                  uVar9 = 0;
                  if (uVar27 != 0) {
                    uVar9 = uVar18 / uVar27;
                  }
                  unaff_x25 = uVar18 - uVar9 * uVar27;
                }
              }
              plVar20 = *(long **)(*plVar24 + unaff_x25 * 8);
              if (plVar20 == (long *)0x0) goto LAB_016a4d30;
              if (uVar19 < 2) {
                do {
                  plVar20 = (long *)*plVar20;
                  if ((plVar20 == (long *)0x0) ||
                     (plVar20[1] != uVar18 && (plVar20[1] & uVar27 - 1) != unaff_x25))
                  goto LAB_016a4d30;
                } while (plVar20[2] != uVar18);
              }
              else {
                do {
                  plVar20 = (long *)*plVar20;
                  if (plVar20 == (long *)0x0) goto LAB_016a4d30;
                  uVar19 = plVar20[1];
                  if (uVar19 != uVar18) {
                    if (uVar27 <= uVar19) {
                      uVar9 = 0;
                      if (uVar27 != 0) {
                        uVar9 = uVar19 / uVar27;
                      }
                      uVar19 = uVar19 - uVar9 * uVar27;
                    }
                    if (uVar19 != unaff_x25) goto LAB_016a4d30;
                  }
                } while (plVar20[2] != uVar18);
              }
            }
            if (*(long *)(param_1 + 0x108) == *(long *)(param_1 + 0x110)) {
              FUN_016af7f0(lVar12,&local_78);
            }
            else {
              FUN_016af9f8(param_1 + 0x118,*(long *)(param_1 + 0x108),&local_78);
              *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 8;
            }
            puVar13 = (undefined4 *)FUN_010f8318(param_1 + 0x138,&local_78);
            *puVar13 = 0;
            uVar15 = *puVar16;
            uVar22 = uVar22 + 1;
          } while (uVar22 < uVar15);
        }
        bVar26 = 0;
        local_7c = uVar15 + local_7c;
      }
      if (plVar17 != (long *)0x0) {
        plVar20 = plVar17 + 10;
        do {
          iVar11 = (int)*plVar20 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar6) {
            *(int *)plVar20 = iVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*plVar17 + 0x10))();
        }
      }
      plVar25 = plVar25 + 1;
    } while ((bool)(plVar25 != plVar4 & (bVar26 ^ 1)));
  }
  return;
}


