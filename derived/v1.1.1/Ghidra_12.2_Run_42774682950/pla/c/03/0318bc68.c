/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318bc68; name: FUN_0318bc68
 */


void FUN_0318bc68(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar1 = FUN_02898b44();
  }
  FUN_03190938(uVar1,param_2,param_3,param_4);
  if (*(int *)(param_1 + 0x40) != 0) {
    plVar3 = *(long **)(param_1 + 0x38);
    lVar4 = (long)*(int *)(param_1 + 0x40) * 0x18;
    lVar2 = *plVar3;
    while( true ) {
      if (lVar2 != 0) {
        if ((char)plVar3[2] != '\x01') {
          lVar2 = FUN_03165a00(plVar3);
        }
        FUN_0315e3c4(lVar2,4);
      }
      plVar3 = plVar3 + 3;
      lVar4 = lVar4 + -0x18;
      if (lVar4 == 0) break;
      lVar2 = *plVar3;
    }
  }
  return;
}


