/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcfdf4; name: FUN_02bcfdf4
 */


void FUN_02bcfdf4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  lVar4 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  uVar1 = 0;
  if (lVar6 - lVar4 != 0) {
    uVar1 = (lVar6 - lVar4 >> 3) * 0x38 - 1;
  }
  uVar7 = *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40);
  if (uVar1 == uVar7) {
    FUN_02bcff7c(param_1);
    uVar7 = *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x48);
    lVar4 = *(long *)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == lVar4) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = (undefined8 *)(*(long *)(lVar4 + (uVar7 / 0x38) * 8) + (uVar7 % 0x38) * 0x48);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar4 == 0) {
    bVar5 = true;
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar10;
    bVar5 = false;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  uVar10 = *param_2;
  uVar8 = *param_3;
  *puVar9 = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[6] = uVar10;
  puVar9[7] = uVar8;
  *(undefined4 *)(puVar9 + 8) = 0xffffffff;
  if (!bVar5) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
  return;
}


