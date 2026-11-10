/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e35590; name: FUN_02e35590
 */


void FUN_02e35590(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x118);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[6] = 0;
    *puVar1 = &PTR_LAB_042a58b0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 7) = 0xffffffff;
    *(undefined8 *)((long)puVar1 + 0x3c) = 0;
    *(undefined8 *)((long)puVar1 + 0x44) = 0;
    *(undefined8 *)((long)puVar1 + 0x4c) = 0;
    *(undefined8 *)((long)puVar1 + 0x54) = 0;
    *(undefined8 *)((long)puVar1 + 0x5c) = 0;
    *(undefined8 *)((long)puVar1 + 100) = 0;
    *(undefined8 *)((long)puVar1 + 0x6c) = 0;
    *(undefined4 *)((long)puVar1 + 0x74) = 0;
    *(undefined4 *)((long)puVar1 + 0x84) = 0;
    puVar1[0x11] = 0x447a000000000000;
    *(undefined4 *)(puVar1 + 0x12) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x13) = 0;
    *(undefined8 *)((long)puVar1 + 0x9c) = 0x447a000000000000;
    *(undefined4 *)((long)puVar1 + 0xa4) = 0x3f800000;
    *(undefined4 *)((long)puVar1 + 0xac) = 0;
    puVar1[0x16] = 0x447a000000000000;
    *(undefined4 *)(puVar1 + 0x17) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((long)puVar1 + 0xc4) = 0x447a000000000000;
    *(undefined4 *)((long)puVar1 + 0xcc) = 0x3f800000;
    *(undefined4 *)((long)puVar1 + 0xd4) = 0;
    puVar1[0x1b] = 0x447a000000000000;
    *(undefined4 *)(puVar1 + 0x1c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    *(undefined4 *)((long)puVar1 + 0xf4) = 0;
    puVar1[4] = 0;
    puVar1[5] = 0xffffffff;
    puVar1[0xf] = 0x3f800000447a0000;
    *(undefined2 *)(puVar1 + 0x10) = 0x100;
    *(undefined2 *)((long)puVar1 + 0x94) = 0x100;
    *(undefined2 *)(puVar1 + 0x15) = 0x100;
    *(undefined2 *)((long)puVar1 + 0xbc) = 0x100;
    *(undefined2 *)(puVar1 + 0x1a) = 0x100;
    *(undefined2 *)((long)puVar1 + 0xe4) = 0x100;
    *(undefined8 *)((long)puVar1 + 0xec) = 0x4248000042480000;
    *(undefined1 *)(puVar1 + 0x1f) = 1;
    *(undefined8 *)((long)puVar1 + 0xfc) = 0x42c800003f800000;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  return;
}


