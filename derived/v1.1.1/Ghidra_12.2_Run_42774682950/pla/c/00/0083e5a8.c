/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083e5a8; name: FUN_0083e5a8
 */


ulong * FUN_0083e5a8(undefined8 param_1,byte *param_2,ulong param_3,undefined8 param_4)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  
  bVar8 = *param_2;
  bVar1 = param_2[1];
  if ((((ulong)bVar1 + (ulong)bVar8) * 8 | 2) == param_3) {
    uVar5 = *(undefined8 *)PTR_DAT_04377ce8;
    puVar6 = (ulong *)(param_2 + 2);
    if (bVar8 == 0) {
      uVar7 = 0;
    }
    else {
      bVar9 = 0;
      uVar7 = 0;
      puVar4 = puVar6;
      do {
        puVar6 = puVar4 + 1;
        uVar2 = (*puVar4 & 0xff00ff00ff00ff00) >> 8 | (*puVar4 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        uVar3 = FUN_00830f1c(uVar5,param_4,uVar2 >> 0x20 | uVar2 << 0x20,1);
        bVar9 = bVar9 + 1;
        uVar7 = uVar7 | uVar3 ^ 1;
        puVar4 = puVar6;
      } while (bVar9 < bVar8);
    }
    if (bVar1 != 0) {
      bVar8 = 0;
      puVar4 = puVar6;
      do {
        puVar6 = puVar4 + 1;
        uVar2 = (*puVar4 & 0xff00ff00ff00ff00) >> 8 | (*puVar4 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        uVar3 = FUN_00830f1c(uVar5,param_4,uVar2 >> 0x20 | uVar2 << 0x20,0);
        bVar8 = bVar8 + 1;
        uVar7 = uVar7 | uVar3 ^ 1;
        puVar4 = puVar6;
      } while (bVar8 < bVar1);
    }
    puVar4 = (ulong *)0x0;
    if ((uVar7 & 1) == 0) {
      puVar4 = puVar6;
    }
  }
  else {
    puVar4 = (ulong *)0x0;
  }
  return puVar4;
}


