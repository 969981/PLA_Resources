/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3afc0; name: FUN_02a3afc0
 */


void FUN_02a3afc0(long param_1,long param_2,undefined4 param_3,undefined1 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  
  lVar4 = DAT_043ecde0;
  uVar3 = *(undefined1 *)(param_2 + 0x7d);
  switch(param_4) {
  case 1:
    uVar5 = 0x9c;
    iVar6 = 0x242;
    break;
  case 2:
    uVar5 = 0x9d;
    iVar6 = 0x68;
    break;
  case 3:
    uVar5 = 0x9d;
    iVar6 = 0x5d;
    break;
  case 4:
    uVar5 = 0x9d;
    iVar6 = 0x3f7;
    break;
  case 5:
    uVar5 = 0x9d;
    iVar6 = 0x62;
    break;
  default:
    uVar5 = 0x9c;
    iVar6 = 0x237;
    break;
  case 7:
    uVar5 = 0x9d;
    iVar6 = 0x7a;
    break;
  case 8:
    uVar5 = 0x9d;
    iVar6 = 0x7b;
    break;
  case 9:
    uVar5 = 0x9d;
    iVar6 = 0x71;
    break;
  case 10:
    uVar5 = 0xc6;
    goto LAB_02a3b124;
  case 0xb:
    uVar5 = 0xbe;
    goto LAB_02a3b124;
  case 0xc:
    uVar5 = 0xc1;
    goto LAB_02a3b124;
  case 0xd:
    uVar5 = 0xc4;
    goto LAB_02a3b124;
  case 0xe:
    uVar5 = 0x11e;
    goto LAB_02a3b124;
  case 0xf:
    uVar5 = 0x9d;
    iVar6 = 0x11f;
    break;
  case 0x10:
    FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x99,uVar3,0);
    FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9d,0x96,uVar3,0xffff0000);
    FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x9a,uVar3);
    return;
  case 0x13:
    uVar5 = 0x9d;
    iVar6 = 0x94;
    break;
  case 0x14:
  case 0x1a:
    return;
  case 0x15:
    uVar5 = 0x15b;
LAB_02a3b124:
    FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9d,uVar5,uVar3,param_3,0xffff0000);
    return;
  case 0x17:
    if ((*(byte *)(param_2 + 0xa0) & 7) == 0) {
      uVar5 = 0x9c;
      uVar1 = *(ulong *)(DAT_043ecde0 + 8);
      uVar2 = *(ulong *)(DAT_043ecde0 + 0x10);
      uVar7 = uVar2 ^ uVar1;
      *(ulong *)(DAT_043ecde0 + 8) = uVar7 ^ (uVar1 >> 0x28 | uVar1 << 0x18) ^ uVar7 << 0x10;
      *(ulong *)(lVar4 + 0x10) = uVar7 >> 0x1b | uVar7 << 0x25;
      iVar6 = ((int)uVar2 + (int)uVar1 & 3U) + 0x2b5;
    }
    else {
      uVar5 = 0x9c;
      iVar6 = 699;
    }
    break;
  case 0x18:
    uVar5 = 0x9c;
    iVar6 = 0x2ba;
    break;
  case 0x1b:
    uVar5 = 0x2f2;
    goto LAB_02a3b180;
  case 0x1c:
    uVar5 = 0x305;
    goto LAB_02a3b180;
  case 0x1d:
    uVar5 = 0x306;
LAB_02a3b180:
    FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9c,uVar5,0xffff0000,param_3);
    return;
  case 0x1e:
    uVar5 = 0x9c;
    iVar6 = 0x30b;
    break;
  case 0x1f:
  case 0x20:
  case 0x21:
    uVar5 = 0x9c;
    iVar6 = 0x30c;
    break;
  case 0x22:
    uVar5 = 0x9d;
    iVar6 = 0x1b4;
    break;
  case 0x23:
    uVar5 = 0x9d;
    iVar6 = 0x1bb;
  }
  FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),uVar5,iVar6,uVar3,0xffff0000);
  return;
}


