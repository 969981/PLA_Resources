/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c3790; name: FUN_004c3790
 */


undefined4 FUN_004c3790(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_24;
  
  lVar2 = *(long *)(param_1 + 0x17c8);
  if (lVar2 == 0) {
    lVar2 = FUN_004c5b90();
    *(long *)(param_1 + 0x17c8) = lVar2;
    if (lVar2 == 0) {
      return 0xffffffff;
    }
  }
  uVar1 = FUN_00406750((undefined8 *)(param_1 + 0x17c0),lVar2,&local_24,param_3,param_2,0x28);
  switch(uVar1) {
  case 0:
    *(undefined4 *)(param_1 + 0x28) = 1;
    uVar3 = 0x195;
    uVar4 = 0x68a;
    break;
  case 1:
    uVar1 = 6;
    goto LAB_004c385c;
  case 2:
    uVar1 = 5;
LAB_004c385c:
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    return 0xffffffff;
  case 3:
    *(undefined8 *)(param_1 + 0x17c0) = 0;
    return local_24;
  default:
    *(undefined4 *)(param_1 + 0x28) = 1;
    uVar3 = 0x44;
    uVar4 = 0x697;
  }
  FUN_004014b0(0x14,0x185,uVar3,"external/openssl/ssl/ssl_lib.c",uVar4);
  return 0xffffffff;
}


