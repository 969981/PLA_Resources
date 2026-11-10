/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2a558; name: FUN_02b2a558
 */


void FUN_02b2a558(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar4 != 0) {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_1;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  *param_2 = *param_3;
  *(undefined8 *)(param_2 + 2) = *param_4;
  *(undefined8 *)(param_2 + 4) = param_4[1];
  *(undefined8 *)(param_2 + 6) = param_4[2];
  plVar5 = (long *)param_4[3];
  *(long **)(param_2 + 8) = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  uVar1 = param_5[1];
  *(undefined8 *)(param_2 + 10) = *param_5;
  *(undefined8 *)(param_2 + 0xc) = uVar1;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


