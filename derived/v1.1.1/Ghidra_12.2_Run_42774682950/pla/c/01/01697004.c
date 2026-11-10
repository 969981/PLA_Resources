/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01697004; name: FUN_01697004
 */


void FUN_01697004(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar3 != 0) {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  uVar5 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = uVar5;
  param_2[2] = param_3[2];
  param_2[3] = param_3[3];
  param_2[4] = param_3[4];
  plVar4 = (long *)param_3[5];
  param_2[5] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  param_2[6] = param_3[6];
  param_2[7] = param_3[7];
  param_2[8] = param_3[8];
  plVar4 = (long *)param_3[9];
  param_2[9] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  param_2[10] = param_3[10];
  param_2[0xb] = param_3[0xb];
  param_2[0xc] = param_3[0xc];
  plVar4 = (long *)param_3[0xd];
  param_2[0xd] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  param_2[0xe] = param_3[0xe];
  param_2[0xf] = param_3[0xf];
  param_2[0x10] = param_3[0x10];
  plVar4 = (long *)param_3[0x11];
  param_2[0x11] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  param_2[0x12] = param_3[0x12];
  param_2[0x13] = param_3[0x13];
  param_2[0x14] = param_3[0x14];
  plVar4 = (long *)param_3[0x15];
  param_2[0x15] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


