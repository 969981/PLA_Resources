/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f88fa8; name: FUN_00f88fa8
 */


void FUN_00f88fa8(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  double dVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar4 = FUN_00f6e680(param_1,param_2[1] + 1,param_2);
  iVar1 = param_2[1] + 1;
  *param_2 = 1;
  param_2[1] = iVar1;
  iVar3 = FUN_001504d0(param_1,iVar1);
  if (iVar3 == 0) {
    dVar2 = (double)FUN_00150a90(param_1,iVar1,0);
    uVar5 = llround(dVar2);
  }
  else {
    uVar5 = FUN_00150ba0(param_1,iVar1,0);
  }
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  dVar2 = (double)FUN_00150a90(param_1,iVar1 + 1,0);
                    /* WARNING: Could not recover jumptable at 0x00f89084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)((float)dVar2,uVar4,uVar5 & 0xffffffff);
  return;
}


