/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0113b164; name: FUN_0113b164
 */


void FUN_0113b164(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,long *param_4,
                 undefined8 *param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
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
  uVar6 = *param_5;
  *param_2 = *param_3;
  *(undefined1 *)(param_2 + 10) = 1;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  lVar4 = (**(code **)(*param_4 + 0x10))(param_4,uVar6);
  lVar5 = (**(code **)(*param_4 + 0x10))(param_4,uVar6);
  if ((lVar4 == 0) || (lVar5 == 0)) {
    if (lVar4 != 0) {
      (**(code **)(*param_4 + 0x18))(param_4,lVar4,uVar6);
    }
    if (lVar5 != 0) {
      (**(code **)(*param_4 + 0x18))(param_4,lVar5,uVar6);
    }
  }
  else {
    *(long *)(param_2 + 2) = lVar4;
    *(long *)(param_2 + 4) = lVar5;
    *(undefined8 *)(param_2 + 6) = uVar6;
    *(undefined8 *)(param_2 + 8) = uVar6;
  }
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


