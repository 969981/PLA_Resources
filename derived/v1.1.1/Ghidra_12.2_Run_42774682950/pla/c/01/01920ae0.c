/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01920ae0; name: FUN_01920ae0
 */


void FUN_01920ae0(int *param_1,undefined1 param_2 [16],undefined1 param_3 [16],int param_4,
                 int param_5,long param_6,ulong param_7)

{
  long *plVar1;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  byte *pbVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  undefined1 *puVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  long *plVar28;
  ushort *puVar29;
  long *extraout_x11;
  uint uVar30;
  long *plVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined8 uVar37;
  undefined1 *puVar38;
  ulong uVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  undefined1 *local_158;
  undefined1 *local_150;
  long local_148;
  long *local_140;
  undefined8 *local_138;
  undefined1 *puStack_130;
  undefined8 local_128;
  long *local_120;
  undefined8 *local_118;
  undefined1 *puStack_110;
  undefined8 local_108;
  long *local_100;
  undefined8 *local_f8;
  undefined1 *puStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined1 *local_d8;
  char *pcStack_d0;
  size_t local_c8;
  long *local_c0;
  undefined1 *local_b8;
  char *pcStack_b0;
  size_t local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_70 [2];
  
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar38 = &DAT_cbf29ce484222645;
  param_1[4] = 10;
  param_1[7] = 0;
  param_1[8] = 0;
  iVar40 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 1;
  param_1[0x16] = 0x3f800000;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x54] = 0;
  param_1[0x5d] = 0x3f800000;
  *(undefined1 **)(param_1 + 0x18) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x1a) = &DAT_03996322;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 **)(param_1 + 0x20) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x22) = &DAT_03996322;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 **)(param_1 + 0x28) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2a) = &DAT_03996322;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 **)(param_1 + 0x30) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x32) = &DAT_03996322;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined1 **)(param_1 + 0x38) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x3a) = &DAT_03996322;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined1 **)(param_1 + 0x40) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x42) = &DAT_03996322;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  uVar20 = *(ulong *)(param_6 + 0x280);
  if (uVar20 == 0) {
LAB_01921a4c:
    iVar44 = 10;
    iVar18 = 0;
    uVar19 = 0;
    iVar32 = 0;
    iVar41 = 0;
    uVar37 = 0;
    uVar20 = 0;
    uVar23 = 0;
    uVar39 = 0;
    iVar43 = 0;
    iVar42 = 0;
  }
  else {
    uVar23 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
    uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    param_7 = param_7 & 0xffff;
    if (uVar23 < 2) {
      uVar39 = (int)uVar20 - 1 & param_7;
    }
    else if (param_7 < uVar20) {
      uVar39 = param_7;
    }
    else {
      uVar39 = 0;
      if (uVar20 != 0) {
        uVar39 = param_7 / uVar20;
      }
      uVar39 = param_7 - uVar39 * uVar20;
    }
    plVar28 = *(long **)(*(long *)(param_6 + 0x278) + uVar39 * 8);
    if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
      if (uVar23 < 2) {
        do {
          if (plVar28[1] == param_7) {
            if (plVar28[2] == param_7) goto LAB_01920c6c;
          }
          else if ((plVar28[1] & uVar20 - 1) != uVar39) break;
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
      else {
        do {
          uVar23 = plVar28[1];
          if (uVar23 == param_7) {
            if (plVar28[2] == param_7) goto LAB_01920c6c;
          }
          else {
            if (uVar20 <= uVar23) {
              uVar14 = 0;
              if (uVar20 != 0) {
                uVar14 = uVar23 / uVar20;
              }
              uVar23 = uVar23 - uVar14 * uVar20;
            }
            if (uVar23 != uVar39) break;
          }
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
      goto LAB_01921a4c;
    }
    iVar18 = 0;
    uVar19 = 0;
    iVar41 = 0;
    iVar32 = 0;
    uVar37 = 0;
    uVar20 = 0;
    uVar23 = 0;
    uVar39 = 0;
    iVar43 = 0;
    iVar42 = 0;
    iVar44 = 10;
  }
  goto LAB_01921080;
LAB_01920c6c:
  puVar16 = *(uint **)(*(long *)(param_6 + 0xd0) + 0x250);
  piVar4 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar16 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (4 - (long)*piVar4)));
  puVar16 = (uint *)((long)puVar16 + (ulong)*(uint *)(plVar28 + 3) * 4 + (ulong)*puVar16 + 4);
  piVar4 = (int *)((long)puVar16 + (ulong)*puVar16);
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar40 = __cxa_guard_acquire(PTR_DAT_04379660), iVar40 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar25 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar25;
  uVar20 = *(ulong *)(lVar25 + 0x60);
  if (uVar20 == 0) {
LAB_01920e54:
    iVar42 = 0;
  }
  else {
    uVar23 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
    uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar23 < 2) {
      uVar39 = uVar20 - 1 & DAT_043d1ca8;
    }
    else if (DAT_043d1ca8 < uVar20) {
      uVar39 = DAT_043d1ca8;
    }
    else {
      uVar39 = 0;
      if (uVar20 != 0) {
        uVar39 = DAT_043d1ca8 / uVar20;
      }
      uVar39 = DAT_043d1ca8 - uVar39 * uVar20;
    }
    plVar28 = *(long **)(*(long *)(lVar25 + 0x58) + uVar39 * 8);
    if ((plVar28 == (long *)0x0) || (plVar28 = (long *)*plVar28, plVar28 == (long *)0x0))
    goto LAB_01920e54;
    if (1 < uVar23) {
      do {
        uVar23 = plVar28[1];
        if (uVar23 == DAT_043d1ca8) {
          if (plVar28[2] == DAT_043d1ca8) goto LAB_01920d58;
        }
        else {
          if (uVar20 <= uVar23) {
            uVar14 = 0;
            if (uVar20 != 0) {
              uVar14 = uVar23 / uVar20;
            }
            uVar23 = uVar23 - uVar14 * uVar20;
          }
          if (uVar23 != uVar39) break;
        }
        plVar28 = (long *)*plVar28;
      } while (plVar28 != (long *)0x0);
      goto LAB_01920e54;
    }
    do {
      if (plVar28[1] == DAT_043d1ca8) {
        if (plVar28[2] == DAT_043d1ca8) goto LAB_01920d58;
      }
      else if ((plVar28[1] & uVar20 - 1) != uVar39) goto LAB_01920e54;
      plVar28 = (long *)*plVar28;
      iVar42 = 0;
    } while (plVar28 != (long *)0x0);
  }
  goto LAB_01920ec8;
