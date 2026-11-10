/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0185bf30; name: FUN_0185bf30
 */


undefined8 FUN_0185bf30(undefined4 param_1,uint param_2,uint param_3)

{
  long *plVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 uVar13;
  ulong uVar14;
  char *pcVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  long *plVar19;
  undefined1 *puVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  int *piVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  puVar9 = PTR_DAT_0437a708;
  if (((*PTR_DAT_0437a708 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  puVar11 = PTR_DAT_0437a718;
  puVar10 = PTR_DAT_0437a710;
  uVar13 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar13;
  uVar14 = FUN_010ab2e8(uVar13,param_1,param_2 & 1,param_3 & 1);
  if ((uVar14 & 1) == 0) {
    return 4;
  }
  if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  uVar13 = *(undefined8 *)puVar10;
  *(undefined8 *)puVar11 = uVar13;
  pcVar15 = (char *)FUN_010ab0e0(uVar13,param_1,param_2 & 1,param_3 & 1);
  puVar9 = PTR_DAT_04379660;
  cVar5 = *pcVar15;
  piVar24 = *(int **)(pcVar15 + 0x18);
  piVar3 = *(int **)(pcVar15 + 8);
  piVar4 = *(int **)(pcVar15 + 0x10);
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar11 = PTR_DAT_04379670;
  puVar10 = PTR_DAT_04379668;
  lVar18 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar18;
  puVar16 = *(undefined1 **)(lVar18 + 0x60);
  fVar26 = 0.0;
  if (puVar16 != (undefined1 *)0x0) {
    uVar14 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      puVar17 = (undefined1 *)((ulong)(puVar16 + -1) & 0x5aed9c38b7dfcc60);
    }
    else {
      puVar17 = &DAT_5aed9c38b7dfcc60;
      if (puVar16 < (undefined1 *)0x5aed9c38b7dfcc61) {
        uVar21 = 0;
        if (puVar16 != (undefined1 *)0x0) {
          uVar21 = 0x5aed9c38b7dfcc60 / (ulong)puVar16;
        }
        puVar17 = &DAT_5aed9c38b7dfcc60 + -(uVar21 * (long)puVar16);
      }
    }
    plVar19 = *(long **)(*(long *)(lVar18 + 0x58) + (long)puVar17 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if ((undefined1 *)plVar19[1] == &DAT_5aed9c38b7dfcc60) {
            if ((undefined1 *)plVar19[2] == &DAT_5aed9c38b7dfcc60) goto LAB_0185c084;
          }
          else if ((undefined1 *)((ulong)plVar19[1] & (ulong)(puVar16 + -1)) != puVar17) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          puVar20 = (undefined1 *)plVar19[1];
          if (puVar20 == &DAT_5aed9c38b7dfcc60) {
            if ((undefined1 *)plVar19[2] == &DAT_5aed9c38b7dfcc60) goto LAB_0185c084;
          }
          else {
            if (puVar16 <= puVar20) {
              uVar14 = 0;
              if (puVar16 != (undefined1 *)0x0) {
                uVar14 = (ulong)puVar20 / (ulong)puVar16;
              }
              puVar20 = puVar20 + -(uVar14 * (long)puVar16);
            }
            if (puVar20 != puVar17) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
LAB_0185c1e0:
  bVar2 = *puVar9;
joined_r0x0185c4d8:
  if (((bVar2 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar18 = *(long *)puVar10;
  *(long *)puVar11 = lVar18;
  puVar16 = *(undefined1 **)(lVar18 + 0x60);
  fVar27 = 0.0;
  if (puVar16 != (undefined1 *)0x0) {
    uVar14 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      puVar17 = (undefined1 *)((ulong)(puVar16 + -1) & 0x5aed9c38b7dfcc60);
    }
    else {
      puVar17 = &DAT_5aed9c38b7dfcc60;
      if (puVar16 < (undefined1 *)0x5aed9c38b7dfcc61) {
        uVar21 = 0;
        if (puVar16 != (undefined1 *)0x0) {
          uVar21 = 0x5aed9c38b7dfcc60 / (ulong)puVar16;
        }
        puVar17 = &DAT_5aed9c38b7dfcc60 + -(uVar21 * (long)puVar16);
      }
    }
    plVar19 = *(long **)(*(long *)(lVar18 + 0x58) + (long)puVar17 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if ((undefined1 *)plVar19[1] == &DAT_5aed9c38b7dfcc60) {
            if ((undefined1 *)plVar19[2] == &DAT_5aed9c38b7dfcc60) goto LAB_0185c27c;
          }
          else if ((undefined1 *)((ulong)plVar19[1] & (ulong)(puVar16 + -1)) != puVar17) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          puVar20 = (undefined1 *)plVar19[1];
          if (puVar20 == &DAT_5aed9c38b7dfcc60) {
            if ((undefined1 *)plVar19[2] == &DAT_5aed9c38b7dfcc60) goto LAB_0185c27c;
          }
          else {
            if (puVar16 <= puVar20) {
              uVar14 = 0;
              if (puVar16 != (undefined1 *)0x0) {
                uVar14 = (ulong)puVar20 / (ulong)puVar16;
              }
              puVar20 = puVar20 + -(uVar14 * (long)puVar16);
            }
            if (puVar20 != puVar17) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
  goto joined_r0x0185c524;
LAB_0185c084:
  plVar19 = (long *)plVar19[3];
  if (plVar19 != (long *)0x0) {
    plVar1 = plVar19 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    uVar14 = plVar19[0x21];
    fVar26 = 0.0;
    if (uVar14 != 0) {
      uVar21 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar22 = uVar14 - 1 & 0xcf8101a9e37051ab;
      }
      else if (uVar14 < 0xcf8101a9e37051ac) {
        uVar22 = 0;
        if (uVar14 != 0) {
          uVar22 = 0xcf8101a9e37051ab / uVar14;
        }
        uVar22 = 0xcf8101a9e37051ab - uVar22 * uVar14;
      }
      else {
        uVar22 = 0xcf8101a9e37051ab;
      }
      plVar23 = *(long **)(plVar19[0x20] + uVar22 * 8);
      if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
        if (uVar21 < 2) {
          do {
            if (plVar23[1] == 0xcf8101a9e37051ab) {
              if (plVar23[2] == -0x307efe561c8fae55) goto LAB_0185c1c8;
            }
            else if ((plVar23[1] & uVar14 - 1) != uVar22) break;
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar23[1];
            if (uVar21 == 0xcf8101a9e37051ab) {
              if (plVar23[2] == -0x307efe561c8fae55) goto LAB_0185c1c8;
            }
            else {
              if (uVar14 <= uVar21) {
                uVar8 = 0;
                if (uVar14 != 0) {
                  uVar8 = uVar21 / uVar14;
                }
                uVar21 = uVar21 - uVar8 * uVar14;
              }
              if (uVar21 != uVar22) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
      }
    }
    goto LAB_0185c1cc;
  }
  goto LAB_0185c1e0;
LAB_0185c1c8:
  fVar26 = *(float *)(plVar23 + 6);
LAB_0185c1cc:
  do {
    iVar12 = (int)*plVar1 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *(int *)plVar1 = iVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar12 != 0) goto LAB_0185c1e0;
  (**(code **)(*plVar19 + 0x10))();
  bVar2 = *puVar9;
  goto joined_r0x0185c4d8;
LAB_0185c27c:
  plVar19 = (long *)plVar19[3];
  if (plVar19 == (long *)0x0) goto joined_r0x0185c524;
  plVar1 = plVar19 + 10;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  uVar14 = plVar19[0x21];
  fVar27 = 0.0;
  if (uVar14 != 0) {
    uVar21 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar22 = uVar14 - 1 & 0x8ff22e26b3d06c4;
    }
    else if (uVar14 < 0x8ff22e26b3d06c5) {
      uVar22 = 0;
      if (uVar14 != 0) {
        uVar22 = 0x8ff22e26b3d06c4 / uVar14;
      }
      uVar22 = 0x8ff22e26b3d06c4 - uVar22 * uVar14;
    }
    else {
      uVar22 = 0x8ff22e26b3d06c4;
    }
    plVar23 = *(long **)(plVar19[0x20] + uVar22 * 8);
    if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
      if (uVar21 < 2) {
        do {
          if (plVar23[1] == 0x8ff22e26b3d06c4) {
            if (plVar23[2] == 0x8ff22e26b3d06c4) goto LAB_0185c3c0;
          }
          else if ((plVar23[1] & uVar14 - 1) != uVar22) break;
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      else {
        do {
          uVar21 = plVar23[1];
          if (uVar21 == 0x8ff22e26b3d06c4) {
            if (plVar23[2] == 0x8ff22e26b3d06c4) goto LAB_0185c3c0;
          }
          else {
            if (uVar14 <= uVar21) {
              uVar8 = 0;
              if (uVar14 != 0) {
                uVar8 = uVar21 / uVar14;
              }
              uVar21 = uVar21 - uVar8 * uVar14;
            }
            if (uVar21 != uVar22) break;
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
    }
  }
  goto LAB_0185c3c4;
LAB_0185c3c0:
  fVar27 = *(float *)(plVar23 + 6);
LAB_0185c3c4:
  do {
    iVar12 = (int)*plVar1 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *(int *)plVar1 = iVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar19 + 0x10))();
  }
joined_r0x0185c524:
  if (cVar5 == '\0') {
    if (piVar4 == (int *)0x0) {
      fVar25 = 0.0;
      if ((0x1c < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar14 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0xe], uVar14 != 0)) {
        fVar25 = *(float *)((long)piVar3 + uVar14);
      }
    }
    else {
      fVar25 = 0.0;
      if ((0x1c < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
         (uVar14 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xe], uVar14 != 0)) {
        fVar25 = *(float *)((long)piVar4 + uVar14);
      }
    }
  }
  else {
    fVar25 = 0.0;
    if ((0x18 < *(ushort *)((long)piVar24 - (long)*piVar24)) &&
       (uVar14 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[0xc], uVar14 != 0)) {
      fVar25 = *(float *)((long)piVar24 + uVar14);
    }
  }
  if (fVar25 <= fVar26) {
    uVar13 = 1;
  }
  else {
    if (cVar5 == '\0') {
      if (piVar4 == (int *)0x0) {
        fVar26 = 0.0;
        if ((0x1c < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
           (uVar14 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0xe], uVar14 != 0)) {
          fVar26 = *(float *)((long)piVar3 + uVar14);
        }
      }
      else {
        fVar26 = 0.0;
        if ((0x1c < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
           (uVar14 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xe], uVar14 != 0)) {
          fVar26 = *(float *)((long)piVar4 + uVar14);
        }
      }
    }
    else {
      fVar26 = 0.0;
      if ((0x18 < *(ushort *)((long)piVar24 - (long)*piVar24)) &&
         (uVar14 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[0xc], uVar14 != 0)) {
        fVar26 = *(float *)((long)piVar24 + uVar14);
      }
    }
    if (fVar26 <= fVar27) {
      uVar13 = 2;
    }
    else {
      uVar13 = 3;
    }
  }
  return uVar13;
}


