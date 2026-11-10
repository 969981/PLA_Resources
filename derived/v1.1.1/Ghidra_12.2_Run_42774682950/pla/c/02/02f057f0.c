/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f057f0; name: FUN_02f057f0
 */


int FUN_02f057f0(long param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return 1;
    }
    iVar1 = (**(code **)*puVar2)(puVar2,param_2,param_3 & 1);
    if (iVar1 != 1) break;
    puVar2 = (undefined8 *)puVar2[1];
  }
  if ((param_3 & 1) == 0) {
    return iVar1;
  }
  for (puVar3 = *(undefined8 **)(param_1 + 0x28); puVar2 != puVar3; puVar3 = (undefined8 *)puVar3[1]
      ) {
    (**(code **)*puVar3)(puVar3,param_2,0);
  }
  return iVar1;
}


