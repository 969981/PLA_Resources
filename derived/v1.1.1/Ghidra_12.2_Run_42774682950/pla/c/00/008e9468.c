/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008e9468; name: FUN_008e9468
 */


void FUN_008e9468(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar4;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)*param_1;
  if ((undefined8 *)param_1[1] == puVar1) {
    lVar2 = param_2[1];
  }
  else {
    lVar2 = param_2[1];
    puVar3 = (undefined8 *)param_1[1];
    do {
      puVar4 = puVar3 + -2;
      *(undefined8 *)(lVar2 + -0x10) = *puVar4;
      *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(puVar3 + -1);
      *puVar4 = 0;
      *(undefined4 *)(puVar3 + -1) = 0xfffffffe;
      lVar2 = param_2[1] + -0x10;
      param_2[1] = lVar2;
      puVar3 = puVar4;
    } while (puVar1 != puVar4);
    puVar1 = (undefined8 *)*param_1;
  }
  *param_1 = lVar2;
  param_2[1] = puVar1;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}


