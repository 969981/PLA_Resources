/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00499390; name: FUN_00499390
 */


long FUN_00499390(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  switch(param_1) {
  case 0x466:
    lVar2 = thunk_FUN_004242f0();
    if (lVar2 != 0) {
      uVar3 = 0xe1;
      puVar4 = PTR_PTR_04374578;
LAB_0049948c:
      puVar1 = PTR_PTR_04374580;
      *(undefined4 *)(lVar2 + 0x18) = uVar3;
      *(undefined **)(lVar2 + 0x10) = puVar1;
      *(undefined **)(lVar2 + 8) = puVar4;
      return lVar2;
    }
    break;
  case 0x467:
    lVar2 = thunk_FUN_004242f0();
    if (lVar2 != 0) {
      uVar3 = 0x113;
      puVar4 = PTR_PTR_04374588;
      goto LAB_0049948c;
    }
    break;
  case 0x468:
    lVar2 = thunk_FUN_004242f0();
    if (lVar2 != 0) {
      uVar3 = 0x145;
      puVar4 = PTR_PTR_04374590;
      goto LAB_0049948c;
    }
    break;
  case 0x469:
    lVar2 = thunk_FUN_004242f0();
    if (lVar2 != 0) {
      uVar3 = 0x177;
      puVar4 = PTR_PTR_04374598;
      goto LAB_0049948c;
    }
    break;
  case 0x46a:
    lVar2 = thunk_FUN_004242f0();
    if (lVar2 != 0) {
      uVar3 = 400;
      puVar4 = PTR_PTR_043745a0;
      goto LAB_0049948c;
    }
    break;
  default:
    FUN_004014b0(5,0x68,0x72,"external/openssl/crypto/dh/dh_rfc7919.c",0x2a);
  }
  return 0;
}


