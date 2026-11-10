/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a914e8; name: FUN_02a914e8
 */


void FUN_02a914e8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
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
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar5;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  uVar5 = *param_3;
  *param_3 = 0;
  *param_2 = uVar5;
  *(undefined1 *)(param_2 + 1) = 0;
  if (*(char *)(param_3 + 1) != '\0') {
    uVar1 = *(undefined4 *)((long)param_3 + 0x14);
    *(undefined8 *)((long)param_2 + 0xc) = *(undefined8 *)((long)param_3 + 0xc);
    *(undefined4 *)((long)param_2 + 0x14) = uVar1;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


