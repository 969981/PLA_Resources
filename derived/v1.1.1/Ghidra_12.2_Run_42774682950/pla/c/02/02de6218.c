/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02de6218; name: FUN_02de6218
 */


void FUN_02de6218(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  short sVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 400);
  if (lVar4 != 0) {
    puVar2 = *(undefined8 **)(lVar4 + 0x60);
    for (puVar1 = *(undefined8 **)(lVar4 + 0x58); puVar1 != puVar2; puVar1 = puVar1 + 2) {
      sVar3 = FUN_02b6f370(*puVar1,param_2);
      if (-1 < sVar3) {
        sVar3 = *(short *)((long)puVar1 + 10) + sVar3;
        goto LAB_02de6274;
      }
    }
    sVar3 = -1;
LAB_02de6274:
    *(short *)(param_1 + 0xfe) = sVar3;
  }
  return;
}


