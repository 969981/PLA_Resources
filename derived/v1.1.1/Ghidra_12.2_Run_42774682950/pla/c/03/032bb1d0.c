/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bb1d0; name: FUN_032bb1d0
 */


void FUN_032bb1d0(ulong param_1,long param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *param_4;
  *param_4 = uVar1 + 0x3fde80f;
  uVar5 = param_1;
  if (0xfc0217f0 < uVar1) {
    FUN_033299e0(0x8a9331c2);
  }
  while (uVar4 = uVar5 + 0x8ad1, uVar4 <= param_1 + (long)param_3) {
    FUN_032c4a00(uVar5,param_2,0x8ad1);
    uVar1 = *param_4;
    param_2 = param_2 + 0x8ad1;
    *param_4 = uVar1 + 0x3fff96e6;
    uVar5 = uVar4;
    if (0xc0006919 < uVar1) {
      FUN_033299e0(0x8a9331c2);
    }
  }
  iVar3 = (int)(param_1 + (long)param_3) - (int)uVar5;
  FUN_032c4a00(uVar5,param_2,iVar3);
  uVar1 = *param_4;
  uVar2 = iVar3 * 0x7606;
  *param_4 = uVar1 + uVar2;
  if (CARRY4(uVar1,uVar2)) {
    FUN_033299e0(0x8a9331c2);
    return;
  }
  return;
}


