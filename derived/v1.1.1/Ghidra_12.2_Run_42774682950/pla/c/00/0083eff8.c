/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083eff8; name: FUN_0083eff8
 */


void FUN_0083eff8(long param_1)

{
  int *piVar1;
  undefined4 local_70 [16];
  undefined1 auStack_30 [16];
  undefined4 local_18 [2];
  
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 1) {
      local_70[0] = 0;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_18);
      FUN_007ee578(auStack_30,local_70);
      FUN_007e5c40(piVar1,auStack_30);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  FUN_0083fbc0(local_70);
  FUN_0083fc48(param_1 + 0x68,local_70);
  FUN_0083fc40(local_70);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  local_70[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_18);
  FUN_007ee660(param_1 + 0xb4,local_70);
  return;
}


