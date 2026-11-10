/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044e150; name: FUN_0044e150
 */


undefined8 FUN_0044e150(int *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    if (*param_1 == *param_2) {
      switch(*param_1) {
      case 0:
        puVar2 = *(undefined8 **)(param_1 + 2);
        if (puVar2 == (undefined8 *)0x0) {
          return 0xffffffff;
        }
        puVar3 = *(undefined8 **)(param_2 + 2);
        if (puVar3 == (undefined8 *)0x0) {
          return 0xffffffff;
        }
        uVar1 = FUN_00413a60(*puVar2,*puVar3);
        if ((int)uVar1 == 0) {
          uVar1 = FUN_0041ecf0(puVar2[1],puVar3[1]);
          return uVar1;
        }
        return uVar1;
      case 1:
      case 2:
      case 6:
        uVar1 = FUN_0040a680(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
        return uVar1;
      case 3:
      case 5:
        uVar1 = FUN_0041ecf0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
        return uVar1;
      case 4:
        uVar1 = FUN_0044e250(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
        return uVar1;
      case 7:
        uVar1 = thunk_FUN_0040a680(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
        return uVar1;
      case 8:
        uVar1 = FUN_00413a60(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
        return uVar1;
      }
    }
  }
  return 0xffffffff;
}


