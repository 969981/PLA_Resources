/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b12fc8; name: FUN_02b12fc8
 */


ulong FUN_02b12fc8(long *param_1)

{
  int *piVar1;
  long lVar2;
  uint *puVar3;
  byte bVar4;
  ushort uVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  size_t sVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  ushort *puVar16;
  int *piVar17;
  ulong uVar18;
  int *piVar19;
  byte *pbVar20;
  long lVar21;
  ulong uVar22;
  byte *pbVar23;
  int *piVar24;
  uint *puVar25;
  long lVar26;
  undefined8 *puVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  long *plVar31;
  uint *puVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  undefined4 uVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  uint uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [12];
  
  auVar44 = FUN_02a768ac();
  uVar9 = auVar44._0_8_;
  uVar34 = uVar9 >> 0x28;
  if ((uVar9 >> 0x20 & 0xff) == 0) {
    uVar29 = 0;
  }
  else if (auVar44._8_4_ == 0) {
    uVar9 = (**(code **)(*param_1 + 0x48))(param_1);
    uVar29 = uVar9 >> 0x20;
    uVar34 = uVar9 >> 0x28;
    if (*(char *)((long)param_1 + 0x1e2) != '\0') {
      nn::fs::CloseFile(param_1[0x1c]);
      *(undefined1 *)((long)param_1 + 0x1e2) = 0;
    }
  }
  else {
    uVar29 = uVar9 >> 0x20;
  }
  piVar1 = (int *)(param_1[0x4a] + (ulong)*(uint *)param_1[0x4a]);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
     (uVar18 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar18 == 0)) {
    puVar25 = (uint *)0x0;
  }
  else {
    puVar25 = (uint *)((long)piVar1 + uVar18);
    puVar25 = (uint *)((long)puVar25 + (ulong)*puVar25);
  }
  lVar33 = param_1[0x4f];
  lVar13 = param_1[0x4e];
  lVar21 = lVar33 - lVar13 >> 4;
  uVar18 = (ulong)*puVar25;
  lVar30 = lVar21 * 0x6db6db6db6db6db7 - uVar18;
  if (uVar18 <= (ulong)(lVar21 * 0x6db6db6db6db6db7)) {
    if (lVar30 != 0) {
      lVar13 = lVar13 + uVar18 * 0x70;
      while (lVar13 != lVar33) {
        if (*(long **)(lVar33 + -0x38) != (long *)0x0) {
          (**(code **)(**(long **)(lVar33 + -0x38) + 0x20))();
        }
        plVar31 = (long *)(lVar33 + -0x58);
        lVar33 = lVar33 + -0x70;
        if ((long *)*plVar31 != (long *)0x0) {
          (**(code **)(*(long *)*plVar31 + 0x20))();
        }
      }
      param_1[0x4f] = lVar13;
    }
    goto LAB_02b13444;
  }
  plVar31 = param_1 + 0x51;
  if (uVar18 + lVar21 * -0x6db6db6db6db6db7 <=
      (ulong)((param_1[0x50] - lVar33 >> 4) * 0x6db6db6db6db6db7)) {
    do {
      FUN_02b146b0(plVar31,lVar33);
      lVar33 = param_1[0x4f] + 0x70;
      bVar7 = lVar30 != -1;
      lVar30 = lVar30 + 1;
      param_1[0x4f] = lVar33;
    } while (bVar7);
    goto LAB_02b13444;
  }
  uVar22 = param_1[0x52];
  if (0x7ffffffffffffffe < uVar22) {
    uVar22 = 0x7fffffffffffffff;
  }
  if (uVar22 < uVar18) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar33 = param_1[0x50] - lVar13 >> 4;
  if ((ulong)(lVar33 * 0x6db6db6db6db6db7) < uVar22 >> 1) {
    uVar22 = lVar33 * -0x2492492492492492;
    if (uVar18 <= uVar22) goto LAB_02b13120;
LAB_02b13128:
    lVar33 = (**(code **)(*(long *)*plVar31 + 0x10))((long *)*plVar31,uVar18 * 0x70,0x10);
    uVar22 = uVar18;
    if (lVar33 == 0) {
      (**(code **)(*(long *)*plVar31 + 0xb8))();
    }
  }
  else {
LAB_02b13120:
    uVar18 = uVar22;
    if (uVar22 != 0) goto LAB_02b13128;
    lVar33 = 0;
  }
  lVar21 = lVar33 + lVar21 * 0x10;
  lVar13 = lVar21;
  do {
    FUN_02b146b0(plVar31,lVar13);
    lVar13 = lVar13 + 0x70;
    bVar7 = lVar30 != -1;
    lVar30 = lVar30 + 1;
  } while (bVar7);
  lVar30 = param_1[0x4e];
  lVar28 = param_1[0x4f];
  if (lVar28 == lVar30) {
    lVar28 = lVar30;
  }
  else {
    lVar26 = 0;
    do {
      lVar35 = *plVar31;
      if ((*PTR_DAT_04379520 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar6 = PTR_DAT_04379528;
        if (iVar8 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (lVar10 != 0) {
        if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar35;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      }
      lVar35 = lVar28 + lVar26;
      lVar2 = lVar21 + lVar26;
      *(undefined8 *)(lVar2 + -0x70) = *(undefined8 *)(lVar35 + -0x70);
      *(undefined8 *)(lVar2 + -0x68) = *(undefined8 *)(lVar35 + -0x68);
      *(undefined8 *)(lVar2 + -0x60) = *(undefined8 *)(lVar35 + -0x60);
      plVar11 = *(long **)(lVar35 + -0x58);
      *(long **)(lVar2 + -0x58) = plVar11;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))();
      }
      *(undefined8 *)(lVar2 + -0x50) = *(undefined8 *)(lVar35 + -0x50);
      *(undefined8 *)(lVar2 + -0x48) = *(undefined8 *)(lVar35 + -0x48);
      *(undefined8 *)(lVar2 + -0x40) = *(undefined8 *)(lVar35 + -0x40);
      plVar11 = *(long **)(lVar35 + -0x38);
      *(long **)(lVar2 + -0x38) = plVar11;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))();
      }
      uVar14 = *(undefined8 *)(lVar35 + -8);
      *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(lVar35 + -0x18);
      *(undefined8 *)(lVar2 + -8) = uVar14;
      *(undefined8 *)(lVar2 + -0x28) = *(undefined8 *)(lVar35 + -0x28);
      *(undefined8 *)(lVar2 + -0x30) = *(undefined8 *)(lVar35 + -0x30);
      uVar14 = *(undefined8 *)(lVar35 + -0x20);
      *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar35 + -0x10);
      *(undefined8 *)(lVar2 + -0x20) = uVar14;
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      }
      lVar26 = lVar26 + -0x70;
    } while (lVar30 - lVar28 != lVar26);
    lVar21 = lVar21 + lVar26;
    lVar30 = param_1[0x4f];
    lVar28 = param_1[0x4e];
  }
  param_1[0x4f] = lVar13;
  lVar13 = param_1[0x50];
  param_1[0x4e] = lVar21;
  param_1[0x50] = lVar33 + uVar22 * 0x70;
  while (lVar30 != lVar28) {
    if (*(long **)(lVar30 + -0x38) != (long *)0x0) {
      (**(code **)(**(long **)(lVar30 + -0x38) + 0x20))();
    }
    plVar11 = (long *)(lVar30 + -0x58);
    lVar30 = lVar30 + -0x70;
    if ((long *)*plVar11 != (long *)0x0) {
      (**(code **)(*(long *)*plVar11 + 0x20))();
    }
  }
  if (lVar28 != 0) {
    plVar31 = (long *)*plVar31;
    uVar18 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar18 & 1) != 0) {
      lVar33 = tpidr_el0;
      if (*(char *)(lVar33 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar33 + 0x38d488) = 1;
        *(undefined8 *)(lVar33 + 0x38d478) = 0;
        *(undefined8 *)(lVar33 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar33 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar33 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar28,lVar13 - lVar28,0x10);
        goto LAB_02b13444;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar28,lVar13 - lVar28,0x10);
  }
