/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00418880; name: FUN_00418880
 */


bool FUN_00418880(long param_1,long param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004014b0(0x24,0x66,0x44,"external/openssl/crypto/rand/drbg_lib.c",0x1eb);
    *(undefined4 *)(param_1 + 0x98) = 2;
    FUN_00427700(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    return false;
  }
  if (param_2 != 0) {
    if (param_4 == 0) {
      if (*(ulong *)(param_1 + 0x68) < param_3) {
        uVar5 = 0x208;
        uVar4 = 0x66;
        goto LAB_00418954;
      }
      goto LAB_00418990;
    }
    if (*(ulong *)(param_1 + 0x48) < param_3) {
      uVar4 = 0x6a;
      uVar5 = 0x1f6;
LAB_00418954:
      FUN_004014b0(0x24,0x66,uVar4,"external/openssl/crypto/rand/drbg_lib.c",uVar5);
      *(undefined4 *)(param_1 + 0x98) = 2;
      return false;
    }
    if (param_3 * 8 < param_4) {
      uVar4 = 0x7c;
      uVar5 = 0x1fc;
      goto LAB_00418954;
    }
    lVar3 = FUN_00427aa0(param_2,param_3,param_4);
    *(long *)(param_1 + 0x20) = lVar3;
    if (lVar3 == 0) {
      return false;
    }
    param_2 = 0;
  }
  param_3 = 0;
LAB_00418990:
  iVar1 = *(int *)(param_1 + 0x98);
  if (iVar1 == 2) {
    if (*(long *)(param_1 + 0x140) == 0) {
      *(undefined4 *)(param_1 + 0x98) = 2;
      FUN_004014b0(0x24,0x76,0x80,"external/openssl/crypto/rand/drbg_lib.c",0x184);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x140) + 0x18))(param_1);
      FUN_004180f0(param_1,*(undefined4 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x1c));
    }
    iVar1 = *(int *)(param_1 + 0x98);
  }
  if (iVar1 == 0) {
    FUN_00418400(param_1,"OpenSSL NIST SP 800-90A DRBG",0x1c);
    iVar1 = *(int *)(param_1 + 0x98);
    bVar2 = iVar1 == 1;
  }
  else {
    bVar2 = false;
  }
  if (iVar1 == 1) {
    if (param_2 == 0) {
      if (!bVar2) {
        FUN_004186c0(param_1,0,0,0);
      }
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x140) + 8))(param_1,param_2,param_3,0,0);
    }
  }
  FUN_00427700(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  return *(int *)(param_1 + 0x98) == 1;
}


