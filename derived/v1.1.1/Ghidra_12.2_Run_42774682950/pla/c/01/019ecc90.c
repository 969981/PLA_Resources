/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019ecc90; name: FUN_019ecc90
 */


void FUN_019ecc90(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  
  uVar6 = *param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar4 == 0) {
    bVar7 = true;
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar6;
    bVar7 = false;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  *param_2 = 0;
  param_2[1] = 0;
  FUN_00b63974(param_2,param_3);
  uVar1 = *(undefined4 *)(param_3 + 0x38);
  param_2[5] = *(undefined8 *)(param_3 + 0x28);
  param_2[3] = *(undefined8 *)(param_3 + 0x18);
  param_2[2] = *(undefined8 *)(param_3 + 0x10);
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  uVar5 = *(undefined8 *)(param_3 + 0x30);
  *(undefined4 *)(param_2 + 7) = uVar1;
  param_2[6] = uVar5;
  param_2[4] = uVar6;
  if (!bVar7) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


