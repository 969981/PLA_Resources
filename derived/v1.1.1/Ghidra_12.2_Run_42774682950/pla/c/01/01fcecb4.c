/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fcecb4; name: FUN_01fcecb4
 */


void FUN_01fcecb4(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 uint *param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_01fced40();
  if ((uVar3 & 1) == 0) {
    iVar2 = FUN_00150310(param_2,param_3);
    uVar4 = 0;
    *param_5 = (uint)(iVar2 != -1);
    uVar1 = param_5[1];
    if (iVar2 != -1) {
      uVar1 = uVar1 + 1;
    }
    param_5[1] = uVar1;
  }
  else {
    uVar4 = FUN_01fce164(param_2,param_3,param_5);
  }
  *param_1 = uVar4;
  return;
}


