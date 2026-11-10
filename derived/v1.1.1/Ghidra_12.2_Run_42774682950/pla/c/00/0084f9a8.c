/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084f9a8; name: FUN_0084f9a8
 */


void FUN_0084f9a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  puVar2 = PTR_DAT_04378050;
  puVar1 = PTR_DAT_04378048;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined2 *)puVar1 = 0;
  *(undefined2 *)puVar2 = 0;
  FUN_007ecf14(param_1 + 0x68);
  return;
}


