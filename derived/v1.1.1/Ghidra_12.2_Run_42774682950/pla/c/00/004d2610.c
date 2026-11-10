/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d2610; name: FUN_004d2610
 */


undefined8 FUN_004d2610(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined *puVar1;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0x13:
    *param_3 = 0;
    *param_4 = 0;
    return 1;
  default:
    FUN_004c99a0(param_1,0x50,0x1af,0xec,"external/openssl/ssl/statem/statem_srvr.c",0x3f1);
    return 0;
  case 0x15:
    *param_3 = PTR_LAB_043746f0;
    *param_4 = 3;
    return 1;
  case 0x16:
    *param_3 = PTR_LAB_043746f8;
    *param_4 = 2;
    return 1;
  case 0x17:
    *param_3 = PTR_LAB_04374700;
    *param_4 = 0xb;
    return 1;
  case 0x18:
    *param_3 = PTR_LAB_04374708;
    *param_4 = 0xc;
    return 1;
  case 0x19:
    *param_3 = PTR_LAB_04374710;
    *param_4 = 0xd;
    return 1;
  case 0x1a:
    *param_3 = PTR_LAB_04374718;
    *param_4 = 0xe;
    return 1;
  case 0x21:
    *param_3 = PTR_LAB_04374720;
    *param_4 = 4;
    return 1;
  case 0x22:
    *param_3 = PTR_LAB_04374750;
    *param_4 = 0x16;
    return 1;
  case 0x23:
    break;
  case 0x24:
    *param_3 = PTR_LAB_04374738;
    *param_4 = 0x14;
    return 1;
  case 0x25:
    *param_3 = &LAB_004d4300;
    *param_4 = 8;
    return 1;
  case 0x28:
    *param_3 = PTR_LAB_04374740;
    *param_4 = 0xf;
    return 1;
  case 0x2a:
    *param_3 = PTR_LAB_04374748;
    *param_4 = 0x18;
    return 1;
  case 0x2e:
    *param_3 = 0;
    *param_4 = 0xffffffff;
    return 1;
  }
  puVar1 = PTR_LAB_04374730;
  if ((*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
    puVar1 = PTR_FUN_04374728;
  }
  *param_3 = puVar1;
  *param_4 = 0x101;
  return 1;
}


