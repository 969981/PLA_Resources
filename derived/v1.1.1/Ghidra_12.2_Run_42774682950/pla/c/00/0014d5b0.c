/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014d5b0; name: FUN_0014d5b0
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_0014d5b0(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *__addr;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  size_t __len;
  int iVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long local_68;
  
  if (*(undefined8 **)(param_1 + 0x388) == (undefined8 *)0x0) {
    local_68 = 0;
    uVar7 = 0xfff;
  }
  else {
    local_68 = 0;
    puVar14 = (undefined8 *)(param_1 + 0x378);
    puVar16 = *(undefined8 **)(param_1 + 0x388);
    iVar4 = 0;
    do {
      while( true ) {
        iVar13 = iVar4;
        puVar17 = (undefined8 *)puVar16[2];
        if ((*(uint *)(puVar16 + 3) & 9) == 1) break;
joined_r0x0014d664:
        puVar14 = puVar16;
        puVar16 = puVar17;
        iVar4 = iVar13 + 1;
        if (puVar17 == (undefined8 *)0x0) goto LAB_0014d9a8;
      }
      __addr = (undefined8 *)*puVar16;
      uVar7 = 0;
      if (((ulong)(__addr + 2) & 0xf) != 0) {
        uVar7 = (ulong)(uint)-(int)(__addr + 2) & 0xf;
      }
      uVar7 = (long)__addr + uVar7;
      uVar12 = *(ulong *)(uVar7 + 8);
      if ((uVar12 & 3) == 1) {
        __len = puVar16[1];
        uVar15 = uVar12 & 0xfffffffffffffff8;
        if ((undefined8 *)((long)__addr + __len) + -10 <= (undefined8 *)(uVar7 + uVar15)) {
          if ((puVar16 < __addr) || ((undefined8 *)((long)__addr + __len) <= puVar16))
          goto LAB_0014d9ec;
          if (*(ulong *)(param_1 + 0x20) == uVar7) {
            *(undefined8 *)(param_1 + 0x20) = 0;
            *(undefined8 *)(param_1 + 8) = 0;
            iVar4 = munmap(__addr,__len);
          }
          else {
            uVar8 = *(ulong *)(uVar7 + 0x18);
            uVar6 = *(ulong *)(uVar7 + 0x30);
            if (uVar8 == uVar7) {
              uVar9 = *(ulong *)(uVar7 + 0x28);
              puVar11 = (ulong *)(uVar7 + 0x28);
              if (uVar9 == 0) {
                uVar9 = *(ulong *)(uVar7 + 0x20);
                puVar11 = (ulong *)(uVar7 + 0x20);
                if (uVar9 == 0) {
                  uVar8 = 0;
                  goto joined_r0x0014d740;
                }
              }
              do {
                do {
                  uVar8 = uVar9;
                  puVar10 = puVar11;
                  uVar9 = *(ulong *)(uVar8 + 0x28);
                  puVar11 = (ulong *)(uVar8 + 0x28);
                } while (uVar9 != 0);
                uVar9 = *(ulong *)(uVar8 + 0x20);
                puVar11 = (ulong *)(uVar8 + 0x20);
              } while (uVar9 != 0);
              if (puVar10 < *(ulong **)(param_1 + 0x18)) goto LAB_0014d9ec;
              *puVar10 = 0;
            }
            else {
              uVar9 = *(ulong *)(uVar7 + 0x10);
              if (((uVar9 < *(ulong *)(param_1 + 0x18)) || (*(ulong *)(uVar9 + 0x18) != uVar7)) ||
                 (*(ulong *)(uVar8 + 0x10) != uVar7)) goto LAB_0014d9ec;
              *(ulong *)(uVar9 + 0x18) = uVar8;
              *(ulong *)(uVar8 + 0x10) = uVar9;
            }
joined_r0x0014d740:
            if (uVar6 != 0) {
              lVar1 = param_1 + (ulong)*(uint *)(uVar7 + 0x38) * 8;
              if (*(ulong *)(lVar1 + 600) == uVar7) {
                *(ulong *)(lVar1 + 600) = uVar8;
                if (uVar8 == 0) {
                  *(uint *)(param_1 + 4) =
                       *(uint *)(param_1 + 4) &
                       (1 << (ulong)(*(uint *)(uVar7 + 0x38) & 0x1f) ^ 0xffffffffU);
                }
                else {
LAB_0014d790:
                  if (uVar8 < *(ulong *)(param_1 + 0x18)) goto LAB_0014d9ec;
                  *(ulong *)(uVar8 + 0x30) = uVar6;
                  uVar6 = *(ulong *)(uVar7 + 0x20);
                  if (uVar6 != 0) {
                    if (uVar6 < *(ulong *)(param_1 + 0x18)) goto LAB_0014d9ec;
                    *(ulong *)(uVar8 + 0x20) = uVar6;
                    *(ulong *)(uVar6 + 0x30) = uVar8;
                  }
                  uVar6 = *(ulong *)(uVar7 + 0x28);
                  if (uVar6 != 0) {
                    if (uVar6 < *(ulong *)(param_1 + 0x18)) goto LAB_0014d9ec;
                    *(ulong *)(uVar8 + 0x28) = uVar6;
                    *(ulong *)(uVar6 + 0x30) = uVar8;
                    iVar4 = munmap(__addr,__len);
                    goto joined_r0x0014d6f0;
                  }
                }
              }
              else {
                if (uVar6 < *(ulong *)(param_1 + 0x18)) goto LAB_0014d9ec;
                lVar1 = 0x20;
                if (*(ulong *)(uVar6 + 0x20) != uVar7) {
                  lVar1 = 0x28;
                }
                *(ulong *)(uVar6 + lVar1) = uVar8;
                if (uVar8 != 0) goto LAB_0014d790;
              }
            }
            iVar4 = munmap(__addr,__len);
          }
joined_r0x0014d6f0:
          if (iVar4 == 0) {
            local_68 = __len + local_68;
            *(size_t *)(param_1 + 0x358) = *(long *)(param_1 + 0x358) - __len;
            puVar14[2] = puVar17;
            puVar16 = puVar14;
          }
          else {
            uVar8 = 0;
            if (uVar12 >> 8 != 0) {
              if (uVar12 >> 0x18 == 0) {
                iVar4 = (int)(uVar12 >> 8);
                uVar3 = iVar4 + 0xfff00U >> 0x10 & 8;
                iVar4 = iVar4 << (ulong)uVar3;
                uVar5 = iVar4 + 0x7f000U >> 0x10 & 4;
                iVar4 = iVar4 << (ulong)uVar5;
                uVar2 = iVar4 + 0x3c000U >> 0x10 & 2;
                iVar4 = (0xe - (uVar5 | uVar3 | uVar2)) + ((uint)(iVar4 << (ulong)uVar2) >> 0xf);
                uVar8 = (ulong)((uint)(uVar15 >> ((ulong)(iVar4 + 7) & 0x3f)) & 1 | iVar4 * 2);
              }
              else {
                uVar8 = 0x1f;
              }
            }
            uVar5 = (uint)uVar8;
            *(uint *)(uVar7 + 0x38) = uVar5;
            *(undefined8 *)(uVar7 + 0x20) = 0;
            *(undefined8 *)(uVar7 + 0x28) = 0;
            uVar3 = 1 << (ulong)(uVar5 & 0x1f);
            puVar11 = (ulong *)(param_1 + uVar8 * 8 + 600);
            if ((*(uint *)(param_1 + 4) & uVar3) == 0) {
              *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | uVar3;
              *puVar11 = uVar7;
              *(ulong **)(uVar7 + 0x30) = puVar11;
              *(ulong *)(uVar7 + 0x10) = uVar7;
              *(ulong *)(uVar7 + 0x18) = uVar7;
            }
            else {
              if (uVar5 == 0x1f) {
                uVar12 = 0;
              }
              else {
                uVar12 = 0x3f - (ulong)((int)(uVar8 >> 1) + 6);
              }
              uVar8 = uVar15 << (uVar12 & 0x3f);
              uVar12 = *puVar11;
              do {
                uVar6 = uVar12;
                if ((*(ulong *)(uVar6 + 8) & 0xfffffffffffffff8) == uVar15) {
                  uVar12 = *(ulong *)(uVar6 + 0x10);
                  if ((uVar12 < *(ulong *)(param_1 + 0x18)) || (uVar6 < *(ulong *)(param_1 + 0x18)))
                  goto LAB_0014d9ec;
                  *(ulong *)(uVar12 + 0x18) = uVar7;
                  *(ulong *)(uVar6 + 0x10) = uVar7;
                  *(ulong *)(uVar7 + 0x10) = uVar12;
                  *(ulong *)(uVar7 + 0x18) = uVar6;
                  *(undefined8 *)(uVar7 + 0x30) = 0;
                  goto joined_r0x0014d664;
                }
                uVar12 = uVar8 >> 0x3c;
                uVar8 = uVar8 << 1;
                puVar11 = (ulong *)(uVar6 + (uVar12 & 8) + 0x20);
                uVar12 = *puVar11;
              } while (*puVar11 != 0);
              if (puVar11 < *(ulong **)(param_1 + 0x18)) {
LAB_0014d9ec:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *puVar11 = uVar7;
              *(ulong *)(uVar7 + 0x30) = uVar6;
              *(ulong *)(uVar7 + 0x10) = uVar7;
              *(ulong *)(uVar7 + 0x18) = uVar7;
            }
          }
        }
      }
      puVar14 = puVar16;
      puVar16 = puVar17;
      iVar4 = iVar13 + 1;
    } while (puVar17 != (undefined8 *)0x0);
LAB_0014d9a8:
    uVar7 = (ulong)(iVar13 + 1U);
    if (iVar13 + 1U < 0x1000) {
      uVar7 = 0xfff;
    }
  }
  *(ulong *)(param_1 + 0x38) = uVar7;
  return local_68;
}


