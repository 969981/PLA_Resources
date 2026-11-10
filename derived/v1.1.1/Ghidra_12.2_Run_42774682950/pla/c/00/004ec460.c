/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ec460; name: FUN_004ec460
 */


undefined8 FUN_004ec460(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined *puVar1;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0xc:
    *param_3 = PTR_LAB_04374790;
    *param_4 = 1;
    return 1;
  case 0xd:
    *param_3 = PTR_LAB_04374798;
    *param_4 = 0xb;
    return 1;
  case 0xe:
    *param_3 = PTR_LAB_043747a0;
    *param_4 = 0x10;
    return 1;
  case 0xf:
    *param_3 = PTR_LAB_04374740;
    *param_4 = 0xf;
    return 1;
  case 0x10:
    break;
  case 0x11:
    *param_3 = PTR_LAB_043747a8;
    *param_4 = 0x43;
    return 1;
  case 0x12:
    *param_3 = PTR_LAB_04374738;
    *param_4 = 0x14;
    return 1;
  default:
    FUN_004c99a0(param_1,0x50,0x1ae,0xec,"external/openssl/ssl/statem/statem_clnt.c",0x385);
    return 0;
  case 0x2b:
    *param_3 = PTR_LAB_04374748;
    *param_4 = 0x18;
    return 1;
  case 0x2f:
    *param_3 = 0;
    *param_4 = 0xffffffff;
    return 1;
  case 0x30:
    *param_3 = PTR_LAB_043747b0;
    *param_4 = 5;
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


