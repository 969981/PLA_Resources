/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021037c; name: FUN_0021037c
 */


undefined8 FUN_0021037c(long *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_0020c738(param_3,param_2 + 0x28);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0xfffffc7b;
  }
  else {
    uVar2 = 0;
    *param_1 = (long)puVar1;
    *puVar1 = *param_3;
    *(undefined8 *)(*param_1 + 8) = param_3[2];
    *(undefined8 **)(*param_1 + 0x10) = puVar1 + 5;
    *(long *)(*param_1 + 0x18) = param_2;
    *(undefined4 *)(*param_1 + 0x20) = 1;
  }
  return uVar2;
}


