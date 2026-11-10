/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061c44c; name: FUN_0061c44c
 */


void FUN_0061c44c(long *param_1,byte *param_2,uint *param_3,ulong *param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  ulong __n;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  void *__dest;
  byte *pbVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  pbVar14 = (byte *)param_1[2];
  if (pbVar14 == (byte *)param_1[3]) {
    pbVar9 = (byte *)*param_1;
    pbVar3 = (byte *)param_1[1];
    if (pbVar3 < pbVar9 || (long)pbVar3 - (long)pbVar9 == 0) {
      puVar15 = (undefined8 *)param_1[4];
      lVar8 = param_1[3] - (long)pbVar9;
      uVar5 = lVar8 >> 4;
      if (lVar8 == 0) {
        uVar5 = 1;
      }
      plVar6 = (long *)*puVar15;
      lVar8 = (**(code **)(*plVar6 + 0x10))(plVar6,uVar5 * 0x20,8);
      pbVar14 = (byte *)param_1[1];
      pbVar9 = (byte *)param_1[2];
      puVar2 = (undefined8 *)(lVar8 + (uVar5 & 0x1ffffffffffffffc) * 8);
      puVar10 = puVar2;
      if (pbVar14 == pbVar9) {
        pbVar9 = pbVar14;
      }
      else {
        lVar7 = -0x20 - (long)pbVar14;
        if (((uint)(pbVar9 + lVar7) >> 5 & 1) == 0) {
          uVar17 = *(undefined8 *)pbVar14;
          uVar19 = *(undefined8 *)(pbVar14 + 0x18);
          uVar18 = *(undefined8 *)(pbVar14 + 0x10);
          puVar2[1] = *(undefined8 *)(pbVar14 + 8);
          *puVar2 = uVar17;
          puVar2[3] = uVar19;
          puVar2[2] = uVar18;
          pbVar14[8] = 0;
          pbVar14[9] = 0;
          pbVar14[10] = 0;
          pbVar14[0xb] = 0;
          pbVar14[0xc] = 0;
          pbVar14[0xd] = 0;
          pbVar14[0xe] = 0;
          pbVar14[0xf] = 0;
          pbVar14[0x10] = 0;
          pbVar14[0x11] = 0;
          pbVar14[0x12] = 0;
          pbVar14[0x13] = 0;
          pbVar14[0x14] = 0;
          pbVar14[0x15] = 0;
          pbVar14[0x16] = 0;
          pbVar14[0x17] = 0;
          pbVar14[0] = 0;
          pbVar14[1] = 0;
          pbVar14[2] = 0;
          pbVar14[3] = 0;
          pbVar14[4] = 0;
          pbVar14[5] = 0;
          pbVar14[6] = 0;
          pbVar14[7] = 0;
          pbVar14 = pbVar14 + 0x20;
          puVar10 = puVar2 + 4;
        }
        if ((byte *)0x1f < pbVar9 + lVar7) {
          do {
            uVar17 = *(undefined8 *)pbVar14;
            uVar19 = *(undefined8 *)(pbVar14 + 0x18);
            uVar18 = *(undefined8 *)(pbVar14 + 0x10);
            puVar10[1] = *(undefined8 *)(pbVar14 + 8);
            *puVar10 = uVar17;
            puVar10[3] = uVar19;
            puVar10[2] = uVar18;
            pbVar14[0] = 0;
            pbVar14[1] = 0;
            pbVar14[2] = 0;
            pbVar14[3] = 0;
            pbVar14[4] = 0;
            pbVar14[5] = 0;
            pbVar14[6] = 0;
            pbVar14[7] = 0;
            uVar17 = *(undefined8 *)(pbVar14 + 0x20);
            uVar19 = *(undefined8 *)(pbVar14 + 0x38);
            uVar18 = *(undefined8 *)(pbVar14 + 0x30);
            pbVar14[8] = 0;
            pbVar14[9] = 0;
            pbVar14[10] = 0;
            pbVar14[0xb] = 0;
            pbVar14[0xc] = 0;
            pbVar14[0xd] = 0;
            pbVar14[0xe] = 0;
            pbVar14[0xf] = 0;
            pbVar14[0x10] = 0;
            pbVar14[0x11] = 0;
            pbVar14[0x12] = 0;
            pbVar14[0x13] = 0;
            pbVar14[0x14] = 0;
            pbVar14[0x15] = 0;
            pbVar14[0x16] = 0;
            pbVar14[0x17] = 0;
            puVar10[5] = *(undefined8 *)(pbVar14 + 0x28);
            puVar10[4] = uVar17;
            puVar10[7] = uVar19;
            puVar10[6] = uVar18;
            pbVar14[0x20] = 0;
            pbVar14[0x21] = 0;
            pbVar14[0x22] = 0;
            pbVar14[0x23] = 0;
            pbVar14[0x24] = 0;
            pbVar14[0x25] = 0;
            pbVar14[0x26] = 0;
            pbVar14[0x27] = 0;
            pbVar14[0x28] = 0;
            pbVar14[0x29] = 0;
            pbVar14[0x2a] = 0;
            pbVar14[0x2b] = 0;
            pbVar14[0x2c] = 0;
            pbVar14[0x2d] = 0;
            pbVar14[0x2e] = 0;
            pbVar14[0x2f] = 0;
            pbVar14[0x30] = 0;
            pbVar14[0x31] = 0;
            pbVar14[0x32] = 0;
            pbVar14[0x33] = 0;
            pbVar14[0x34] = 0;
            pbVar14[0x35] = 0;
            pbVar14[0x36] = 0;
            pbVar14[0x37] = 0;
            pbVar14 = pbVar14 + 0x40;
            puVar10 = puVar10 + 8;
          } while (pbVar14 != pbVar9);
        }
        pbVar14 = (byte *)param_1[2];
        pbVar9 = (byte *)param_1[1];
      }
      lVar7 = *param_1;
      lVar16 = param_1[3];
      *param_1 = lVar8;
      param_1[1] = (long)puVar2;
      param_1[2] = (long)puVar10;
      param_1[3] = lVar8 + uVar5 * 0x20;
      if (pbVar14 != pbVar9) {
        bVar4 = pbVar14[-0x20];
        pbVar3 = pbVar14 + -0x20;
        while( true ) {
          pbVar1 = pbVar3;
          if ((bVar4 & 1) != 0) {
            (**(code **)(**(long **)(pbVar14 + -8) + 0x18))
                      (*(long **)(pbVar14 + -8),*(undefined8 *)(pbVar14 + -0x10),
                       *(ulong *)(pbVar14 + -0x20) & 0xfffffffffffffffe,1);
          }
          if (pbVar9 == pbVar1) break;
          bVar4 = pbVar1[-0x20];
          pbVar3 = pbVar1 + -0x20;
          pbVar14 = pbVar1;
        }
      }
      if (lVar7 != 0) {
        plVar6 = (long *)*puVar15;
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,lVar16 - lVar7,8);
      }
    }
    else {
      lVar7 = (long)pbVar3 - (long)pbVar9 >> 5;
      lVar8 = lVar7 + 2;
      if (-1 < lVar7 + 1) {
        lVar8 = lVar7 + 1;
      }
      lVar8 = lVar8 >> 1;
      if (pbVar3 == pbVar14) {
        pbVar9 = pbVar3 + lVar8 * -0x20;
      }
      else {
        lVar7 = lVar8 * -0x20;
        do {
          while( true ) {
            pbVar9 = pbVar3;
            pbVar3 = pbVar9 + lVar7;
            if ((*(long **)(pbVar3 + 0x18) != *(long **)(pbVar9 + 0x18)) &&
               (uVar5 = (**(code **)(**(long **)(pbVar3 + 0x18) + 0x20))(), (uVar5 & 1) == 0))
            break;
            if ((*pbVar3 & 1) == 0) {
              (pbVar9 + lVar7)[0] = 0;
              (pbVar9 + lVar7)[1] = 0;
            }
            else {
              **(undefined1 **)(pbVar3 + 0x10) = 0;
              pbVar3[8] = 0;
              pbVar3[9] = 0;
              pbVar3[10] = 0;
              pbVar3[0xb] = 0;
              pbVar3[0xc] = 0;
              pbVar3[0xd] = 0;
              pbVar3[0xe] = 0;
              pbVar3[0xf] = 0;
              if ((*pbVar3 & 1) != 0) {
                (**(code **)(**(long **)(pbVar3 + 0x18) + 0x18))
                          (*(long **)(pbVar3 + 0x18),*(undefined8 *)(pbVar3 + 0x10),
                           *(ulong *)(pbVar9 + lVar7) & 0xfffffffffffffffe,1);
                pbVar1 = pbVar9 + lVar7;
                pbVar1[0] = 0;
                pbVar1[1] = 0;
                pbVar1[2] = 0;
                pbVar1[3] = 0;
                pbVar1[4] = 0;
                pbVar1[5] = 0;
                pbVar1[6] = 0;
                pbVar1[7] = 0;
              }
            }
            uVar18 = *(undefined8 *)(pbVar9 + 8);
            uVar17 = *(undefined8 *)pbVar9;
            *(undefined8 *)(pbVar3 + 0x10) = *(undefined8 *)(pbVar9 + 0x10);
            *(undefined8 *)(pbVar3 + 8) = uVar18;
            *(undefined8 *)pbVar3 = uVar17;
            pbVar9[8] = 0;
            pbVar9[9] = 0;
            pbVar9[10] = 0;
            pbVar9[0xb] = 0;
            pbVar9[0xc] = 0;
            pbVar9[0xd] = 0;
            pbVar9[0xe] = 0;
            pbVar9[0xf] = 0;
            pbVar9[0x10] = 0;
            pbVar9[0x11] = 0;
            pbVar9[0x12] = 0;
            pbVar9[0x13] = 0;
            pbVar9[0x14] = 0;
            pbVar9[0x15] = 0;
            pbVar9[0x16] = 0;
            pbVar9[0x17] = 0;
            pbVar9[0] = 0;
            pbVar9[1] = 0;
            pbVar9[2] = 0;
            pbVar9[3] = 0;
            pbVar9[4] = 0;
            pbVar9[5] = 0;
            pbVar9[6] = 0;
            pbVar9[7] = 0;
LAB_0061c4d0:
            pbVar3 = pbVar9 + 0x20;
            if (pbVar14 == pbVar9 + 0x20) goto LAB_0061c574;
          }
          if (pbVar9 == pbVar3) goto LAB_0061c4d0;
          uVar5 = *(ulong *)(pbVar9 + 8);
          pbVar1 = *(byte **)(pbVar9 + 0x10);
          if ((*pbVar9 & 1) == 0) {
            pbVar1 = pbVar9 + 1;
            uVar5 = (ulong)(*pbVar9 >> 1);
          }
          FUN_02762710(pbVar3,pbVar1,uVar5);
          pbVar3 = pbVar9 + 0x20;
        } while (pbVar14 != pbVar9 + 0x20);
LAB_0061c574:
        pbVar14 = (byte *)param_1[1];
        pbVar9 = pbVar9 + lVar8 * -0x20 + 0x20;
      }
      param_1[1] = (long)(pbVar14 + lVar8 * -0x20);
      param_1[2] = (long)pbVar9;
    }
  }
  puVar13 = (ulong *)param_1[2];
  uVar12 = (ulong)*param_3;
  uVar11 = *param_4;
  plVar6 = (long *)FUN_00612290();
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar13[3] = (ulong)plVar6;
  bVar4 = *param_2;
  uVar5 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar5 = *(ulong *)(param_2 + 8);
  }
  if (uVar5 < uVar12) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_out_of_range();
  }
  pbVar14 = *(byte **)(param_2 + 0x10);
  if ((bVar4 & 1) == 0) {
    pbVar14 = param_2 + 1;
  }
  __n = uVar5 - uVar12;
  if (uVar11 <= uVar5 - uVar12) {
    __n = uVar11;
  }
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)puVar13 + 1);
    *(char *)puVar13 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0061c774;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar5,1);
    puVar13[1] = __n;
    puVar13[2] = (ulong)__dest;
    *puVar13 = uVar5 | 1;
  }
  memcpy(__dest,pbVar14 + uVar12,__n);
LAB_0061c774:
  *(undefined1 *)((long)__dest + __n) = 0;
  param_1[2] = param_1[2] + 0x20;
  return;
}


