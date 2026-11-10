/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb93c0; name: FUN_02bb93c0
 */


void FUN_02bb93c0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined1 *)(**(code **)(*param_2 + 0x10))(param_2,0x208,8);
  if (puVar3 == (undefined1 *)0x0) {
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
    *(undefined8 *)(puVar3 + 0x30) = 0x3f8000003f800000;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x70) = 0x3f80000000000000;
    *puVar3 = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    *(undefined4 *)(puVar3 + 0x38) = 0;
    puVar3[0x3c] = 0;
    puVar3[0x40] = 0;
    puVar3[0x78] = 0;
    puVar3[0x98] = 0;
    puVar3[0xd0] = 0;
    puVar3[0x108] = 0;
    puVar3[0x94] = 0;
    *(undefined8 *)(puVar3 + 0x8c) = 0;
    *(undefined8 *)(puVar3 + 0x84) = 0;
    *(undefined8 *)(puVar3 + 0x7c) = 0;
    puVar3[0x100] = 0;
    puVar3[0x118] = 0;
    puVar3[0x128] = 0;
    puVar3[0x138] = 0;
    puVar3[0x148] = 0;
    puVar3[0x158] = 0;
    puVar3[0x168] = 0;
    puVar3[0x178] = 0;
    *(undefined4 *)(puVar3 + 0x1c8) = 0;
    puVar3[0x1d0] = 0;
    puVar3[0x200] = 0;
    *(undefined8 *)(puVar3 + 0x1a8) = 0;
    *(undefined8 *)(puVar3 + 0x1b0) = uVar5;
    *(undefined8 *)(puVar3 + 0x1b8) = 0xccccccccccccccc;
    *(undefined8 *)(puVar3 + 0x1c0) = 0;
    *(undefined8 *)(puVar3 + 0x50) = 0;
    *(undefined8 *)(puVar3 + 0x58) = 0;
    *(undefined8 *)(puVar3 + 0x60) = 0;
    *(undefined8 *)(puVar3 + 0x68) = 0;
    *(undefined8 *)(puVar3 + 0xa8) = 0;
    *(undefined8 *)(puVar3 + 0xb0) = 0;
    *(undefined8 *)(puVar3 + 0xb8) = 0;
    *(undefined8 *)(puVar3 + 0xc0) = 0;
    *(undefined8 *)(puVar3 + 0xc5) = 0;
    *(undefined8 *)(puVar3 + 0xe0) = 0;
    *(undefined8 *)(puVar3 + 0xe8) = 0;
    *(undefined8 *)(puVar3 + 0xf0) = 0;
    *(undefined8 *)(puVar3 + 0xf8) = 0;
    *(undefined8 *)(puVar3 + 0x198) = 0;
    *(undefined8 *)(puVar3 + 0x1a0) = 0;
    *(undefined8 *)(puVar3 + 0x188) = 0;
    *(undefined8 *)(puVar3 + 400) = 0;
    *(undefined8 *)(puVar3 + 0x1e0) = 0;
    *(undefined8 *)(puVar3 + 0x1e8) = 0;
    *(undefined8 *)(puVar3 + 0x1f0) = 0;
    *(undefined8 *)(puVar3 + 0x1f8) = 0;
    *param_1 = puVar3;
    param_1[1] = param_2;
    param_1[2] = 0x208;
    param_1[3] = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


