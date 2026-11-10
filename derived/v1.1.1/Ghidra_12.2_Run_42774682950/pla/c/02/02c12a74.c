/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c12a74; name: FUN_02c12a74
 */


undefined8 * FUN_02c12a74(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
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
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x390,0x10);
  if (puVar4 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  uVar5 = *param_3;
  FUN_02a76058(puVar4,param_2,uVar5);
  puVar4[0x4d] = 0;
  puVar4[0x4c] = 0;
  puVar4[9] = &PTR_LAB_042897e0;
  puVar4[10] = &PTR_LAB_04289828;
  puVar4[0x52] = 0x3f8000003f800000;
  puVar4[0x53] = 0x3f800000;
  puVar4[0x54] = 0x100000001;
  puVar4[0x55] = 0x100000001;
  puVar4[0x5a] = 0x333333333333333;
  puVar4[0x61] = 0x1ffffffffffffff;
  puVar4[100] = &DAT_cbf29ce484222645;
  puVar4[0x65] = &DAT_03996322;
  *puVar4 = &PTR_LAB_04289780;
  puVar4[1] = param_1;
  puVar4[0x4b] = 0;
  puVar4[0x4a] = 0;
  puVar4[0x4e] = 0;
  *(undefined4 *)(puVar4 + 0x4f) = 0;
  puVar4[0x50] = 0;
  puVar4[0x51] = 0;
  puVar4[0x56] = 0;
  puVar4[0x57] = 0;
  puVar4[0x58] = 0;
  puVar4[0x59] = uVar5;
  puVar4[0x5b] = 0;
  *(undefined4 *)(puVar4 + 0x5c) = 0;
  puVar4[0x5d] = 0;
  puVar4[0x5e] = 0;
  puVar4[0x5f] = 0;
  puVar4[0x60] = uVar5;
  puVar4[0x62] = 0;
  *(undefined4 *)(puVar4 + 99) = 0;
  puVar4[0x66] = 0;
  puVar4[0x67] = 0;
  puVar4[0x68] = 0;
  puVar4[0x69] = 0;
  puVar4[0x6a] = uVar5;
  puVar4[0x6b] = 0xaaaaaaaaaaaaaaa;
  puVar4[0x6c] = 0;
  *(undefined4 *)(puVar4 + 0x6d) = 0;
  puVar4[2] = puVar4;
  puVar4[3] = 0x390;
  puVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return puVar4;
}


