/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013215d0; name: FUN_013215d0
 */


void FUN_013215d0(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = param_3 * 0xd0;
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,lVar7,0x10);
  if (lVar4 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
    lVar6 = 0;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    do {
      puVar1 = (undefined8 *)(lVar4 + lVar6);
      lVar6 = lVar6 + 0xd0;
      param_3 = param_3 + -1;
      puVar1[0x18] = 0;
      puVar1[0x19] = 0;
      *(undefined4 *)(puVar1 + 0x18) = 0;
      puVar1[0x16] = 0;
      puVar1[0x17] = 0;
      puVar1[0x14] = 0;
      puVar1[0x15] = 0;
      puVar1[0x12] = 0;
      puVar1[0x13] = 0;
      puVar1[0x10] = 0;
      puVar1[0x11] = 0;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *(undefined1 *)(puVar1 + 6) = 0;
      *(undefined4 *)((long)puVar1 + 0x34) = 2;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[5] = 0x3f8000003f800000;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      *puVar1 = &PTR_LAB_04205508;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[3] = 0x3f800000;
      puVar1[4] = 0x3f80000000000000;
    } while (param_3 != 0);
    *param_1 = lVar4;
    param_1[1] = (long)param_2;
    param_1[2] = lVar7;
    param_1[3] = 0x10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