LAB_02b13444:
  puVar32 = puVar25 + 1;
  if (*puVar25 != 0) {
    puVar3 = puVar32 + *puVar25;
    fVar42 = *(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0;
    fVar43 = fVar42 * 0.0;
    lVar30 = 0;
    lVar33 = (long)puVar25 + 9;
    do {
      uVar40 = *puVar32;
      piVar1 = (int *)((long)puVar32 + (ulong)uVar40);
      lVar13 = param_1[0x4e];
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar18 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar18 == 0)) {
        lVar21 = 0;
      }
      else {
        puVar25 = (uint *)((long)piVar1 + uVar18);
        lVar21 = (long)puVar25 + (ulong)*puVar25;
      }
      sVar12 = strlen((char *)(lVar21 + 4));
      bVar4 = *(byte *)(lVar21 + 4);
      puVar15 = &DAT_cbf29ce484222645;
      if (bVar4 != 0) {
        puVar15 = &DAT_cbf29ce484222645;
        pbVar23 = (byte *)(lVar21 + 5);
        do {
          puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar23;
          pbVar23 = pbVar23 + 1;
        } while (bVar4 != 0);
      }
      puVar27 = (undefined8 *)(lVar13 + lVar30 * 0x70);
      *puVar27 = puVar15;
      puVar27[1] = (char *)(lVar21 + 4);
      puVar27[2] = sVar12;
      plVar11 = puVar27 + 3;
      plVar31 = (long *)*plVar11;
      *plVar11 = 0;
      if (plVar31 != (long *)0x0) {
        (**(code **)(*plVar31 + 0x20))();
      }
      *plVar11 = 0;
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar18 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar18 == 0)) {
LAB_02b13604:
        if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar8 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        puVar15 = *(undefined1 **)PTR_DAT_0437a0d8;
        pbVar23 = *(byte **)(PTR_DAT_0437a0d8 + 8);
        sVar12 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
        plVar31 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
        if (plVar31 != (long *)0x0) {
          (**(code **)(*plVar31 + 0x18))(plVar31);
        }
      }
      else {
        uVar22 = (ulong)*(uint *)((long)piVar1 + uVar18);
        lVar21 = (long)((long)piVar1 + uVar18) + uVar22;
        pbVar23 = (byte *)(lVar21 + 4);
        if (lVar21 == 0) goto LAB_02b13604;
        sVar12 = strlen((char *)pbVar23);
        bVar4 = *pbVar23;
        if (bVar4 == 0) {
          plVar31 = (long *)0x0;
          puVar15 = &DAT_cbf29ce484222645;
        }
        else {
          puVar15 = &DAT_cbf29ce484222645;
          pbVar20 = (byte *)(lVar33 + uVar22 + uVar18 + (ulong)uVar40);
          do {
            puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar20;
            pbVar20 = pbVar20 + 1;
          } while (bVar4 != 0);
          plVar31 = (long *)0x0;
        }
      }
      lVar21 = lVar13 + lVar30 * 0x70;
      plVar11 = *(long **)(lVar21 + 0x38);
      *(undefined1 **)(lVar21 + 0x20) = puVar15;
      *(byte **)(lVar21 + 0x28) = pbVar23;
      *(size_t *)(lVar21 + 0x30) = sVar12;
      *(undefined8 *)(lVar21 + 0x38) = 0;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
      *(long **)(lVar21 + 0x38) = plVar31;
      puVar16 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar5 = *puVar16;
      if (uVar5 < 9) {
        piVar19 = (int *)0x0;
        piVar24 = (int *)0x0;
        piVar17 = (int *)0x0;
      }
      else {
        if ((ulong)puVar16[4] == 0) {
          piVar24 = (int *)0x0;
        }
        else {
          puVar25 = (uint *)((long)piVar1 + (ulong)puVar16[4]);
          piVar24 = (int *)((long)puVar25 + (ulong)*puVar25);
        }
        if (uVar5 < 0xb) {
          piVar19 = (int *)0x0;
          piVar17 = (int *)0x0;
        }
        else {
          piVar19 = (int *)0x0;
          if ((ulong)puVar16[5] != 0) {
            puVar25 = (uint *)((long)piVar1 + (ulong)puVar16[5]);
            piVar19 = (int *)((long)puVar25 + (ulong)*puVar25);
          }
          if (uVar5 < 0xd) {
            piVar17 = (int *)0x0;
          }
          else {
            piVar17 = (int *)0x0;
            if ((ulong)puVar16[6] != 0) {
              puVar25 = (uint *)((long)piVar1 + (ulong)puVar16[6]);
              piVar17 = (int *)((long)puVar25 + (ulong)*puVar25);
            }
          }
        }
      }
      puVar16 = (ushort *)((long)piVar24 - (long)*piVar24);
      uVar5 = *puVar16;
      uVar38 = 0;
      uVar36 = 0;
      uVar40 = 0;
      if (4 < uVar5) {
        uVar36 = 0;
        if ((ulong)puVar16[2] != 0) {
          uVar36 = *(undefined4 *)((long)piVar24 + (ulong)puVar16[2]);
        }
        if (uVar5 < 7) {
          uVar38 = 0;
          uVar40 = 0;
        }
        else {
          uVar38 = 0;
          if ((ulong)puVar16[3] != 0) {
            uVar38 = *(undefined4 *)((long)piVar24 + (ulong)puVar16[3]);
          }
          if ((uVar5 < 9) || ((ulong)puVar16[4] == 0)) {
            uVar40 = 0;
          }
          else {
            uVar40 = *(uint *)((long)piVar24 + (ulong)puVar16[4]);
          }
        }
      }
      lVar21 = lVar13 + lVar30 * 0x70;
      *(ulong *)(lVar21 + 0x48) = (ulong)uVar40;
      *(ulong *)(lVar21 + 0x40) = CONCAT44(uVar38,uVar36);
      puVar16 = (ushort *)((long)piVar19 - (long)*piVar19);
      uVar5 = *puVar16;
      fVar37 = fVar43;
      fVar39 = fVar43;
      fVar41 = fVar43;
      if (4 < uVar5) {
        if ((ulong)puVar16[2] != 0) {
          fVar37 = fVar42 * *(float *)((long)piVar19 + (ulong)puVar16[2]);
        }
        if (6 < uVar5) {
          if ((ulong)puVar16[3] != 0) {
            fVar39 = fVar42 * *(float *)((long)piVar19 + (ulong)puVar16[3]);
          }
          if ((uVar5 < 9) || ((ulong)puVar16[4] == 0)) {
          }
          else {
            fVar41 = fVar42 * *(float *)((long)piVar19 + (ulong)puVar16[4]);
          }
        }
      }
      uVar36 = 0;
      uVar38 = 0;
      lVar21 = lVar13 + lVar30 * 0x70;
      uVar40 = 0;
      *(ulong *)(lVar21 + 0x58) = (ulong)(uint)fVar41;
      *(ulong *)(lVar21 + 0x50) = CONCAT44(fVar39,fVar37);
      puVar16 = (ushort *)((long)piVar17 - (long)*piVar17);
      uVar5 = *puVar16;
      if (4 < uVar5) {
        uVar36 = 0;
        if ((ulong)puVar16[2] != 0) {
          uVar36 = *(undefined4 *)((long)piVar17 + (ulong)puVar16[2]);
        }
        if (uVar5 < 7) {
          uVar38 = 0;
          uVar40 = 0;
        }
        else {
          uVar38 = 0;
          if ((ulong)puVar16[3] != 0) {
            uVar38 = *(undefined4 *)((long)piVar17 + (ulong)puVar16[3]);
          }
          if ((uVar5 < 9) || ((ulong)puVar16[4] == 0)) {
            uVar40 = 0;
          }
          else {
            uVar40 = *(uint *)((long)piVar17 + (ulong)puVar16[4]);
          }
        }
      }
      lVar13 = lVar13 + lVar30 * 0x70;
      puVar32 = puVar32 + 1;
      *(ulong *)(lVar13 + 0x68) = (ulong)uVar40;
      *(ulong *)(lVar13 + 0x60) = CONCAT44(uVar38,uVar36);
      lVar30 = lVar30 + 1;
      lVar33 = lVar33 + 4;
    } while (puVar32 != puVar3);
  }
  return uVar34 << 0x28 | (uVar29 & 0xff) << 0x20 | uVar9 & 0xffffffff;
}


