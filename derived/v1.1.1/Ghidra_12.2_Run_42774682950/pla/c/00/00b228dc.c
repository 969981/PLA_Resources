/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b228dc; name: FUN_00b228dc
 */


void FUN_00b228dc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0x38);
  puVar1 = (undefined8 *)(**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,0x58,8);
  if (puVar1 == (undefined8 *)0x0) {
    (**(code **)(*(long *)*puVar3 + 0xb8))();
  }
  FUN_0093b2d4(puVar3,puVar1 + 2,param_2);
  *puVar1 = 0;
  puVar1[1] = puVar1[3];
  puVar1[1] = puVar1[3];
  uVar2 = FUN_00b22998(param_1,puVar1[3],puVar1 + 2);
  FUN_00b22bc0(param_1,puVar1,uVar2);
  return;
}


