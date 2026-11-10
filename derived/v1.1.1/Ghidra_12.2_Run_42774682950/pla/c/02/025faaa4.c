/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025faaa4; name: FUN_025faaa4
 */


void FUN_025faaa4(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
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
  *param_2 = *param_3;
  uVar6 = *(undefined8 *)(param_3 + 0x68);
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_3 + 0x58);
  *(undefined8 *)(param_2 + 0x68) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x48);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(param_2 + 0x48) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_2 + 0x28) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x50);
  *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_3 + 0x60);
  *(undefined8 *)(param_2 + 0x50) = uVar6;
  param_2[0x70] = 0;
  if (param_3[0x70] != '\0') {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_3 + 0x88);
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_3 + 0x80);
    param_2[0x70] = 1;
  }
  uVar6 = *(undefined8 *)(param_3 + 0xa8);
  *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_3 + 0x98);
  *(undefined8 *)(param_2 + 0xa8) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x90);
  *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_2 + 0x90) = uVar6;
  uVar1 = *(undefined4 *)(param_3 + 0xb0);
  uVar2 = param_3[0xb4];
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined4 *)(param_2 + 0xb0) = uVar1;
  param_2[0xb4] = uVar2;
  *(undefined8 *)(param_2 + 200) = 0;
  FUN_0095aa3c(param_2 + 0xc0,param_3 + 0xc0);
  *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_3 + 0xd0);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


