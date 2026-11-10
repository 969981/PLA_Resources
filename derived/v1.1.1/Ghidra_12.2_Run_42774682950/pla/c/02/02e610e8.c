/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e610e8; name: FUN_02e610e8
 */


long FUN_02e610e8(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
                 undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_02e625ac();
  if (lVar1 != 0) {
    FUN_02e62634(lVar1,param_4);
    *(long *)(lVar1 + 0x18) = param_1._8_8_;
    *(long *)(lVar1 + 0x10) = param_1._0_8_;
    *(long *)(lVar1 + 0x28) = param_2._8_8_;
    *(long *)(lVar1 + 0x20) = param_2._0_8_;
    puVar2 = (undefined8 *)FUN_02e4d800(lVar1 + 0x38);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[2] = param_5;
      puVar2[3] = 0;
      puVar2[1] = param_1._8_8_;
      *puVar2 = param_1._0_8_;
    }
  }
  return lVar1;
}


