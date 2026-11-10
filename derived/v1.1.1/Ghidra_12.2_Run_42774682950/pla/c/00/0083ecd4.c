/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083ecd4; name: FUN_0083ecd4
 */


void FUN_0083ecd4(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_28;
  
  if (*(int *)(param_1 + 0xd0) != 0) {
    lVar1 = FUN_007e9088(param_1 + 0xc0);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar1 - *(int *)(param_1 + 0xd4);
    }
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    FUN_007e8fa0(param_1 + 0xa8,param_1 + 0xa8,lVar1);
    *(undefined8 *)(lVar1 + 0x10) = param_2;
    plVar2 = (long *)FUN_007ecfa4();
    lVar3 = *plVar2;
    local_28 = 0;
    FUN_007ecf14(&local_28);
    *(long *)(lVar1 + 0x18) = local_28 + lVar3 * 10000;
  }
  return;
}


