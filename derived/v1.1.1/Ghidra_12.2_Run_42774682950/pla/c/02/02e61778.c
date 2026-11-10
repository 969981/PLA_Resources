/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e61778; name: FUN_02e61778
 */


long FUN_02e61778(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
                 undefined8 param_4,undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = FUN_02e625ac();
  if (lVar2 != 0) {
    FUN_02e62634(lVar2,param_4);
    *(long *)(lVar2 + 0x18) = param_1._8_8_;
    *(long *)(lVar2 + 0x10) = param_1._0_8_;
    *(long *)(lVar2 + 0x28) = param_2._8_8_;
    *(long *)(lVar2 + 0x20) = param_2._0_8_;
    puVar3 = (undefined4 *)FUN_02e4d800(lVar2 + 0x38);
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar3 + 4) = 0;
      *(undefined8 *)(puVar3 + 6) = param_5;
      *puVar3 = param_6;
    }
    uVar1 = FUN_02e61160(lVar2);
    FUN_02e613f4(param_3,uVar1);
  }
  return lVar2;
}


