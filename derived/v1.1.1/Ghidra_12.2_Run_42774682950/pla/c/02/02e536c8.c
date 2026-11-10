/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e536c8; name: FUN_02e536c8
 */


long FUN_02e536c8(long *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *__dest;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *__src;
  ulong uVar6;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 <= uVar2) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar6 = FUN_02e5387c(param_1,iVar1);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar3 <= uVar2) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 1);
  lVar4 = *param_1;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  __dest = (undefined8 *)(lVar4 + (ulong)uVar2 * 0x90);
  if (__dest != (undefined8 *)0x0) {
    lVar4 = lVar4 + (ulong)uVar2 * 0x90;
    *(undefined4 *)(lVar4 + 0x80) = 0;
    *(undefined8 *)(lVar4 + 0x84) = 0x3f8000007f7fffff;
    *(undefined4 *)(lVar4 + 0x8c) = 0;
    *__dest = 0;
    lVar4 = *param_1;
  }
  puVar5 = (undefined8 *)(lVar4 + (ulong)param_2 * 0x90);
  uVar6 = (ulong)param_2;
  if (puVar5 < __dest) {
    do {
      __src = __dest + -0x12;
      memcpy(__dest,__src,0x90);
      lVar4 = *param_1;
      puVar5 = (undefined8 *)(lVar4 + uVar6 * 0x90);
      __dest = __src;
    } while (puVar5 < __src);
  }
  if (puVar5 != (undefined8 *)0x0) {
    lVar4 = lVar4 + uVar6 * 0x90;
    *(undefined4 *)(lVar4 + 0x80) = 0;
    *(undefined8 *)(lVar4 + 0x84) = 0x3f8000007f7fffff;
    *(undefined4 *)(lVar4 + 0x8c) = 0;
    *puVar5 = 0;
    lVar4 = *param_1;
  }
  return lVar4 + uVar6 * 0x90;
}


