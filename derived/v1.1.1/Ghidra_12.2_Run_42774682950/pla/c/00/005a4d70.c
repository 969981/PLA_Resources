/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a4d70; name: FUN_005a4d70
 */


void FUN_005a4d70(long *param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = param_1[2];
  if (uVar2 == 0) {
    return;
  }
  lVar3 = 0;
  lVar1 = *(long *)param_1[1];
  do {
    if (lVar1 == 0) {
      if (uVar2 <= lVar3 + 1U) {
        return;
      }
    }
    else {
      (*param_2)(param_3,*(undefined4 *)(*param_1 + lVar3 * 4));
      uVar2 = param_1[2];
      if (uVar2 <= lVar3 + 1U) {
        return;
      }
    }
    lVar3 = lVar3 + 1;
    lVar1 = *(long *)(param_1[1] + lVar3 * 8);
  } while( true );
}


