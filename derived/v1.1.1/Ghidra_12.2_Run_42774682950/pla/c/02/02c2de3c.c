/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2de3c; name: FUN_02c2de3c
 */


void FUN_02c2de3c(long *param_1,ushort *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  param_1[7] = 0;
  puVar2 = PTR_DAT_043796d0;
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
  puVar2 = PTR_DAT_0437a510;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar5 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *param_1 = (long)&PTR_LAB_04289dd0;
  param_1[1] = lVar5;
  param_1[9] = (long)&PTR_LAB_04289e08;
  param_1[10] = 0x100000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = (long)(puVar2 + 0x10);
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x12] = (long)param_2;
  param_1[0xb] = 0;
  param_1[0xc] = (long)&DAT_cbf29ce484222645;
  param_1[0xd] = (long)&DAT_03996322;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar1 = DAT_043f21e0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*param_2 <= uVar1) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x11) = uVar1;
  param_1[0x14] = 0;
  FUN_02c2df98(param_1,param_1 + 0x13,param_2);
  return;
}


