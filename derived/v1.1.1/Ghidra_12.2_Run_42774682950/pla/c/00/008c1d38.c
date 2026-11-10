/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c1d38; name: FUN_008c1d38
 */


void FUN_008c1d38(long *param_1)

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
  *param_1 = (long)&PTR_LAB_041b6880;
  param_1[1] = lVar4;
  param_1[9] = (long)&PTR_LAB_041b68b8;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x81) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  lVar3 = *(long *)PTR_DAT_04379570;
  lVar4 = *(long *)(PTR_DAT_04379570 + 8);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)((long)param_1 + 0xe4) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x1a] = lVar3;
  param_1[0x1b] = lVar4;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = lVar3;
  param_1[0x27] = lVar4;
  *(undefined2 *)((long)param_1 + 0x144) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = lVar3;
  param_1[0x33] = lVar4;
  *(undefined2 *)((long)param_1 + 0x1a4) = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = lVar3;
  param_1[0x3f] = lVar4;
  *(undefined2 *)((long)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined2 *)(param_1 + 0x46) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4b] = lVar4;
  param_1[0x4a] = lVar3;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined2 *)((long)param_1 + 0x264) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined2 *)(param_1 + 0x52) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = lVar3;
  param_1[0x57] = lVar4;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)((long)param_1 + 0x2c4) = 0;
  param_1[0x60] = lVar3;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x61] = lVar4;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[99] = 0;
  param_1[0x65] = (long)&DAT_cbf29ce484222645;
  param_1[0x66] = (long)&DAT_cbf29ce484222645;
  param_1[0x67] = (long)&DAT_cbf29ce484222645;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0x1010000;
  *(undefined1 *)((long)param_1 + 0x34c) = 0;
  param_1[0x6a] = 0;
  *(undefined2 *)(param_1 + 0x6b) = 0;
  param_1[0x6c] = (long)&DAT_cbf29ce484222645;
  param_1[0x6d] = (long)&DAT_03996322;
  param_1[0x71] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x72] = (long)&DAT_cbf29ce484222645;
  param_1[0x73] = (long)&DAT_03996322;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = (long)&DAT_cbf29ce484222645;
  param_1[0x77] = (long)&DAT_03996322;
  *(undefined4 *)((long)param_1 + 0x3d4) = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  FUN_008c2014(param_1 + 0x7b);
  *(undefined4 *)(param_1 + 0x82) = 0;
  *(undefined1 *)((long)param_1 + 0x414) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = (long)&DAT_cbf29ce484222645;
  param_1[0x88] = (long)&DAT_03996322;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)((long)param_1 + 0x46f) = 0;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  return;
}


