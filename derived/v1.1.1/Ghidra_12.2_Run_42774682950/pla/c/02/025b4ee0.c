/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025b4ee0; name: FUN_025b4ee0
 */


void FUN_025b4ee0(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined8 *local_b0;
  
  FUN_01812d68();
  *param_1 = &PTR_LAB_0425e790;
  *(undefined1 *)(param_1 + 0x59) = 0;
  param_1[9] = &PTR_LAB_0425e8c8;
  param_1[10] = &PTR_LAB_0425e9a8;
  plVar4 = (long *)param_1[1];
  param_1[0x58] = &PTR_LAB_0425e9d0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  puVar1 = PTR_DAT_04379520;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  if (((*puVar1 & 1) == 0) &&
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
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0xf0,0x10);
  if (lVar3 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  local_d0 = &LAB_025b7500;
  puStack_c8 = &LAB_025b77a0;
  local_c0 = &LAB_025b77a4;
  puStack_b8 = &LAB_025b77b0;
  local_b0 = param_1;
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8(&local_d0,lVar3);
}


