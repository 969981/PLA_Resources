/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f7504; name: FUN_029f7504
 */


void FUN_029f7504(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  byte bVar22;
  byte bVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  long lVar28;
  uint uVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  long *plVar34;
  undefined4 local_58 [2];
  long *local_50;
  ulong local_48;
  
  lVar32 = *param_3;
  uVar26 = (ulong)*(byte *)(lVar32 + 0xd88);
  if (*(byte *)(lVar32 + 0xd88) != 0) {
    uVar33 = 0;
    plVar34 = (long *)(lVar32 + 8);
    do {
      uVar25 = 1;
      plVar4 = plVar34;
      if ((uint)uVar26 <= ((uint)uVar33 & 0xff)) {
        plVar4 = (long *)0x0;
      }
      if (*plVar4 != 0) {
        uVar25 = (uint)*(byte *)(*plVar4 + 0x36e);
      }
      local_48 = CONCAT44(uVar25,(int)CONCAT71((int7)(local_48 >> 8),
                                               (byte)((ulong)plVar4[0xb] >> 0x18) >> 1)) &
                 0xffffffffffffff07;
      local_50 = plVar4;
      FUN_029d176c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x140),local_58,&local_50);
      *(undefined4 *)(plVar4 + 0xb) = local_58[0];
      uVar26 = (ulong)*(byte *)(lVar32 + 0xd88);
      uVar33 = uVar33 + 1;
      plVar34 = plVar34 + 0xc;
    } while (uVar33 < uVar26);
    lVar32 = *param_3;
  }
  lVar24 = DAT_043ecde0;
  bVar22 = *(byte *)(lVar32 + 0xd88);
  uVar25 = (uint)bVar22;
  if ((uVar25 != 0) && (uVar25 != 1)) {
    uVar27 = 0;
    do {
      uVar1 = uVar27 + 1;
      lVar28 = lVar32 + (ulong)(uVar27 & 0xff) * 0x60;
      puVar2 = (undefined8 *)(lVar28 + 8);
      uVar29 = uVar1;
      do {
        bVar23 = *(byte *)(lVar32 + 0xd88);
        lVar30 = lVar32 + (ulong)(uVar29 & 0xff) * 0x60;
        puVar5 = puVar2;
        if ((uint)bVar23 <= (uVar27 & 0xff)) {
          puVar5 = (undefined8 *)0x0;
        }
        puVar3 = (undefined8 *)(lVar30 + 8);
        puVar6 = puVar3;
        if ((uint)bVar23 <= (uVar29 & 0xff)) {
          puVar6 = (undefined8 *)0x0;
        }
        if (*(uint *)(puVar5 + 0xb) <= *(uint *)(puVar6 + 0xb)) {
          if (*(uint *)(puVar5 + 0xb) == *(uint *)(puVar6 + 0xb)) {
            uVar26 = *(ulong *)(lVar24 + 8);
            uVar33 = *(ulong *)(lVar24 + 0x10);
            uVar31 = uVar33 ^ uVar26;
            *(ulong *)(lVar24 + 8) = uVar31 ^ (uVar26 >> 0x28 | uVar26 << 0x18) ^ uVar31 << 0x10;
            *(ulong *)(lVar24 + 0x10) = uVar31 >> 0x1b | uVar31 << 0x25;
            if (((int)uVar33 + (int)uVar26 & 1U) == 0) goto LAB_029f7610;
            bVar23 = *(byte *)(lVar32 + 0xd88);
          }
          if (((uVar27 & 0xff) < (uint)bVar23) && ((uVar29 & 0xff) < (uint)bVar23)) {
            uVar7 = *puVar2;
            uVar14 = *(undefined8 *)(lVar28 + 0x10);
            uVar8 = *(undefined8 *)(lVar28 + 0x18);
            uVar15 = *(undefined8 *)(lVar28 + 0x20);
            uVar9 = *(undefined8 *)(lVar28 + 0x28);
            uVar16 = *(undefined8 *)(lVar28 + 0x30);
            uVar10 = *(undefined8 *)(lVar28 + 0x38);
            uVar17 = *(undefined8 *)(lVar28 + 0x40);
            uVar11 = *(undefined8 *)(lVar28 + 0x48);
            uVar18 = *(undefined8 *)(lVar28 + 0x50);
            uVar12 = *(undefined8 *)(lVar28 + 0x58);
            uVar19 = *(undefined8 *)(lVar28 + 0x60);
            uVar13 = *(undefined8 *)(lVar30 + 0x28);
            uVar20 = *(undefined8 *)(lVar30 + 0x30);
            uVar21 = *(undefined8 *)(lVar30 + 0x40);
            *(undefined8 *)(lVar28 + 0x38) = *(undefined8 *)(lVar30 + 0x38);
            *(undefined8 *)(lVar28 + 0x40) = uVar21;
            *(undefined8 *)(lVar28 + 0x28) = uVar13;
            *(undefined8 *)(lVar28 + 0x30) = uVar20;
            uVar13 = *puVar3;
            uVar20 = *(undefined8 *)(lVar30 + 0x10);
            uVar21 = *(undefined8 *)(lVar30 + 0x20);
            *(undefined8 *)(lVar28 + 0x18) = *(undefined8 *)(lVar30 + 0x18);
            *(undefined8 *)(lVar28 + 0x20) = uVar21;
            *puVar2 = uVar13;
            *(undefined8 *)(lVar28 + 0x10) = uVar20;
            uVar13 = *(undefined8 *)(lVar30 + 0x48);
            uVar20 = *(undefined8 *)(lVar30 + 0x50);
            uVar21 = *(undefined8 *)(lVar30 + 0x60);
            *(undefined8 *)(lVar28 + 0x58) = *(undefined8 *)(lVar30 + 0x58);
            *(undefined8 *)(lVar28 + 0x60) = uVar21;
            *(undefined8 *)(lVar28 + 0x48) = uVar13;
            *(undefined8 *)(lVar28 + 0x50) = uVar20;
            *(undefined8 *)(lVar30 + 0x38) = uVar10;
            *(undefined8 *)(lVar30 + 0x40) = uVar17;
            *(undefined8 *)(lVar30 + 0x28) = uVar9;
            *(undefined8 *)(lVar30 + 0x30) = uVar16;
            *(undefined8 *)(lVar30 + 0x18) = uVar8;
            *(undefined8 *)(lVar30 + 0x20) = uVar15;
            *puVar3 = uVar7;
            *(undefined8 *)(lVar30 + 0x10) = uVar14;
            *(undefined8 *)(lVar30 + 0x58) = uVar12;
            *(undefined8 *)(lVar30 + 0x60) = uVar19;
            *(undefined8 *)(lVar30 + 0x48) = uVar11;
            *(undefined8 *)(lVar30 + 0x50) = uVar18;
          }
        }
LAB_029f7610:
        uVar29 = uVar29 + 1;
      } while (bVar22 != uVar29);
      uVar27 = uVar1;
    } while (uVar1 != uVar25 - 1);
  }
  return;
}


