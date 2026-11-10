/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cad49c; name: FUN_01cad49c
 */


void FUN_01cad49c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x270,0x10);
  if (lVar3 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_70 = 0;
  uStack_68 = 0;
  FUN_01cad9e0(&local_70,param_3);
  local_80 = 0;
  uStack_78 = 0;
  FUN_00ab3f84(&local_80,param_4);
  local_90 = 0;
  uStack_88 = 0;
  FUN_019a94d0(&local_90,param_5);
  local_a0 = 0;
  uStack_98 = 0;
  FUN_01aabb3c(&local_a0,param_6);
  local_b0 = 0;
  uStack_a8 = 0;
  FUN_00d08588(&local_b0,param_7);
                    /* WARNING: Subroutine does not return */
  FUN_02a4c0f4(lVar3,0);
}


