/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dff1b0; name: FUN_02dff1b0
 */


void FUN_02dff1b0(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4)

{
  *param_1 = param_4;
  param_1[0x40] = param_2;
  if (param_2 == 3) {
    *(undefined8 *)(param_1 + 0x1c) = 0x3f232d9b3f232d9b;
    *(undefined8 *)(param_1 + 0x1e) = 0x3f232d9b3f232d9b;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x26) = 0xbddd9bc4beacb886;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x22) = 0xbeacb88600000000;
    *(undefined8 *)(param_1 + 0x28) = 0xbeacb88600000000;
    *(undefined8 *)(param_1 + 0x2a) = 0xbd165514bddd9bc4;
    *(undefined8 *)(param_1 + 0x2c) = 0xbf72de07bf92f47e;
    *(undefined8 *)(param_1 + 0x2e) = 0xbf506645bf5cf96e;
    *(undefined8 *)(param_1 + 0x30) = 0x3f26931f3f02f68d;
    *(undefined8 *)(param_1 + 0x32) = 0x3f29cee63f2cb005;
    *(undefined8 *)(param_1 + 0x34) = 0x3fa8c7cc3fa2ce4e;
    *(undefined8 *)(param_1 + 0x36) = 0x3fa099673fa5f75a;
    *(undefined8 *)(param_1 + 0x38) = 0xbec2d631be992eda;
    *(undefined8 *)(param_1 + 0x3a) = 0xbec69e69bec9fc98;
    return;
  }
  if (param_2 == 2) {
    *(undefined8 *)(param_1 + 0x17) = 0xbf7eb8523d4cccc0;
  }
  else if (param_2 == 1) {
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    param_1[3] = -251.32742 / (float)param_3 + 1.0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  return;
}


