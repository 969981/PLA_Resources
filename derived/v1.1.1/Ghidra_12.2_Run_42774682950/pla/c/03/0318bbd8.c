/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318bbd8; name: FUN_0318bbd8
 */


void FUN_0318bbd8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_28 [2];
  
  if (*(int *)(param_1 + 0x40) != 0) {
    plVar2 = *(long **)(param_1 + 0x38);
    lVar3 = (long)*(int *)(param_1 + 0x40) * 0x18;
    lVar1 = *plVar2;
    while( true ) {
      if (lVar1 != 0) {
        if ((char)plVar2[2] != '\x01') {
          lVar1 = FUN_03165a00(plVar2);
        }
        local_28[0] = *(undefined4 *)param_2[1];
        FUN_0315dff4(lVar1,*param_2,local_28,*(undefined4 *)param_2[2]);
      }
      plVar2 = plVar2 + 3;
      lVar3 = lVar3 + -0x18;
      if (lVar3 == 0) break;
      lVar1 = *plVar2;
    }
  }
  return;
}


