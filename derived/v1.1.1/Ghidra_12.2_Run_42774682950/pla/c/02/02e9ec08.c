/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9ec08; name: FUN_02e9ec08
 */


void FUN_02e9ec08(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_02e9ed40();
  lVar2 = DAT_0440a410;
  if (*(char *)(param_4 + 0xb8) == '\0') {
    while( true ) {
      if (lVar2 == 0) {
        FUN_02e43d1c();
        cVar1 = *(char *)(DAT_0440a410 + 0xb8);
        param_4 = DAT_0440a410;
      }
      else {
        cVar1 = *(char *)(lVar2 + 0xb8);
        param_4 = lVar2;
      }
      if (cVar1 != '\0') break;
      lVar2 = param_4;
    }
  }
  FUN_02ea6cc8(param_1,param_2,param_3,uVar3,param_5,param_4 + 0x48);
  return;
}


