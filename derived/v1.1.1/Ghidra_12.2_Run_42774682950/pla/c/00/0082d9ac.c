/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082d9ac; name: FUN_0082d9ac
 */


void FUN_0082d9ac(long param_1)

{
  int *piVar1;
  undefined4 local_60 [16];
  undefined4 local_18 [2];
  
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    if (**(int **)(param_1 + 0x58) == 1) {
      FUN_007e5d18();
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  piVar1 = (int *)(param_1 + 0x60);
  if (*piVar1 == 1) {
    FUN_007e5d18(piVar1);
  }
  FUN_007e5bd8(piVar1);
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  local_60[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_18);
  FUN_007ee660(param_1 + 0xa4,local_60);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  FUN_0083fbc0(local_60);
  FUN_0083fc00(param_1 + 0xc0,local_60);
  FUN_0083fc40(local_60);
  return;
}


