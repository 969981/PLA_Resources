/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032df034; name: FUN_032df034
 */


void FUN_032df034(ulong *param_1,long *param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong *puVar10;
  ulong uVar11;
  short *psVar12;
  long lVar13;
  
  if (param_1 == (ulong *)0x0) {
    return;
  }
  uVar8 = *param_1;
  do {
    if ((uVar8 & 1) == 0) {
      param_1 = (ulong *)param_1[1];
    }
    else {
      uVar6 = (uint)uVar8;
      puVar10 = param_1;
      if ((uVar6 >> 0x18 & 1) == 0) {
        uVar11 = uVar8;
        do {
          if (((uVar11 & 1) != 0) || (puVar10 = (ulong *)puVar10[1], puVar10 == (ulong *)0x0))
          goto joined_r0x032df0d8;
          uVar11 = *puVar10;
          uVar6 = (uint)uVar11;
        } while ((uVar6 >> 0x18 & 1) == 0);
      }
      if ((puVar10 != (ulong *)0x0) &&
         (uVar6 = (uVar6 & 0xffffff) - (uVar6 >> 1 & 0x555555),
         uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333),
         uVar11 = puVar10[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2],
         uVar11 != 0)) {
        iVar5 = (int)param_2[1];
        lVar13 = *param_2;
        iVar2 = iVar5 + 1;
        if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar5) {
          lVar13 = FUN_032df5fc(PTR_PTR_0434a080,iVar2);
          iVar5 = (int)param_2[1];
          *param_2 = lVar13;
        }
        plVar1 = (long *)(lVar13 + (long)iVar5 * 0x10);
        *(int *)(param_2 + 1) = iVar2;
        *plVar1 = param_3;
        plVar1[1] = uVar11;
        uVar8 = *param_1;
      }
joined_r0x032df0d8:
      puVar10 = param_1;
      if ((uVar8 & 1) == 0) {
        puVar10 = (ulong *)param_1[1];
        bVar3 = (byte)*puVar10;
        while ((bVar3 & 1) == 0) {
          puVar10 = (ulong *)puVar10[1];
          bVar3 = (byte)*puVar10;
        }
      }
      if ((param_1 != (ulong *)0x0) && ((puVar10[2] & 0x1f) == 8)) {
        puVar10 = param_1;
        if ((uVar8 & 1) == 0) {
          do {
            puVar10 = (ulong *)puVar10[1];
            if (puVar10 == (ulong *)0x0) goto LAB_032df108;
          } while ((*puVar10 & 1) == 0);
        }
        uVar8 = puVar10[2] >> 8;
        uVar6 = (uint)(puVar10[2] >> 8);
        while (0 < (int)uVar6) {
          uVar6 = (int)uVar8 - 1;
          uVar8 = (ulong)uVar6;
          puVar10 = param_1;
          do {
            if (((byte)*puVar10 >> 1 & 1) != 0) {
              uVar11 = puVar10[3];
              goto LAB_032df300;
            }
            puVar10 = (ulong *)puVar10[1];
          } while (puVar10 != (ulong *)0x0);
          uVar11 = 0;
LAB_032df300:
          puVar10 = param_1;
          do {
            if (((byte)*puVar10 >> 1 & 1) != 0) {
              puVar10 = (ulong *)puVar10[3];
              goto LAB_032df31c;
            }
            puVar10 = (ulong *)puVar10[1];
          } while (puVar10 != (ulong *)0x0);
          puVar10 = (ulong *)0x0;
LAB_032df31c:
          do {
            uVar9 = (uint)*puVar10;
            if ((uVar9 >> 0x14 & 1) != 0) {
              uVar7 = 0;
              if (puVar10 != (ulong *)0x0) {
                uVar9 = (uVar9 & 0xfffff) - (uVar9 >> 1 & 0x55555);
                uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
                uVar7 = (uint)(ushort)puVar10[(ulong)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101
                                                     >> 0x18) + 2];
              }
              goto LAB_032df370;
            }
            if ((*puVar10 & 1) != 0) {
              uVar7 = 0;
              goto LAB_032df370;
            }
            puVar10 = (ulong *)puVar10[1];
          } while (puVar10 != (ulong *)0x0);
          uVar7 = 0;
LAB_032df370:
          FUN_032df034(uVar11,param_2,param_3 + (int)(uVar7 * uVar6));
        }
      }
LAB_032df108:
      if ((*(char *)((long)param_1 + 2) < '\0') &&
         (uVar6 = ((uint)*param_1 & 0x7fffff) - ((uint)*param_1 >> 1 & 0x155555),
         uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333),
         psVar12 = (short *)param_1[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)
                                    + 2], psVar12 != (short *)0x0)) {
        lVar13 = (long)*psVar12;
        if (lVar13 != 0) {
          plVar1 = (long *)(psVar12 + lVar13 * 4);
          puVar4 = (undefined8 *)*plVar1;
          uVar6 = (uint)*puVar4;
          if ((uVar6 >> 0x11 & 1) == 0) {
            uVar8 = 0;
          }
          else {
            uVar6 = (uVar6 & 0x1ffff) - (uVar6 >> 1 & 0x5555);
            uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
            uVar8 = (ulong)*(ushort *)
                            (puVar4 + (ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18
                                             ) + 2);
          }
          FUN_032df034(puVar4,param_2,uVar8 + param_3);
          if (plVar1 != (long *)(psVar12 + 4)) {
            puVar4 = (undefined8 *)plVar1[-1];
            uVar6 = (uint)*puVar4;
            if ((uVar6 >> 0x11 & 1) == 0) {
              uVar8 = 0;
            }
            else {
              uVar6 = (uVar6 & 0x1ffff) - (uVar6 >> 1 & 0x5555);
              uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
              uVar8 = (ulong)*(ushort *)
                              (puVar4 + (ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                               0x18) + 2);
            }
            FUN_032df034(puVar4,param_2,uVar8 + param_3);
            if (plVar1 + -1 != (long *)(psVar12 + 4)) {
              lVar13 = lVar13 * 8 + -0x10;
              do {
                puVar4 = *(undefined8 **)((long)psVar12 + lVar13);
                uVar6 = (uint)*puVar4;
                if ((uVar6 >> 0x11 & 1) == 0) {
                  uVar8 = 0;
                }
                else {
                  uVar6 = (uVar6 & 0x1ffff) - (uVar6 >> 1 & 0x5555);
                  uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
                  uVar8 = (ulong)*(ushort *)
                                  (puVar4 + (ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101
                                                   >> 0x18) + 2);
                }
                FUN_032df034(puVar4,param_2,uVar8 + param_3);
                lVar13 = lVar13 + -8;
              } while (lVar13 != 0);
            }
          }
        }
      }
      param_1 = (ulong *)param_1[1];
      if (param_1 == (ulong *)0x0) {
        return;
      }
    }
    uVar8 = *param_1;
  } while( true );
}


