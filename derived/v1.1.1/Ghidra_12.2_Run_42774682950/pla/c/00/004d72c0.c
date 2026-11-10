/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d72c0; name: FUN_004d72c0
 */


undefined8 FUN_004d72c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x598);
  if (lVar4 == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x7e8) = 0;
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  *(undefined8 *)(param_1 + 0x7d8) = 0;
  *(undefined8 *)(param_1 + 2000) = 0;
  *(undefined8 *)(param_1 + 0x7c8) = 0;
  *(undefined8 *)(param_1 + 0x7c0) = 0;
  *(undefined8 *)(param_1 + 0x7b8) = 0;
  *(undefined8 *)(param_1 + 0x7b0) = 0;
  *(undefined8 *)(param_1 + 0x7a8) = 0;
  *(undefined8 *)(param_1 + 0x7a0) = 0;
  *(undefined8 *)(param_1 + 0x798) = 0;
  *(undefined8 *)(param_1 + 0x790) = 0;
  uVar2 = *(undefined8 *)(lVar4 + 0x2c8);
  *(undefined8 *)(param_1 + 0x778) = *(undefined8 *)(lVar4 + 0x2d0);
  *(undefined8 *)(param_1 + 0x770) = uVar2;
  uVar2 = *(undefined8 *)(lVar4 + 0x2d8);
  *(undefined8 *)(param_1 + 0x788) = *(undefined8 *)(lVar4 + 0x2e0);
  *(undefined8 *)(param_1 + 0x780) = uVar2;
  *(undefined4 *)(param_1 + 0x7e0) = *(undefined4 *)(lVar4 + 0x338);
  if (*(long *)(lVar4 + 0x2f0) != 0) {
    lVar1 = FUN_0040c480();
    *(long *)(param_1 + 0x798) = lVar1;
    if (lVar1 != 0) goto LAB_004d7324;
LAB_004d7408:
    uVar3 = 0x62;
    uVar2 = 3;
LAB_004d7420:
    FUN_004014b0(0x14,0x139,uVar2,"external/openssl/ssl/tls_srp.c",uVar3);
    FUN_00400420(*(undefined8 *)(param_1 + 0x790),"external/openssl/ssl/tls_srp.c",0x73);
    FUN_00400420(*(undefined8 *)(param_1 + 0x7d8),"external/openssl/ssl/tls_srp.c",0x74);
    FUN_0040c1e0(*(undefined8 *)(param_1 + 0x798));
    FUN_0040c1e0(*(undefined8 *)(param_1 + 0x7a0));
    FUN_0040c1e0(*(undefined8 *)(param_1 + 0x7a8));
    FUN_0040c1e0(*(undefined8 *)(param_1 + 0x7b0));
    FUN_0040c1e0(*(undefined8 *)(param_1 + 0x7b8));
    FUN_0040c1e0(*(undefined8 *)(param_1 + 0x7c0));
    FUN_0040c1e0(*(undefined8 *)(param_1 + 0x7c8));
    FUN_0040c1e0(*(undefined8 *)(param_1 + 2000));
    *(undefined8 *)(param_1 + 0x7d8) = 0;
    *(undefined8 *)(param_1 + 2000) = 0;
    *(undefined8 *)(param_1 + 0x7e8) = 0;
    *(undefined8 *)(param_1 + 0x7e0) = 0;
    *(undefined8 *)(param_1 + 0x7b8) = 0;
    *(undefined8 *)(param_1 + 0x7b0) = 0;
    *(undefined8 *)(param_1 + 0x7c8) = 0;
    *(undefined8 *)(param_1 + 0x7c0) = 0;
    *(undefined8 *)(param_1 + 0x798) = 0;
    *(undefined8 *)(param_1 + 0x790) = 0;
    *(undefined8 *)(param_1 + 0x7a8) = 0;
    *(undefined8 *)(param_1 + 0x7a0) = 0;
    *(undefined8 *)(param_1 + 0x778) = 0;
    *(undefined8 *)(param_1 + 0x770) = 0;
    *(undefined8 *)(param_1 + 0x788) = 0;
    *(undefined8 *)(param_1 + 0x780) = 0;
    return 0;
  }
LAB_004d7324:
  if (*(long *)(lVar4 + 0x2f8) != 0) {
    lVar1 = FUN_0040c480();
    *(long *)(param_1 + 0x7a0) = lVar1;
    if (lVar1 == 0) goto LAB_004d7408;
  }
  if (*(long *)(lVar4 + 0x300) != 0) {
    lVar1 = FUN_0040c480();
    *(long *)(param_1 + 0x7a8) = lVar1;
    if (lVar1 == 0) goto LAB_004d7408;
  }
  if (*(long *)(lVar4 + 0x308) != 0) {
    lVar1 = FUN_0040c480();
    *(long *)(param_1 + 0x7b0) = lVar1;
    if (lVar1 == 0) goto LAB_004d7408;
  }
  if (*(long *)(lVar4 + 0x310) != 0) {
    lVar1 = FUN_0040c480();
    *(long *)(param_1 + 0x7b8) = lVar1;
    if (lVar1 == 0) goto LAB_004d7408;
  }
  if (*(long *)(lVar4 + 0x318) != 0) {
    lVar1 = FUN_0040c480();
    *(long *)(param_1 + 0x7c0) = lVar1;
    if (lVar1 == 0) goto LAB_004d7408;
  }
  if (*(long *)(lVar4 + 0x328) != 0) {
    lVar1 = FUN_0040c480();
    *(long *)(param_1 + 2000) = lVar1;
    if (lVar1 == 0) goto LAB_004d7408;
  }
  if (*(long *)(lVar4 + 800) != 0) {
    lVar1 = FUN_0040c480();
    *(long *)(param_1 + 0x7c8) = lVar1;
    if (lVar1 == 0) goto LAB_004d7408;
  }
  if (*(long *)(lVar4 + 0x2e8) != 0) {
    lVar1 = FUN_00404f10(*(long *)(lVar4 + 0x2e8),"external/openssl/ssl/tls_srp.c",0x66);
    *(long *)(param_1 + 0x790) = lVar1;
    if (lVar1 == 0) {
      uVar2 = 0x44;
      uVar3 = 0x67;
      goto LAB_004d7420;
    }
  }
  if (*(long *)(lVar4 + 0x330) != 0) {
    lVar1 = FUN_00404f10(*(long *)(lVar4 + 0x330),"external/openssl/ssl/tls_srp.c",0x6b);
    *(long *)(param_1 + 0x7d8) = lVar1;
    if (lVar1 == 0) {
      uVar2 = 0x44;
      uVar3 = 0x6c;
      goto LAB_004d7420;
    }
  }
  *(undefined8 *)(param_1 + 0x7e8) = *(undefined8 *)(lVar4 + 0x340);
  return 1;
}


