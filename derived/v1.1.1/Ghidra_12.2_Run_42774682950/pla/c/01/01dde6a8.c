/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01dde6a8; name: FUN_01dde6a8
 */


void FUN_01dde6a8(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
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
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_042514f8;
  param_1[1] = lVar4;
  param_1[9] = (long)&PTR_LAB_04251530;
  *(undefined4 *)(param_1 + 0xd) = 10;
  *(undefined8 *)((long)param_1 + 0xac) = 0x3f80000000000001;
  param_1[0x17] = (long)&DAT_cbf29ce484222645;
  param_1[0x18] = (long)&DAT_03996322;
  *(undefined2 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x1b] = (long)&DAT_cbf29ce484222645;
  param_1[0x1c] = (long)&DAT_03996322;
  param_1[0x1f] = (long)&DAT_cbf29ce484222645;
  param_1[0x20] = (long)&DAT_03996322;
  param_1[0x23] = (long)&DAT_cbf29ce484222645;
  param_1[0x24] = (long)&DAT_03996322;
  param_1[0x27] = (long)&DAT_cbf29ce484222645;
  param_1[0x28] = (long)&DAT_03996322;
  param_1[0x2b] = (long)&DAT_cbf29ce484222645;
  param_1[0x2c] = (long)&DAT_03996322;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0x3f80000000000000;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  return;
}


