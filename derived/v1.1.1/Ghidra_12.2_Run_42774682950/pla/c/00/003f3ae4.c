/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f3ae4; name: FUN_003f3ae4
 */


ulong FUN_003f3ae4(long param_1)

{
  void *__dest;
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x60) + 0x10);
  uVar5 = *(ulong *)(lVar1 + 0x20);
  if (*(ulong *)(param_1 + 0x70) < uVar5) {
    uVar2 = FUN_002ebdc0(*(undefined8 *)(param_1 + 0x78),uVar5);
    *(ulong *)(param_1 + 0x70) = uVar5;
    *(undefined8 *)(param_1 + 0x78) = uVar2;
    lVar1 = *(long *)(*(long *)(param_1 + 0x60) + 0x10);
  }
  if (*(long *)(lVar1 + 0x10) != 0) {
    lVar1 = 0;
    do {
      plVar3 = (long *)FUN_003f3bc0();
      __dest = (void *)(*(long *)(param_1 + 0x78) + lVar1);
      puVar6 = (ulong *)(plVar3 + 1);
      if (*plVar3 == 0) {
        memcpy(__dest,(void *)((long)plVar3 + 9),(ulong)(byte)*puVar6);
        if (*plVar3 == 0) goto LAB_003f3b34;
LAB_003f3b9c:
        uVar4 = *puVar6;
      }
      else {
        memcpy(__dest,(void *)plVar3[2],plVar3[1]);
        if (*plVar3 != 0) goto LAB_003f3b9c;
LAB_003f3b34:
        uVar4 = (ulong)(byte)*puVar6;
      }
      lVar1 = uVar4 + lVar1;
      FUN_00306180(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10));
    } while (*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x10) + 0x10) != 0);
  }
  return uVar5;
}


