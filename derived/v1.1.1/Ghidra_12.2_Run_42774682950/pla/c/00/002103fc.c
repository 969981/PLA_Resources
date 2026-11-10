/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002103fc; name: FUN_002103fc
 */


int FUN_002103fc(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_0021037c(param_1,param_3 + 1,param_4);
  if (iVar1 == 0) {
    *(long *)(*param_1 + 0x18) = param_3;
    puVar2 = (undefined1 *)FUN_00205b90(*(undefined8 *)(*param_1 + 0x10),param_2,param_3);
    *puVar2 = 0;
  }
  return iVar1;
}


