/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004180f0; name: FUN_004180f0
 */


undefined8 FUN_004180f0(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = DAT_0439e770;
  iVar2 = DAT_04163858;
  if (param_3 != 0 || param_2 != 0) {
    uVar1 = param_3;
    iVar2 = param_2;
  }
  if ((*(int *)(param_1 + 0x14) != 0) &&
     ((iVar2 != *(int *)(param_1 + 0x14) || (uVar1 != *(ushort *)(param_1 + 0x1c))))) {
    (**(code **)(*(long *)(param_1 + 0x140) + 0x18))(param_1);
    FUN_00427700(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(short *)(param_1 + 0x1c) = (short)uVar1;
  *(int *)(param_1 + 0x14) = iVar2;
  if (iVar2 - 0x388U < 3) {
    uVar3 = FUN_004196c0(param_1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    *(undefined4 *)(param_1 + 0x98) = 2;
    uVar3 = 0x6b;
    uVar4 = 0x8f;
  }
  else {
    if (iVar2 == 0) {
      *(undefined8 *)(param_1 + 0x140) = 0;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined2 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    uVar3 = 0x78;
    uVar4 = 0x80;
  }
  FUN_004014b0(0x24,0x68,uVar3,"external/openssl/crypto/rand/drbg_lib.c",uVar4);
  return 0;
}


