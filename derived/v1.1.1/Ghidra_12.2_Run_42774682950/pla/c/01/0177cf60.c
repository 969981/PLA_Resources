/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0177cf60; name: FUN_0177cf60
 */


void FUN_0177cf60(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long local_68;
  long lStack_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  lVar1 = *param_1;
  if ((ulong)(param_1[2] - lVar1 >> 5) < param_2) {
    lVar2 = param_1[1];
    local_50 = 0;
    plStack_48 = param_1 + 3;
    local_68 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 5,0x10);
    if (local_68 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    lStack_60 = local_68 + (lVar2 - lVar1 >> 5) * 0x20;
    local_50 = local_68 + param_2 * 0x20;
    local_58 = lStack_60;
    FUN_0177e0f4(param_1,&local_68);
    FUN_0177e19c(&local_68);
  }
  return;
}


