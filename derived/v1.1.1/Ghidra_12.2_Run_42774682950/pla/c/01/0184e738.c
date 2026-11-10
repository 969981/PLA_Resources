/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0184e738; name: FUN_0184e738
 */


void FUN_0184e738(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar5 != 0) {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar6;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  *param_2 = 0;
  param_2[1] = 0;
  FUN_008c4b3c(param_2,param_3);
  param_2[3] = 0;
  param_2[2] = 0;
  FUN_00b63974(param_2 + 2,param_3 + 0x10);
  param_2[4] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[5] = 0;
  if (*(code **)(param_3 + 0x30) != (code *)0x0) {
    (**(code **)(param_3 + 0x30))(param_3 + 0x40,param_2 + 8);
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    uVar1 = *(undefined8 *)(param_3 + 0x28);
    uVar2 = *(undefined8 *)(param_3 + 0x38);
    param_2[6] = *(undefined8 *)(param_3 + 0x30);
    param_2[7] = uVar2;
    param_2[4] = uVar6;
    param_2[5] = uVar1;
  }
  param_2[0x14] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x15] = 0;
  if (*(code **)(param_3 + 0xb0) != (code *)0x0) {
    (**(code **)(param_3 + 0xb0))(param_3 + 0xc0,param_2 + 0x18);
    uVar6 = *(undefined8 *)(param_3 + 0xa0);
    uVar1 = *(undefined8 *)(param_3 + 0xa8);
    uVar2 = *(undefined8 *)(param_3 + 0xb8);
    param_2[0x16] = *(undefined8 *)(param_3 + 0xb0);
    param_2[0x17] = uVar2;
    param_2[0x14] = uVar6;
    param_2[0x15] = uVar1;
  }
  *(undefined1 *)(param_2 + 0x24) = *(undefined1 *)(param_3 + 0x120);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


