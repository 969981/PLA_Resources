/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02baaf88; name: FUN_02baaf88
 */


void FUN_02baaf88(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,char *param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
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
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  *param_2 = *param_3;
  *(undefined1 *)(param_2 + 2) = 0;
  if (*param_4 != '\0') {
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_4 + 0x18);
    plVar4 = *(long **)(param_4 + 0x20);
    *(long **)(param_2 + 10) = plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))();
    }
    *(undefined1 *)(param_2 + 2) = 1;
  }
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


