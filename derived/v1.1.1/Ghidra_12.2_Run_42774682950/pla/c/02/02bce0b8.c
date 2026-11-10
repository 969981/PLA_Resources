/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bce0b8; name: FUN_02bce0b8
 */


long FUN_02bce0b8(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if (param_3 == 0) {
    uVar2 = 0;
    lVar5 = -0x60;
  }
  else {
    uVar2 = param_3 | param_3 >> 1;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar2 = uVar2 | uVar2 >> 0x10;
    uVar2 = uVar2 | uVar2 >> 0x20;
    uVar2 = (uVar2 >> 1 & 0x5555555555555555) + (uVar2 & 0x5555555555555555);
    uVar2 = (uVar2 >> 2 & 0x3333333333333333) + (uVar2 & 0x3333333333333333);
    uVar2 = (uVar2 >> 4 & 0x707070707070707) + (uVar2 & 0x707070707070707);
    uVar2 = (uVar2 >> 8 & 0xf000f000f000f) + (uVar2 & 0xf000f000f000f);
    uVar2 = (uVar2 >> 0x10 & 0x1f0000001f) + (uVar2 & 0x1f0000001f);
    uVar2 = uVar2 + (uVar2 >> 0x20);
    uVar3 = uVar2 << 0x20;
    lVar6 = (uVar2 & 0x7f) - 3;
    lVar5 = (long)(uVar3 - 0x300000000) >> 0x1b;
    if ((uint)lVar6 < 5) {
      lVar5 = lVar5 - *(long *)(&DAT_03a84138 + lVar6 * 8);
      goto LAB_02bce190;
    }
  }
  lVar5 = lVar5 + -0x81;
  uVar3 = uVar2 << 0x20;
LAB_02bce190:
  uVar2 = (long)uVar3 >> 0x20;
  lVar8 = ((-(uVar3 >> 0x20 & 1) & 2 - (uVar2 & 1)) + uVar2) * 4;
  lVar4 = lVar5 * 0x20;
  lVar6 = 0x18;
  if (param_3 < 0x11) {
    lVar6 = 0x28;
  }
  lVar6 = lVar4 + lVar6 + lVar8;
  if (lVar5 != 0) {
    puVar7 = param_2;
    do {
      *puVar7 = 0;
      puVar7[1] = 0x3000effffffff;
      lVar4 = lVar4 + -0x20;
      puVar7[2] = puVar7;
      puVar7[3] = puVar7;
      puVar7 = puVar7 + 4;
    } while (lVar4 != 0);
  }
  puVar7 = param_2 + lVar5 * 4;
  *param_1 = param_2;
  param_1[2] = puVar7;
  memset(puVar7,0,(long)uVar3 >> 0x1e);
  puVar1 = (ulong *)((long)puVar7 + lVar8);
  param_1[5] = uVar2;
  param_1[3] = 0;
  param_1[4] = lVar5;
  param_3 = param_3 - lVar6;
  lVar5 = param_3 + 0x10;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(undefined1 *)((long)puVar1 + 0xe) = 3;
  *puVar1 = param_3;
  lVar4 = param_3 + 0x18;
  *(undefined2 *)((long)puVar1 + 0xc) = 6;
  if (param_3 < 0x11) {
    lVar5 = 0x20;
    lVar4 = 0x28;
  }
  *(undefined1 *)((long)puVar1 + 0x1f) = 0;
  *(undefined8 *)((long)puVar1 + 0x17) = 0;
  *(undefined8 *)((long)puVar1 + 0xf) = 0;
  *(long *)((long)puVar1 + lVar5) = lVar4;
  param_1[1] = puVar1;
  FUN_02bce290(param_1);
  return lVar6;
}