LAB_01920d58:
  plVar28 = (long *)plVar28[3];
  if (plVar28 == (long *)0x0) goto LAB_01920e54;
  plVar1 = plVar28 + 10;
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  uVar20 = plVar28[0x21];
  if (uVar20 == 0) {
    iVar42 = 0;
  }
  else {
    uVar23 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
    uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar23 < 2) {
      uVar39 = uVar20 - 1 & 0xee53be219ed2cf46;
    }
    else if (uVar20 < 0xee53be219ed2cf47) {
      uVar39 = 0;
      if (uVar20 != 0) {
        uVar39 = 0xee53be219ed2cf46 / uVar20;
      }
      uVar39 = 0xee53be219ed2cf46 - uVar39 * uVar20;
    }
    else {
      uVar39 = 0xee53be219ed2cf46;
    }
    plVar31 = *(long **)(plVar28[0x20] + uVar39 * 8);
    if (plVar31 == (long *)0x0) {
      iVar42 = 0;
    }
    else {
      plVar31 = (long *)*plVar31;
      if (plVar31 == (long *)0x0) {
        iVar42 = 0;
      }
      else if (uVar23 < 2) {
        do {
          if (plVar31[1] == 0xee53be219ed2cf46) {
            if (plVar31[2] == -0x11ac41de612d30ba) goto LAB_01920ea4;
          }
          else if ((plVar31[1] & uVar20 - 1) != uVar39) {
            iVar42 = 0;
            break;
          }
          plVar31 = (long *)*plVar31;
          iVar42 = 0;
        } while (plVar31 != (long *)0x0);
      }
      else {
        do {
          uVar23 = plVar31[1];
          if (uVar23 == 0xee53be219ed2cf46) {
            if (plVar31[2] == -0x11ac41de612d30ba) goto LAB_01920ea4;
          }
          else {
            if (uVar20 <= uVar23) {
              uVar14 = 0;
              if (uVar20 != 0) {
                uVar14 = uVar23 / uVar20;
              }
              uVar23 = uVar23 - uVar14 * uVar20;
            }
            if (uVar23 != uVar39) {
              iVar42 = 0;
              goto LAB_01920eb4;
            }
          }
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
        iVar42 = 0;
      }
    }
  }
  goto LAB_01920eb4;
LAB_0192114c:
  uVar14 = (ulong)*(uint *)(plVar28 + 3);
  goto LAB_01921150;
LAB_01921558:
  uVar23 = (ulong)*(uint *)(plVar28 + 3);
  goto LAB_0192155c;
LAB_01921bf4:
  uVar20 = (ulong)*(uint *)(plVar28 + 3);
  goto LAB_01921bf8;
LAB_01921e04:
  uVar20 = (ulong)*(uint *)(plVar28 + 3);
  goto LAB_01921e08;
LAB_01921f50:
  uVar23 = (ulong)*(uint *)(plVar28 + 3);
  goto LAB_01921f54;
LAB_01920ea4:
  iVar42 = (int)(*(float *)(plVar31 + 6) * 30.0);
LAB_01920eb4:
  do {
    iVar40 = (int)*plVar1 + -1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *(int *)plVar1 = iVar40;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar40 == 0) {
    (**(code **)(*plVar28 + 0x10))();
  }
