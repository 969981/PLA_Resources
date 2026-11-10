/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0177a368; name: FUN_0177a368
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0177a368(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  byte bVar8;
  ushort uVar9;
  char cVar10;
  bool bVar11;
  undefined *puVar12;
  int iVar13;
  long *plVar14;
  size_t sVar15;
  long lVar16;
  ushort *puVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  byte *pbVar21;
  ulong uVar22;
  undefined1 *puVar23;
  int *piVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  undefined8 uVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  uint uVar37;
  
  if (*(char *)(param_1 + 0xe0) == '\0') {
    lVar16 = *(long *)(*(long *)(param_1 + 0x58) + 8);
    if ((lVar16 == 0) || (*(char *)(lVar16 + 0x1e1) == '\0')) {
      return 0;
    }
    piVar4 = (int *)((long)*(uint **)(lVar16 + 0x250) + (ulong)**(uint **)(lVar16 + 0x250));
    if (((4 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
        (uVar20 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar20 != 0)) &&
       (puVar5 = (uint *)((long)piVar4 + uVar20), puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5),
       puVar5 != (uint *)0x0)) {
      plVar1 = (long *)(param_1 + 0x78);
      fVar31 = (float)NEON_ucvtf(*puVar5);
      FUN_0177c274(plVar1,(long)(fVar31 / *(float *)(param_1 + 0xd8)));
      if (*puVar5 != 0) {
        fVar31 = *(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0;
        plVar2 = (long *)(param_1 + 0xa8);
        uVar20 = 0;
        puVar3 = PTR_DAT_043796d0 + 0x10;
        do {
          piVar4 = (int *)((long)(puVar5 + uVar20 + 1) + (ulong)puVar5[uVar20 + 1]);
          puVar17 = (ushort *)((long)piVar4 - (long)*piVar4);
          if (*puVar17 < 7) {
            return 1;
          }
          if ((ulong)puVar17[3] == 0) {
            piVar24 = (int *)0x0;
          }
          else {
            puVar6 = (uint *)((long)piVar4 + (ulong)puVar17[3]);
            piVar24 = (int *)((long)puVar6 + (ulong)*puVar6);
          }
          if (*puVar17 < 9) {
            return 1;
          }
          if ((ulong)puVar17[4] == 0) {
            return 1;
          }
          if (piVar24 == (int *)0x0) {
            return 1;
          }
          puVar6 = (uint *)((long)piVar4 + (ulong)puVar17[4]);
          piVar7 = (int *)((long)puVar6 + (ulong)*puVar6);
          if (piVar7 == (int *)0x0) {
            return 1;
          }
          plVar28 = *(long **)(param_1 + 8);
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379520), puVar12 = PTR_DAT_04379528,
             iVar13 != 0)) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar12,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_0177ac84;
          *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar28;
          *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
          plVar14 = (long *)(**(code **)(*plVar28 + 0x10))(plVar28,0xc0,0x10);
          if (plVar14 == (long *)0x0) {
            (**(code **)(*plVar28 + 0xb8))(plVar28);
            _DAT_000000b8 = 0;
            _DAT_000000b0 = 0;
            _DAT_000000a8 = 0;
            _DAT_000000a0 = 0;
            _DAT_00000098 = 0;
            _DAT_00000090 = 0;
            _DAT_00000088 = 0;
            _DAT_00000080 = 0;
            _DAT_00000078 = 0;
            _DAT_00000070 = 0;
            _DAT_00000068 = 0;
            _DAT_00000060 = 0;
            _DAT_00000058 = 0;
            _DAT_00000050 = 0;
            _DAT_00000048 = 0;
            _DAT_00000040 = 0;
            _DAT_00000038 = 0;
            _DAT_00000030 = 0;
            _DAT_00000028 = 0;
            _DAT_00000020 = 0;
            _DAT_00000018 = 0;
            uRam0000000000000000 = 0;
            _DAT_00000010 = 0;
            _DAT_00000008 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          plVar14[0x16] = 0;
          plVar14[0x17] = 0;
          plVar14[0x14] = 0;
          plVar14[0x15] = 0;
          plVar14[0x12] = 0;
          plVar14[0x13] = 0;
          plVar14[0x10] = 0;
          plVar14[0x11] = 0;
          plVar14[0xe] = 0;
          plVar14[0xf] = 0;
          plVar14[0xc] = 0;
          plVar14[0xd] = 0;
          plVar14[10] = 0;
          plVar14[0xb] = 0;
          plVar14[8] = 0;
          plVar14[9] = 0;
          *(undefined4 *)(plVar14 + 8) = 0;
          plVar14[6] = 0;
          plVar14[7] = 0;
          plVar14[7] = 0;
          *(undefined4 *)(plVar14 + 6) = 0;
          plVar14[4] = 0;
          plVar14[5] = 0;
          plVar14[2] = 0;
          plVar14[3] = 0;
          *plVar14 = 0;
          plVar14[1] = 0;
          *plVar14 = (long)puVar3;
          plVar14[2] = 0;
          plVar14[3] = 0;
          plVar14[4] = 0;
          plVar14[5] = 0;
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379520), puVar12 = PTR_DAT_04379528,
             iVar13 != 0)) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar12,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          plVar27 = plVar14 + 10;
          *(int *)plVar27 = 0;
          *plVar14 = (long)&PTR_LAB_042251c0;
          plVar14[9] = (long)&PTR_LAB_042251f8;
          plVar14[0xe] = 0;
          plVar14[0xb] = (long)&DAT_cbf29ce484222645;
          plVar14[0x15] = 0;
          plVar14[0xc] = (long)&DAT_03996322;
          plVar14[0xd] = 0;
          *(undefined1 *)(plVar14 + 0x16) = 0;
          plVar26 = plVar14 + 0x10;
          *plVar26 = 0;
          plVar14[3] = 0xc0;
          *(undefined4 *)((long)plVar14 + 0xb4) = 0;
          plVar14[4] = 0x10;
          plVar14[0x11] = 0;
          plVar14[0x12] = 0;
          plVar14[0x13] = 0;
          plVar14[0x14] = 0;
          plVar14[1] = (long)plVar28;
          plVar14[2] = (long)plVar14;
          *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar11) {
              *(int *)plVar27 = (int)*plVar27 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
             (uVar18 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar18 == 0)) {
            lVar16 = 0;
          }
          else {
            puVar6 = (uint *)((long)piVar4 + uVar18);
            lVar16 = (long)puVar6 + (ulong)*puVar6;
          }
          sVar15 = strlen((char *)(lVar16 + 4));
          bVar8 = *(byte *)(lVar16 + 4);
          puVar23 = &DAT_cbf29ce484222645;
          if (bVar8 != 0) {
            puVar23 = &DAT_cbf29ce484222645;
            pbVar21 = (byte *)(lVar16 + 5);
            do {
              puVar23 = (undefined1 *)(((ulong)puVar23 ^ (ulong)bVar8) * 0x100000001b3);
              bVar8 = *pbVar21;
              pbVar21 = pbVar21 + 1;
            } while (bVar8 != 0);
          }
          plVar14[0xd] = sVar15;
          plVar28 = (long *)plVar14[0xe];
          plVar14[0xe] = 0;
          plVar14[0xb] = (long)puVar23;
          plVar14[0xc] = lVar16 + 4;
          if (plVar28 != (long *)0x0) {
            (**(code **)(*plVar28 + 0x20))();
          }
          plVar14[0xe] = 0;
          puVar17 = (ushort *)((long)piVar24 - (long)*piVar24);
          uVar9 = *puVar17;
          uVar35 = 0;
          uVar32 = 0;
          uVar37 = 0;
          if (4 < uVar9) {
            uVar32 = 0;
            if ((ulong)puVar17[2] != 0) {
              uVar32 = *(undefined4 *)((long)piVar24 + (ulong)puVar17[2]);
            }
            if (uVar9 < 7) {
              uVar35 = 0;
            }
            else {
              uVar35 = 0;
              if ((ulong)puVar17[3] != 0) {
                uVar35 = *(undefined4 *)((long)piVar24 + (ulong)puVar17[3]);
              }
              if ((8 < uVar9) && ((ulong)puVar17[4] != 0)) {
                uVar37 = *(uint *)((long)piVar24 + (ulong)puVar17[4]);
                goto LAB_0177a738;
              }
            }
            uVar37 = 0;
          }
