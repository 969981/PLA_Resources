/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff2280; name: FUN_02ff2280
 */


void FUN_02ff2280(undefined8 *param_1,long param_2,int param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long local_48;
  
  FUN_02fe942c();
  *param_1 = &PTR_LAB_042ba900;
  plVar3 = param_1 + 9;
  *plVar3 = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if (param_3 == 0) {
    FUN_02fe95fc(&local_48,param_1,param_4);
    lVar1 = 0;
    if (local_48 != 0) {
      lVar1 = local_48 - (long)(param_1 + 8);
    }
    param_1[8] = lVar1;
  }
  else {
    lVar2 = param_1[8];
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar2 + (long)(param_1 + 8);
    }
    FUN_032d645c(lVar1);
  }
  if (param_5 == 0) {
    lVar2 = *(long *)(param_2 + 0x48);
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar2 + param_2 + 0x48;
    }
    lVar2 = param_1[8];
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar2 + (long)(param_1 + 8);
    }
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x40 + 0x4038))
              (&local_48,lVar1,lVar2);
    lVar1 = 0;
    if (local_48 != 0) {
      lVar1 = local_48 - (long)plVar3;
    }
    *plVar3 = lVar1;
  }
  FUN_02fe9478(param_1);
  return;
}