LAB_01920ec8:
  puVar29 = (ushort *)((long)piVar4 - (long)*piVar4);
  uVar7 = *puVar29;
  if (uVar7 < 0xf) {
    iVar43 = 300;
joined_r0x0192172c:
    lVar25 = 0;
    bVar5 = DAT_00000004;
    if (DAT_00000004 == 0) goto LAB_01921730;
LAB_01920f0c:
    puVar24 = &DAT_cbf29ce484222645;
    pbVar17 = (byte *)(lVar25 + 5);
    do {
      puVar24 = (undefined1 *)(((ulong)puVar24 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar5 != 0);
    lVar25 = 0;
    if ((long)puVar24 < 0x62929d5798ffd3e) {
      if ((long)puVar24 < -0x86b27a3acdca61) {
        if (puVar24 == (undefined1 *)0xfd1c4784138b03c3) {
          lVar25 = 3;
        }
        else if (puVar24 == (undefined1 *)0xc223aa6648ce415d) {
          lVar25 = 6;
        }
        else if (puVar24 == (undefined1 *)0xdbff893542f03b18) {
          lVar25 = 7;
        }
      }
      else if (puVar24 == (undefined1 *)0xff794d85c532359f) {
        lVar25 = 5;
      }
    }
    else if (puVar24 == (undefined1 *)0x5f9b0e9249cfaf71) {
      lVar25 = 2;
    }
    else if (puVar24 == (undefined1 *)0x62929d5798ffd3e) {
      lVar25 = 9;
    }
    else if (puVar24 == (undefined1 *)0x1f99ab6e357786db) {
      lVar25 = 4;
    }
    if (uVar7 < 0x15) goto LAB_0192173c;
LAB_01920f94:
    lVar26 = 0;
    if ((ulong)puVar29[10] != 0) {
      puVar16 = (uint *)((long)piVar4 + (ulong)puVar29[10]);
      lVar26 = (long)puVar16 + (ulong)*puVar16;
    }
    bVar5 = *(byte *)(lVar26 + 4);
    if (*(byte *)(lVar26 + 4) == 0) goto LAB_01921748;
LAB_01920fb0:
    puVar24 = &DAT_cbf29ce484222645;
    pbVar17 = (byte *)(lVar26 + 5);
    do {
      puVar24 = (undefined1 *)(((ulong)puVar24 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar5 != 0);
    uVar19 = 2;
    if (puVar24 != (undefined1 *)0x47d286a773896110) {
      uVar19 = (uint)(puVar24 == (undefined1 *)0x8e1cb3180f90792f);
    }
  }
  else {
    if (((ulong)puVar29[7] == 0) ||
       (iVar43 = *(int *)((long)piVar4 + (ulong)puVar29[7]), iVar43 < 1)) {
      iVar43 = 300;
    }
    if (uVar7 < 0x13) goto joined_r0x0192172c;
    lVar25 = 0;
    if ((ulong)puVar29[9] != 0) {
      puVar16 = (uint *)((long)piVar4 + (ulong)puVar29[9]);
      lVar25 = (long)puVar16 + (ulong)*puVar16;
    }
    bVar5 = *(byte *)(lVar25 + 4);
    if (*(byte *)(lVar25 + 4) != 0) goto LAB_01920f0c;
LAB_01921730:
    lVar25 = 0;
    if (0x14 < uVar7) goto LAB_01920f94;
LAB_0192173c:
    lVar26 = 0;
    bVar5 = DAT_00000004;
    if (DAT_00000004 != 0) goto LAB_01920fb0;
LAB_01921748:
    uVar19 = 0;
  }
  iVar18 = (int)lVar25;
  iVar44 = (&DAT_03a7c6f0)[lVar25];
  if (uVar7 < 0x17) {
    if (0x10 < uVar7) {
      iVar40 = 0;
      goto LAB_01922230;
    }
    if (10 < uVar7) {
      iVar41 = 0;
      iVar40 = 0;
      iVar32 = 0;
      uVar6 = puVar29[5];
      goto joined_r0x01922274;
    }
    iVar41 = 0;
    iVar40 = 0;
    uVar20 = 0;
    iVar32 = 0;
    uVar37 = 0;
    iVar12 = 0;
    if (6 < uVar7) goto LAB_01921060;
    iVar40 = 0;
    uVar37 = 0;
    uVar23 = 0;
    uVar39 = 0;
  }
  else {
    if ((ulong)puVar29[0xb] == 0) {
      iVar40 = 0;
      if (0x18 < uVar7) goto LAB_01921028;
LAB_01922230:
      iVar32 = 0;
      uVar20 = (ulong)puVar29[8];
      if (uVar20 != 0) goto LAB_0192103c;
LAB_0192223c:
      iVar41 = 0;
      uVar20 = (ulong)puVar29[5];
      if (uVar20 != 0) goto LAB_01921048;
LAB_01922248:
      uVar37 = 0;
      if (uVar7 < 0xd) goto LAB_01922254;
LAB_01921054:
      if ((ulong)puVar29[6] == 0) goto LAB_01922254;
      uVar20 = *(ulong *)((long)piVar4 + (ulong)puVar29[6]);
      iVar12 = iVar32;
LAB_01921060:
      iVar32 = iVar12;
      uVar39 = (ulong)puVar29[3];
      uVar23 = 0;
      if (uVar39 != 0) goto LAB_01921068;
    }
    else {
      iVar40 = *(int *)((long)piVar4 + (ulong)puVar29[0xb]);
      if (uVar7 < 0x19) goto LAB_01922230;
LAB_01921028:
      iVar32 = 0;
      if ((ulong)puVar29[0xc] != 0) {
        iVar32 = *(int *)((long)piVar4 + (ulong)puVar29[0xc]);
      }
      uVar20 = (ulong)puVar29[8];
      if (uVar20 == 0) goto LAB_0192223c;
LAB_0192103c:
      iVar41 = *(int *)((long)piVar4 + uVar20);
      uVar6 = puVar29[5];
joined_r0x01922274:
      uVar20 = (ulong)uVar6;
      if (uVar20 == 0) goto LAB_01922248;
LAB_01921048:
      uVar37 = *(undefined8 *)((long)piVar4 + uVar20);
      if (0xc < uVar7) goto LAB_01921054;
LAB_01922254:
      uVar20 = 0;
      uVar39 = (ulong)puVar29[3];
      if (uVar39 == 0) {
        uVar23 = 0;
      }
      else {
LAB_01921068:
        uVar23 = *(ulong *)((long)piVar4 + uVar39);
      }
    }
    if ((uVar7 < 9) || ((ulong)puVar29[4] == 0)) {
      uVar39 = 0;
    }
    else {
      uVar39 = *(ulong *)((long)piVar4 + (ulong)puVar29[4]);
    }
  }
LAB_01921080:
  *param_1 = iVar42;
  param_1[1] = iVar43;
  param_1[2] = iVar18;
  param_1[3] = uVar19;
  param_1[4] = iVar44;
  param_1[5] = iVar40;
  param_1[6] = iVar32;
  param_1[7] = iVar41;
  *(undefined8 *)(param_1 + 8) = uVar37;
  *(ulong *)(param_1 + 10) = uVar20;
  *(ulong *)(param_1 + 0xc) = uVar23;
  *(ulong *)(param_1 + 0xe) = uVar39;
  uVar21 = *(ulong *)(param_6 + 0x420);
  uVar14 = 0;
  if (uVar21 != 0) {
    uVar14 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar21 - 1 & uVar23;
    }
    else {
      uVar15 = uVar23;
      if (uVar21 <= uVar23) {
        uVar15 = 0;
        if (uVar21 != 0) {
          uVar15 = uVar23 / uVar21;
        }
        uVar15 = uVar23 - uVar15 * uVar21;
      }
    }
    plVar28 = *(long **)(*(long *)(param_6 + 0x418) + uVar15 * 8);
    if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar28[1] == uVar23) {
            if (plVar28[2] == uVar23) goto LAB_0192114c;
          }
          else if ((plVar28[1] & uVar21 - 1) != uVar15) goto LAB_01921ab0;
          plVar28 = (long *)*plVar28;
          uVar14 = 0;
        } while (plVar28 != (long *)0x0);
        goto LAB_01921150;
      }
      do {
        uVar14 = plVar28[1];
        if (uVar14 == uVar23) {
          if (plVar28[2] == uVar23) goto LAB_0192114c;
        }
        else {
          if (uVar21 <= uVar14) {
            uVar10 = 0;
            if (uVar21 != 0) {
              uVar10 = uVar14 / uVar21;
            }
            uVar14 = uVar14 - uVar10 * uVar21;
          }
          if (uVar14 != uVar15) break;
        }
        plVar28 = (long *)*plVar28;
      } while (plVar28 != (long *)0x0);
    }
