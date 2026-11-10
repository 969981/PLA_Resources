/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060ef9c; name: FUN_0060ef9c
 */


void FUN_0060ef9c(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)param_1[5];
  *param_1 = (long)(PTR_DAT_04375358 + 0x10);
  puVar1 = PTR_LAB_04373088;
  if (puVar3 != (undefined8 *)0x0) {
    if ((undefined8 *)param_1[6] == puVar3) {
      puVar2 = puVar3;
    }
    else {
      puVar4 = (undefined8 *)param_1[6] + -1;
      puVar2 = (undefined8 *)*puVar4;
      *puVar4 = 0;
      if (puVar2 != (undefined8 *)0x0) goto LAB_0060eff8;
      while (puVar3 != puVar4) {
        while( true ) {
          puVar4 = puVar4 + -1;
          puVar2 = (undefined8 *)*puVar4;
          *puVar4 = 0;
          if (puVar2 == (undefined8 *)0x0) break;
LAB_0060eff8:
          (**(code **)*puVar2)(puVar2);
          FUN_002e2ea0(puVar1,puVar2);
          if (puVar3 == puVar4) goto LAB_0060f01c;
        }
      }
LAB_0060f01c:
      puVar2 = (undefined8 *)param_1[5];
    }
    param_1[6] = (long)puVar3;
    FUN_002e2ea0(PTR_LAB_04373088,puVar2);
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[4]);
  }
  operator_delete(param_1);
  return;
}


