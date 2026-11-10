/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e077d0; name: FUN_02e077d0
 */


void FUN_02e077d0(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 8) = 0;
    *puVar1 = &PTR_LAB_042a4dc8;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 0xd) = 0;
    *(undefined4 *)(puVar1 + 0x11) = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined1 *)(puVar1 + 0x19) = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    *(undefined4 *)(puVar1 + 0x20) = 0;
    *(undefined1 *)(puVar1 + 0x25) = 0;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined4 *)(puVar1 + 0x2b) = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[0x27] = 0x3e8000003f000000;
    puVar1[0x28] = 0x3f0000003e800000;
    puVar1[0x29] = 0x3e8000003e800000;
    puVar1[0x2a] = 0;
    *(undefined8 *)((long)puVar1 + 0x15c) = 0x447a00003f800000;
    *(undefined4 *)((long)puVar1 + 0x164) = 0x3f800000;
    puVar1[0x2d] = 0x3f8000003f800000;
    *(undefined4 *)(puVar1 + 0x2e) = 0;
    *(undefined2 *)((long)puVar1 + 0x174) = 0;
    *(undefined4 *)(puVar1 + 0x33) = 0;
    puVar1[0x2f] = 0x3e8000003f000000;
    puVar1[0x30] = 0x3f0000003e800000;
    puVar1[0x31] = 0x3e8000003e800000;
    puVar1[0x32] = 0;
    *(undefined8 *)((long)puVar1 + 0x19c) = 0x447a00003f800000;
    *(undefined4 *)((long)puVar1 + 0x1a4) = 0x3f800000;
    puVar1[0x35] = 0x3f8000003f800000;
    *(undefined4 *)(puVar1 + 0x36) = 0;
    *(undefined2 *)((long)puVar1 + 0x1b4) = 0;
    puVar1[0x37] = 0xffffffff;
  }
  return;
}


