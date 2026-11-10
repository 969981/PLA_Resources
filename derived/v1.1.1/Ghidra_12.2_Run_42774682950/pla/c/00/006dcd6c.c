/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006dcd6c; name: FUN_006dcd6c
 */


/* WARNING: Removing unreachable block (ram,0x006dcec8) */

undefined8 FUN_006dcd6c(long param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  bool bVar4;
  long *plVar5;
  size_t __n;
  char *__dest;
  undefined8 uVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong *puVar11;
  ulong *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  char *pcVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong local_80;
  size_t sStack_78;
  char *local_70;
  long *local_68;
  
  if (*param_2 == 6) {
    lVar18 = *(long *)(param_2 + 0xe);
    if (lVar18 != *(long *)(param_2 + 0x10)) {
      pcVar19 = (char *)((ulong)&local_80 | 1);
      do {
        FUN_006dc840(&local_80,(byte *)(lVar18 + 8));
        uVar17 = local_80 >> 1 & 0x7f;
        if ((local_80 & 1) != 0) {
          uVar17 = sStack_78;
        }
        if (uVar17 == 1) {
          pcVar15 = pcVar19;
          if ((local_80 & 1) != 0) {
            pcVar15 = local_70;
          }
          bVar4 = *pcVar15 == '*';
        }
        else {
          bVar4 = false;
        }
        if ((local_80 & 1) != 0) {
          (**(code **)(*local_68 + 0x18))(local_68,local_70,local_80 & 0xfffffffffffffffe,1);
        }
        if (bVar4) {
          pbVar10 = *(byte **)(param_1 + 0x20);
          pbVar13 = *(byte **)(param_1 + 0x28);
          if (pbVar13 != pbVar10) {
            bVar2 = pbVar13[-0x20];
            pbVar14 = pbVar13 + -0x20;
            while( true ) {
              if ((bVar2 & 1) != 0) {
                (**(code **)(**(long **)(pbVar13 + -8) + 0x18))
                          (*(long **)(pbVar13 + -8),*(undefined8 *)(pbVar13 + -0x10),
                           *(ulong *)(pbVar13 + -0x20) & 0xfffffffffffffffe,1);
              }
              if (pbVar10 == pbVar14) break;
              bVar2 = pbVar14[-0x20];
              pbVar13 = pbVar14;
              pbVar14 = pbVar14 + -0x20;
            }
          }
          *(byte **)(param_1 + 0x28) = pbVar10;
          return 0;
        }
        if ((*(byte *)(lVar18 + 8) & 1) == 0) {
          pcVar15 = (char *)(lVar18 + 9);
        }
        else {
          pcVar15 = *(char **)(lVar18 + 0x18);
        }
        sStack_78 = 0;
        local_70 = (char *)0x0;
        local_80 = 0;
        plVar5 = (long *)FUN_00612290();
        local_68 = plVar5;
        __n = strlen(pcVar15);
        if (0xffffffffffffffef < __n) {
                    /* try { // try from 006dd190 to 006dd197 has its CatchHandler @ 006dd1d0 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (__n < 0x17) {
          local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
          __dest = pcVar19;
          if (__n != 0) goto LAB_006dcefc;
          *pcVar19 = '\0';
          puVar11 = *(ulong **)(param_1 + 0x28);
          puVar7 = *(ulong **)(param_1 + 0x30);
          if (puVar7 <= puVar11) goto LAB_006dcf1c;
LAB_006dcea4:
          puVar11[1] = sStack_78;
          *puVar11 = local_80;
          puVar11[3] = (ulong)local_68;
          puVar11[2] = (ulong)local_70;
          local_80 = 0;
          sStack_78 = 0;
          local_70 = (char *)0x0;
          *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 0x20;
        }
        else {
          uVar17 = __n + 0x10 & 0xfffffffffffffff0;
          __dest = (char *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar17,1);
          local_80 = uVar17 | 1;
          sStack_78 = __n;
          local_70 = __dest;
LAB_006dcefc:
          memcpy(__dest,pcVar15,__n);
          __dest[__n] = '\0';
          puVar11 = *(ulong **)(param_1 + 0x28);
          puVar7 = *(ulong **)(param_1 + 0x30);
          if (puVar11 < puVar7) goto LAB_006dcea4;
LAB_006dcf1c:
          lVar16 = (long)puVar11 - *(long *)(param_1 + 0x20) >> 5;
          uVar17 = lVar16 + 1;
          if (uVar17 >> 0x3b != 0) {
                    /* try { // try from 006dd198 to 006dd19f has its CatchHandler @ 006dd1a0 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar8 = (long)puVar7 - *(long *)(param_1 + 0x20);
          if ((ulong)(lVar8 >> 5) < 0x3ffffffffffffff) {
            uVar9 = lVar8 >> 4;
            if (uVar17 <= uVar9) {
              uVar17 = uVar9;
            }
            if (uVar17 != 0) goto LAB_006dcf5c;
            lVar8 = 0;
          }
          else {
            uVar17 = 0x7ffffffffffffff;
LAB_006dcf5c:
            lVar8 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))
                              (*(long **)(param_1 + 0x38),uVar17 << 5,8);
          }
          puVar7 = (ulong *)(lVar8 + lVar16 * 0x20);
          puVar11 = puVar7 + 4;
          puVar7[1] = sStack_78;
          *puVar7 = local_80;
          puVar7[3] = (ulong)local_68;
          puVar7[2] = (ulong)local_70;
          local_80 = 0;
          sStack_78 = 0;
          local_70 = (char *)0x0;
          pbVar10 = *(byte **)(param_1 + 0x20);
          pbVar13 = *(byte **)(param_1 + 0x28);
          if ((long)pbVar13 - (long)pbVar10 == 0) {
            pbVar13 = pbVar10;
          }
          else {
            uVar9 = ((long)pbVar13 - (long)pbVar10) - 0x20;
            uVar1 = ((uint)(uVar9 >> 5) & 0x7ffffff) + 1;
            if ((uVar1 & 3) != 0) {
              lVar16 = -((ulong)uVar1 & 3);
              puVar12 = puVar7;
              pbVar14 = pbVar13;
              do {
                uVar20 = *(ulong *)(pbVar14 + -0x20);
                uVar22 = *(ulong *)(pbVar14 + -8);
                uVar21 = *(ulong *)(pbVar14 + -0x10);
                puVar7 = puVar12 + -4;
                pbVar13 = pbVar14 + -0x20;
                bVar4 = lVar16 != -1;
                lVar16 = lVar16 + 1;
                puVar12[-3] = *(ulong *)(pbVar14 + -0x18);
                puVar12[-4] = uVar20;
                puVar12[-1] = uVar22;
                puVar12[-2] = uVar21;
                pbVar14[-0x18] = 0;
                pbVar14[-0x17] = 0;
                pbVar14[-0x16] = 0;
                pbVar14[-0x15] = 0;
                pbVar14[-0x14] = 0;
                pbVar14[-0x13] = 0;
                pbVar14[-0x12] = 0;
                pbVar14[-0x11] = 0;
                pbVar14[-0x10] = 0;
                pbVar14[-0xf] = 0;
                pbVar14[-0xe] = 0;
                pbVar14[-0xd] = 0;
                pbVar14[-0xc] = 0;
                pbVar14[-0xb] = 0;
                pbVar14[-10] = 0;
                pbVar14[-9] = 0;
                pbVar14[-0x20] = 0;
                pbVar14[-0x1f] = 0;
                pbVar14[-0x1e] = 0;
                pbVar14[-0x1d] = 0;
                pbVar14[-0x1c] = 0;
                pbVar14[-0x1b] = 0;
                pbVar14[-0x1a] = 0;
                pbVar14[-0x19] = 0;
                puVar12 = puVar7;
                pbVar14 = pbVar13;
              } while (bVar4);
            }
            puVar12 = puVar7;
            if (0x5f < uVar9) {
              do {
                uVar9 = *(ulong *)(pbVar13 + -0x20);
                uVar21 = *(ulong *)(pbVar13 + -8);
                uVar20 = *(ulong *)(pbVar13 + -0x10);
                puVar12[-3] = *(ulong *)(pbVar13 + -0x18);
                puVar12[-4] = uVar9;
                puVar12[-1] = uVar21;
                puVar12[-2] = uVar20;
                pbVar13[-0x20] = 0;
                pbVar13[-0x1f] = 0;
                pbVar13[-0x1e] = 0;
                pbVar13[-0x1d] = 0;
                pbVar13[-0x1c] = 0;
                pbVar13[-0x1b] = 0;
                pbVar13[-0x1a] = 0;
                pbVar13[-0x19] = 0;
                uVar9 = *(ulong *)(pbVar13 + -0x40);
                uVar21 = *(ulong *)(pbVar13 + -0x28);
                uVar20 = *(ulong *)(pbVar13 + -0x30);
                pbVar13[-0x18] = 0;
                pbVar13[-0x17] = 0;
                pbVar13[-0x16] = 0;
                pbVar13[-0x15] = 0;
                pbVar13[-0x14] = 0;
                pbVar13[-0x13] = 0;
                pbVar13[-0x12] = 0;
                pbVar13[-0x11] = 0;
                pbVar13[-0x10] = 0;
                pbVar13[-0xf] = 0;
                pbVar13[-0xe] = 0;
                pbVar13[-0xd] = 0;
                pbVar13[-0xc] = 0;
                pbVar13[-0xb] = 0;
                pbVar13[-10] = 0;
                pbVar13[-9] = 0;
                puVar7 = puVar12 + -0x10;
                puVar12[-7] = *(ulong *)(pbVar13 + -0x38);
                puVar12[-8] = uVar9;
                puVar12[-5] = uVar21;
                puVar12[-6] = uVar20;
                pbVar13[-0x40] = 0;
                pbVar13[-0x3f] = 0;
                pbVar13[-0x3e] = 0;
                pbVar13[-0x3d] = 0;
                pbVar13[-0x3c] = 0;
                pbVar13[-0x3b] = 0;
                pbVar13[-0x3a] = 0;
                pbVar13[-0x39] = 0;
                uVar9 = *(ulong *)(pbVar13 + -0x60);
                uVar21 = *(ulong *)(pbVar13 + -0x48);
                uVar20 = *(ulong *)(pbVar13 + -0x50);
                pbVar13[-0x38] = 0;
                pbVar13[-0x37] = 0;
                pbVar13[-0x36] = 0;
                pbVar13[-0x35] = 0;
                pbVar13[-0x34] = 0;
                pbVar13[-0x33] = 0;
                pbVar13[-0x32] = 0;
                pbVar13[-0x31] = 0;
                pbVar13[-0x30] = 0;
                pbVar13[-0x2f] = 0;
                pbVar13[-0x2e] = 0;
                pbVar13[-0x2d] = 0;
                pbVar13[-0x2c] = 0;
                pbVar13[-0x2b] = 0;
                pbVar13[-0x2a] = 0;
                pbVar13[-0x29] = 0;
                puVar12[-0xb] = *(ulong *)(pbVar13 + -0x58);
                puVar12[-0xc] = uVar9;
                puVar12[-9] = uVar21;
                puVar12[-10] = uVar20;
                pbVar13[-0x60] = 0;
                pbVar13[-0x5f] = 0;
                pbVar13[-0x5e] = 0;
                pbVar13[-0x5d] = 0;
                pbVar13[-0x5c] = 0;
                pbVar13[-0x5b] = 0;
                pbVar13[-0x5a] = 0;
                pbVar13[-0x59] = 0;
                uVar9 = *(ulong *)(pbVar13 + -0x80);
                uVar21 = *(ulong *)(pbVar13 + -0x68);
                uVar20 = *(ulong *)(pbVar13 + -0x70);
                pbVar13[-0x58] = 0;
                pbVar13[-0x57] = 0;
                pbVar13[-0x56] = 0;
                pbVar13[-0x55] = 0;
                pbVar13[-0x54] = 0;
                pbVar13[-0x53] = 0;
                pbVar13[-0x52] = 0;
                pbVar13[-0x51] = 0;
                pbVar13[-0x50] = 0;
                pbVar13[-0x4f] = 0;
                pbVar13[-0x4e] = 0;
                pbVar13[-0x4d] = 0;
                pbVar13[-0x4c] = 0;
                pbVar13[-0x4b] = 0;
                pbVar13[-0x4a] = 0;
                pbVar13[-0x49] = 0;
                puVar12[-0xf] = *(ulong *)(pbVar13 + -0x78);
                puVar12[-0x10] = uVar9;
                puVar12[-0xd] = uVar21;
                puVar12[-0xe] = uVar20;
                pbVar13[-0x70] = 0;
                pbVar13[-0x6f] = 0;
                pbVar13[-0x6e] = 0;
                pbVar13[-0x6d] = 0;
                pbVar13[-0x6c] = 0;
                pbVar13[-0x6b] = 0;
                pbVar13[-0x6a] = 0;
                pbVar13[-0x69] = 0;
                pbVar14 = pbVar13 + -0x80;
                pbVar14[0] = 0;
                pbVar14[1] = 0;
                pbVar14[2] = 0;
                pbVar14[3] = 0;
                pbVar14[4] = 0;
                pbVar14[5] = 0;
                pbVar14[6] = 0;
                pbVar14[7] = 0;
                pbVar13[-0x78] = 0;
                pbVar13[-0x77] = 0;
                pbVar13[-0x76] = 0;
                pbVar13[-0x75] = 0;
                pbVar13[-0x74] = 0;
                pbVar13[-0x73] = 0;
                pbVar13[-0x72] = 0;
                pbVar13[-0x71] = 0;
                puVar12 = puVar7;
                pbVar13 = pbVar14;
              } while (pbVar10 != pbVar14);
            }
            pbVar10 = *(byte **)(param_1 + 0x28);
            pbVar13 = *(byte **)(param_1 + 0x20);
          }
          lVar16 = *(long *)(param_1 + 0x30);
          *(ulong *)(param_1 + 0x30) = lVar8 + uVar17 * 0x20;
          *(ulong **)(param_1 + 0x20) = puVar7;
          *(ulong **)(param_1 + 0x28) = puVar11;
          if (pbVar10 != pbVar13) {
            bVar2 = pbVar10[-0x20];
            pbVar14 = pbVar10 + -0x20;
            while( true ) {
              pbVar3 = pbVar14;
              if ((bVar2 & 1) != 0) {
                (**(code **)(**(long **)(pbVar10 + -8) + 0x18))
                          (*(long **)(pbVar10 + -8),*(undefined8 *)(pbVar10 + -0x10),
                           *(ulong *)(pbVar10 + -0x20) & 0xfffffffffffffffe,1);
              }
              if (pbVar13 == pbVar3) break;
              bVar2 = pbVar3[-0x20];
              pbVar14 = pbVar3 + -0x20;
              pbVar10 = pbVar3;
            }
          }
          if (pbVar13 != (byte *)0x0) {
            (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
                      (*(long **)(param_1 + 0x38),pbVar13,lVar16 - (long)pbVar13,8);
          }
          if ((local_80 & 1) != 0) {
            (**(code **)(*local_68 + 0x18))(local_68,local_70,local_80 & 0xfffffffffffffffe,1);
          }
        }
        lVar18 = lVar18 + 0x50;
      } while (lVar18 != *(long *)(param_2 + 0x10));
    }
    uVar6 = 0;
  }
  else {
    uVar6 = 0x80341;
  }
  return uVar6;
}


