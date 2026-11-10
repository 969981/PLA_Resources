/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c4dc0; name: FUN_008c4dc0
 */


void FUN_008c4dc0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  lVar1 = FUN_00923bb4();
  if (*(char *)(lVar1 + 0x348) == '\0') {
    uVar2 = FUN_00923c00(param_2);
    lVar1 = FUN_00934460(uVar2,1,0);
    if ((lVar1 == 0) || (uVar3 = FUN_00932220(), (uVar3 & 1) == 0)) {
      FUN_00923c00(param_2);
      uVar3 = FUN_00935074();
      if ((uVar3 & 1) == 0) {
        puVar4 = &DAT_041b6988;
      }
      else {
        puVar4 = &DAT_041b6970;
      }
    }
    else {
      puVar4 = &DAT_041b6958;
    }
  }
  else {
    puVar4 = &DAT_041b6940;
  }
  FUN_02a4754c(param_1,puVar4);
  return;
}


