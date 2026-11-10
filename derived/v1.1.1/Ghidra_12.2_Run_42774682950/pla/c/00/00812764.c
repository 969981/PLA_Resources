/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00812764; name: FUN_00812764
 */


void FUN_00812764(long *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  FUN_007f48fc();
  *param_1 = (long)(PTR_DAT_04377a40 + 0x10);
  FUN_007eb6cc((long)param_1 + 0x11cc);
  FUN_007eb6cc(param_1 + 0x23c);
  FUN_007eb6cc((long)param_1 + 0x11f4);
  param_1[0x241] = 0;
  *(undefined2 *)(param_1 + 0x242) = 0;
  FUN_007e3400(param_1 + 0x243);
  FUN_007e3400(param_1 + 0x247);
  *(undefined1 *)(param_1 + 0x24b) = 0;
  *(undefined2 *)((long)param_1 + 0x1279) = 0;
  *(undefined1 *)((long)param_1 + 0x127b) = 0;
  FUN_007f0ce0(param_1 + 0x250);
  FUN_007f0ce0(param_1 + 0x254);
  *(undefined2 *)(param_1 + 600) = 0;
  *(undefined1 *)((long)param_1 + 0x12c2) = 0;
  *(undefined8 *)((long)param_1 + 0x12c4) = 0x9c409c40c000c000;
  *(undefined4 *)((long)param_1 + 0x12cc) = 0x88b888b8;
  memset((void *)((long)param_1 + 0x1259),0,0x20);
  uVar3 = FUN_00819484();
  FUN_007f3f10(uVar3,param_1);
  puVar2 = PTR_DAT_043773c0;
  lVar4 = FUN_008551bc(*(undefined8 *)PTR_DAT_043773c0);
  FUN_007ff698(*(undefined8 *)(lVar4 + 8),param_1);
  lVar4 = FUN_008551bc(*(undefined8 *)puVar2);
  FUN_00808b54(*(undefined8 *)(lVar4 + 0x10),param_1);
  uVar1 = *(ushort *)(*(long *)puVar2 + 0x50);
  uVar8 = (ulong)uVar1;
  uVar3 = FUN_007e336c();
  lVar4 = FUN_0081a750(uVar8 << 3,uVar3);
  if ((lVar4 != 0) && (uVar1 != 0)) {
    uVar5 = uVar8 & 3;
    if (uVar8 - 1 < 3) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      puVar7 = (undefined8 *)(lVar4 + 0x10);
      do {
        lVar6 = lVar6 + 4;
        puVar7[-2] = 0;
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7 = puVar7 + 4;
      } while (uVar8 - uVar5 != lVar6);
    }
    if ((uVar1 & 3) != 0) {
      puVar7 = (undefined8 *)(lVar4 + lVar6 * 8);
      do {
        uVar5 = uVar5 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
  }
  param_1[0x230] = lVar4;
  uVar1 = *(ushort *)(*(long *)puVar2 + 0x50);
  uVar8 = (ulong)uVar1;
  uVar3 = FUN_007e336c();
  lVar4 = FUN_0081a750(uVar8 << 3,uVar3);
  if ((lVar4 != 0) && (uVar1 != 0)) {
    uVar5 = uVar8 & 3;
    if (uVar8 - 1 < 3) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      puVar7 = (undefined8 *)(lVar4 + 0x10);
      do {
        lVar6 = lVar6 + 4;
        puVar7[-2] = 0;
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7 = puVar7 + 4;
      } while (uVar8 - uVar5 != lVar6);
    }
    if ((uVar1 & 3) != 0) {
      puVar7 = (undefined8 *)(lVar4 + lVar6 * 8);
      do {
        uVar5 = uVar5 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
  }
  param_1[0x231] = lVar4;
  return;
}


