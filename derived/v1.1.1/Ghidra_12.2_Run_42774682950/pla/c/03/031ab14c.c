/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ab14c; name: FUN_031ab14c
 */


void FUN_031ab14c(int *param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*param_1 == 0) {
    FUN_031ab2fc(param_3,param_2,param_1 + 4);
    FUN_031ab2fc(param_4,param_2,param_1 + 4);
    return;
  }
  switch(*param_1) {
  case 1:
    FUN_031ab418(param_3 + 8,param_2,param_1 + 4);
    FUN_031ab418(param_4 + 8,param_2,param_1 + 4);
    return;
  case 2:
    FUN_031ab534(param_3 + 0x10,param_2,param_1 + 4);
    FUN_031ab534(param_4 + 0x10,param_2,param_1 + 4);
    return;
  case 3:
    FUN_031ab5f0(param_3 + 0x18,param_2,param_1 + 4);
    FUN_031ab5f0(param_4 + 0x18,param_2,param_1 + 4);
    return;
  case 4:
    FUN_031ab6ac(param_3 + 0x20,param_2,param_1 + 4);
    FUN_031ab6ac(param_4 + 0x20,param_2,param_1 + 4);
    return;
  case 5:
    FUN_031ab7c8(param_3 + 0x28,param_2,param_1 + 4);
    FUN_031ab7c8(param_4 + 0x28,param_2,param_1 + 4);
    return;
  case 6:
    FUN_031ab884(param_3 + 0x30,param_2,param_1 + 4);
    FUN_031ab884(param_4 + 0x30,param_2,param_1 + 4);
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


