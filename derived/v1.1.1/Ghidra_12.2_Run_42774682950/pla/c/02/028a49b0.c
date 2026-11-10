/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a49b0; name: FUN_028a49b0
 */


void FUN_028a49b0(long *param_1,long param_2,long *param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar5 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_042726e0;
  param_1[1] = lVar5;
  param_1[9] = (long)&PTR_LAB_04272718;
  param_1[0xd] = 0;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0x74,0,1);
  param_1[0x10] = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0x8c,0,1);
  param_1[0x13] = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0xa4,0,1);
  param_1[0x1c] = 0;
  param_1[0x1a] = param_1[1];
  param_1[0x1b] = 0x1fffffffffffffff;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = param_1[1];
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((long)param_1 + 300) = 1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x26] = 0x3f8000003f800000;
  param_1[0x27] = 0x3f8000003f800000;
  param_1[0x28] = 0x3f8000003f800000;
  param_1[0x29] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0x1fffffffffffffff;
  param_1[0x23] = 0;
  param_1[0x2b] = *param_3;
  param_1[0x2c] = param_3[1];
  param_1[0x2d] = param_3[2];
  plVar4 = (long *)param_3[3];
  param_1[0x2e] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x2f) = param_4;
  *(undefined8 *)((long)param_1 + 0x17c) = 0x100000001;
  *(undefined8 *)((long)param_1 + 0x184) = 0;
  *(undefined8 *)((long)param_1 + 0x18c) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = 1;
  *(undefined1 *)((long)param_1 + 0x19c) = 0;
  return;
}


