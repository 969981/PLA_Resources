/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034bed4; name: FUN_0034bed4
 */


void FUN_0034bed4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  byte *pbVar11;
  void *pvVar12;
  ulong uVar13;
  void *pvVar14;
  undefined8 *puVar15;
  
  puVar3 = PTR_LAB_04373088;
  uVar13 = (long)param_3 - (long)param_2 >> 3;
  lVar6 = param_1[2];
  pbVar11 = (byte *)*param_1;
  if ((ulong)((lVar6 - (long)pbVar11 >> 3) * -0x5555555555555555) < uVar13) {
    if (pbVar11 != (byte *)0x0) {
      pbVar7 = (byte *)param_1[1];
      if (pbVar7 == pbVar11) {
        pbVar7 = pbVar11;
      }
      else {
        bVar2 = pbVar7[-0x18];
        pbVar1 = pbVar7 + -0x18;
        while( true ) {
          if ((bVar2 & 1) != 0) {
            FUN_002e2ea0(puVar3,*(undefined8 *)(pbVar7 + -8));
          }
          if (pbVar11 == pbVar1) break;
          bVar2 = pbVar1[-0x18];
          pbVar7 = pbVar1;
          pbVar1 = pbVar1 + -0x18;
        }
        pbVar7 = (byte *)*param_1;
      }
      param_1[1] = pbVar11;
      FUN_002e2ea0(PTR_LAB_04373088,pbVar7);
      lVar6 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    uVar10 = 0xaaaaaaaaaaaaaaa;
    if (0xaaaaaaaaaaaaaaa < uVar13) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)((lVar6 >> 3) * -0x5555555555555555) < 0x555555555555555) {
      uVar8 = (lVar6 >> 3) * 0x5555555555555556;
      uVar10 = uVar13;
      if (uVar13 <= uVar8) {
        uVar10 = uVar8;
      }
    }
    puVar5 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,uVar10 * 0x18);
    param_1[2] = puVar5 + uVar10 * 3;
    *param_1 = puVar5;
    param_1[1] = puVar5;
    puVar3 = PTR_FUN_04373078;
    if (param_2 != param_3) {
      do {
        puVar9 = (ulong *)*param_2;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        if ((*puVar9 & 1) == 0) {
          uVar10 = puVar9[1];
          uVar13 = *puVar9;
          puVar5[2] = puVar9[2];
          puVar5[1] = uVar10;
          *puVar5 = uVar13;
        }
        else {
          uVar13 = puVar9[1];
          if (0xffffffffffffffef < uVar13) goto LAB_0034c23c;
          pvVar14 = (void *)puVar9[2];
          if (uVar13 < 0x17) {
            pvVar12 = (void *)((long)puVar5 + 1);
            *(char *)puVar5 = (char)((int)uVar13 << 1);
            if (uVar13 != 0) goto LAB_0034c20c;
          }
          else {
            uVar10 = uVar13 + 0x10 & 0xfffffffffffffff0;
            pvVar12 = (void *)FUN_002e2e80(puVar3,uVar10);
            puVar5[1] = uVar13;
            puVar5[2] = (ulong)pvVar12;
            *puVar5 = uVar10 | 1;
LAB_0034c20c:
            memcpy(pvVar12,pvVar14,uVar13);
          }
          *(undefined1 *)((long)pvVar12 + uVar13) = 0;
        }
        param_2 = param_2 + 1;
        puVar5 = (ulong *)(param_1[1] + 0x18);
        param_1[1] = puVar5;
      } while (param_3 != param_2);
    }
  }
  else {
    lVar6 = param_1[1] - (long)pbVar11 >> 3;
    uVar10 = lVar6 * -0x5555555555555555;
    puVar4 = PTR_FUN_04373078;
    puVar15 = param_2 + lVar6 * 0xaaaaaaaaaaaaaab;
    if (uVar13 <= uVar10) {
      puVar15 = param_3;
    }
    while( true ) {
      PTR_FUN_04373078 = puVar4;
      PTR_LAB_04373088 = puVar3;
      if (param_2 == puVar15) break;
      pbVar7 = (byte *)*param_2;
      if (pbVar11 != pbVar7) {
        uVar8 = *(ulong *)(pbVar7 + 8);
        pbVar1 = *(byte **)(pbVar7 + 0x10);
        if ((*pbVar7 & 1) == 0) {
          pbVar1 = pbVar7 + 1;
          uVar8 = (ulong)(*pbVar7 >> 1);
        }
        FUN_00291910(pbVar11,pbVar1,uVar8);
      }
      pbVar11 = pbVar11 + 0x18;
      param_2 = param_2 + 1;
      puVar3 = PTR_LAB_04373088;
      puVar4 = PTR_FUN_04373078;
    }
    if (uVar10 < uVar13) {
      if (puVar15 != param_3) {
        puVar5 = (ulong *)param_1[1];
        do {
          puVar9 = (ulong *)*puVar15;
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          if ((*puVar9 & 1) == 0) {
            uVar10 = puVar9[1];
            uVar13 = *puVar9;
            puVar5[2] = puVar9[2];
            puVar5[1] = uVar10;
            *puVar5 = uVar13;
          }
          else {
            uVar13 = puVar9[1];
            if (0xffffffffffffffef < uVar13) {
LAB_0034c23c:
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            pvVar14 = (void *)puVar9[2];
            if (uVar13 < 0x17) {
              pvVar12 = (void *)((long)puVar5 + 1);
              *(char *)puVar5 = (char)((int)uVar13 << 1);
              if (uVar13 != 0) goto LAB_0034c084;
            }
            else {
              uVar10 = uVar13 + 0x10 & 0xfffffffffffffff0;
              pvVar12 = (void *)FUN_002e2e80(puVar4,uVar10);
              puVar5[1] = uVar13;
              puVar5[2] = (ulong)pvVar12;
              *puVar5 = uVar10 | 1;
LAB_0034c084:
              memcpy(pvVar12,pvVar14,uVar13);
            }
            *(undefined1 *)((long)pvVar12 + uVar13) = 0;
          }
          puVar15 = puVar15 + 1;
          puVar5 = (ulong *)(param_1[1] + 0x18);
          param_1[1] = puVar5;
        } while (param_3 != puVar15);
      }
    }
    else {
      pbVar7 = (byte *)param_1[1];
      if (pbVar7 != pbVar11) {
        bVar2 = pbVar7[-0x18];
        pbVar1 = pbVar7 + -0x18;
        while( true ) {
          if ((bVar2 & 1) != 0) {
            FUN_002e2ea0(puVar3,*(undefined8 *)(pbVar7 + -8));
          }
          if (pbVar11 == pbVar1) break;
          bVar2 = pbVar1[-0x18];
          pbVar7 = pbVar1;
          pbVar1 = pbVar1 + -0x18;
        }
      }
      param_1[1] = pbVar11;
    }
  }
  return;
}


