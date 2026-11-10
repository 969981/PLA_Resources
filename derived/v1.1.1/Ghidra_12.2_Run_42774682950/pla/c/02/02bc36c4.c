/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc36c4; name: FUN_02bc36c4
 */


void FUN_02bc36c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined2 local_68;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  plVar12 = param_1 + 2;
  *plVar12 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xfffffffe;
  nn::os::InitializeLightEvent((long)param_1 + 0x44,0,1);
  uVar11 = param_1[1];
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  lVar3 = tpidr_el0;
  if (*(long *)(lVar3 + 0x20) == 0) {
    *(undefined8 *)(lVar3 + 0x20) = DAT_043f1798;
  }
  uVar1 = *(undefined8 *)(lVar3 + 0x20);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x20) = uVar11;
  *(undefined2 *)(lVar3 + 0x28) = 1;
  local_88 = (long *)*param_1;
  plVar8 = (long *)(**(code **)(*local_88 + 0x10))(local_88,0x30,8);
  if (plVar8 == (long *)0x0) {
    local_80 = 0;
    local_78 = 0;
    local_88 = (long *)0x0;
    goto LAB_02bc3948;
  }
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = local_88;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  lVar10 = FUN_0016cf00(&LAB_02bc3a4c,param_1);
  plVar8[2] = lVar10;
  *plVar8 = lVar10;
  plVar8[1] = lVar10;
  *(undefined4 *)(plVar8 + 3) = 0xfffffffe;
  FUN_00150260(lVar10,0xfff0b9d8);
  uVar5 = FUN_00155070(lVar10,0xfff0b9d8);
  *(undefined4 *)(plVar8 + 3) = uVar5;
  plVar8[4] = lVar10;
  *(undefined4 *)(plVar8 + 5) = 0xfffffffe;
  FUN_00151e00(lVar10,0xfff0b9d8,2);
  uVar5 = FUN_00155070(plVar8[4],0xfff0b9d8);
  lVar10 = *plVar8;
  *(undefined4 *)(plVar8 + 5) = uVar5;
  FUN_0014fe80(lVar10,&LAB_02bc3a1c);
  FUN_001516f0(lVar10,&LAB_02bc4ed0,0);
  FUN_00150260(lVar10,0xffffffff);
  uVar6 = FUN_00155070(lVar10,0xfff0b9d8);
  FUN_0014ff10(lVar10,0xfffffffe);
  if (lVar10 != 0) {
    if (uVar6 < 0xfffffffe) {
      FUN_00151e00(lVar10,0xfff0b9d8,(long)(int)uVar6);
      FUN_001522a0(lVar10,PTR_DAT_04380778);
    }
    else {
      FUN_00151490(lVar10);
      FUN_001522a0(lVar10,PTR_DAT_04380778);
      if (uVar6 == 0xfffffffe) goto LAB_02bc390c;
    }
    FUN_00155150(lVar10,0xfff0b9d8,uVar6);
  }
LAB_02bc390c:
  FUN_00151810(lVar10,&LAB_02bc5190);
  FUN_001522a0(lVar10,&DAT_03a84009);
  local_80 = 0x30;
  local_78 = 8;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
LAB_02bc3948:
  lVar9 = *plVar12;
  *plVar12 = (long)plVar8;
  if (lVar9 != 0) {
    FUN_02bc51ac(param_1 + 3);
  }
  param_1[4] = local_80;
  param_1[5] = local_78;
  param_1[3] = local_88;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  local_68 = (undefined2)uVar2;
  *(undefined2 *)(lVar3 + 0x28) = local_68;
  return;
}


