/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec6c0c; name: FUN_02ec6c0c
 */


long FUN_02ec6c0c(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_02ec731c();
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    puVar3 = (undefined8 *)param_1[2];
    if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
      *param_1 = puVar3;
    }
    else {
      *(undefined8 *)param_1[1] = puVar3;
      puVar3 = (undefined8 *)param_1[2];
    }
    param_1[1] = puVar3;
    param_1[2] = *puVar3;
    *puVar3 = 0;
    *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + 1;
    lVar2 = param_1[1] + 8;
  }
  return lVar2;
}