LAB_01921ab0:
    uVar14 = 0;
  }
LAB_01921150:
  puVar16 = *(uint **)(*(long *)(param_6 + 0xa0) + 0x250);
  piVar4 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar16 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (4 - (long)*piVar4)));
  puVar16 = (uint *)((long)puVar16 + uVar14 * 4 + (ulong)*puVar16 + 4);
  local_98 = 0;
  local_158 = &DAT_cbf29ce484222645;
  local_150 = &DAT_03996322;
  piVar4 = (int *)((long)puVar16 + (ulong)*puVar16);
  local_148 = 0;
  local_140 = (long *)0x0;
  local_138 = (undefined8 *)&DAT_cbf29ce484222645;
  puStack_130 = &DAT_03996322;
  local_128 = 0;
  local_120 = (long *)0x0;
  local_118 = (undefined8 *)&DAT_cbf29ce484222645;
  puStack_110 = &DAT_03996322;
  local_108 = 0;
  local_100 = (long *)0x0;
  local_f8 = (undefined8 *)&DAT_cbf29ce484222645;
  puStack_f0 = &DAT_03996322;
  local_e8 = 0;
  local_e0 = (long *)0x0;
  local_d8 = &DAT_cbf29ce484222645;
  pcStack_d0 = "";
  local_c8 = 0;
  local_c0 = (long *)0x0;
  local_b8 = &DAT_cbf29ce484222645;
  pcStack_b0 = "";
  local_a8 = 0;
  local_a0 = (long *)0x0;
  if (((*PTR_DAT_0437a780 & 1) == 0) &&
     (iVar40 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar40 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
  FUN_01e654fc(&local_90);
  if (local_90 != (undefined8 *)0x0) {
    FUN_01523304(local_70);
    puVar11 = local_90;
    if (local_70[0] != (long *)0x0) {
      if (*(ushort *)((long)piVar4 - (long)*piVar4) < 9) {
        uVar23 = 0;
        uVar14 = local_70[0][0x79];
      }
      else {
        uVar14 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4];
        uVar23 = 0;
        if (uVar14 != 0) {
          uVar23 = *(ulong *)((long)piVar4 + uVar14);
        }
        uVar14 = local_70[0][0x79];
      }
      if (uVar14 != 0) {
        uVar21 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
        uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
        uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar21 < 2) {
          uVar15 = uVar14 - 1 & uVar23;
        }
        else {
          uVar15 = uVar23;
          if (uVar14 <= uVar23) {
            uVar15 = 0;
            if (uVar14 != 0) {
              uVar15 = uVar23 / uVar14;
            }
            uVar15 = uVar23 - uVar15 * uVar14;
          }
        }
        plVar28 = *(long **)(local_70[0][0x78] + uVar15 * 8);
        if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
          if (uVar21 < 2) {
            do {
              if (plVar28[1] == uVar23) {
                if (plVar28[2] == uVar23) goto LAB_019222c0;
              }
              else if ((plVar28[1] & uVar14 - 1) != uVar15) break;
              plVar28 = (long *)*plVar28;
            } while (plVar28 != (long *)0x0);
          }
          else {
            do {
              uVar21 = plVar28[1];
              if (uVar21 == uVar23) {
                if (plVar28[2] == uVar23) goto LAB_019222c0;
              }
              else {
                if (uVar14 <= uVar21) {
                  uVar10 = 0;
                  if (uVar14 != 0) {
                    uVar10 = uVar21 / uVar14;
                  }
                  uVar21 = uVar21 - uVar10 * uVar14;
                }
                if (uVar21 != uVar15) break;
              }
              plVar28 = (long *)*plVar28;
            } while (plVar28 != (long *)0x0);
          }
        }
      }
      FUN_01923d80();
      plVar28 = extraout_x11;
LAB_019222c0:
      local_158 = (undefined1 *)plVar28[3];
      local_150 = (undefined1 *)plVar28[4];
      local_148 = plVar28[5];
      plVar28 = (long *)plVar28[6];
      if (plVar28 != (long *)0x0) {
        (**(code **)(*plVar28 + 0x18))(plVar28);
      }
      if (local_140 != (long *)0x0) {
        lVar25 = *local_140;
        local_140 = plVar28;
        (**(code **)(lVar25 + 0x20))();
        plVar28 = local_140;
      }
      local_140 = plVar28;
      puVar11 = local_90;
      if (local_70[0] != (long *)0x0) {
        lVar25 = local_70[0][0xb];
        piVar3 = (int *)(lVar25 + 0xc);
        do {
          iVar40 = *piVar3;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar9) {
            *piVar3 = iVar40 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar40 + -1 == 0) {
          *(undefined8 *)(lVar25 + 0x18) = 0;
          (**(code **)(*local_70[0] + 0x20))();
          puVar11 = local_90;
        }
      }
    }
    local_90 = puVar11;
    if (puVar11 != (undefined8 *)0x0) {
      piVar3 = (int *)(puVar11 + 1);
      do {
        iVar40 = *piVar3;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar9) {
          *piVar3 = iVar40 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar40 + -1 == 0) {
        puVar11[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar40 = __cxa_guard_acquire(PTR_DAT_04379498), iVar40 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar25 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar25;
        local_70[0] = (long *)*puVar11;
        FUN_02a44274(lVar25 + 0xd8,local_70);
      }
    }
  }
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xd) ||
     (uVar23 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[6], uVar23 == 0)) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)((long)piVar4 + uVar23);
  }
  FUN_019225b0(&local_90,param_6,uVar13);
  plVar28 = local_120;
  local_138 = local_90;
  puStack_130 = (undefined1 *)uStack_88;
  local_128 = local_80;
  local_120 = (long *)0x0;
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x20))();
  }
  local_120 = local_78;
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x11) ||
     (uVar23 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[8], uVar23 == 0)) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)((long)piVar4 + uVar23);
  }
  FUN_019225b0(&local_90,param_6,uVar13);
  plVar28 = local_100;
  local_118 = local_90;
  puStack_110 = (undefined1 *)uStack_88;
  local_108 = local_80;
  local_100 = (long *)0x0;
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x20))();
  }
  local_100 = local_78;
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xf) ||
     (uVar23 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[7], uVar23 == 0)) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)((long)piVar4 + uVar23);
  }
  FUN_019225b0(&local_90,param_6,uVar13);
  plVar28 = local_e0;
  local_f8 = local_90;
  puStack_f0 = (undefined1 *)uStack_88;
  local_e8 = local_80;
  local_e0 = (long *)0x0;
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x20))();
  }
  local_e0 = local_78;
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x13) ||
     (uVar23 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[9], uVar23 == 0)) {
    lVar25 = 0;
  }
  else {
    puVar16 = (uint *)((long)piVar4 + uVar23);
    lVar25 = (long)puVar16 + (ulong)*puVar16;
  }
  pcVar2 = (char *)(lVar25 + 4);
  local_c8 = strlen(pcVar2);
  plVar28 = local_c0;
  bVar5 = *(byte *)(lVar25 + 4);
  local_d8 = &DAT_cbf29ce484222645;
  if (bVar5 != 0) {
    local_d8 = &DAT_cbf29ce484222645;
    pbVar17 = (byte *)(lVar25 + 5);
    do {
      local_d8 = (undefined1 *)(((ulong)local_d8 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar5 != 0);
  }
  local_c0 = (long *)0x0;
  pcStack_d0 = pcVar2;
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x20))();
  }
  local_c0 = (long *)0x0;
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x15) ||
     (uVar23 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[10], uVar23 == 0)) {
    lVar25 = 0;
  }
  else {
    puVar16 = (uint *)((long)piVar4 + uVar23);
    lVar25 = (long)puVar16 + (ulong)*puVar16;
  }
  pcVar2 = (char *)(lVar25 + 4);
  local_a8 = strlen(pcVar2);
  plVar28 = local_a0;
  bVar5 = *(byte *)(lVar25 + 4);
  if (bVar5 != 0) {
    pbVar17 = (byte *)(lVar25 + 5);
    do {
      puVar38 = (undefined1 *)(((ulong)puVar38 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar5 != 0);
  }
  local_a0 = (long *)0x0;
  local_b8 = puVar38;
  pcStack_b0 = pcVar2;
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x20))();
  }
  local_a0 = (long *)0x0;
  if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0xb) {
    local_98 = 0;
  }
  else {
    uVar23 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5];
    local_98 = 0;
    if (uVar23 != 0) {
      local_98 = *(undefined8 *)((long)piVar4 + uVar23);
    }
  }
  FUN_01923d8c(param_1 + 0x18,&local_158);
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x20))();
  }
  iVar40 = FUN_019223e8(param_6,uVar37);
  param_1[0x10] = iVar40;
  param_1[0x11] = iVar41;
  param_1[0x12] = param_4;
  param_1[0x13] = param_5;
  uVar14 = *(ulong *)(param_6 + 0x350);
  uVar23 = 0;
  if (uVar14 != 0) {
    uVar23 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
    uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar23 < 2) {
      uVar21 = uVar14 - 1 & uVar20;
    }
    else {
      uVar21 = uVar20;
      if (uVar14 <= uVar20) {
        uVar21 = 0;
        if (uVar14 != 0) {
          uVar21 = uVar20 / uVar14;
        }
        uVar21 = uVar20 - uVar21 * uVar14;
      }
    }
    plVar28 = *(long **)(*(long *)(param_6 + 0x348) + uVar21 * 8);
    if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
      if (uVar23 < 2) {
        do {
          if (plVar28[1] == uVar20) {
            if (plVar28[2] == uVar20) goto LAB_01921558;
          }
          else if ((plVar28[1] & uVar14 - 1) != uVar21) goto LAB_01921af4;
          plVar28 = (long *)*plVar28;
          uVar23 = 0;
        } while (plVar28 != (long *)0x0);
        goto LAB_0192155c;
      }
      do {
        uVar23 = plVar28[1];
        if (uVar23 == uVar20) {
          if (plVar28[2] == uVar20) goto LAB_01921558;
        }
        else {
          if (uVar14 <= uVar23) {
            uVar15 = 0;
            if (uVar14 != 0) {
              uVar15 = uVar23 / uVar14;
            }
            uVar23 = uVar23 - uVar15 * uVar14;
          }
          if (uVar23 != uVar21) break;
        }
        plVar28 = (long *)*plVar28;
      } while (plVar28 != (long *)0x0);
    }
