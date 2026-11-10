/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134f008; name: FUN_0134f008
 */


long FUN_0134f008(undefined8 param_1,long *param_2,byte *param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  undefined1 *local_50;
  byte *pbStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar5 = (**(code **)(*param_2 + 0x10))(param_2,0x390,0x10);
  if (lVar5 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_50 = &DAT_cbf29ce484222645;
  bVar1 = *param_3;
  pbVar6 = param_3;
  while (bVar1 != 0) {
    pbVar6 = pbVar6 + 1;
    local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar6;
  }
  local_40 = 4;
  local_38 = (long *)0x0;
  pbStack_48 = param_3;
  FUN_02a923dc(lVar5,&local_50,0x7f00,1);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  *(long **)(lVar5 + 8) = param_2;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x390;
  *(undefined8 *)(lVar5 + 0x20) = 0x10;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return lVar5;
}


