/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024506c; name: FUN_0024506c
 */


void FUN_0024506c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  FUN_00232674(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_00232674(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_00232674(*(undefined8 *)(param_1 + 0x20));
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    FUN_00232674(puVar3);
  }
  lVar4 = *(long *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = 0;
  lVar1 = *(long *)(lVar4 + 8);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar4 + 4)) {
      lVar5 = 0;
      lVar6 = 0;
      lVar2 = *(long *)(lVar1 + 0x18);
      while( true ) {
        if (lVar2 != 0) {
          FUN_00232674();
        }
        *(undefined8 *)(lVar1 + 0x18) = 0;
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x20;
        *(undefined4 *)(lVar1 + 0x10) = 0;
        if (*(int *)(lVar4 + 4) <= lVar6) break;
        lVar1 = *(long *)(lVar4 + 8) + lVar5;
        lVar2 = *(long *)(lVar1 + 0x18);
      }
      if (*(long *)(lVar4 + 8) == 0) goto LAB_00245134;
    }
    FUN_00232674();
  }
LAB_00245134:
  *(undefined8 *)(lVar4 + 8) = 0;
  *(undefined4 *)(lVar4 + 4) = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_00232674();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}


