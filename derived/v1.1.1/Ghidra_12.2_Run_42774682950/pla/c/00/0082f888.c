/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082f888; name: FUN_0082f888
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0082f888(long param_1,long param_2,byte *param_3)

{
  undefined2 uVar1;
  bool bVar2;
  byte bVar3;
  ulong uVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ushort *puVar9;
  ulong uVar10;
  long lVar11;
  byte bVar12;
  byte bVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  local_40[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = FUN_0082deb0(param_2 + 8);
  bVar5 = FUN_0082e514(uVar15,uVar6);
  if (bVar5 == 0xff) {
    return;
  }
  puVar9 = *(ushort **)(param_1 + 0x10);
  if (*param_3 < *(byte *)((long)puVar9 + 3)) {
    lVar7 = *(long *)(puVar9 + 8) + (ulong)*param_3 * 0x18;
    lVar8 = (long)*(int *)(lVar7 + 0x14);
    lVar14 = *(long *)(lVar7 + 8);
    if (*(long *)(lVar7 + 8) != lVar7) goto LAB_0082f92c;
  }
  else {
    lVar7 = 0;
    lVar8 = (long)_DAT_00000014;
    lVar14 = _DAT_00000008;
    if (_DAT_00000008 != 0) {
LAB_0082f92c:
      lVar14 = lVar14 - lVar8;
      do {
        if (param_3[1] < *(byte *)(*(long *)(lVar14 + 0x10) + 0x91)) {
          if ((ushort)bVar5 < *puVar9) {
            lVar11 = *(long *)(puVar9 + 4) + (ulong)bVar5 * 0x20;
          }
          else {
            lVar11 = 0;
          }
          FUN_007e8fa0(lVar7,lVar14 + lVar8,lVar11 + lVar8);
          bVar13 = *(byte *)(param_1 + 6);
          goto joined_r0x0082fafc;
        }
        lVar14 = *(long *)(lVar14 + lVar8 + 8) - lVar8;
      } while (lVar14 != lVar7 - lVar8);
    }
  }
  if ((ushort)bVar5 < *puVar9) {
    lVar14 = *(long *)(puVar9 + 4) + (ulong)bVar5 * 0x20;
  }
  else {
    lVar14 = 0;
  }
  FUN_007e8fa0(lVar7,lVar7,lVar14 + lVar8);
  bVar13 = *(byte *)(param_1 + 6);
joined_r0x0082fafc:
  uVar4 = (ulong)bVar13;
  if (bVar13 == bVar5) {
    uVar1 = *(undefined2 *)param_3;
    *(undefined2 *)(param_1 + 7) = uVar1;
    uVar10 = (ulong)*param_3;
    if (*param_3 == (byte)uVar1) goto LAB_0082fb14;
  }
  else {
    uVar10 = (ulong)*param_3;
    if (*param_3 == *(byte *)(param_1 + 7)) goto LAB_0082fb14;
  }
  if ((uint)uVar10 < (uint)*(byte *)(*(long *)(param_1 + 0x10) + 3)) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10) + uVar10 * 0x18;
    lVar14 = *(long *)(lVar7 + 8);
    if (*(long *)(lVar7 + 8) != lVar7) goto LAB_0082f9dc;
  }
  else {
    lVar7 = 0;
    lVar14 = _DAT_00000008;
    if (_DAT_00000008 != 0) {
LAB_0082f9dc:
      lVar11 = (long)*(int *)(lVar7 + 0x14);
      lVar14 = lVar14 - lVar11;
      bVar3 = 1;
      bVar5 = 1;
      bVar13 = 0xff;
      lVar8 = *(long *)(lVar14 + 0x10);
      bVar12 = bVar13;
      if (*(char *)(lVar8 + 0x78) != '\0') goto LAB_0082fa48;
      do {
        bVar13 = *(byte *)(lVar14 + 0x1c);
        if (*(int *)(*(long *)(*(long *)(param_1 + 0x18) + uVar4 * 8) + (ulong)bVar13 * 4) == 1) {
          if (*(byte *)(param_1 + 8) <= *(byte *)(lVar8 + 0x91)) goto LAB_0082fb14;
          bVar2 = (bool)(bVar5 | bVar12 == 0xff);
          bVar5 = 0;
          if (!bVar2) {
            bVar13 = bVar12;
          }
          bVar3 = bVar3 & (bVar2 ^ 1U);
        }
        else {
          bVar2 = (bool)(bVar3 | bVar12 == 0xff);
          bVar3 = 0;
          if (!bVar2) {
            bVar13 = bVar12;
          }
          bVar5 = bVar5 | bVar2;
        }
        while( true ) {
          lVar14 = *(long *)(lVar14 + lVar11 + 8) - lVar11;
          if (lVar14 == lVar7 - lVar11) goto LAB_0082fb14;
          lVar8 = *(long *)(lVar14 + 0x10);
          bVar12 = bVar13;
          if (*(char *)(lVar8 + 0x78) == '\0') break;
LAB_0082fa48:
          if (bVar13 == 0xff) {
            bVar13 = *(byte *)(lVar14 + 0x1c);
            bVar5 = 1;
            bVar3 = 1;
          }
        }
      } while( true );
    }
  }
  bVar13 = 0xff;
LAB_0082fb14:
  *(byte *)(*(long *)(param_1 + 0x28) + uVar10) = bVar13;
  FUN_0082f6bc(param_1);
  return;
}


