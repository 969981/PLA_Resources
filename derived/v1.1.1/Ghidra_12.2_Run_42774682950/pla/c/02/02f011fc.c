/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f011fc; name: FUN_02f011fc
 */


undefined8 * FUN_02f011fc(long *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    iVar1 = FUN_02f1230c(puVar2,param_1,param_2);
    if (iVar1 != 1) {
      (**(code **)(*param_1 + 0x18))(param_1,puVar2);
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}


