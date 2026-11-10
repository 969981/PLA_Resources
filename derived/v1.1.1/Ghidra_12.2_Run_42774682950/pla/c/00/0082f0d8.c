/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082f0d8; name: FUN_0082f0d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_0082f0d8(long param_1,long param_2,undefined4 param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  byte bVar12;
  byte bVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined4 local_48 [4];
  uint local_38 [2];
  
  local_48[0] = 0;
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  uVar16 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = FUN_0082deb0(param_2 + 8);
  uVar5 = FUN_0082e514(uVar16,uVar7);
  if ((~uVar5 & 0xff) == 0) {
    puVar10 = (uint *)PTR_DAT_04377cd0;
    goto LAB_0082f350;
  }
  lVar15 = param_2 + 0x98;
  local_38[0] = CONCAT22(local_38[0]._2_2_,0xfdfd);
  iVar6 = FUN_0083fd80(lVar15);
  if (((iVar6 == 0) || (iVar6 = FUN_0083fd80(lVar15), iVar6 == 2)) ||
     (uVar8 = FUN_0083fd8c(lVar15), (uVar8 & 1) != 0)) {
LAB_0082f168:
    uVar4 = FUN_0082f368(param_1,uVar5);
    local_38[0] = CONCAT22(local_38[0]._2_2_,uVar4);
    puVar10 = (uint *)PTR_DAT_04377cd0;
    if (((uVar4 & 0xff) == 0xfd) || ((uVar4 & 0xff00) == 0xfd00)) goto LAB_0082f350;
  }
  else {
    uVar4 = FUN_0082f454(param_1,uVar5);
    local_38[0] = CONCAT22(local_38[0]._2_2_,uVar4);
    if (((uVar4 & 0xff) == 0xfd) || ((uVar4 & 0xff00) == 0xfd00)) goto LAB_0082f168;
  }
  if ((uint)*(byte *)(param_1 + 6) == (uVar5 & 0xff)) {
    *(ushort *)(param_1 + 7) = uVar4;
  }
  uVar7 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  FUN_00827a20(uVar7,param_2,local_38,param_3);
  bVar13 = *(byte *)(param_1 + 6);
  uVar8 = (ulong)bVar13;
  if ((uint)*(byte *)(param_1 + 7) != (local_38[0] & 0xff)) {
    uVar5 = (uint)*(byte *)(*(long *)(param_1 + 0x10) + 3);
    if (uVar5 < (local_38[0] & 0xff) || uVar5 == (local_38[0] & 0xff)) {
      lVar14 = 0;
      lVar15 = _DAT_00000008;
      if (_DAT_00000008 != 0) goto LAB_0082f210;
    }
    else {
      lVar14 = *(long *)(*(long *)(param_1 + 0x10) + 0x10) + (ulong)(byte)local_38[0]._0_1_ * 0x18;
      lVar15 = *(long *)(lVar14 + 8);
      if (*(long *)(lVar14 + 8) != lVar14) {
LAB_0082f210:
        lVar11 = (long)*(int *)(lVar14 + 0x14);
        lVar15 = lVar15 - lVar11;
        bVar3 = 1;
        bVar2 = 1;
        bVar13 = 0xff;
        lVar9 = *(long *)(lVar15 + 0x10);
        bVar12 = bVar13;
        if (*(char *)(lVar9 + 0x78) != '\0') goto LAB_0082f27c;
        do {
          bVar13 = *(byte *)(lVar15 + 0x1c);
          if (*(int *)(*(long *)(*(long *)(param_1 + 0x18) + uVar8 * 8) + (ulong)bVar13 * 4) == 1) {
            if (*(byte *)(param_1 + 8) <= *(byte *)(lVar9 + 0x91)) goto LAB_0082f33c;
            bVar1 = (bool)(bVar2 | bVar12 == 0xff);
            bVar2 = 0;
            if (!bVar1) {
              bVar13 = bVar12;
            }
            bVar3 = bVar3 & (bVar1 ^ 1U);
          }
          else {
            bVar1 = (bool)(bVar3 | bVar12 == 0xff);
            bVar3 = 0;
            if (!bVar1) {
              bVar13 = bVar12;
            }
            bVar2 = bVar2 | bVar1;
          }
          while( true ) {
            lVar15 = *(long *)(lVar15 + lVar11 + 8) - lVar11;
            if (lVar15 == lVar14 - lVar11) goto LAB_0082f33c;
            lVar9 = *(long *)(lVar15 + 0x10);
            bVar12 = bVar13;
            if (*(char *)(lVar9 + 0x78) == '\0') break;
LAB_0082f27c:
            if (bVar13 == 0xff) {
              bVar13 = *(byte *)(lVar15 + 0x1c);
              bVar2 = 1;
              bVar3 = 1;
            }
          }
        } while( true );
      }
    }
    bVar13 = 0xff;
  }
LAB_0082f33c:
  *(byte *)(*(long *)(param_1 + 0x28) + (ulong)(byte)local_38[0]._0_1_) = bVar13;
  FUN_0082f6bc(param_1);
  puVar10 = local_38;
LAB_0082f350:
  return (short)*puVar10;
}


