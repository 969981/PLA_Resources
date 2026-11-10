/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01854c48; name: FUN_01854c48
 */


void FUN_01854c48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
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
  memset(param_2,0,0x110);
  param_2[2] = 0;
  param_2[3] = 0;
  puVar2 = PTR_DAT_0437a120;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *param_2 = &PTR_LAB_04228f60;
  param_2[10] = 0;
  param_2[0xb] = 0;
  uVar5 = *(undefined8 *)puVar2;
  uVar1 = *(undefined8 *)(puVar2 + 8);
  *(undefined1 *)(param_2 + 0x20) = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[6] = uVar5;
  param_2[7] = uVar1;
  param_2[0xc] = &DAT_cbf29ce484222645;
  param_2[0xd] = &DAT_03996322;
  param_2[0x10] = &DAT_cbf29ce484222645;
  param_2[0x11] = &DAT_03996322;
  param_2[0x14] = &DAT_cbf29ce484222645;
  param_2[0x15] = &DAT_03996322;
  param_2[0x18] = &DAT_cbf29ce484222645;
  param_2[0x19] = &DAT_03996322;
  param_2[0x1c] = &DAT_cbf29ce484222645;
  param_2[0x1d] = &DAT_03996322;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


