/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332b3cc; name: FUN_0332b3cc
 */


void FUN_0332b3cc(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 *local_38;
  
  FUN_03329ab8();
  *param_1 = &PTR_LAB_04350898;
  param_1[0xd] = 0;
  local_48 = 2;
  local_40 = *(undefined4 *)(param_2 + 4);
  local_38 = param_1;
  lVar1 = FUN_032cf5b0(0x390);
  FUN_0332ea84(lVar1,&local_48);
  lVar2 = param_1[0xd];
  if ((lVar2 != lVar1) && (param_1[0xd] = lVar1, lVar2 != 0)) {
    FUN_032d647c();
    lVar1 = param_1[0xd];
  }
  *(undefined4 *)(lVar1 + 0x380) = *(undefined4 *)(param_2 + 4);
  FUN_03329e10(param_1,param_2);
  return;
}


