/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333ab70; name: FUN_0333ab70
 */


void FUN_0333ab70(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined **local_38;
  long local_30;
  undefined8 local_28;
  
  local_28 = -0x8000000000000000;
  local_38 = &PTR_LAB_04350d48;
  local_30 = 0;
  uVar1 = FUN_0333bff4(param_2,&local_38);
  (*(code *)local_38[0xc])(&local_38,uVar1);
  if (((int)param_2[4] != 0) &&
     ((*(code *)local_38[4])(&local_38,param_2[3] + 0x10,(int)param_2[4],0x18), 0 < (int)param_2[4])
     ) {
    lVar2 = 0;
    lVar4 = 0x10;
    do {
      *(undefined8 *)(param_2[3] + lVar4) = 0;
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + 0x18;
    } while (lVar2 < (int)param_2[4]);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  lVar2 = local_28;
  uVar3 = (ulong)local_28._4_4_;
  local_38 = &PTR_LAB_04350d48;
  local_28 = (ulong)local_28._4_4_ << 0x20;
  if ((-1 < lVar2) && (local_30 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_30,(uVar3 & 0x3fffffff) << 3);
  }
  return;
}


