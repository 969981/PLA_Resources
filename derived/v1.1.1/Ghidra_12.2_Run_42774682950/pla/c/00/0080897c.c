/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080897c; name: FUN_0080897c
 */


void FUN_0080897c(long *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined2 *puVar7;
  long lVar8;
  ulong uVar9;
  
  *param_1 = (long)(PTR_DAT_043778e0 + 0x10);
  FUN_007f01f4(param_1 + 1);
  puVar2 = PTR_DAT_043778e8;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)(puVar2 + 0x78);
  FUN_007e60f4(param_1 + 0xc,0xe);
  *(undefined1 *)(param_1 + 0x12) = 0xfd;
  uVar1 = *(ushort *)(*(long *)PTR_DAT_043773c0 + 0x50);
  uVar9 = (ulong)uVar1;
  *(ushort *)((long)param_1 + 0x92) = uVar1;
  uVar3 = FUN_007e336c();
  lVar4 = FUN_0081a750(uVar9 << 5,uVar3);
  if ((lVar4 != 0) && (uVar1 != 0)) {
    lVar8 = lVar4;
    do {
      FUN_007f0ce0(lVar8);
      uVar9 = uVar9 - 1;
      lVar8 = lVar8 + 0x20;
    } while (uVar9 != 0);
  }
  param_1[0x10] = lVar4;
  uVar1 = *(ushort *)((long)param_1 + 0x92);
  uVar9 = (ulong)uVar1;
  uVar3 = FUN_007e336c();
  lVar4 = FUN_0081a750(uVar9 << 1,uVar3);
  if ((lVar4 != 0) && (uVar1 != 0)) {
    uVar5 = uVar9 & 3;
    if (uVar9 - 1 < 3) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      lVar8 = lVar4 + 4;
      do {
        lVar6 = lVar6 + 4;
        *(undefined8 *)(lVar8 + -4) = 0;
        lVar8 = lVar8 + 8;
      } while (uVar9 - uVar5 != lVar6);
    }
    if ((uVar1 & 3) != 0) {
      puVar7 = (undefined2 *)(lVar4 + lVar6 * 2);
      do {
        uVar5 = uVar5 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
  }
  param_1[0x11] = lVar4;
  return;
}


