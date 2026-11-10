/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2b8e0; name: FUN_00d2b8e0
 */


void FUN_00d2b8e0(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar6 = param_3 * 0xd0;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,lVar6,0x10);
  if (lVar3 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    if (param_3 != 0) {
      puVar5 = (undefined8 *)(lVar3 + 0xc0);
      do {
        *puVar5 = 0;
        puVar5[1] = 0;
        param_3 = param_3 + -1;
        puVar5[-2] = 0;
        puVar5[-1] = 0;
        puVar5[-4] = 0;
        puVar5[-3] = 0;
        puVar5[-6] = 0;
        puVar5[-5] = 0;
        puVar5[-8] = 0;
        puVar5[-7] = 0;
        puVar5[-10] = 0;
        puVar5[-9] = 0;
        puVar5[-0xc] = 0;
        puVar5[-0xb] = 0;
        puVar5[-0xe] = 0;
        puVar5[-0xd] = 0;
        puVar5[-0x10] = 0;
        puVar5[-0xf] = 0;
        puVar5[-0x12] = 0;
        puVar5[-0x11] = 0;
        *(undefined1 *)(puVar5 + -0x12) = 0;
        *(undefined4 *)((long)puVar5 + -0x8c) = 2;
        puVar5[-0x14] = 0;
        puVar5[-0x13] = 0;
        puVar5[-0x13] = 0x3f8000003f800000;
        puVar5[-0x16] = 0;
        puVar5[-0x15] = 0;
        puVar5[-0x18] = 0;
        puVar5[-0x17] = 0;
        puVar5[-0x18] = &PTR_LAB_04270640;
        puVar5[-0x17] = 0;
        puVar5[-0x16] = 0;
        puVar5[-0x10] = 0;
        puVar5[-0xf] = 0;
        puVar5[-0xe] = 0;
        puVar5[-0xd] = 0;
        puVar5[-0x15] = 0x3f800000;
        puVar5[-0x14] = 0x3f80000000000000;
        *(undefined4 *)puVar5 = 0;
        puVar5 = puVar5 + 0x1a;
      } while (param_3 != 0);
    }
    *param_1 = lVar3;
    param_1[1] = (long)param_2;
    param_1[2] = lVar6;
    param_1[3] = 0x10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


