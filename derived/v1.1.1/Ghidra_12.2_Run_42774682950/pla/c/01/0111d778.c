/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0111d778; name: FUN_0111d778
 */


undefined2 FUN_0111d778(long param_1,uint param_2)

{
  ulong uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)(param_1 + 0x70);
  uVar1 = 0x1d;
  do {
    if (puVar2[-4] == param_2) {
      uVar1 = uVar1 - 0x1d;
LAB_0111d9e4:
      return *(undefined2 *)(param_1 + (uVar1 & 0xffffffff) * 4 + 0x6a);
    }
    if (puVar2[-2] == param_2) {
      uVar1 = uVar1 - 0x1c;
      goto LAB_0111d9e4;
    }
    if (*puVar2 == param_2) {
      uVar1 = uVar1 - 0x1b;
      goto LAB_0111d9e4;
    }
    if (puVar2[2] == param_2) {
      uVar1 = uVar1 - 0x1a;
      goto LAB_0111d9e4;
    }
    if (puVar2[4] == param_2) {
      uVar1 = uVar1 - 0x19;
      goto LAB_0111d9e4;
    }
    if (puVar2[6] == param_2) {
      uVar1 = uVar1 - 0x18;
      goto LAB_0111d9e4;
    }
    if (puVar2[8] == param_2) {
      uVar1 = uVar1 - 0x17;
      goto LAB_0111d9e4;
    }
    if (puVar2[10] == param_2) {
      uVar1 = uVar1 - 0x16;
      goto LAB_0111d9e4;
    }
    if (puVar2[0xc] == param_2) {
      uVar1 = uVar1 - 0x15;
      goto LAB_0111d9e4;
    }
    if (puVar2[0xe] == param_2) {
      uVar1 = uVar1 - 0x14;
      goto LAB_0111d9e4;
    }
    if (puVar2[0x10] == param_2) {
      uVar1 = uVar1 - 0x13;
      goto LAB_0111d9e4;
    }
    if (puVar2[0x12] == param_2) {
      uVar1 = uVar1 - 0x12;
      goto LAB_0111d9e4;
    }
    if (puVar2[0x14] == param_2) {
      uVar1 = uVar1 - 0x11;
      goto LAB_0111d9e4;
    }
    if (puVar2[0x16] == param_2) {
      uVar1 = uVar1 - 0x10;
      goto LAB_0111d9e4;
    }
    if (puVar2[0x18] == param_2) {
      uVar1 = uVar1 - 0xf;
      goto LAB_0111d9e4;
    }
    if (puVar2[0x1a] == param_2) {
      uVar1 = uVar1 - 0xe;
      goto LAB_0111d9e4;
    }
    if (puVar2[0x1c] == param_2) {
      uVar1 = uVar1 - 0xd;
      goto LAB_0111d9e4;
    }
    if (puVar2[0x1e] == param_2) {
      uVar1 = uVar1 - 0xc;
      goto LAB_0111d9e4;
    }
    if (puVar2[0x20] == param_2) {
      uVar1 = uVar1 - 0xb;
      goto LAB_0111d9e4;
    }
    if (puVar2[0x22] == param_2) {
      uVar1 = uVar1 - 10;
      goto LAB_0111d9e4;
    }
    if (puVar2[0x24] == param_2) {
      uVar1 = uVar1 - 9;
      goto LAB_0111d9e4;
    }
    if (puVar2[0x26] == param_2) {
      uVar1 = uVar1 - 8;
      goto LAB_0111d9e4;
    }
    if (puVar2[0x28] == param_2) {
      uVar1 = uVar1 - 7;
      goto LAB_0111d9e4;
    }
    if (puVar2[0x2a] == param_2) {
      uVar1 = uVar1 - 6;
      goto LAB_0111d9e4;
    }
    if (puVar2[0x2c] == param_2) {
      uVar1 = uVar1 - 5;
      goto LAB_0111d9e4;
    }
    if (puVar2[0x2e] == param_2) {
      uVar1 = uVar1 - 4;
      goto LAB_0111d9e4;
    }
    if (puVar2[0x30] == param_2) {
      uVar1 = uVar1 - 3;
      goto LAB_0111d9e4;
    }
    if (puVar2[0x32] == param_2) {
      uVar1 = uVar1 - 2;
      goto LAB_0111d9e4;
    }
    if (puVar2[0x34] == param_2) {
      uVar1 = uVar1 - 1;
      goto LAB_0111d9e4;
    }
    if (puVar2[0x36] == param_2) goto LAB_0111d9e4;
    uVar1 = uVar1 + 0x1e;
    puVar2 = puVar2 + 0x3c;
    if (uVar1 == 0xd1) {
      return 0;
    }
  } while( true );
}