LAB_01921af4:
    uVar23 = 0;
  }
LAB_0192155c:
  puVar16 = *(uint **)(*(long *)(param_6 + 0x130) + 0x250);
  piVar4 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar16 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (4 - (long)*piVar4)));
  puVar16 = (uint *)((long)puVar16 + uVar23 * 4 + (ulong)*puVar16 + 4);
  piVar4 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar29 = (ushort *)((long)piVar4 - (long)*piVar4);
  uVar7 = *puVar29;
  if (uVar7 < 7) {
    uVar20 = 0;
LAB_01921714:
    iVar40 = 0;
    uVar23 = 1;
  }
  else {
    uVar20 = 0;
    if ((ulong)puVar29[3] != 0) {
      uVar20 = (ulong)(*(long *)((long)piVar4 + (ulong)puVar29[3]) == -0x7ea200a3293d75a0);
    }
    if (uVar7 < 9) goto LAB_01921714;
    if ((ulong)puVar29[4] == 0) {
      uVar23 = 1;
      if (10 < uVar7) goto LAB_01921618;
LAB_01921b38:
      iVar40 = 0;
    }
    else {
      lVar25 = *(long *)((long)piVar4 + (ulong)puVar29[4]);
      uVar19 = 2;
      if (lVar25 != -0x2d5d80241cc308c) {
        uVar19 = (uint)(lVar25 != -0x35a9867ba33d8fd4);
      }
      uVar23 = (ulong)uVar19;
      if (uVar7 < 0xb) goto LAB_01921b38;
LAB_01921618:
      if ((ulong)puVar29[5] == 0) goto LAB_01921b38;
      iVar40 = *(int *)((long)piVar4 + (ulong)puVar29[5]);
    }
  }
  *(ulong *)(param_1 + 0x14) = uVar20 | uVar23 << 0x20;
  param_1[0x16] = iVar40;
  uVar23 = *(ulong *)(param_6 + 0x488);
  uVar20 = 0;
  if (uVar23 != 0) {
    uVar20 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      uVar14 = uVar23 - 1 & uVar39;
    }
    else {
      uVar14 = uVar39;
      if (uVar23 <= uVar39) {
        uVar14 = 0;
        if (uVar23 != 0) {
          uVar14 = uVar39 / uVar23;
        }
        uVar14 = uVar39 - uVar14 * uVar23;
      }
    }
    plVar28 = *(long **)(*(long *)(param_6 + 0x480) + uVar14 * 8);
    if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
      if (uVar20 < 2) {
        do {
          if (plVar28[1] == uVar39) {
            if (plVar28[2] == uVar39) goto LAB_01921bf4;
          }
          else if ((plVar28[1] & uVar23 - 1) != uVar14) goto LAB_01922144;
          plVar28 = (long *)*plVar28;
          uVar20 = 0;
        } while (plVar28 != (long *)0x0);
        goto LAB_01921bf8;
      }
      do {
        uVar20 = plVar28[1];
        if (uVar20 == uVar39) {
          if (plVar28[2] == uVar39) goto LAB_01921bf4;
        }
        else {
          if (uVar23 <= uVar20) {
            uVar21 = 0;
            if (uVar23 != 0) {
              uVar21 = uVar20 / uVar23;
            }
            uVar20 = uVar20 - uVar21 * uVar23;
          }
          if (uVar20 != uVar14) break;
        }
        plVar28 = (long *)*plVar28;
      } while (plVar28 != (long *)0x0);
    }
