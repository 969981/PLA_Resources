/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01087260; name: FUN_01087260
 */


void FUN_01087260(long *param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  uint *local_50;
  ulong uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  if (param_2 == (uint *)0x0) {
    *param_1 = 0;
    uVar3 = 0xffffffff;
  }
  else {
    local_40 = 0x4000000000;
    local_38 = 0xf424000000000;
    uStack_30 = 0;
    local_28 = 1;
    if ((((param_3 < 5) || (uVar1 = *param_2, (int)uVar1 < 1)) || (param_3 - 1 < (ulong)uVar1)) ||
       (local_50 = param_2, uStack_48 = param_3,
       uVar2 = FUN_01087308((long)param_2 + (ulong)uVar1,&local_50), (uVar2 & 1) == 0)) {
      lVar4 = 0;
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = 0;
      lVar4 = (long)param_2 + (ulong)*param_2;
    }
    *param_1 = lVar4;
  }
  *(undefined4 *)(param_1 + 1) = uVar3;
  return;
}


