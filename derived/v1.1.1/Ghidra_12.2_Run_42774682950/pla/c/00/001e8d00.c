/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e8d00; name: FUN_001e8d00
 */


void FUN_001e8d00(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long **)(param_4 + 0x12d8) != (long *)0x0) {
    plVar3 = *(long **)(param_4 + 0x12d8);
    do {
      lVar4 = *plVar3;
      plVar5 = (long *)plVar3[2];
      iVar1 = FUN_001f8fe0(*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x20),param_1,
                           param_2);
      if (0 < iVar1) break;
      FUN_001e3790((long *)(param_4 + 0x12d8),plVar3,0);
      plVar3 = plVar5;
    } while (plVar5 != (long *)0x0);
    if (*(long *)(param_4 + 0x12d8) != 0) {
      uVar2 = *(undefined8 *)(lVar4 + 0x20);
      *(undefined8 *)(param_4 + 0x1290) = *(undefined8 *)(lVar4 + 0x18);
      *(undefined8 *)(param_4 + 0x1298) = uVar2;
      uVar2 = FUN_001f88ac(*(undefined8 *)(param_4 + 0x1290),*(undefined8 *)(param_4 + 0x1298),
                           *(undefined8 *)(param_3 + 0xb0),param_4 + 0x12a0);
      *(undefined8 *)(param_3 + 0xb0) = uVar2;
      return;
    }
  }
  *(undefined8 *)(param_4 + 0x1290) = 0;
  *(undefined4 *)(param_4 + 0x1298) = 0;
  return;
}


