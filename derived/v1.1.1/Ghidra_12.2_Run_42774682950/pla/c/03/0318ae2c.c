/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318ae2c; name: FUN_0318ae2c
 */


void FUN_0318ae2c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    plVar2 = *(long **)(param_1 + 0x38);
    lVar3 = (long)*(int *)(param_1 + 0x40) * 0x18;
    lVar1 = *plVar2;
    while( true ) {
      if (lVar1 != 0) {
        if ((char)plVar2[2] != '\x01') {
          lVar1 = FUN_03165a00(plVar2);
        }
        FUN_0315e25c(lVar1,*(undefined4 *)*param_2);
      }
      plVar2 = plVar2 + 3;
      lVar3 = lVar3 + -0x18;
      if (lVar3 == 0) break;
      lVar1 = *plVar2;
    }
  }
  return;
}


