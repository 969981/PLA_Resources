/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0107f954; name: FUN_0107f954
 */


void FUN_0107f954(long *param_1)

{
  long lVar1;
  long lVar2;
  long local_58;
  long lStack_50;
  long local_48;
  long local_40;
  long *plStack_38;
  
  lVar1 = *param_1;
  if ((ulong)(param_1[2] - lVar1 >> 3) < 0x10) {
    lVar2 = param_1[1];
    local_40 = 0;
    plStack_38 = param_1 + 3;
    local_58 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],0x80,8);
    if (local_58 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    lStack_50 = local_58 + (lVar2 - lVar1 >> 3) * 8;
    local_40 = local_58 + 0x80;
    local_48 = lStack_50;
    FUN_01080124(param_1,&local_58);
    FUN_010801cc(&local_58);
  }
  return;
}


