/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046f370; name: FUN_0046f370
 */


undefined8 FUN_0046f370(ulong param_1,undefined4 param_2,ulong param_3)

{
  int iVar1;
  ulong *puVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_004001b0(&DAT_0439e998,FUN_0046f220);
  if (iVar1 == 0) {
    return 0;
  }
  if (DAT_0439e99c == 0) {
    return 0;
  }
  puVar2 = (ulong *)FUN_00400260(0x18,"external/openssl/crypto/objects/o_names.c",0xdb);
  uVar5 = 0;
  if (puVar2 != (ulong *)0x0) {
    *puVar2 = CONCAT44(param_2,param_2) & DAT_0388a740;
    puVar2[1] = param_1;
    puVar2[2] = param_3;
    FUN_00400140(DAT_0439e9a8);
    piVar3 = (int *)FUN_00405810(DAT_0439e9b8,puVar2);
    if (piVar3 == (int *)0x0) {
      iVar1 = FUN_00405f60(DAT_0439e9b8);
      if (iVar1 != 0) {
        FUN_00400420(puVar2,"external/openssl/crypto/objects/o_names.c",0xf9);
        uVar5 = 0;
        goto LAB_0046f480;
      }
    }
    else {
      if ((DAT_0439e9b0 != 0) && (iVar1 = FUN_00407950(), *piVar3 < iVar1)) {
        lVar4 = FUN_00407970(DAT_0439e9b0);
        (**(code **)(lVar4 + 0x10))(*(undefined8 *)(piVar3 + 2),*piVar3,*(undefined8 *)(piVar3 + 4))
        ;
      }
      FUN_00400420(piVar3,"external/openssl/crypto/objects/o_names.c",0xf5);
    }
    uVar5 = 1;
  }
LAB_0046f480:
  FUN_00400160(DAT_0439e9a8);
  return uVar5;
}