LAB_01922144:
    uVar20 = 0;
  }
LAB_01921bf8:
  puVar16 = *(uint **)(*(long *)(param_6 + 0x160) + 0x250);
  piVar4 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar16 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (4 - (long)*piVar4)));
  puVar16 = (uint *)((long)puVar16 + uVar20 * 4 + (ulong)*puVar16 + 4);
  piVar4 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar29 = (ushort *)((long)piVar4 - (long)*piVar4);
  uVar7 = *puVar29;
  if (uVar7 < 7) {
    uVar19 = 0;
LAB_019220a8:
    uVar27 = 0;
    uVar22 = 0;
LAB_019220ac:
    uVar34 = 0;
    uVar30 = 0;
LAB_019220b0:
    uVar36 = 0;
    uVar35 = 0;
LAB_01921d34:
    uVar33 = 0;
  }
  else {
    uVar19 = 0;
    if ((ulong)puVar29[3] != 0) {
      uVar19 = *(uint *)((long)piVar4 + (ulong)puVar29[3]);
      if (uVar19 != 2) {
        uVar19 = (uint)(uVar19 == 1);
      }
    }
    if (uVar7 < 9) goto LAB_019220a8;
    uVar22 = 0;
    if ((ulong)puVar29[4] != 0) {
      uVar22 = *(uint *)((long)piVar4 + (ulong)puVar29[4]);
      if (uVar22 != 2) {
        uVar22 = (uint)(uVar22 == 1);
      }
    }
    if (uVar7 < 0xb) {
      uVar27 = 0;
      goto LAB_019220ac;
    }
    uVar27 = 0;
    if ((ulong)puVar29[5] != 0) {
      uVar27 = *(uint *)((long)piVar4 + (ulong)puVar29[5]);
      if (uVar27 != 2) {
        uVar27 = (uint)(uVar27 == 1);
      }
    }
    if (uVar7 < 0xd) goto LAB_019220ac;
    uVar30 = 0;
    if ((ulong)puVar29[6] != 0) {
      uVar30 = *(uint *)((long)piVar4 + (ulong)puVar29[6]);
      if (uVar30 != 2) {
        uVar30 = (uint)(uVar30 == 1);
      }
    }
    if (uVar7 < 0xf) {
      uVar34 = 0;
      goto LAB_019220b0;
    }
    uVar34 = 0;
    if ((ulong)puVar29[7] != 0) {
      uVar34 = *(uint *)((long)piVar4 + (ulong)puVar29[7]);
      if (uVar34 != 2) {
        uVar34 = (uint)(uVar34 == 1);
      }
    }
    if (uVar7 < 0x11) goto LAB_019220b0;
    if ((ulong)puVar29[8] != 0) {
      uVar35 = *(uint *)((long)piVar4 + (ulong)puVar29[8]);
      if (uVar35 != 2) {
        uVar35 = (uint)(uVar35 == 1);
      }
      if (0x12 < uVar7) goto LAB_01921d08;
LAB_01922048:
      uVar36 = 0;
      goto LAB_01921d34;
    }
    uVar35 = 0;
    if (uVar7 < 0x13) goto LAB_01922048;
LAB_01921d08:
    uVar36 = 0;
    if ((ulong)puVar29[9] != 0) {
      uVar36 = *(uint *)((long)piVar4 + (ulong)puVar29[9]);
      if (uVar36 != 2) {
        uVar36 = (uint)(uVar36 == 1);
      }
    }
    if ((uVar7 < 0x15) || ((ulong)puVar29[10] == 0)) goto LAB_01921d34;
    uVar33 = *(uint *)((long)piVar4 + (ulong)puVar29[10]);
    if (uVar33 != 2) {
      uVar33 = (uint)(uVar33 == 1);
    }
  }
  param_1[0x4a] = uVar19;
  param_1[0x4b] = uVar22;
  param_1[0x4c] = uVar27;
  param_1[0x4d] = uVar30;
  param_1[0x4e] = uVar34;
  param_1[0x4f] = uVar35;
  param_1[0x50] = uVar36;
  param_1[0x51] = uVar33;
  uVar23 = *(ulong *)(param_6 + 0x558);
  uVar20 = 0;
  if (uVar23 != 0) {
    uVar20 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar39 = *(ulong *)(param_1 + 0x48);
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      uVar14 = uVar23 - 1 & uVar39;
    }
    else if (uVar39 < uVar23) {
      uVar14 = uVar39;
    }
    else {
      uVar14 = 0;
      if (uVar23 != 0) {
        uVar14 = uVar39 / uVar23;
      }
      uVar14 = uVar39 - uVar14 * uVar23;
    }
    plVar28 = *(long **)(*(long *)(param_6 + 0x550) + uVar14 * 8);
    if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
      if (uVar20 < 2) {
        do {
          if (plVar28[1] == uVar39) {
            if (plVar28[2] == uVar39) goto LAB_01921e04;
          }
          else if ((plVar28[1] & uVar23 - 1) != uVar14) goto LAB_01922188;
          plVar28 = (long *)*plVar28;
          uVar20 = 0;
        } while (plVar28 != (long *)0x0);
        goto LAB_01921e08;
      }
      do {
        uVar20 = plVar28[1];
        if (uVar20 == uVar39) {
          if (plVar28[2] == uVar39) goto LAB_01921e04;
        }
        else {
          if (uVar23 <= uVar20) {
            uVar21 = 0;
            if (uVar23 != 0) {
              uVar21 = uVar20 / uVar23;
            }
            uVar20 = uVar20 - uVar21 * uVar23;
          }
          if (uVar20 != uVar14) break;
        }
        plVar28 = (long *)*plVar28;
      } while (plVar28 != (long *)0x0);
    }
