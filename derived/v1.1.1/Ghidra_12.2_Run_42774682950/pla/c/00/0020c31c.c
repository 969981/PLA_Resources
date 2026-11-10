/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020c31c; name: FUN_0020c31c
 */


undefined8 FUN_0020c31c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_0020c738(param_3,0x30);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    lVar2 = *param_1;
    *(undefined8 *)(lVar2 + 8) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    uVar3 = FUN_0020c178((undefined8 *)(lVar2 + 8),param_2,param_3);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    FUN_0020c748(param_3,*param_1);
  }
  return 0xfffffc7b;
}


