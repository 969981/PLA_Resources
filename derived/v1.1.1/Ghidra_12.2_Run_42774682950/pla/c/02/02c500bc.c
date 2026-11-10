/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c500bc; name: FUN_02c500bc
 */


undefined4 FUN_02c500bc(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint3 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (*(char *)(lVar5 + 0x15) != '\x01') {
    return 0x1c;
  }
  uVar3 = *(uint3 *)(lVar5 + 0x28);
  uVar2 = *(uint *)(lVar5 + 0x24);
  if ((uVar2 >> 9 & 1) != 0) {
    return 0;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    return 1;
  }
  uVar1 = uVar2 & 0x3f | (*(byte *)(lVar5 + 0x36) & 1) << 6 |
          (*(byte *)(lVar5 + 0x36) >> 1 & 1) << 7;
  switch(uVar1) {
  case 1:
    return 2;
  case 2:
    return 3;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
    goto switchD_02c50120_caseD_3;
  case 4:
    return 4;
  case 8:
    return 5;
  case 0x10:
    return 6;
  case 0x20:
    return 7;
  case 0x40:
    return 0x1d;
  }
  if (uVar1 == 0x80) {
    return 0x1e;
  }
  if (uVar1 == 0xff) {
    uVar4 = 8;
    if ((uVar3 & 0x400) != 0) {
      uVar4 = 10;
    }
    return uVar4;
  }
switchD_02c50120_caseD_3:
  if ((uVar2 >> 6 & 1) != 0) {
    return 9;
  }
  if ((uVar3 >> 10 & 1) != 0) {
    return 10;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    return 0xb;
  }
  if ('\0' < *(char *)(lVar5 + 0x2b)) {
    return 0xc;
  }
  if (*(char *)(lVar5 + 0x2b) < '\0') {
    return 0x12;
  }
  if ('\0' < *(char *)(lVar5 + 0x2c)) {
    return 0xd;
  }
  if (*(char *)(lVar5 + 0x2c) < '\0') {
    return 0x13;
  }
  if ('\0' < *(char *)(lVar5 + 0x2d)) {
    return 0xe;
  }
  if (*(char *)(lVar5 + 0x2d) < '\0') {
    return 0x14;
  }
  if ('\0' < *(char *)(lVar5 + 0x2f)) {
    return 0xf;
  }
  if (*(char *)(lVar5 + 0x2f) < '\0') {
    return 0x15;
  }
  if ('\0' < *(char *)(lVar5 + 0x2e)) {
    return 0x11;
  }
  if (*(char *)(lVar5 + 0x2e) < '\0') {
    return 0x17;
  }
  if ('\0' < *(char *)(lVar5 + 0x30)) {
    return 0x10;
  }
  if (*(char *)(lVar5 + 0x30) < '\0') {
    return 0x16;
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    return 0x18;
  }
  if ((uVar3 >> 4 & 1) != 0) {
    return 0x19;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    return 0x1a;
  }
  uVar4 = 0x1b;
  if ((uVar3 & 0x300) == 0) {
    uVar4 = 0x1c;
  }
  return uVar4;
}


