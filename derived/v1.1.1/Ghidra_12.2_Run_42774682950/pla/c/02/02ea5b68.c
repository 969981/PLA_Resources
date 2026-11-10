/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea5b68; name: FUN_02ea5b68
 */


undefined8 *
FUN_02ea5b68(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_02f137b0();
    *(undefined8 **)(param_1 + 8) = puVar2;
  }
  plVar3 = (long *)(**(code **)*puVar2)();
  if (plVar3 != (long *)0x0) {
    puVar2 = (undefined8 *)FUN_02f59e30(0,0x68);
    if (puVar2 == (undefined8 *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3);
      return (undefined8 *)0x0;
    }
    *(undefined4 *)(puVar2 + 8) = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = plVar3;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    uVar4 = FUN_02e22960(param_3,param_5,0,param_6,puVar2);
    iVar1 = (*(code *)**(undefined8 **)puVar2[0xc])((undefined8 *)puVar2[0xc],param_2,puVar2,uVar4);
    if (iVar1 == 1) {
      return puVar2;
    }
    FUN_02ea5c74(puVar2);
    FUN_02f59e60(0,puVar2);
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  return (undefined8 *)0x0;
}


