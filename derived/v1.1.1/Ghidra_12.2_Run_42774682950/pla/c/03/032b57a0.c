/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b57a0; name: _INIT_1541
 */


void _INIT_1541(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_04440a40;
  do {
    *(undefined4 *)puVar1 = 0x1010000;
    *(undefined1 *)((long)puVar1 + 4) = 1;
    *(undefined8 *)((long)puVar1 + 5) = 0;
    *(undefined8 *)((long)puVar1 + 0xd) = 0;
    *(undefined8 *)((long)puVar1 + 0x15) = 0;
    *(undefined8 *)((long)puVar1 + 0x1d) = 0;
    *(undefined8 *)((long)puVar1 + 0x24) = 0x700000000;
    *(undefined8 *)((long)puVar1 + 0x34) = 0x101000000000000;
    *(undefined1 *)((long)puVar1 + 0x3c) = 1;
    *(undefined8 *)((long)puVar1 + 0x3d) = 0;
    *(undefined8 *)((long)puVar1 + 0x45) = 0;
    *(undefined8 *)((long)puVar1 + 0x4d) = 0;
    *(undefined8 *)((long)puVar1 + 0x55) = 0;
    *(undefined8 *)((long)puVar1 + 0x5c) = 0x700000000;
    *(undefined4 *)((long)puVar1 + 0x6c) = 0;
    puVar1 = puVar1 + 0xe;
  } while (puVar1 != &DAT_04444710);
  FUN_032b3db0();
  return;
}