LAB_0177a738:
          uVar33 = 0;
          uVar36 = 0;
          uVar18 = 0;
          plVar14[0x13] = (ulong)uVar37;
          plVar14[0x12] = CONCAT44(uVar35,uVar32);
          puVar17 = (ushort *)((long)piVar7 - (long)*piVar7);
          uVar9 = *puVar17;
          if (4 < uVar9) {
            uVar33 = 0;
            if ((ulong)puVar17[2] != 0) {
              uVar33 = *(undefined4 *)((long)piVar7 + (ulong)puVar17[2]);
            }
            if (uVar9 < 7) {
              uVar36 = 0;
            }
            else {
              uVar36 = 0;
              if ((ulong)puVar17[3] != 0) {
                uVar36 = *(undefined4 *)((long)piVar7 + (ulong)puVar17[3]);
              }
              if ((8 < uVar9) && ((ulong)puVar17[4] != 0)) {
                uVar18 = (ulong)*(uint *)((long)piVar7 + (ulong)puVar17[4]);
                goto LAB_0177a7a8;
              }
            }
            uVar18 = 0;
          }
LAB_0177a7a8:
          fVar34 = 0.0;
          plVar14[0x11] = uVar18;
          *plVar26 = CONCAT44(uVar36,uVar33);
          if (10 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
            uVar18 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5];
            fVar34 = 0.0;
            if (uVar18 != 0) {
              fVar34 = *(float *)((long)piVar4 + uVar18);
            }
          }
          *(float *)(plVar14 + 0x14) = fVar31 * fVar34;
          fVar34 = 0.0;
          if (0xc < *(ushort *)((long)piVar4 - (long)*piVar4)) {
            uVar18 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[6];
            fVar34 = 0.0;
            if (uVar18 != 0) {
              fVar34 = *(float *)((long)piVar4 + uVar18);
            }
          }
          *(float *)((long)plVar14 + 0xa4) = fVar31 * fVar34;
          fVar34 = 0.0;
          if (0xe < *(ushort *)((long)piVar4 - (long)*piVar4)) {
            uVar18 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[7];
            fVar34 = 0.0;
            if (uVar18 != 0) {
              fVar34 = *(float *)((long)piVar4 + uVar18);
            }
          }
          *(float *)(plVar14 + 0x15) = fVar31 * fVar34;
          fVar34 = 0.0;
          if (0x10 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
            uVar18 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[8];
            fVar34 = 0.0;
            if (uVar18 != 0) {
              fVar34 = *(float *)((long)piVar4 + uVar18);
            }
          }
          *(float *)((long)plVar14 + 0xac) = fVar31 * fVar34;
          plVar25 = (long *)plVar14[0xb];
          plVar28 = *(long **)(param_1 + 0x80);
          if (plVar28 == (long *)0x0) {
LAB_0177a8e4:
            plVar29 = (long *)(**(code **)(**(long **)(param_1 + 0xb0) + 0x10))
                                        (*(long **)(param_1 + 0xb0),0x20,8);
            if (plVar29 == (long *)0x0) {
              (**(code **)(**(long **)(param_1 + 0xb0) + 0xb8))();
            }
            uVar30 = *(undefined8 *)(param_1 + 0xb0);
            if (((*PTR_DAT_04379520 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379520), puVar12 = PTR_DAT_04379528,
               iVar13 != 0)) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar12,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
            lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
            if (lVar16 == 0) {
              plVar29[2] = plVar14[0xb];
              plVar29[3] = 0;
            }
            else {
              if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_0177ac84:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = uVar30;
              *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
              plVar29[2] = plVar14[0xb];
              plVar29[3] = 0;
              *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
            }
            *plVar29 = 0;
            plVar29[1] = (long)plVar25;
            fVar34 = (float)(*(long *)(param_1 + 0xd0) + 1);
            if ((plVar28 == (long *)0x0) || (*(float *)(param_1 + 0xd8) * (float)plVar28 < fVar34))
            {
              uVar18 = (ulong)(plVar28 < (long *)0x3 || ((ulong)plVar28 & (long)plVar28 - 1U) != 0)
                       | (long)plVar28 << 1;
              uVar22 = (ulong)(fVar34 / *(float *)(param_1 + 0xd8));
              if (uVar22 <= uVar18) {
                uVar22 = uVar18;
              }
              FUN_0177c274(plVar1,uVar22);
              plVar28 = *(long **)(param_1 + 0x80);
              if (((ulong)plVar28 & (long)plVar28 - 1U) == 0) {
                plVar26 = (long *)((long)plVar28 - 1U & (ulong)plVar25);
              }
              else if (plVar25 < plVar28) {
                plVar26 = plVar25;
              }
              else {
                uVar18 = 0;
                if (plVar28 != (long *)0x0) {
                  uVar18 = (ulong)plVar25 / (ulong)plVar28;
                }
                plVar26 = (long *)((long)plVar25 - uVar18 * (long)plVar28);
              }
            }
            plVar25 = *(long **)(*plVar1 + (long)plVar26 * 8);
            if (plVar25 == (long *)0x0) {
              *plVar29 = *plVar2;
              *plVar2 = (long)plVar29;
              *(long **)(*plVar1 + (long)plVar26 * 8) = plVar2;
              if (*plVar29 != 0) {
                plVar26 = *(long **)(*plVar29 + 8);
                if (((ulong)plVar28 & (long)plVar28 - 1U) == 0) {
                  plVar26 = (long *)((ulong)plVar26 & (long)plVar28 - 1U);
                }
                else if (plVar28 <= plVar26) {
                  uVar18 = 0;
                  if (plVar28 != (long *)0x0) {
                    uVar18 = (ulong)plVar26 / (ulong)plVar28;
                  }
                  plVar26 = (long *)((long)plVar26 - uVar18 * (long)plVar28);
                }
                plVar25 = (long *)(*plVar1 + (long)plVar26 * 8);
                goto LAB_0177a9d8;
              }
            }
            else {
              *plVar29 = *plVar25;
LAB_0177a9d8:
              *plVar25 = (long)plVar29;
            }
            *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) + 1;
          }
          else {
            uVar18 = (long)plVar28 - ((ulong)plVar28 >> 1 & 0x5555555555555555);
            uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
            uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar18 < 2) {
              plVar26 = (long *)((long)plVar28 - 1U & (ulong)plVar25);
            }
            else {
              plVar26 = plVar25;
              if (plVar28 <= plVar25) {
                uVar22 = 0;
                if (plVar28 != (long *)0x0) {
                  uVar22 = (ulong)plVar25 / (ulong)plVar28;
                }
                plVar26 = (long *)((long)plVar25 - uVar22 * (long)plVar28);
              }
            }
            plVar29 = *(long **)(*plVar1 + (long)plVar26 * 8);
            if (plVar29 == (long *)0x0) goto LAB_0177a8e4;
            if (uVar18 < 2) {
              do {
                plVar29 = (long *)*plVar29;
                if ((plVar29 == (long *)0x0) ||
                   ((long *)plVar29[1] != plVar25 &&
                    (long *)((ulong)plVar29[1] & (long)plVar28 - 1U) != plVar26)) goto LAB_0177a8e4;
              } while ((long *)plVar29[2] != plVar25);
            }
            else {
              do {
                plVar29 = (long *)*plVar29;
                if (plVar29 == (long *)0x0) goto LAB_0177a8e4;
                plVar19 = (long *)plVar29[1];
                if (plVar19 != plVar25) {
                  if (plVar28 <= plVar19) {
                    uVar18 = 0;
                    if (plVar28 != (long *)0x0) {
                      uVar18 = (ulong)plVar19 / (ulong)plVar28;
                    }
                    plVar19 = (long *)((long)plVar19 - uVar18 * (long)plVar28);
                  }
                  if (plVar19 != plVar26) goto LAB_0177a8e4;
                }
              } while ((long *)plVar29[2] != plVar25);
            }
          }
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar11) {
              *(int *)plVar27 = (int)*plVar27 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          plVar28 = (long *)plVar29[3];
          plVar29[3] = (long)plVar14;
          if (plVar28 != (long *)0x0) {
            plVar26 = plVar28 + 10;
            do {
              iVar13 = (int)*plVar26 + -1;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar11) {
                *(int *)plVar26 = iVar13;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar13 == 0) {
              (**(code **)(*plVar28 + 0x10))();
            }
          }
          do {
            iVar13 = (int)*plVar27 + -1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar11) {
              *(int *)plVar27 = iVar13;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar13 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
          uVar37 = (int)uVar20 + 1;
          uVar20 = (ulong)uVar37;
        } while (uVar37 < *puVar5);
      }
      *(undefined1 *)(param_1 + 0xe0) = 1;
      return 1;
    }
  }
  return 1;
}


