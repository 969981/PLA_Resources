/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ada28; name: FUN_032ada28
 */


ulong FUN_032ada28(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  
  if ((int)(DAT_04440300 * 2) < (int)((DAT_044402f0 + 1) * 3)) {
    FUN_032c2334(&DAT_044402f8);
  }
  uVar3 = DAT_044402f0;
  uVar1 = *param_1 * -0x61c8864f;
  uVar2 = param_1[1] * -0x61c8864f;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar1 = uVar2 + uVar1 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar1;
  uVar6 = (ulong)(uVar1 & DAT_04440300);
  puVar4 = (uint *)(DAT_044402f8 + uVar6 * 8);
  puVar7 = puVar4 + 1;
  uVar2 = *puVar7;
  if (-1 < (int)uVar2) {
    do {
      uVar5 = (ulong)uVar2;
      if (((*puVar4 == uVar1) &&
          (*(int *)(DAT_044402e8 + (-(ulong)(uVar2 >> 0x1f) & 0xffffffe000000000 | uVar5 << 5)) ==
           *param_1)) && (*(int *)(DAT_044402e8 + (long)(int)uVar2 * 0x20 + 4) == param_1[1]))
      goto LAB_032adb1c;
      uVar6 = ((long)(uVar6 << 3) >> 3) + 1U & (long)(int)DAT_04440300;
      puVar4 = (uint *)(DAT_044402f8 + uVar6 * 8);
      puVar7 = puVar4 + 1;
      uVar2 = *puVar7;
    } while (-1 < (int)uVar2);
  }
  *puVar4 = uVar1;
  *puVar7 = uVar3;
  uVar5 = (ulong)DAT_044402f0;
LAB_032adb1c:
  return uVar5 | ((long)puVar4 - DAT_044402f8) * 0x20000000;
}


