/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082f00c; name: FUN_0082f00c
 */


void FUN_0082f00c(long param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ushort *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = FUN_0082deb0(param_2 + 8);
  bVar1 = FUN_0082e514(uVar7,uVar2);
  if (bVar1 != 0xff) {
    puVar4 = *(ushort **)(param_1 + 0x10);
    if ((ushort)bVar1 < *puVar4) {
      plVar6 = (long *)(*(long *)(puVar4 + 4) + (ulong)bVar1 * 0x20);
      lVar5 = *plVar6;
    }
    else {
      plVar6 = (long *)0x0;
      lVar5 = lRam0000000000000000;
    }
    if ((lVar5 != 0) && (plVar6[1] != 0)) {
      if (*(byte *)(param_2 + 0x90) < *(byte *)((long)puVar4 + 3)) {
        lVar5 = *(long *)(puVar4 + 8) + (ulong)*(byte *)(param_2 + 0x90) * 0x18;
      }
      else {
        lVar5 = 0;
      }
      uVar3 = FUN_007e9010(lVar5,(long)*(int *)(lVar5 + 0x14) + (long)plVar6);
      if ((uVar3 & 1) != 0) {
        FUN_007e8fec(lVar5,(long)*(int *)(lVar5 + 0x14) + (long)plVar6);
        return;
      }
    }
  }
  return;
}


