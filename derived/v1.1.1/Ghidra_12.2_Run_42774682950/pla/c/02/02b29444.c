/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b29444; name: FUN_02b29444
 */


void FUN_02b29444(long param_1,long *param_2,ulong param_3)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  int *piVar12;
  long lVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  int *piVar22;
  undefined1 *local_88;
  byte *pbStack_80;
  size_t local_78;
  long *local_70;
  long *local_68;
  int local_58;
  int iStack_54;
  
  uVar20 = param_3 & 0xffffffff;
  lVar21 = *param_2;
  FUN_02b58be8(&local_88,lVar21 + 0x98,&DAT_0393676e,
               *(long *)(param_1 + 0xb0) + (param_3 & 0xffffffff) * 0xd0);
  plVar11 = *(long **)(lVar21 + 0xb8);
  *(undefined8 *)(lVar21 + 0xb8) = 0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))();
  }
  *(undefined1 **)(lVar21 + 0xb8) = local_88;
  pbStack_80 = (byte *)(**(code **)(*DAT_043ef740 + 0x30))
                                 (DAT_043ef740,*(long *)(param_1 + 0xb0) + uVar20 * 0xd0 + 0x20,
                                  param_1);
  lVar21 = *param_2;
  if (pbStack_80 == (byte *)0x0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar10 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_88 = *(undefined1 **)PTR_DAT_0437a0d8;
    pbStack_80 = *(byte **)(PTR_DAT_0437a0d8 + 8);
    local_78 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    local_70 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x18))();
    }
  }
  else {
    local_78 = strlen((char *)pbStack_80);
    bVar6 = *pbStack_80;
    local_88 = &DAT_cbf29ce484222645;
    pbVar14 = pbStack_80;
    while (bVar6 != 0) {
      pbVar14 = pbVar14 + 1;
      local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar14;
    }
    local_70 = (long *)0x0;
  }
  FUN_02bba5e0(&local_68,*(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x58) + 0x58) + 0x78),
               &local_88);
  plVar11 = *(long **)(lVar21 + 0x68);
  *(undefined8 *)(lVar21 + 0x68) = 0;
  if (plVar11 != (long *)0x0) {
    plVar2 = plVar11 + 10;
    do {
      iVar10 = (int)*plVar2 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *(int *)plVar2 = iVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  *(long **)(lVar21 + 0x68) = local_68;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  piVar22 = *(int **)(param_1 + 0xe8);
  piVar1 = *(int **)(param_1 + 0xf0);
  if (piVar22 != piVar1) {
    do {
      plVar11 = *(long **)(param_1 + 0x78);
      plVar2 = *(long **)(param_1 + 0x80);
      if (plVar11 != plVar2) {
LAB_02b295b0:
        uVar16 = *(ulong *)(*plVar11 + 0x138);
        if (uVar16 != 0) {
          uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
          uVar15 = *(ulong *)(piVar22 + 2);
          uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar17 < 2) {
            uVar18 = uVar16 - 1 & uVar15;
          }
          else {
            uVar18 = uVar15;
            if (uVar16 <= uVar15) {
              uVar18 = 0;
              if (uVar16 != 0) {
                uVar18 = uVar15 / uVar16;
              }
              uVar18 = uVar15 - uVar18 * uVar16;
            }
          }
          plVar19 = *(long **)(*(long *)(*plVar11 + 0x130) + uVar18 * 8);
          if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
            if (uVar17 < 2) {
              do {
                if (plVar19[1] == uVar15) {
                  if (plVar19[2] == uVar15) goto LAB_02b296a4;
                }
                else if ((plVar19[1] & uVar16 - 1) != uVar18) break;
                plVar19 = (long *)*plVar19;
              } while (plVar19 != (long *)0x0);
            }
            else {
              do {
                uVar17 = plVar19[1];
                if (uVar17 == uVar15) {
                  if (plVar19[2] == uVar15) goto LAB_02b296a4;
                }
                else {
                  if (uVar16 <= uVar17) {
                    uVar9 = 0;
                    if (uVar16 != 0) {
                      uVar9 = uVar17 / uVar16;
                    }
                    uVar17 = uVar17 - uVar9 * uVar16;
                  }
                  if (uVar17 != uVar18) break;
                }
                plVar19 = (long *)*plVar19;
              } while (plVar19 != (long *)0x0);
            }
          }
        }
        goto LAB_02b295a4;
      }
LAB_02b296d0:
      local_68 = (long *)0x0;
LAB_02b296d4:
      FUN_02bb0c88(*(undefined8 *)(*param_2 + 0x60),
                   *(undefined4 *)(*(long *)(param_1 + 0xb0) + uVar20 * 0xd0 + 0x44),*piVar22,
                   &local_68);
      lVar21 = *(long *)(*param_2 + 0x60);
      local_58 = *(int *)(*(long *)(param_1 + 0xb0) + uVar20 * 0xd0 + 0x44);
      iStack_54 = *piVar22;
      local_88 = (undefined1 *)0x0;
      for (piVar12 = *(int **)(lVar21 + 0xe8); piVar12 != *(int **)(lVar21 + 0xf0);
          piVar12 = piVar12 + 8) {
        if ((*piVar12 == local_58) && (piVar12[1] == iStack_54)) {
          cVar7 = (char)piVar12[4];
          cVar5 = (char)piVar22[10];
          if ((cVar7 == '\0') || (cVar5 == '\0')) {
            if (cVar5 == '\0' && cVar7 == '\0') goto LAB_02b297ac;
          }
          else if (*(long *)(piVar12 + 6) == *(long *)(piVar22 + 0xc)) goto LAB_02b297ac;
          uVar3 = *(undefined8 *)(piVar22 + 0xc);
          *(undefined8 *)(piVar12 + 4) = *(undefined8 *)(piVar22 + 10);
          *(undefined8 *)(piVar12 + 6) = uVar3;
          goto LAB_02b2978c;
        }
      }
      FUN_02bb1e80((undefined8 *)(lVar21 + 0xe8),&local_58,&iStack_54,&local_88);
LAB_02b2978c:
      lVar13 = *(long *)(lVar21 + 0x240);
      for (lVar21 = *(long *)(lVar21 + 0x238); lVar21 != lVar13; lVar21 = lVar21 + 0x18) {
        *(undefined1 *)(lVar21 + 0x10) = 1;
      }
LAB_02b297ac:
      if (local_68 != (long *)0x0) {
        plVar11 = local_68 + 10;
        do {
          iVar10 = (int)*plVar11 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar8) {
            *(int *)plVar11 = iVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
      piVar22 = piVar22 + 0xe;
    } while (piVar22 != piVar1);
  }
  lVar13 = uVar20 * 0xd0;
  FUN_02bb27d4(*(undefined8 *)(*param_2 + 0x60),
               *(undefined4 *)(*(long *)(param_1 + 0xb0) + lVar13 + 200),1);
  lVar21 = *(long *)(param_1 + 0xb0) + lVar13;
  FUN_02b59350(*param_2,0,*(undefined4 *)(lVar21 + 0xb8),*(undefined4 *)(lVar21 + 0xbc));
  FUN_02bb32fc(*(undefined8 *)(*param_2 + 0x60),
               *(undefined1 *)(*(long *)(param_1 + 0xb0) + lVar13 + 0xc0));
  FUN_02bb3880(*(undefined8 *)(*param_2 + 0x60),
               *(undefined1 *)(*(long *)(param_1 + 0xb0) + lVar13 + 0xc1));
  FUN_02bb3e04(*(undefined8 *)(*param_2 + 0x60),
               *(undefined4 *)(*(long *)(param_1 + 0xb0) + lVar13 + 0xc4));
  if (*(int *)(*(long *)(param_1 + 0xb0) + lVar13 + 0xcc) < 0) {
    FUN_02bb4384(*(undefined8 *)(*param_2 + 0x60),0);
  }
  else {
    FUN_02bb4384(*(undefined8 *)(*param_2 + 0x60),1);
    FUN_02bb4908(*(undefined8 *)(*param_2 + 0x60),8,1,1,3,8,1,1,3);
    FUN_02bb52d8(*(undefined8 *)(*param_2 + 0x60),0xff,0xff);
    FUN_02bb4fb0(*(undefined8 *)(*param_2 + 0x60),0xff,0xff);
    uVar4 = *(undefined4 *)(*(long *)(param_1 + 0xb0) + uVar20 * 0xd0 + 0xcc);
    FUN_02bb5600(*(undefined8 *)(*param_2 + 0x60),uVar4,uVar4);
  }
  return;
LAB_02b296a4:
  local_68 = (long *)plVar19[6];
  if (local_68 != (long *)0x0) {
    plVar19 = local_68 + 10;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar8) {
        *(int *)plVar19 = (int)*plVar19 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (local_68 != (long *)0x0) goto LAB_02b296d4;
  }
LAB_02b295a4:
  plVar11 = plVar11 + 1;
  if (plVar11 == plVar2) goto LAB_02b296d0;
  goto LAB_02b295b0;
}


