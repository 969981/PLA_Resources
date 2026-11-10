/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03321130; name: FUN_03321130
 */


void FUN_03321130(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  *param_1 = &PTR_LAB_0434fe28;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  FUN_032c4d3c(param_1 + 0xe);
  *(undefined4 *)(param_1 + 4) = 0x800000;
  uVar2 = nn::os::GetThreadAvailableCoreMask();
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = (uint)uVar2;
    uVar3 = uVar1 & 1;
    if ((uVar2 >> 1 != 0) && (uVar3 = (uVar1 >> 1 & 1) + uVar3, uVar2 >> 2 != 0)) {
      uVar3 = (uVar1 >> 2 & 1) + uVar3;
      for (uVar2 = uVar2 >> 3; uVar2 != 0; uVar2 = uVar2 >> 1) {
        uVar3 = ((uint)uVar2 & 1) + uVar3;
      }
    }
  }
  *(uint *)(param_1 + 3) = uVar3;
  *(undefined4 *)((long)param_1 + 0x1c) = 1;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  param_1[0xd] = 0;
  FUN_032c4f40(param_1 + 0xe);
  return;
}


