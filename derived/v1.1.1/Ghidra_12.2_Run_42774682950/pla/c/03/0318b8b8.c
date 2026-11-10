/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318b8b8; name: FUN_0318b8b8
 */


void FUN_0318b8b8(long param_1,long *param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 local_48 [2];
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x40);
  if (0 < (int)*(uint *)(param_1 + 0x40)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      plVar1 = (long *)(*(long *)(param_1 + 0x38) + lVar4);
      lVar2 = *plVar1;
      if (lVar2 != 0) {
        if ((char)plVar1[2] != '\x01') {
          lVar2 = FUN_03165a00(plVar1);
        }
        local_48[0] = *param_3;
        FUN_0315e840(lVar2,*param_2 + lVar5,param_1,local_48);
      }
      uVar3 = uVar3 - 1;
      lVar5 = lVar5 + 8;
      lVar4 = lVar4 + 0x18;
    } while (uVar3 != 0);
  }
  return;
}


