/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081d708; name: FUN_0081d708
 */


void FUN_0081d708(long param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = *(ushort *)(param_1 + 0xd0);
  if ((uVar2 & 1) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + 0x90;
    FUN_0082481c(lVar6);
    uVar2 = *(ushort *)(param_1 + 0xd0);
  }
  lVar7 = param_1 + 0x70;
  uVar2 = uVar2 | 2;
  *(ushort *)(param_1 + 0xd0) = uVar2;
  if (*(long *)(param_1 + 0x78) != lVar7) {
    uVar4 = *(uint *)(param_1 + 0x84);
    lVar3 = (long)(int)uVar4;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x78) - lVar3);
    lVar5 = puVar1[1];
    do {
      if (lVar5 == 0) {
        puVar1 = (undefined8 *)
                 (*(long *)((long)puVar1 + (long)(int)uVar4 + 8) +
                 ((long)-((ulong)uVar4 << 0x20) >> 0x20));
        if (puVar1 == (undefined8 *)(-(int)lVar3 + lVar7)) goto LAB_0081d7bc;
      }
      else {
        (**(code **)*puVar1)();
        uVar4 = *(uint *)(param_1 + 0x84);
        lVar3 = (long)(int)uVar4;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x78) - lVar3);
        if (puVar1 == (undefined8 *)(lVar7 - lVar3)) goto LAB_0081d7bc;
      }
      lVar5 = puVar1[1];
    } while( true );
  }
LAB_0081d7c0:
  *(ushort *)(param_1 + 0xd0) = uVar2 & 0xfffd;
  FUN_0081ec80(param_1);
  lVar7 = *(long *)(param_1 + 0x40);
  if (lVar7 != 0) {
    FUN_0082481c(PTR_DAT_04377bb0);
    if ((*(byte *)(lVar7 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar7 + 0x90;
      FUN_0082481c(lVar3);
    }
    FUN_0081aac8(*(int *)(lVar7 + 0x5c) + param_1);
    *(int *)(lVar7 + 0x58) = *(int *)(lVar7 + 0x58) + -1;
    if (lVar3 != 0) {
      FUN_00824824(lVar3);
    }
    FUN_00824824(PTR_DAT_04377bb0);
  }
  if (lVar6 == 0) {
    return;
  }
  FUN_00824824(lVar6);
  return;
LAB_0081d7bc:
  uVar2 = *(ushort *)(param_1 + 0xd0);
  goto LAB_0081d7c0;
}


