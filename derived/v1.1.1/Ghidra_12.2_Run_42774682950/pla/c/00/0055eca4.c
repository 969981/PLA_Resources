/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055eca4; name: FUN_0055eca4
 */


bool FUN_0055eca4(byte *param_1,byte *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  size_t sVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  void *pvVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  void *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
    bVar3 = param_1 == param_2;
  }
  else {
    uVar4 = FUN_0055f0b0(param_1,param_2);
    puVar2 = PTR_FUN_04373078;
    if ((uVar4 & 1) == 0) {
      bVar3 = false;
    }
    else {
      uVar8 = (uint)*param_1;
      if (uVar8 - 5 < 7) {
        local_70 = (undefined8 *)0x0;
        local_68 = (undefined8 *)0x0;
        local_78 = (void *)0x0;
        do {
          if (uVar8 - 7 < 5) {
            pbVar9 = param_1 + 8;
            if (1 < *(ushort *)(param_1 + 6)) {
              pbVar9 = *(byte **)pbVar9;
            }
            param_1 = *(byte **)pbVar9;
            pbVar9 = param_2 + 8;
            if (1 < *(ushort *)(param_2 + 6)) {
              pbVar9 = *(byte **)pbVar9;
            }
            param_2 = *(byte **)pbVar9;
                    /* try { // try from 0055ed44 to 0055ed4f has its CatchHandler @ 0055f078 */
            uVar4 = FUN_0055f0b0(param_1,param_2);
            if ((uVar4 & 1) == 0) {
LAB_0055f008:
              bVar3 = false;
joined_r0x0055efd0:
              if (local_78 == (void *)0x0) {
                return bVar3;
              }
              local_70 = local_78;
              FUN_002e2ea0(PTR_LAB_04373088);
              return bVar3;
            }
          }
          else {
            if ((uVar8 - 5 < 2) && (*(ushort *)(param_1 + 6) != 0)) {
              lVar17 = 0;
              pbVar9 = param_1 + 8;
              pbVar10 = pbVar9;
              if (*(ushort *)(param_1 + 6) < 2) goto LAB_0055edd0;
              do {
                pbVar10 = *(byte **)pbVar9;
LAB_0055edd0:
                do {
                  uVar15 = *(undefined8 *)(pbVar10 + lVar17 * 8);
                  pbVar10 = param_2 + 8;
                  if (1 < *(ushort *)(param_2 + 6)) {
                    pbVar10 = *(byte **)(param_2 + 8);
                  }
                  uVar13 = *(undefined8 *)(pbVar10 + lVar17 * 8);
                    /* try { // try from 0055edec to 0055edf7 has its CatchHandler @ 0055f088 */
                  uVar4 = FUN_0055f0b0(uVar15,uVar13);
                  if ((uVar4 & 1) == 0) goto LAB_0055f008;
                  if (local_70 == local_68) {
                    lVar6 = (long)local_70 - (long)local_78 >> 3;
                    uVar4 = lVar6 + 1;
                    if (uVar4 >> 0x3d != 0) {
                    /* try { // try from 0055f018 to 0055f027 has its CatchHandler @ 0055f058 */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
                      uVar16 = (long)local_68 - (long)local_78 >> 2;
                      if (uVar4 <= uVar16) {
                        uVar4 = uVar16;
                      }
                      if (uVar4 != 0) goto LAB_0055ee68;
                      lVar5 = 0;
                    }
                    else {
                      uVar4 = 0x1fffffffffffffff;
LAB_0055ee68:
                      lVar5 = FUN_002e2e80(puVar2,uVar4 << 3);
                    }
                    puVar12 = (undefined8 *)(lVar5 + lVar6 * 8);
                    puVar1 = (undefined8 *)(lVar5 + uVar4 * 8);
                    *puVar12 = uVar15;
                    sVar7 = (long)local_70 - (long)local_78;
                    pvVar14 = (void *)((long)puVar12 - sVar7);
                    if (0 < (long)sVar7) {
                      memcpy(pvVar14,local_78,sVar7);
                    }
                    bVar3 = local_78 != (void *)0x0;
                    local_78 = pvVar14;
                    local_70 = puVar12 + 1;
                    local_68 = puVar1;
                    if (bVar3) {
                      FUN_002e2ea0(PTR_LAB_04373088);
                    }
                    if (local_70 != local_68) goto LAB_0055ed9c;
LAB_0055eecc:
                    uVar16 = (long)local_68 - (long)local_78 >> 3;
                    uVar4 = uVar16 + 1;
                    if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    if (uVar16 < 0xfffffffffffffff) {
                      uVar11 = (long)local_68 - (long)local_78 >> 2;
                      if (uVar4 <= uVar11) {
                        uVar4 = uVar11;
                      }
                      if (uVar4 != 0) goto LAB_0055ef08;
                      lVar6 = 0;
                    }
                    else {
                      uVar4 = 0x1fffffffffffffff;
LAB_0055ef08:
                      lVar6 = FUN_002e2e80(puVar2,uVar4 << 3);
                    }
                    puVar12 = (undefined8 *)(lVar6 + uVar16 * 8);
                    puVar1 = (undefined8 *)(lVar6 + uVar4 * 8);
                    *puVar12 = uVar13;
                    sVar7 = (long)local_70 - (long)local_78;
                    pvVar14 = (void *)((long)puVar12 - sVar7);
                    if (0 < (long)sVar7) {
                      memcpy(pvVar14,local_78,sVar7);
                    }
                    bVar3 = local_78 == (void *)0x0;
                    local_78 = pvVar14;
                    local_70 = puVar12 + 1;
                    local_68 = puVar1;
                    if (bVar3) goto LAB_0055edac;
                    FUN_002e2ea0(PTR_LAB_04373088);
                    uVar4 = (ulong)*(ushort *)(param_1 + 6);
                    if (uVar4 <= lVar17 + 1U) goto LAB_0055ef6c;
                  }
                  else {
                    *local_70 = uVar15;
                    local_70 = local_70 + 1;
                    if (local_70 == local_68) goto LAB_0055eecc;
LAB_0055ed9c:
                    *local_70 = uVar13;
                    local_70 = local_70 + 1;
LAB_0055edac:
                    uVar4 = (ulong)*(ushort *)(param_1 + 6);
                    if (uVar4 <= lVar17 + 1U) goto LAB_0055ef6c;
                  }
                  lVar17 = lVar17 + 1;
                  pbVar10 = pbVar9;
                } while ((uint)uVar4 < 2);
              } while( true );
            }
LAB_0055ef6c:
            uVar4 = (long)local_70 - (long)local_78 >> 3;
            if (uVar4 == 0) {
              bVar3 = true;
              goto joined_r0x0055efd0;
            }
            if (uVar4 == 1) {
                    /* try { // try from 0055f028 to 0055f047 has its CatchHandler @ 0055f048 */
                    /* WARNING: Subroutine does not return */
              __assert_fail("(n) >= (2)","external/com_github_google_re2/re2/regexp.cc",0x1e3,
                            "Equal");
            }
            puVar12 = (undefined8 *)((long)local_78 + uVar4 * 8 + -0x10);
            param_1 = (byte *)*puVar12;
            param_2 = *(byte **)((long)local_78 + uVar4 * 8 + -8);
            if (uVar4 < 2) {
                    /* try { // try from 0055ef98 to 0055efa3 has its CatchHandler @ 0055f068 */
              FUN_00560edc(&local_78,0xfffffffffffffffe);
            }
            else {
              local_70 = puVar12;
            }
          }
          uVar8 = (uint)*param_1;
        } while( true );
      }
      bVar3 = true;
    }
  }
  return bVar3;
}


