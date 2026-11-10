/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015dde0; name: FUN_0015dde0
 */


void FUN_0015dde0(long param_1,int param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (param_2 != 0) {
    *(undefined1 *)(lVar5 + 0x56) = 1;
  }
  if (*(byte *)(lVar5 + 0x55) < 2) {
    lVar6 = *(long *)(param_1 + 0x18);
    *(undefined1 *)(lVar6 + 0x55) = 2;
    uVar3 = FUN_0015ce80(param_1,lVar6 + 0x58,1);
    *(undefined8 *)(lVar6 + 0x60) = uVar3;
    lVar6 = *(long *)(param_1 + 0x18);
    bVar1 = *(byte *)(lVar6 + 0x55);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x18);
    bVar1 = *(byte *)(lVar6 + 0x55);
  }
  if (bVar1 != 7) {
    do {
      FUN_0015d050(param_1);
    } while (*(char *)(lVar6 + 0x55) != '\a');
    lVar6 = *(long *)(param_1 + 0x18);
    bVar1 = *(byte *)(lVar6 + 0x55);
  }
  if ((1 << (ulong)(bVar1 & 0x1f) & 0xffffff7fU) == 0) {
    do {
      FUN_0015d050(param_1);
    } while ((1 << (ulong)(*(byte *)(lVar6 + 0x55) & 0x1f) & 0xffffff7fU) == 0);
    lVar6 = *(long *)(param_1 + 0x18);
    bVar1 = *(byte *)(lVar6 + 0x55);
  }
  if (bVar1 != 6) {
    do {
      FUN_0015d050(param_1);
    } while (*(char *)(lVar6 + 0x55) != '\x06');
    lVar6 = *(long *)(param_1 + 0x18);
    if (*(char *)(lVar6 + 0x55) == '\a') goto LAB_0015def8;
  }
  do {
    FUN_0015d050(param_1);
  } while (*(char *)(lVar6 + 0x55) != '\a');
LAB_0015def8:
  *(undefined1 *)(lVar5 + 0x56) = 0;
  uVar4 = *(ulong *)(lVar5 + 0x28) / 100;
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = 0x7fffffffffffffff / uVar4;
  }
  lVar6 = -0x7fffffffffffffff;
  if ((long)*(int *)(lVar5 + 0xb4) < (long)uVar2) {
    lVar6 = -(uVar4 * (long)*(int *)(lVar5 + 0xb4));
  }
  FUN_0016ca20(lVar5,*(long *)(lVar5 + 0x18) + *(long *)(lVar5 + 0x10) + lVar6);
  return;
}


