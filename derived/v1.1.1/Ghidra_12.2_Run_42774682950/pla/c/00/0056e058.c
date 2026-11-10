/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056e058; name: FUN_0056e058
 */


void FUN_0056e058(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar4;
  undefined8 *puVar3;
  
  FUN_0056e0c4();
  puVar1 = (undefined8 *)param_1[2];
  puVar3 = (undefined8 *)param_1[1];
  if ((undefined8 *)param_1[1] != puVar1) {
    do {
      puVar4 = puVar3 + 1;
      operator_delete((void *)*puVar3);
      puVar3 = puVar4;
    } while (puVar1 != puVar4);
    lVar2 = param_1[2] - param_1[1];
    if (lVar2 != 0) {
      param_1[2] = param_1[2] + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if ((void *)*param_1 == (void *)0x0) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


