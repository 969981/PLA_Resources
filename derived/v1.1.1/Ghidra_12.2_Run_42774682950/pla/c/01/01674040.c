/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01674040; name: FUN_01674040
 */


void FUN_01674040(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar5 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  *param_1 = (long)&PTR_LAB_04220638;
  param_1[1] = lVar5;
  param_1[9] = (long)&PTR_LAB_04220670;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_01675484(param_1 + 0x10);
  plVar1 = param_1 + 0x1d;
  FUN_016754c4(plVar1);
  if (param_1[0x28] != 0) {
    FUN_01675714(plVar1,param_1[0x23]);
    lVar4 = param_1[0x1e];
    param_1[0x23] = 0;
    if (((lVar4 != 0) && (*(undefined8 *)*plVar1 = 0, lVar4 != 1)) &&
       (*(undefined8 *)(*plVar1 + 8) = 0, lVar4 != 2)) {
      lVar5 = 2;
      do {
        *(undefined8 *)(*plVar1 + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
    }
    param_1[0x28] = 0;
  }
  return;
}