LAB_01922188:
    uVar20 = 0;
  }
LAB_01921e08:
  iVar40 = 0;
  puVar16 = *(uint **)(*(long *)(param_6 + 0x1f0) + 0x250);
  piVar4 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar16 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (4 - (long)*piVar4)));
  puVar16 = (uint *)((long)puVar16 + uVar20 * 4 + (ulong)*puVar16 + 4);
  piVar4 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar29 = (ushort *)((long)piVar4 - (long)*piVar4);
  uVar7 = *puVar29;
  if (uVar7 < 7) {
    uVar20 = 0;
LAB_019220bc:
    uVar37 = 0;
    iVar42 = 0;
  }
  else {
    uVar20 = 0;
    if ((ulong)puVar29[3] != 0) {
      uVar20 = *(ulong *)((long)piVar4 + (ulong)puVar29[3]);
    }
    if (uVar7 < 9) goto LAB_019220bc;
    if ((ulong)puVar29[4] == 0) {
      iVar42 = 0;
      if (0xc < uVar7) goto LAB_01921e7c;
LAB_01922074:
      iVar40 = 0;
      if (10 < uVar7) {
LAB_01921e88:
        uVar23 = (ulong)puVar29[5];
        if (uVar23 != 0) goto LAB_01921e90;
      }
LAB_01922080:
      uVar37 = 0;
    }
    else {
      iVar42 = *(int *)((long)piVar4 + (ulong)puVar29[4]);
      if (uVar7 < 0xd) goto LAB_01922074;
LAB_01921e7c:
      if ((ulong)puVar29[6] != 0) {
        iVar40 = *(int *)((long)piVar4 + (ulong)puVar29[6]);
        goto LAB_01921e88;
      }
      iVar40 = 0;
      uVar23 = (ulong)puVar29[5];
      if (uVar23 == 0) goto LAB_01922080;
LAB_01921e90:
      uVar37 = *(undefined8 *)((long)piVar4 + uVar23);
    }
  }
  *(ulong *)(param_1 + 0x52) = uVar20;
  param_1[0x54] = iVar42;
  *(undefined8 *)(param_1 + 0x56) = uVar37;
  param_1[0x58] = iVar40;
  uVar39 = *(ulong *)(param_6 + 0x5c0);
  uVar23 = 0;
  if (uVar39 != 0) {
    uVar23 = uVar39 - (uVar39 >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
    uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar23 < 2) {
      uVar14 = uVar39 - 1 & uVar20;
    }
    else {
      uVar14 = uVar20;
      if (uVar39 <= uVar20) {
        uVar14 = 0;
        if (uVar39 != 0) {
          uVar14 = uVar20 / uVar39;
        }
        uVar14 = uVar20 - uVar14 * uVar39;
      }
    }
    plVar28 = *(long **)(*(long *)(param_6 + 0x5b8) + uVar14 * 8);
    if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
      if (uVar23 < 2) {
        do {
          if (plVar28[1] == uVar20) {
            if (plVar28[2] == uVar20) goto LAB_01921f50;
          }
          else if ((plVar28[1] & uVar39 - 1) != uVar14) goto LAB_019221cc;
          plVar28 = (long *)*plVar28;
          uVar23 = 0;
        } while (plVar28 != (long *)0x0);
        goto LAB_01921f54;
      }
      do {
        uVar23 = plVar28[1];
        if (uVar23 == uVar20) {
          if (plVar28[2] == uVar20) goto LAB_01921f50;
        }
        else {
          if (uVar39 <= uVar23) {
            uVar21 = 0;
            if (uVar39 != 0) {
              uVar21 = uVar23 / uVar39;
            }
            uVar23 = uVar23 - uVar21 * uVar39;
          }
          if (uVar23 != uVar14) break;
        }
        plVar28 = (long *)*plVar28;
      } while (plVar28 != (long *)0x0);
    }
