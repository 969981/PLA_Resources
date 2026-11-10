/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dde44; name: FUN_032dde44
 */


void FUN_032dde44(ulong *param_1,long *param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  ulong *puVar11;
  long lVar12;
  short *psVar13;
  long *plVar14;
  
  puVar2 = PTR_PTR_0434a080;
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
      puVar11 = param_1;
      if ((uVar8 & 1) == 0) {
        puVar11 = (ulong *)param_1[1];
        bVar1 = (byte)*puVar11;
        while ((bVar1 & 1) == 0) {
          puVar11 = (ulong *)puVar11[1];
          bVar1 = (byte)*puVar11;
        }
      }
      if ((param_1 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 8)) {
        puVar11 = param_1;
        if ((uVar8 & 1) == 0) {
          do {
            puVar11 = (ulong *)puVar11[1];
            if (puVar11 == (ulong *)0x0) goto LAB_032ddfb0;
          } while ((*puVar11 & 1) == 0);
        }
        uVar8 = puVar11[2] >> 8;
        if (0 < (int)(puVar11[2] >> 8)) {
          do {
            uVar6 = (int)uVar8 - 1;
            uVar8 = (ulong)uVar6;
            puVar11 = param_1;
            do {
              if (((byte)*puVar11 >> 1 & 1) != 0) {
                uVar4 = puVar11[3];
                goto LAB_032ddf2c;
              }
              puVar11 = (ulong *)puVar11[1];
            } while (puVar11 != (ulong *)0x0);
            uVar4 = 0;
LAB_032ddf2c:
            puVar11 = param_1;
            do {
              if (((byte)*puVar11 >> 1 & 1) != 0) {
                puVar11 = (ulong *)puVar11[3];
                goto LAB_032ddf48;
              }
              puVar11 = (ulong *)puVar11[1];
            } while (puVar11 != (ulong *)0x0);
            puVar11 = (ulong *)0x0;
LAB_032ddf48:
            do {
              uVar9 = (uint)*puVar11;
              if ((uVar9 >> 0x14 & 1) != 0) {
                uVar7 = 0;
                if (puVar11 != (ulong *)0x0) {
                  uVar9 = (uVar9 & 0xfffff) - (uVar9 >> 1 & 0x55555);
                  uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
                  uVar7 = (uint)(ushort)puVar11[(ulong)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f) *
                                                        0x1010101 >> 0x18) + 2];
                }
                goto LAB_032ddf94;
              }
              if ((*puVar11 & 1) != 0) {
                uVar7 = 0;
                goto LAB_032ddf94;
              }
              puVar11 = (ulong *)puVar11[1];
            } while (puVar11 != (ulong *)0x0);
            uVar7 = 0;
LAB_032ddf94:
            FUN_032dde44(uVar4,param_2,param_3 + (int)(uVar7 * uVar6));
          } while (0 < (int)uVar6);
          uVar6 = (uint)*param_1;
        }
      }
LAB_032ddfb0:
      if ((((uVar6 >> 0x17 & 1) != 0) &&
          (uVar9 = ((uint)*param_1 & 0x7fffff) - ((uint)*param_1 >> 1 & 0x155555),
          uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333),
          psVar13 = (short *)param_1[(ulong)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)
                                     + 2], psVar13 != (short *)0x0)) && ((long)*psVar13 != 0)) {
        lVar12 = (long)*psVar13 << 3;
        do {
          puVar3 = *(undefined8 **)((long)psVar13 + lVar12);
          uVar6 = (uint)*puVar3;
          if ((uVar6 >> 0x11 & 1) == 0) {
            uVar8 = 0;
          }
          else {
            uVar6 = (uVar6 & 0x1ffff) - (uVar6 >> 1 & 0x5555);
            uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
            uVar8 = (ulong)*(ushort *)
                            (puVar3 + (ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18
                                             ) + 2);
          }
          FUN_032dde44(puVar3,param_2,uVar8 + param_3);
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
        uVar6 = (uint)*param_1;
      }
      if ((((uVar6 >> 0xe & 1) != 0) &&
          (uVar6 = ((uint)*param_1 & 0x3fff) - ((uint)*param_1 >> 1 & 0x1555),
          uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333),
          puVar3 = (undefined8 *)
                   param_1[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2],
          puVar3 != (undefined8 *)0x0)) && (iVar10 = (int)*puVar3, 0 < iVar10)) {
        plVar14 = puVar3 + (long)iVar10 * 2;
        lVar12 = (long)iVar10;
        do {
          lVar12 = lVar12 + -1;
          FUN_032dde44(plVar14[-1],param_2,*plVar14 + param_3);
          plVar14 = plVar14 + -2;
        } while (0 < lVar12);
      }
      uVar8 = 0;
      puVar11 = param_1;
      do {
        uVar6 = (uint)uVar8;
        uVar9 = (uint)*puVar11;
        if ((uVar9 >> 0x15 & 1) != 0) {
          uVar6 = (uVar9 & 0x1fffff) - (uVar9 >> 1 & 0x55555);
          uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
          uVar8 = puVar11[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] |
                  uVar8;
          uVar6 = (uint)uVar8;
        }
        if ((*puVar11 & 1) != 0) break;
        uVar6 = (uint)uVar8;
        puVar11 = (ulong *)puVar11[1];
      } while (puVar11 != (ulong *)0x0);
      if ((uVar6 >> 7 & 1) != 0) {
        iVar5 = (int)param_2[1];
        lVar12 = *param_2;
        iVar10 = iVar5 + 1;
        if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar5) {
          lVar12 = FUN_032de708(puVar2,iVar10,lVar12,iVar5,(long)param_2 + 0xc);
          iVar5 = (int)param_2[1];
          *param_2 = lVar12;
        }
        plVar14 = (long *)(lVar12 + (long)iVar5 * 0x10);
        *(int *)(param_2 + 1) = iVar10;
        *plVar14 = param_3;
        plVar14[1] = 0;
      }
      param_1 = (ulong *)param_1[1];
      if (param_1 == (ulong *)0x0) {
        return;
      }
    }
    uVar8 = *param_1;
  } while( true );
}


