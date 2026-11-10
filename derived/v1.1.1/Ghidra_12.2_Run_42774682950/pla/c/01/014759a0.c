/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014759a0; name: FUN_014759a0
 */


void FUN_014759a0(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,600,8);
  if (puVar3 == (undefined8 *)0x0) {
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
    uVar5 = *param_3;
    uVar6 = *param_4;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *(undefined1 *)(puVar3 + 5) = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *(undefined1 *)(puVar3 + 8) = 0;
    puVar3[2] = uVar6;
    *puVar3 = &PTR_FUN_042120b8;
    puVar3[1] = uVar5;
    *(undefined4 *)(puVar3 + 0x16) = 4;
    *(undefined4 *)(puVar3 + 0x1e) = 4;
    *(undefined4 *)(puVar3 + 0x26) = 4;
    *(undefined4 *)(puVar3 + 0x2e) = 4;
    *(undefined4 *)(puVar3 + 0x36) = 4;
    *(undefined4 *)(puVar3 + 0x3e) = 4;
    *(undefined1 *)(puVar3 + 0x3f) = 1;
    *(undefined1 *)(puVar3 + 0xb) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    puVar3[0x40] = 0;
    puVar3[0x43] = 0;
    puVar3[0x44] = 0;
    puVar3[0x45] = 0;
    puVar3[0x46] = 0;
    puVar3[0x47] = 0;
    *(undefined4 *)(puVar3 + 0x41) = 100;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x1c] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x22] = 0;
    puVar3[0x23] = 0;
    puVar3[0x24] = 0;
    puVar3[0x25] = 0;
    puVar3[0x2a] = 0;
    puVar3[0x2b] = 0;
    puVar3[0x2c] = 0;
    puVar3[0x2d] = 0;
    puVar3[0x32] = 0;
    puVar3[0x33] = 0;
    puVar3[0x34] = 0;
    puVar3[0x35] = 0;
    puVar3[0x3c] = 0;
    puVar3[0x3d] = 0;
    puVar3[0x3a] = 0;
    puVar3[0x3b] = 0;
    puVar3[0x42] = PTR_DAT_0437a508 + 0x10;
    puVar3[0x49] = 0x400000006;
    puVar3[0x48] = 0;
    puVar3[0x4a] = 0;
    *param_1 = puVar3;
    param_1[1] = param_2;
    param_1[2] = 600;
    param_1[3] = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