LAB_019221cc:
    uVar23 = 0;
  }
LAB_01921f54:
  puVar16 = *(uint **)(*(long *)(param_6 + 0x220) + 0x250);
  piVar4 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar16 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (4 - (long)*piVar4)));
  puVar16 = (uint *)((long)puVar16 + uVar23 * 4 + (ulong)*puVar16 + 4);
  piVar4 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar29 = (ushort *)((long)piVar4 - (long)*piVar4);
  uVar7 = *puVar29;
  if (uVar7 < 7) {
    iVar40 = 0;
  }
  else {
    iVar40 = 0;
    if ((ulong)puVar29[3] != 0) {
      iVar40 = *(int *)((long)piVar4 + (ulong)puVar29[3]);
    }
    if (8 < uVar7) {
      iVar42 = 0;
      iVar43 = 0;
      if ((ulong)puVar29[4] != 0) {
        iVar43 = *(int *)((long)piVar4 + (ulong)puVar29[4]);
      }
      if (uVar7 < 0xb) {
        iVar44 = 0;
      }
      else {
        iVar44 = 0;
        iVar42 = 0;
        if ((ulong)puVar29[5] != 0) {
          iVar42 = *(int *)((long)piVar4 + (ulong)puVar29[5]);
        }
        if ((0xc < uVar7) && ((ulong)puVar29[6] != 0)) {
          iVar44 = *(int *)((long)piVar4 + (ulong)puVar29[6]);
        }
      }
      goto LAB_01921ffc;
    }
  }
  iVar42 = 0;
  iVar43 = 0;
  iVar44 = 0;
LAB_01921ffc:
  param_1[0x5a] = iVar40;
  param_1[0x5b] = iVar43;
  param_1[0x5c] = iVar42;
  param_1[0x5d] = iVar44;
  return;
}


