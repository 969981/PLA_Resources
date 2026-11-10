/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d88f0; name: FUN_029d88f0
 */


void FUN_029d88f0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  char local_44 [4];
  
  *(undefined1 *)(param_3[2] + 0x5c) = 0;
  lVar8 = param_3[2];
  bVar4 = *(byte *)(lVar8 + 0x5c);
  if (bVar4 < *(byte *)(lVar8 + 0x5a)) {
    *(byte *)(lVar8 + 0x5c) = bVar4 + 1;
    for (lVar8 = *(long *)(lVar8 + (ulong)bVar4 * 8); lVar8 != 0;
        lVar8 = *(long *)(lVar8 + (ulong)bVar4 * 8)) {
      lVar5 = param_3[1];
      if ((*(byte *)(lVar5 + 0x188) & 7) == 0) {
        uVar9 = *(ulong *)(lVar5 + 400);
        if ((uVar9 & 7) != 0) {
          uVar6 = (uint)uVar9;
          uVar2 = uVar6 & 7;
          uVar7 = 0;
          if (uVar2 == 2) {
            uVar7 = (uint)(uVar9 >> 0xe);
          }
          uVar3 = uVar6 >> 8 & 0x3f;
          if (uVar2 != 3) {
            uVar3 = uVar7;
          }
          uVar7 = uVar6 >> 0xe & 0x3f;
          if (uVar2 != 4) {
            uVar7 = uVar3;
          }
          if ((uint)*(byte *)(lVar8 + 0x7d) == (uVar7 & 0xff)) goto LAB_029d8958;
        }
        local_44[0] = '\x01';
        uVar9 = FUN_02990340(*(undefined8 *)(param_1 + 0x38),lVar5,lVar8,*(undefined4 *)*param_3,
                             local_44);
        if ((uVar9 & 1) != 0) {
          lVar5 = param_3[2];
          bVar4 = *(byte *)(lVar5 + 0x5a);
          uVar2 = *(uint *)(*param_3 + 0x24);
          if (bVar4 != 0) {
            uVar9 = 0;
LAB_029d89f8:
            if (*(long *)(lVar5 + uVar9 * 8) != lVar8) goto code_r0x029d8a04;
            bVar10 = bVar4;
            if ((int)uVar9 + 1U < (uint)bVar4) {
              do {
                puVar1 = (undefined8 *)(lVar5 + uVar9 * 8);
                uVar9 = uVar9 + 1;
                *puVar1 = puVar1[1];
                bVar10 = *(byte *)(lVar5 + 0x5a);
              } while ((int)uVar9 + 1U < (uint)bVar10);
            }
            *(byte *)(lVar5 + 0x5a) = bVar10 - 1;
            *(char *)(lVar5 + 0x5c) = *(char *)(lVar5 + 0x5c) + -1;
          }
LAB_029d8a5c:
          if ((((uint)(1 < bVar4) & (uVar2 & 8) >> 3) == 0) && (local_44[0] != '\0')) {
            FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0x49,
                         *(undefined1 *)(lVar8 + 0x7d),0xffff0000);
          }
        }
      }
LAB_029d8958:
      lVar8 = param_3[2];
      bVar4 = *(byte *)(lVar8 + 0x5c);
      if (*(byte *)(lVar8 + 0x5a) <= bVar4) {
        return;
      }
      *(byte *)(lVar8 + 0x5c) = bVar4 + 1;
    }
  }
  return;
code_r0x029d8a04:
  uVar9 = uVar9 + 1;
  if (bVar4 == uVar9) goto LAB_029d8a5c;
  goto LAB_029d89f8;
}


