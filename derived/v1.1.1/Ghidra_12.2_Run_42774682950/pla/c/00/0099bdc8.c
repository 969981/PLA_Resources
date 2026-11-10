/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099bdc8; name: FUN_0099bdc8
 */


void FUN_0099bdc8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_18 = *(undefined4 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x730) = uVar1;
  *(undefined4 *)(param_1 + 0x740) = local_18;
  *(undefined8 *)(param_1 + 0x738) = uVar2;
  local_28[0] = (undefined1)uVar1;
  local_24 = *(undefined4 *)(param_1 + 0x734);
  uStack_1c = *(undefined4 *)(param_1 + 0x73c);
  local_20 = (undefined4)uVar2;
  if (((*PTR_DAT_0437a158 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a158), iVar3 != 0))
  {
    FUN_00100250(&LAB_009b71a4,PTR_DAT_0437a160,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a158);
  }
  lVar4 = *(long *)PTR_DAT_0437a160;
  *(long *)PTR_DAT_0437a168 = lVar4;
  FUN_0192b080(lVar4 + 0x54,2,local_28,0,0);
  return;
}


