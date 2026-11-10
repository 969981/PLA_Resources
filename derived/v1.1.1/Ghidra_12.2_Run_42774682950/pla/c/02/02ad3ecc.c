/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ad3ecc; name: FUN_02ad3ecc
 */


void FUN_02ad3ecc(long *param_1,long param_2,long *param_3,undefined4 *param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar9 = (undefined8 *)(param_2 + 0x38);
  lVar3 = (**(code **)(*(long *)*puVar9 + 0x10))((long *)*puVar9,0x38,8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)*puVar9 + 0xb8))();
  }
  *param_1 = lVar3;
  param_1[1] = (long)puVar9;
  *(undefined1 *)(param_1 + 2) = 0;
  uVar10 = *puVar9;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar4 != 0) {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  lVar6 = *param_3;
  if (lVar6 == 0) {
    uVar10 = *(undefined8 *)PTR_DAT_04379c88;
  }
  else {
    uVar10 = *(undefined8 *)(lVar6 + 0x58);
    if (lVar6 != 0) {
      uVar8 = *(undefined8 *)(lVar6 + 0x60);
      goto joined_r0x02ad4078;
    }
  }
  uVar8 = *(undefined8 *)PTR_PTR_04379d00;
joined_r0x02ad4078:
  uVar7 = 0;
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(lVar6 + 0x68);
  }
  *(undefined8 *)(lVar3 + 0x10) = uVar10;
  *(undefined8 *)(lVar3 + 0x18) = uVar8;
  *(undefined8 *)(lVar3 + 0x20) = uVar7;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  param_3 = (long *)*param_3;
  if (param_3 == (long *)0x0) {
    *(undefined8 *)(lVar3 + 0x28) = 0;
  }
  else {
    (**(code **)(*param_3 + 0x18))(param_3);
    plVar5 = *(long **)(lVar3 + 0x28);
    *(long **)(lVar3 + 0x28) = param_3;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *(undefined4 *)(lVar3 + 0x30) = *param_4;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  puVar9 = (undefined8 *)*param_1;
  *puVar9 = 0;
  puVar9[1] = puVar9[2];
  return;
}


