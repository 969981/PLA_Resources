/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e08f5c; name: FUN_02e08f5c
 */


void FUN_02e08f5c(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    uVar3 = *(uint *)(param_1 + 2);
    if (uVar3 != 0) {
      uVar4 = 0;
      lVar2 = *plVar1;
      while( true ) {
        if (lVar2 != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
          uVar3 = *(uint *)(param_1 + 2);
        }
        uVar4 = uVar4 + 1;
        if (uVar3 <= uVar4) break;
        lVar2 = *(long *)(*param_1 + uVar4 * 8);
      }
      plVar1 = (long *)*param_1;
    }
    (**(code **)(*param_2 + 0x18))(param_2,plVar1);
  }
  plVar1 = (long *)param_1[3];
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (plVar1 != (long *)0x0) {
    uVar3 = *(uint *)(param_1 + 5);
    if (uVar3 != 0) {
      uVar4 = 0;
      lVar2 = *plVar1;
      while( true ) {
        if (lVar2 != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          *(undefined8 *)(param_1[3] + uVar4 * 8) = 0;
          uVar3 = *(uint *)(param_1 + 5);
        }
        uVar4 = uVar4 + 1;
        if (uVar3 <= uVar4) break;
        lVar2 = *(long *)(param_1[3] + uVar4 * 8);
      }
      plVar1 = (long *)param_1[3];
    }
    (**(code **)(*param_2 + 0x18))(param_2,plVar1);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (param_1[7] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}


