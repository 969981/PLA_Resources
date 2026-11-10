/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c4fc60; name: FUN_02c4fc60
 */


ulong FUN_02c4fc60(long *param_1,int param_2)

{
  uint *puVar1;
  char cVar2;
  long lVar3;
  
  switch(param_2) {
  case 0:
    return (ulong)*(uint *)(param_1 + 1);
  case 1:
    return (ulong)*(uint *)*param_1;
  case 2:
    return (ulong)*(uint *)(*param_1 + 4);
  case 3:
    return (ulong)*(uint *)(*param_1 + 8);
  case 4:
    return (long)*(short *)(*param_1 + 0x1a);
  case 5:
    return (ulong)*(byte *)(*param_1 + 0xc);
  case 6:
    return (ulong)*(byte *)(*param_1 + 0xd);
  case 7:
    return (ulong)*(byte *)(*param_1 + 0xe);
  case 8:
    return (ulong)(*(ushort *)(*param_1 + 0x10) >> 0xc & 1);
  case 9:
    return (ulong)*(byte *)(*param_1 + 0x12);
  case 10:
    return (ulong)*(byte *)(*param_1 + 0xf);
  case 0xb:
    return (ulong)(*(ushort *)(*param_1 + 0x10) & 0x1f);
  case 0xc:
    return (ulong)(*(ushort *)(*param_1 + 0x10) >> 5 & 1);
  case 0xd:
    return (ulong)(*(ushort *)(*param_1 + 0x10) >> 6 & 1);
  case 0xe:
    return (ulong)(*(byte *)(*param_1 + 0x11) & 0xf);
  case 0xf:
    return (ulong)*(byte *)(*param_1 + 0x13);
  case 0x10:
    return (ulong)*(byte *)(*param_1 + 0x14);
  case 0x11:
    return (ulong)*(byte *)(*param_1 + 0x15);
  case 0x12:
    return (ulong)*(byte *)(*param_1 + 0x16);
  case 0x13:
    return (ulong)(*(byte *)(*param_1 + 0x17) & 0xf);
  case 0x14:
    return (ulong)(*(byte *)(*param_1 + 0x17) >> 4);
  case 0x15:
    return (ulong)*(byte *)(*param_1 + 0x18);
  case 0x16:
    return (ulong)*(byte *)(*param_1 + 0x20);
  case 0x17:
    return (ulong)*(byte *)(*param_1 + 0x21);
  case 0x18:
    return (ulong)(*(ushort *)(*param_1 + 0x10) >> 7 & 1);
  case 0x19:
    return (ulong)(*(ushort *)(*param_1 + 0x10) >> 0xd & 1);
  case 0x1a:
    return (ulong)(*(ushort *)(*param_1 + 0x10) >> 0xe & 1);
  case 0x1b:
    return (ulong)*(ushort *)(*param_1 + 0x1c);
  case 0x1c:
    return (ulong)*(byte *)(*param_1 + 0x1e);
  case 0x1d:
    return (ulong)(*(uint *)*param_1 >> 2);
  }
  lVar3 = *param_1;
  cVar2 = *(char *)(lVar3 + 0x15);
  if (cVar2 == '\x02') {
LAB_02c4fca8:
    return (ulong)*(byte *)(lVar3 + 0x24);
  }
  if (cVar2 == '\x01') {
    if (param_2 - 0x1eU < 0x34) {
      puVar1 = (uint *)(lVar3 + 0x24);
      switch(param_2) {
      case 0x1e:
        return (ulong)(*puVar1 & 1);
      case 0x1f:
        return (ulong)(*puVar1 >> 1 & 1);
      case 0x20:
        return (ulong)(*puVar1 >> 2 & 1);
      case 0x21:
        return (ulong)(*puVar1 >> 3 & 1);
      case 0x22:
        return (ulong)(*puVar1 >> 4 & 1);
      case 0x23:
        return (ulong)(*puVar1 >> 5 & 1);
      case 0x24:
        return (ulong)(*puVar1 >> 6 & 1);
      case 0x25:
        return (ulong)(*puVar1 >> 7 & 1);
      case 0x26:
        return (ulong)(*puVar1 >> 8 & 1);
      case 0x27:
        return (ulong)(*puVar1 >> 9 & 1);
      case 0x28:
        return (ulong)(*puVar1 >> 10 & 1);
      case 0x29:
        return (ulong)(*puVar1 >> 0xb & 1);
      case 0x2a:
        return (ulong)(*puVar1 >> 0xc & 0xf);
      case 0x2b:
        return (ulong)(*(ushort *)(lVar3 + 0x26) & 0xf);
      case 0x2c:
        return (ulong)(*puVar1 >> 0x14 & 0xf);
      case 0x2d:
        return (ulong)(*(byte *)(lVar3 + 0x27) & 0xf);
      case 0x2e:
        return (ulong)(*puVar1 >> 0x1c);
      case 0x2f:
        return (ulong)(*(ushort *)(lVar3 + 0x28) & 0xf);
      case 0x30:
        return (ulong)(*(byte *)(lVar3 + 0x36) >> 3 & 0xf);
      case 0x31:
        return (ulong)(*(ushort *)(lVar3 + 0x28) >> 4 & 1);
      case 0x32:
        return (ulong)(*(ushort *)(lVar3 + 0x28) >> 5 & 1);
      case 0x33:
        return (ulong)(*(ushort *)(lVar3 + 0x29) & 1);
      case 0x34:
        return (ulong)(*(ushort *)(lVar3 + 0x28) >> 9 & 1);
      case 0x35:
        return (ulong)(*(ushort *)(lVar3 + 0x28) >> 10 & 1);
      case 0x36:
        return (ulong)(*(ushort *)(lVar3 + 0x28) >> 0xb & 1);
      case 0x37:
        return (ulong)(*(ushort *)(lVar3 + 0x28) >> 0xc & 1);
      case 0x38:
        return (ulong)(*(ushort *)(lVar3 + 0x28) >> 0xd & 1);
      case 0x39:
        return (ulong)(*(ushort *)(lVar3 + 0x28) >> 0xe & 1);
      case 0x3a:
        return (ulong)(*(ushort *)(lVar3 + 0x28) >> 0xf);
      case 0x3b:
        return (ulong)(*(byte *)(lVar3 + 0x2a) & 1);
      case 0x3c:
        return (ulong)(*(byte *)(lVar3 + 0x2a) >> 1 & 1);
      case 0x3d:
        return (ulong)(*(byte *)(lVar3 + 0x2a) >> 2 & 1);
      case 0x3e:
        return (ulong)(*(byte *)(lVar3 + 0x2a) >> 3 & 1);
      case 0x3f:
        return (ulong)(*(byte *)(lVar3 + 0x2a) >> 4 & 1);
      case 0x40:
        return (long)*(char *)(lVar3 + 0x2b);
      case 0x41:
        return (long)*(char *)(lVar3 + 0x2c);
      case 0x42:
        return (long)*(char *)(lVar3 + 0x2d);
      case 0x43:
        return (long)*(char *)(lVar3 + 0x2e);
      case 0x44:
        return (long)*(char *)(lVar3 + 0x2f);
      case 0x45:
        return (long)*(char *)(lVar3 + 0x30);
      case 0x46:
        return (ulong)*(byte *)(lVar3 + 0x31);
      case 0x47:
        return (ulong)*(byte *)(lVar3 + 0x32);
      case 0x48:
        return (long)*(char *)(lVar3 + 0x33);
      case 0x49:
        return (long)*(char *)(lVar3 + 0x34);
      case 0x4a:
        return (long)*(char *)(lVar3 + 0x35);
      case 0x4b:
        return (ulong)(*(byte *)(lVar3 + 0x36) & 1);
      case 0x4c:
        return (ulong)(*(byte *)(lVar3 + 0x36) >> 1 & 1);
      case 0x4d:
        return (ulong)(*(byte *)(lVar3 + 0x36) >> 2 & 1);
      case 0x4e:
        return (ulong)*(byte *)(lVar3 + 0x37);
      case 0x4f:
        return (ulong)*(byte *)(lVar3 + 0x38);
      case 0x50:
        return (ulong)*(byte *)(lVar3 + 0x39);
      case 0x51:
        return (long)*(char *)(lVar3 + 0x3a);
      }
    }
  }
  else if (cVar2 == '\0') goto LAB_02c4fca8;
  return 0;
}


