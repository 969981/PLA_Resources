/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028c4a3c; name: FUN_028c4a3c
 */


void FUN_028c4a3c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  byte bVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  size_t sVar12;
  byte *pbVar13;
  long *plVar14;
  byte *pbVar15;
  long *plVar16;
  long *plVar17;
  int *piVar18;
  byte *pbVar19;
  ulong uVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *pbVar23;
  uint *puVar24;
  undefined8 uVar25;
  byte *unaff_x28;
  float fVar26;
  long local_90;
  undefined1 auStack_78 [24];
  
  piVar18 = *(int **)(param_1 + 0x70);
  if (((piVar18 != (int *)0x0) && (6 < *(ushort *)((long)piVar18 - (long)*piVar18))) &&
     (uVar20 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[3], uVar20 != 0)) {
    uVar21 = (ulong)*(uint *)((long)piVar18 + uVar20);
    puVar3 = (uint *)((long)((long)piVar18 + uVar20) + uVar21);
    fVar26 = (float)NEON_ucvtf(*puVar3);
    plVar1 = (long *)(param_1 + 8);
    FUN_028c56bc(plVar1,(long)(fVar26 / *(float *)(param_1 + 0x68)));
    puVar24 = puVar3 + 1;
    if ((ulong)*puVar3 != 0) {
      puVar3 = puVar24 + *puVar3;
      plVar2 = (long *)(param_1 + 0x38);
      pbVar23 = (byte *)((long)piVar18 + uVar21 + uVar20 + 9);
      do {
        uVar5 = *puVar24;
        plVar9 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x18,8);
        if (plVar9 == (long *)0x0) {
          plVar16 = (long *)0x0;
          local_90 = 0;
          lVar10 = 0;
        }
        else {
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar8 != 0))
          {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_028c532c;
          *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          *plVar9 = 0;
          plVar9[1] = 0;
          plVar9[2] = 0;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          lVar10 = 8;
          local_90 = 0x18;
          plVar16 = param_2;
        }
        piVar18 = (int *)((long)puVar24 + (ulong)uVar5);
        if (*(ushort *)((long)piVar18 - (long)*piVar18) < 0xd) {
          lVar11 = 0;
        }
        else {
          uVar20 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[6];
          lVar11 = 0;
          if (uVar20 != 0) {
            puVar4 = (uint *)((long)piVar18 + uVar20);
            lVar11 = (long)puVar4 + (ulong)*puVar4;
          }
        }
        *plVar9 = lVar11;
        if (*(ushort *)((long)piVar18 - (long)*piVar18) < 0xf) {
          lVar11 = 0;
        }
        else {
          uVar20 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[7];
          lVar11 = 0;
          if (uVar20 != 0) {
            puVar4 = (uint *)((long)piVar18 + uVar20);
            lVar11 = (long)puVar4 + (ulong)*puVar4;
          }
        }
        plVar9[1] = lVar11;
        if (*(ushort *)((long)piVar18 - (long)*piVar18) < 0x11) {
          lVar11 = 0;
        }
        else {
          uVar20 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[8];
          lVar11 = 0;
          if (uVar20 != 0) {
            puVar4 = (uint *)((long)piVar18 + uVar20);
            lVar11 = (long)puVar4 + (ulong)*puVar4;
          }
        }
        plVar9[2] = lVar11;
        if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 5) ||
           (uVar20 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2], uVar20 == 0)) {
LAB_028c4c74:
          if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar8 != 0)) {
            FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_0437a0d0);
          }
          pbVar22 = *(byte **)PTR_DAT_0437a0d8;
          pbVar13 = *(byte **)(PTR_DAT_0437a0d8 + 8);
          sVar12 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
          plVar17 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 0x18))(plVar17);
            unaff_x28 = pbVar23;
          }
        }
        else {
          uVar21 = (ulong)*(uint *)((long)piVar18 + uVar20);
          lVar11 = (long)((long)piVar18 + uVar20) + uVar21;
          pbVar13 = (byte *)(lVar11 + 4);
          unaff_x28 = (byte *)0x0;
          if (lVar11 == 0) goto LAB_028c4c74;
          sVar12 = strlen((char *)pbVar13);
          bVar6 = *pbVar13;
          if (bVar6 == 0) {
            pbVar22 = &DAT_cbf29ce484222645;
          }
          else {
            pbVar22 = &DAT_cbf29ce484222645;
            pbVar19 = pbVar23 + uVar21 + uVar20 + (ulong)uVar5;
            do {
              pbVar22 = (byte *)(((ulong)pbVar22 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar19;
              pbVar19 = pbVar19 + 1;
            } while (bVar6 != 0);
          }
          plVar17 = (long *)0x0;
          unaff_x28 = pbVar13;
        }
        pbVar19 = *(byte **)(param_1 + 0x10);
        if (pbVar19 == (byte *)0x0) {
LAB_028c4dc0:
          plVar14 = (long *)(**(code **)(**(long **)(param_1 + 0x40) + 0x10))
                                      (*(long **)(param_1 + 0x40),0x50,8);
          if (plVar14 == (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0x40) + 0xb8))();
          }
          uVar25 = *(undefined8 *)(param_1 + 0x40);
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), iVar8 != 0)) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar11 != 0) {
            if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_028c532c:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar25;
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
          }
          plVar14[2] = (long)pbVar22;
          plVar14[3] = (long)pbVar13;
          plVar14[4] = sVar12;
          plVar14[5] = (long)plVar17;
          plVar14[6] = (long)plVar9;
          plVar14[7] = (long)plVar16;
          plVar14[8] = local_90;
          plVar14[9] = lVar10;
          if (lVar11 != 0) {
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
          }
          *plVar14 = 0;
          plVar14[1] = (long)pbVar22;
          fVar26 = (float)(*(long *)(param_1 + 0x60) + 1);
          if ((pbVar19 == (byte *)0x0) || (*(float *)(param_1 + 0x68) * (float)pbVar19 < fVar26)) {
            uVar20 = (ulong)(pbVar19 < (byte *)0x3 || ((ulong)pbVar19 & (ulong)(pbVar19 + -1)) != 0)
                     | (long)pbVar19 << 1;
            uVar21 = (ulong)(fVar26 / *(float *)(param_1 + 0x68));
            if (uVar21 <= uVar20) {
              uVar21 = uVar20;
            }
            FUN_028c56bc(plVar1,uVar21);
            pbVar19 = *(byte **)(param_1 + 0x10);
            if (((ulong)pbVar19 & (ulong)(pbVar19 + -1)) == 0) {
              unaff_x28 = (byte *)((ulong)(pbVar19 + -1) & (ulong)pbVar22);
            }
            else if (pbVar22 < pbVar19) {
              unaff_x28 = pbVar22;
            }
            else {
              uVar20 = 0;
              if (pbVar19 != (byte *)0x0) {
                uVar20 = (ulong)pbVar22 / (ulong)pbVar19;
              }
              unaff_x28 = pbVar22 + -(uVar20 * (long)pbVar19);
            }
          }
          plVar9 = *(long **)(*plVar1 + (long)unaff_x28 * 8);
          if (plVar9 == (long *)0x0) {
            *plVar14 = *plVar2;
            *plVar2 = (long)plVar14;
            *(long **)(*plVar1 + (long)unaff_x28 * 8) = plVar2;
            if (*plVar14 != 0) {
              pbVar13 = *(byte **)(*plVar14 + 8);
              if (((ulong)pbVar19 & (ulong)(pbVar19 + -1)) == 0) {
                pbVar13 = (byte *)((ulong)pbVar13 & (ulong)(pbVar19 + -1));
              }
              else if (pbVar19 <= pbVar13) {
                uVar20 = 0;
                if (pbVar19 != (byte *)0x0) {
                  uVar20 = (ulong)pbVar13 / (ulong)pbVar19;
                }
                pbVar13 = pbVar13 + -(uVar20 * (long)pbVar19);
              }
              plVar9 = (long *)(*plVar1 + (long)pbVar13 * 8);
              goto LAB_028c4afc;
            }
          }
          else {
            *plVar14 = *plVar9;
LAB_028c4afc:
            *plVar9 = (long)plVar14;
          }
          *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
        }
        else {
          uVar20 = (long)pbVar19 - ((ulong)pbVar19 >> 1 & 0x5555555555555555);
          uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
          uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar20 < 2) {
            unaff_x28 = (byte *)((ulong)(pbVar19 + -1) & (ulong)pbVar22);
          }
          else {
            unaff_x28 = pbVar22;
            if (pbVar19 <= pbVar22) {
              uVar21 = 0;
              if (pbVar19 != (byte *)0x0) {
                uVar21 = (ulong)pbVar22 / (ulong)pbVar19;
              }
              unaff_x28 = pbVar22 + -(uVar21 * (long)pbVar19);
            }
          }
          plVar14 = *(long **)(*plVar1 + (long)unaff_x28 * 8);
          if (plVar14 == (long *)0x0) goto LAB_028c4dc0;
          if (uVar20 < 2) {
            do {
              plVar14 = (long *)*plVar14;
              if ((plVar14 == (long *)0x0) ||
                 ((byte *)plVar14[1] != pbVar22 &&
                  (byte *)((ulong)plVar14[1] & (ulong)(pbVar19 + -1)) != unaff_x28))
              goto LAB_028c4dc0;
            } while ((byte *)plVar14[2] != pbVar22);
          }
          else {
            do {
              plVar14 = (long *)*plVar14;
              if (plVar14 == (long *)0x0) goto LAB_028c4dc0;
              pbVar15 = (byte *)plVar14[1];
              if (pbVar15 != pbVar22) {
                if (pbVar19 <= pbVar15) {
                  uVar20 = 0;
                  if (pbVar19 != (byte *)0x0) {
                    uVar20 = (ulong)pbVar15 / (ulong)pbVar19;
                  }
                  pbVar15 = pbVar15 + -(uVar20 * (long)pbVar19);
                }
                if (pbVar15 != unaff_x28) goto LAB_028c4dc0;
              }
            } while ((byte *)plVar14[2] != pbVar22);
          }
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 0x20))(plVar17);
          }
          if (plVar9 != (long *)0x0) {
            FUN_02bcbe58(auStack_78,0);
            uVar20 = (**(code **)(*plVar16 + 0xc0))(plVar16);
            lVar11 = tpidr_el0;
            if ((uVar20 & 1) == 0) {
LAB_028c4f84:
              (**(code **)(*plVar16 + 0x18))(plVar16,plVar9,local_90,lVar10);
            }
            else {
              if (*(char *)(lVar11 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar11 + 0x38d488) = 1;
                *(undefined8 *)(lVar11 + 0x38d478) = 0;
                *(undefined8 *)(lVar11 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_028c4f84;
              FUN_02bcc824(plVar16,plVar9,local_90,lVar10);
            }
            if (*(char *)(lVar11 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar11 + 0x38d488) = 1;
              *(undefined8 *)(lVar11 + 0x38d478) = 0;
              *(undefined8 *)(lVar11 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
            }
            iVar8 = *(int *)(lVar11 + 0x38d480) + -1;
            *(int *)(lVar11 + 0x38d480) = iVar8;
            if (iVar8 == 0) {
              FUN_02bcc320();
              if (*(char *)(lVar11 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar11 + 0x38d488) = 1;
                *(undefined8 *)(lVar11 + 0x38d478) = 0;
                *(undefined8 *)(lVar11 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
              }
              *(undefined4 *)(lVar11 + 0x38d484) = 0;
            }
          }
        }
        puVar24 = puVar24 + 1;
        pbVar23 = pbVar23 + 4;
      } while (puVar24 != puVar3);
    }
  }
  return;
}


