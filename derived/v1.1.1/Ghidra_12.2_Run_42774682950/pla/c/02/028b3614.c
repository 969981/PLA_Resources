/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b3614; name: FUN_028b3614
 */


void FUN_028b3614(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  bool bVar5;
  int *piVar6;
  ulong uVar7;
  undefined4 uVar8;
  
  puVar3 = *(undefined8 **)(param_1 + 0x78);
  for (puVar1 = *(undefined8 **)(param_1 + 0x70); puVar1 != puVar3; puVar1 = puVar1 + 6) {
    piVar6 = (int *)*puVar1;
    if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 0xb) ||
       (uVar7 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[5], uVar7 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)((long)piVar6 + uVar7);
    }
    *(undefined4 *)(puVar1 + 5) = uVar8;
  }
  puVar3 = *(undefined8 **)(param_1 + 0xb0);
  for (puVar1 = *(undefined8 **)(param_1 + 0xa8); puVar1 != puVar3; puVar1 = puVar1 + 6) {
    piVar6 = (int *)*puVar1;
    uVar8 = 0;
    if (10 < *(ushort *)((long)piVar6 - (long)*piVar6)) {
      uVar7 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[5];
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = *(undefined4 *)((long)piVar6 + uVar7);
      }
    }
    *(undefined4 *)(puVar1 + 5) = uVar8;
  }
  puVar3 = *(undefined8 **)(param_1 + 0xe8);
  for (puVar1 = *(undefined8 **)(param_1 + 0xe0); puVar1 != puVar3; puVar1 = puVar1 + 6) {
    piVar6 = (int *)*puVar1;
    if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 7) ||
       (uVar7 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar7 == 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = *(char *)((long)piVar6 + uVar7) != '\0';
    }
    *(bool *)(puVar1 + 5) = bVar5;
  }
  lVar4 = *(long *)(param_1 + 0x120);
  for (lVar2 = *(long *)(param_1 + 0x118); lVar2 != lVar4; lVar2 = lVar2 + 0x30) {
    *(undefined1 *)(lVar2 + 0x28) = 0;
  }
  return;
}


