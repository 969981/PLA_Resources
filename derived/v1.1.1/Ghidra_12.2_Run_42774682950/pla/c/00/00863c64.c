/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00863c64; name: FUN_00863c64
 */


void FUN_00863c64(long *param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  FUN_0080897c();
  puVar3 = PTR_DAT_04378248;
  param_1[0x13] = (long)(PTR_DAT_04378248 + 0xa0);
  param_1[0x14] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = (long)(puVar3 + 0x80);
  *(undefined1 *)(param_1 + 0x15) = 0;
  FUN_007e60f4(param_1 + 0x17,0xb);
  uVar1 = *(undefined2 *)((long)param_1 + 0x92);
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  uVar4 = FUN_007e336c();
  lVar5 = FUN_0081a750(0x30,uVar4);
  if (lVar5 != 0) {
    FUN_0085e200(lVar5,uVar1);
  }
  uVar2 = *(ushort *)((long)param_1 + 0x92);
  uVar9 = (ulong)uVar2;
  param_1[0x14] = lVar5;
  uVar4 = FUN_007e336c();
  lVar5 = FUN_0081a750(uVar9 << 3,uVar4);
  if ((lVar5 != 0) && (uVar2 != 0)) {
    uVar6 = uVar9 & 3;
    if (uVar9 - 1 < 3) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      puVar8 = (undefined8 *)(lVar5 + 0x10);
      do {
        lVar7 = lVar7 + 4;
        puVar8[-2] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8 = puVar8 + 4;
      } while (uVar9 - uVar6 != lVar7);
    }
    if ((uVar2 & 3) != 0) {
      puVar8 = (undefined8 *)(lVar5 + lVar7 * 8);
      do {
        uVar6 = uVar6 - 1;
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      } while (uVar6 != 0);
    }
  }
  uVar2 = *(ushort *)((long)param_1 + 0x92);
  uVar9 = (ulong)uVar2;
  param_1[0x16] = lVar5;
  uVar4 = FUN_007e336c();
  lVar5 = FUN_0081a750(uVar9 << 5,uVar4);
  if ((lVar5 != 0) && (uVar2 != 0)) {
    lVar7 = lVar5;
    do {
      FUN_007f0ce0(lVar7);
      uVar9 = uVar9 - 1;
      lVar7 = lVar7 + 0x20;
    } while (uVar9 != 0);
  }
  uVar2 = *(ushort *)((long)param_1 + 0x92);
  uVar9 = (ulong)uVar2;
  param_1[0x1c] = lVar5;
  param_1[0x1d] = lVar5;
  uVar4 = FUN_007e336c();
  lVar5 = FUN_0081a750(uVar9 << 3,uVar4);
  if ((lVar5 != 0) && (uVar2 != 0)) {
    uVar6 = uVar9 & 3;
    if (uVar9 - 1 < 3) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      puVar8 = (undefined8 *)(lVar5 + 0x10);
      do {
        lVar7 = lVar7 + 4;
        puVar8[-2] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8 = puVar8 + 4;
      } while (uVar9 - uVar6 != lVar7);
    }
    if ((uVar2 & 3) != 0) {
      puVar8 = (undefined8 *)(lVar5 + lVar7 * 8);
      do {
        uVar6 = uVar6 - 1;
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      } while (uVar6 != 0);
    }
  }
  puVar3 = PTR_DAT_04377ce8;
  param_1[0x1e] = lVar5;
  *(long **)(*(long *)puVar3 + 0x88) = param_1 + 0x13;
  return;
}


