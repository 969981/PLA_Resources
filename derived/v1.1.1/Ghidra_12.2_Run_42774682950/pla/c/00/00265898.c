/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00265898; name: FUN_00265898
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00265898(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  
  *(undefined4 *)(param_1 + 0x16c) = **(undefined4 **)(param_1 + 0x238);
  puVar11 = (uint *)FUN_00277098();
  uVar1 = *puVar11;
  *puVar11 = puVar11[1];
  uVar2 = puVar11[3];
  uVar1 = uVar1 ^ uVar1 << 0xb;
  uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
  puVar11[1] = puVar11[2];
  puVar11[2] = uVar2;
  puVar11[3] = uVar1;
  *(uint *)(param_1 + 0x34) = uVar1;
  uVar10 = DAT_0388a148;
  uVar9 = DAT_0388a140;
  uVar8 = _UNK_03889a88;
  uVar7 = _DAT_03889a80;
  uVar6 = _UNK_03888d18;
  uVar5 = _DAT_03888d10;
  lVar14 = *(long *)(*(long *)(param_1 + 0x238) + 0x18);
  if (lVar14 != 0) {
    auVar16 = NEON_fmov(0x3f800000,4);
    do {
      lVar12 = FUN_00265a84(param_1,lVar14,*(undefined4 *)(param_1 + 0x44),0,0xffffffff);
      if (lVar12 != 0) {
        *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + 1;
        *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + 1;
        if (*(char *)(*(long *)(lVar14 + 0x10) + 0x7f0) == '\0') {
          *(undefined1 *)(param_1 + 8) = 1;
          iVar3 = *(int *)(*(long *)(lVar12 + 0x238) + 0x88);
        }
        else {
          iVar3 = *(int *)(*(long *)(lVar12 + 0x238) + 0x88);
        }
        if (0 < iVar3) {
          uVar15 = 0;
          lVar13 = *(long *)(lVar12 + 0x240);
          while( true ) {
            if (((lVar13 != 0) && (*(char *)(*(long *)(lVar13 + 0x10) + 0x7e4) == '\0')) &&
               (lVar13 = FUN_00265a84(param_1,lVar13,0,lVar12,uVar15 & 0xffffffff), lVar13 != 0)) {
              uVar4 = *(undefined4 *)(lVar12 + 0x14);
              *(undefined4 *)(lVar13 + 0x554) = 0xffffffff;
              *(undefined4 *)(lVar13 + 0x550) = uVar4;
              *(undefined8 *)(lVar13 + 0x348) = uVar8;
              *(undefined8 *)(lVar13 + 0x340) = uVar7;
              *(undefined8 *)(lVar13 + 0x358) = uVar10;
              *(undefined8 *)(lVar13 + 0x350) = uVar9;
              *(undefined8 *)(lVar13 + 0x368) = uVar6;
              *(undefined8 *)(lVar13 + 0x360) = uVar5;
              *(undefined8 *)(lVar13 + 0x378) = 0;
              *(undefined8 *)(lVar13 + 0x370) = 0;
              *(undefined8 *)(lVar13 + 0x388) = uVar8;
              *(undefined8 *)(lVar13 + 0x380) = uVar7;
              *(undefined8 *)(lVar13 + 0x398) = uVar10;
              *(undefined8 *)(lVar13 + 0x390) = uVar9;
              *(undefined8 *)(lVar13 + 0x3a8) = uVar6;
              *(undefined8 *)(lVar13 + 0x3a0) = uVar5;
              *(undefined8 *)(lVar13 + 0x3b8) = 0;
              *(undefined8 *)(lVar13 + 0x3b0) = 0;
              *(float *)(lVar13 + 0x55c) = (float)*(int *)(*(long *)(lVar12 + 0xa0) + 0x8b8);
              *(undefined4 *)(lVar13 + 0x560) = 0;
              *(undefined4 *)(lVar13 + 0x558) = 0xffffffff;
              *(undefined8 *)(lVar13 + 0x570) = 0;
              *(undefined8 *)(lVar13 + 0x578) = 0;
              *(undefined8 *)(lVar13 + 0x580) = 0;
              *(undefined8 *)(lVar13 + 0x588) = 0;
              *(undefined8 *)(lVar13 + 0x5a0) = 0;
              *(undefined8 *)(lVar13 + 0x5b0) = 0;
              *(undefined8 *)(lVar13 + 0x5b8) = 0;
              *(undefined8 *)(lVar13 + 0x5a8) = 0;
              *(long *)(lVar13 + 0x598) = auVar16._8_8_;
              *(long *)(lVar13 + 0x590) = auVar16._0_8_;
            }
            uVar15 = uVar15 + 1;
            if ((long)*(int *)(*(long *)(lVar12 + 0x238) + 0x88) <= (long)uVar15) break;
            lVar13 = *(long *)(lVar12 + uVar15 * 8 + 0x240);
          }
        }
      }
      lVar14 = *(long *)(lVar14 + 0x110);
    } while (lVar14 != 0);
  }
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}


