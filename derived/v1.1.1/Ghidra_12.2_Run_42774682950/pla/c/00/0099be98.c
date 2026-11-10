/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099be98; name: FUN_0099be98
 */


void FUN_0099be98(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  *(undefined8 *)(param_1 + 0x754) = uVar2;
  *(undefined8 *)(param_1 + 0x75c) = uVar4;
  *(undefined8 *)(param_1 + 0x744) = uVar1;
  *(undefined8 *)(param_1 + 0x74c) = uVar3;
  local_30[0] = *(undefined1 *)(param_1 + 0x744);
  local_2c = *(undefined4 *)(param_1 + 0x748);
  local_28 = (undefined4)uVar3;
  local_24 = *(undefined4 *)(param_1 + 0x750);
  local_20 = (undefined4)uVar2;
  local_1c = *(undefined4 *)(param_1 + 0x758);
  uStack_18 = (undefined4)uVar4;
  local_14 = *(undefined4 *)(param_1 + 0x760);
  if (((*PTR_DAT_0437a158 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a158), iVar5 != 0))
  {
    FUN_00100250(&LAB_009b71a4,PTR_DAT_0437a160,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a158);
  }
  lVar6 = *(long *)PTR_DAT_0437a160;
  *(long *)PTR_DAT_0437a168 = lVar6;
  FUN_0192b210(lVar6 + 0x104,2,local_30,0,0);
  return;
}


